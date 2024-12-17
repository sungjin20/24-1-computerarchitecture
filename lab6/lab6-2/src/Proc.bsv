import Types::*;
import ProcTypes::*;
import CMemTypes::*;
import MemInit::*;
import RFile::*;
import IMemory::*;
import DMemory::*;
import Decode::*;
import Exec::*;
import CsrFile::*;
import Fifo::*;
import GetPut::*;

typedef struct {
  Instruction inst;
  Addr pc;
  Addr ppc;
  Bool epoch;
} Fetch2Rest deriving(Bits, Eq);

typedef struct {
  DecodedInst dInst;
  Addr pc;
  Addr ppc;
  Bool epoch;
  Data rVal1;
  Data rVal2;
  Data csrVal;
} Decode2Exec deriving(Bits, Eq);

typedef struct {
  Maybe#(ExecInst) eInst;
} Exec2Mem deriving(Bits, Eq);

typedef struct {
  Maybe#(ExecInst) eInst;
} Mem2Write deriving(Bits, Eq);

typedef struct {
  Maybe#(RIndx) regnum;
  Maybe#(Data) val;
  Maybe#(Bool) isload;
} Exec2Exec deriving(Bits, Eq);

typedef struct {
  Maybe#(RIndx) regnum;
  Maybe#(Data) val;
} Mem2Exec deriving(Bits, Eq);

(*synthesize*)
module mkProc(Proc);
  Reg#(Addr)    pc[2]  <- mkCRegU(2);
  RFile         rf  <- mkBypassRFile; // wr < rd :  Refer to p.22, M10
  //RFile         rf  <- mkRFile;
  IMemory     iMem  <- mkIMemory;
  DMemory     dMem  <- mkDMemory;
  CsrFile     csrf <- mkCsrFile;

  // Control hazard handling Elements : 2 Epoch registers and one BypassFifo
  Reg#(Bool) fEpoch <- mkRegU;
  Reg#(Bool) eEpoch[2] <- mkCRegU(2);
  Fifo#(1, Addr) execRedirect <- mkBypassFifo;

  Fifo#(1, Exec2Exec) e2e <- mkBypassFifo;
  Fifo#(1, Mem2Exec) m2e <- mkBypassFifo;
   
  // Fetch stage -> Rest stage PipelineFifo
  Fifo#(1, Fetch2Rest)  f2r <- mkPipelineFifo;
  Fifo#(1, Decode2Exec)  d2e <- mkPipelineFifo;
  Fifo#(1, Exec2Mem)  e2m <- mkPipelineFifo;
  Fifo#(1, Mem2Write)  m2w <- mkPipelineFifo;

 /* TODO:  Lab 6-2: Address a data hazard problem using a forwarding method. 
           Define proper forwarding units using a BypassFiFo */
  rule doFetch(csrf.started);
    let inst = iMem.req(pc[1]);
    Addr ppc;

    if(execRedirect.notEmpty) begin
      execRedirect.deq;
      ppc = execRedirect.first;
      pc[1] <= ppc;
      fEpoch <= !fEpoch;
    end
    else begin
      ppc = pc[1] + 4;
      pc[1] <= ppc;
    end

    f2r.enq(Fetch2Rest{inst:inst, pc:pc[1], ppc:ppc, epoch:fEpoch});
  endrule

  rule doDecode(csrf.started);
    let inst   = f2r.first.inst;
    let pce   = f2r.first.pc;
    let ppc    = f2r.first.ppc;
    let iEpoch = f2r.first.epoch;
    f2r.deq;

    let dInst = decode(inst);
    let stall = e2e.notEmpty && isValid(e2e.first.isload) && (validValue(e2e.first.isload) == True) && ((isValid(dInst.src1) && (validValue(e2e.first.regnum) == validValue(dInst.src1))) || (isValid(dInst.src2) && (validValue(e2e.first.regnum) == validValue(dInst.src2))));
    
    if(e2e.notEmpty) begin
      e2e.deq;
    end
    if(m2e.notEmpty) begin
      m2e.deq;
    end

    if(!stall) begin
      let rVal1 = isValid(dInst.src1) ? rf.rd1(validValue(dInst.src1)) : ?;
      let rVal2 = isValid(dInst.src2) ? rf.rd2(validValue(dInst.src2)) : ?;
      let csrVal = isValid(dInst.csr) ? csrf.rd(validValue(dInst.csr)) : ?;

      if(e2e.notEmpty && isValid(e2e.first.regnum) && isValid(dInst.src1) && (validValue(dInst.src1) == validValue(e2e.first.regnum))) begin
        rVal1 = validValue(e2e.first.val);
      end
      else if(m2e.notEmpty && isValid(m2e.first.regnum) && isValid(dInst.src1) && (validValue(dInst.src1) == validValue(m2e.first.regnum))) begin
        rVal1 = validValue(m2e.first.val);
      end
      if(e2e.notEmpty && isValid(e2e.first.regnum) && isValid(dInst.src2) && (validValue(dInst.src2) == validValue(e2e.first.regnum))) begin
        rVal2 = validValue(e2e.first.val);
      end
      else if(m2e.notEmpty && isValid(m2e.first.regnum) && isValid(dInst.src2) && (validValue(dInst.src2) == validValue(m2e.first.regnum))) begin
        rVal2 = validValue(m2e.first.val);
      end

      d2e.enq(Decode2Exec{dInst:dInst, pc:pce, ppc:ppc, epoch:iEpoch, rVal1:rVal1, rVal2:rVal2, csrVal:csrVal});
    end
    else begin
      if(iEpoch == eEpoch[1]) begin
        pc[0] <= pce;
      end
    end
  endrule

  rule doExecute(csrf.started);
    let dInst = d2e.first.dInst;
    let ppc = d2e.first.ppc;
    let iEpoch = d2e.first.epoch;
    let pc = d2e.first.pc;
    let rVal1 = d2e.first.rVal1;
    let rVal2 = d2e.first.rVal2;
    let csrVal = d2e.first.csrVal;
    d2e.deq;

    if(iEpoch == eEpoch[0]) begin
      let eInst = exec(dInst, rVal1, rVal2, pc, ppc, csrVal);
      let isload = eInst.iType == Ld ? True : False;
      e2m.enq(Exec2Mem{eInst:Valid(eInst)});
      e2e.enq(Exec2Exec{regnum:eInst.dst, val:Valid(eInst.data), isload:Valid(isload)});
        
      if(eInst.mispredict) begin
        eEpoch[0] <= !eEpoch[0];
        execRedirect.enq(eInst.addr);
        $display("jump! :mispredicted, address %d ", eInst.addr);
      end
    end
    else begin
      e2m.enq(Exec2Mem{eInst:Invalid});
      e2e.enq(Exec2Exec{regnum:Invalid, val:Invalid, isload:Invalid});
    end
  endrule

  rule doMemory(csrf.started);
    e2m.deq;

    if(isValid(e2m.first.eInst)) begin
      let eInst = validValue(e2m.first.eInst);
      let iType = eInst.iType;
      case(iType)
        Ld :
        begin
          let d <- dMem.req(MemReq{op: Ld, addr: eInst.addr, data: ?});
          eInst.data = d;
        end

        St:
        begin
          let d <- dMem.req(MemReq{op: St, addr: eInst.addr, data: eInst.data});
        end
        Unsupported :
        begin
          $fwrite(stderr, "ERROR: Executing unsupported instruction\n");
          $finish;
        end
      endcase

      m2w.enq(Mem2Write{eInst:Valid(eInst)});
      m2e.enq(Mem2Exec{regnum:eInst.dst, val:Valid(eInst.data)});
    end
    else begin
      m2w.enq(Mem2Write{eInst:Invalid});
      m2e.enq(Mem2Exec{regnum:Invalid, val:Invalid});
    end
  endrule

  rule doWriteBack(csrf.started);
    if(isValid(m2w.first.eInst)) begin
      let eInst = validValue(m2w.first.eInst);

      if (isValid(eInst.dst)) begin
        rf.wr(fromMaybe(?, eInst.dst), eInst.data);
      end
      csrf.wr(eInst.iType == Csrw ? eInst.csr : Invalid, eInst.data);
    end
    m2w.deq;
  endrule

  method ActionValue#(CpuToHostData) cpuToHost;
    let retV <- csrf.cpuToHost;
    return retV;
  endmethod

  method Action hostToCpu(Bit#(32) startpc) if (!csrf.started);
    csrf.start(0);
    eEpoch[0] <= False;
    fEpoch <= False;
    pc[0] <= startpc;
  endmethod

  interface iMemInit = iMem.init;
  interface dMemInit = dMem.init;

endmodule
