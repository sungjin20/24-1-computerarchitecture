import Types::*;
import ProcTypes::*;
import Ehr::*;
import ConfigReg::*;
import Fifo::*;

typedef enum {Ctr, Mem} InstCntType deriving(Bits, Eq);

/*Exercise 4*/
/* TODO: Replace dummies to implement incMissInstTypeCnt */
typedef enum {J_notmiss, JR_notmiss, BR_notmiss, J_miss, JR_miss, BR_miss} InstMissCntType deriving(Bits, Eq);

interface CsrFile;
    method Action start(Data id);
    method Bool started;
    method Data rd(CsrIndx idx);
    method Action wr(Maybe#(CsrIndx) idx, Data val);
    method ActionValue#(CpuToHostData) cpuToHost;
    method Action incInstTypeCnt(InstCntType inst);
    method Action incBPMissCnt();
    method Action incMissInstTypeCnt(InstMissCntType inst);
endinterface

(* synthesize *)
module mkCsrFile(CsrFile);
    Reg#(Bool) startReg <- mkConfigReg(False);

	// CSR 
    Reg#(Data) numInsts <- mkConfigReg(0); // csrInstret -- read only
    Reg#(Data) cycles <- mkReg(0); // csrCycle -- read only
	Reg#(Data) coreId <- mkConfigReg(0); // csrMhartid -- read only
    
    Reg#(Data) numMem  <- mkConfigReg(0);
    Reg#(Data) numCtr  <- mkConfigReg(0);
    Reg#(Data) numBPMiss <- mkConfigReg(0);

    Reg#(Data) numJtot <- mkConfigReg(0);
    Reg#(Data) numJRtot <- mkConfigReg(0);
    Reg#(Data) numBRtot <- mkConfigReg(0);
    Reg#(Data) numJmiss <- mkConfigReg(0);
    Reg#(Data) numJRmiss <- mkConfigReg(0);
    Reg#(Data) numBRmiss <- mkConfigReg(0);

    Fifo#(2, CpuToHostData) toHostFifo <- mkCFFifo; // csrMtohost -- write only
    Fifo#(2, Tuple3#(CsrIndx, Data, Data)) csrFifo <- mkCFFifo;

    rule count (startReg);
        cycles <= cycles + 1;
        $display("\nCycle %d ----------------------------------------------------", cycles);
    endrule

    method Action start(Data id) if(!startReg);
        startReg <= True;
        cycles <= 0;
		coreId <= id;
    endmethod

    method Bool started;
        return startReg;
    endmethod

    method Data rd(CsrIndx idx);
        return (case(idx)
                    csrCycle: cycles;
                    csrInstret: numInsts;
                    csrMhartid: coreId;
					default: ?;
                endcase);
    endmethod
    
    method Action wr(Maybe#(CsrIndx) csrIdx, Data val);
        if(csrIdx matches tagged Valid .idx) begin
            case (idx)
                csrMtohost: begin

                    $fwrite(stderr, "===========================\n");
                    $fwrite(stderr, "Specific type of executed instructions\n");
                    $fwrite(stderr, "Ctr              : %d\n", numCtr);
                    $fwrite(stderr, "Mem              : %d\n", numMem);
                    $fwrite(stderr, "\nMispredicted       : %d\n", numBPMiss);
                    $fwrite(stderr, "==========================================\n");

                    /*Exercise_4*/
                    /* TODO: Implement below to output the counted values */
                    $fwrite(stderr, "Misprediction detail\n");
                    $fwrite(stderr, "J               : %d / %d\n", numJmiss, numJtot);
                    $fwrite(stderr, "JR              : %d / %d\n", numJRmiss, numJRtot);
                    $fwrite(stderr, "BR              : %d / %d\n", numBRmiss, numBRtot);
                    $fwrite(stderr, "==========================================\n");

                    // high 16 bits encodes type, low 16 bits are data
                    Bit#(16) hi = truncateLSB(val);
                    Bit#(16) lo = truncate(val);
                    toHostFifo.enq(CpuToHostData {
                        c2hType: unpack(truncate(hi)),
                        data: lo,
                        data2: numInsts
                    });
                end
            endcase
        end
        numInsts <= numInsts + 1;
    endmethod


    method Action incInstTypeCnt(InstCntType inst);
      case(inst)
        Ctr : numCtr <= numCtr + 1;
        Mem : numMem <= numMem + 1;
        endcase
    endmethod

    method Action incMissInstTypeCnt(InstMissCntType inst);
        case(inst)
            J_notmiss : numJtot <= numJtot + 1;

            JR_notmiss : numJRtot <= numJRtot + 1;

            BR_notmiss : numBRtot <= numBRtot + 1;

            J_miss : 
            begin
                numJmiss <= numJmiss + 1;
                numJtot <= numJtot + 1;
            end

            JR_miss : 
            begin
                numJRmiss <= numJRmiss + 1;
                numJRtot <= numJRtot + 1;
            end
            
            BR_miss : 
            begin
                numBRmiss <= numBRmiss + 1;
                numBRtot <= numBRtot + 1;
            end
        endcase
    endmethod

    method Action incBPMissCnt();
      numBPMiss <= numBPMiss + 1;
    endmethod

    method ActionValue#(CpuToHostData) cpuToHost;
        toHostFifo.deq;
        return toHostFifo.first;
    endmethod

endmodule