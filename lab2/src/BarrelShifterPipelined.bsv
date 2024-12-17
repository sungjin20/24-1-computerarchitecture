import Multiplexer::*;
import FIFO::*;
import FIFOF::*;
import Vector::*;
import SpecialFIFOs::*;

/* Interface of the basic right shifter module */
interface BarrelShifterRightPipelined;
	method Action shift_request(Bit#(64) operand, Bit#(6) shamt, Bit#(1) val);
	method ActionValue#(Bit#(64)) shift_response();
endinterface

module mkBarrelShifterRightPipelined(BarrelShifterRightPipelined);
	/* use mkFIFOF for request-response interface.	*/
	let inFifo <- mkFIFOF;
	let outFifo <- mkFIFOF;

	Reg#(Maybe#(Tuple3#(Bit#(64), Bit#(6), Bit#(1)))) sReg1 <- mkReg(tagged Invalid);
	Reg#(Maybe#(Tuple3#(Bit#(64), Bit#(6), Bit#(1)))) sReg2 <- mkReg(tagged Invalid);
	Reg#(Maybe#(Tuple3#(Bit#(64), Bit#(6), Bit#(1)))) sReg3 <- mkReg(tagged Invalid);
	Reg#(Maybe#(Tuple3#(Bit#(64), Bit#(6), Bit#(1)))) sReg4 <- mkReg(tagged Invalid);
	Reg#(Maybe#(Tuple3#(Bit#(64), Bit#(6), Bit#(1)))) sReg5 <- mkReg(tagged Invalid);

	function stage_f(num, x);
		match {.operand, .shamt, .val} = x;
		Integer j = 2**num;
		Bit#(64) temp = {1'b0, operand[63:j]};
		for (Integer k = 0; k < j; k = k + 1) begin
			temp[63-k] = val;
		end
		return tuple3(multiplexer64(shamt[num], operand, temp), shamt, val);
	endfunction

	function f0(x);
		return (stage_f(0, x));
	endfunction
	function f1(x);
		return (stage_f(1, x));
	endfunction
	function f2(x);
		return (stage_f(2, x));
	endfunction
	function f3(x);
		return (stage_f(3, x));
	endfunction
	function f4(x);
		return (stage_f(4, x));
	endfunction
	function f5(x);
		return (stage_f(5, x));
	endfunction

	rule shift;
		/* 
			TODO: Implement a pipelined right shift logic. 
			You are allowed to make other rules to pipeline right shifter.
		*/

		if(inFifo.notEmpty())
		begin
			sReg1 <= tagged Valid f0(inFifo.first());
			inFifo.deq();
		end
		else sReg1 <= tagged Invalid;

		case(sReg1) matches
			tagged Valid .sx1 : sReg2 <= tagged Valid f1(sx1);
			tagged Invalid : sReg2 <= tagged Invalid;
		endcase

		case(sReg2) matches
			tagged Valid .sx2 : sReg3 <= tagged Valid f2(sx2);
			tagged Invalid : sReg3 <= tagged Invalid;
		endcase

		case(sReg3) matches
			tagged Valid .sx3 : sReg4 <= tagged Valid f3(sx3);
			tagged Invalid : sReg4 <= tagged Invalid;
		endcase

		case(sReg4) matches
			tagged Valid .sx4 : sReg5 <= tagged Valid f4(sx4);
			tagged Invalid : sReg5 <= tagged Invalid;
		endcase

		case(sReg5) matches
			tagged Valid .sx5 : outFifo.enq(tpl_1(f5(sx5)));
		endcase
		
	endrule

	method Action shift_request(Bit#(64) operand, Bit#(6) shamt, Bit#(1) val);
		inFifo.enq(tuple3(operand, shamt, val));
	endmethod

	method ActionValue#(Bit#(64)) shift_response();
		outFifo.deq;
		return outFifo.first;
	endmethod
endmodule


/* Interface of the three shifter modules
 *
 * They have the same interface.
 * So, we just copy it using typedef declarations.
 */
interface BarrelShifterRightLogicalPipelined;
	method Action shift_request(Bit#(64) operand, Bit#(6) shamt);
	method ActionValue#(Bit#(64)) shift_response();
endinterface

typedef BarrelShifterRightLogicalPipelined BarrelShifterRightArithmeticPipelined;
typedef BarrelShifterRightLogicalPipelined BarrelShifterLeftPipelined;

module mkBarrelShifterLeftPipelined(BarrelShifterLeftPipelined);
	/* TODO: Implement left shifter using the pipelined right shifter. */
	let bsrp <- mkBarrelShifterRightPipelined;

	method Action shift_request(Bit#(64) operand, Bit#(6) shamt);
		bsrp.shift_request(reverseBits(operand), shamt, 0);
	endmethod

	method ActionValue#(Bit#(64)) shift_response();
		let result <- bsrp.shift_response();
		return reverseBits(result);
	endmethod
endmodule

module mkBarrelShifterRightLogicalPipelined(BarrelShifterRightLogicalPipelined);
	/* TODO: Implement right logical shifter using the pipelined right shifter. */
	let bsrp <- mkBarrelShifterRightPipelined;

	method Action shift_request(Bit#(64) operand, Bit#(6) shamt);
		bsrp.shift_request(operand, shamt, 0);
	endmethod

	method ActionValue#(Bit#(64)) shift_response();
		let result <- bsrp.shift_response();
		return result;
	endmethod
endmodule

module mkBarrelShifterRightArithmeticPipelined(BarrelShifterRightArithmeticPipelined);
	/* TODO: Implement right arithmetic shifter using the pipelined right shifter. */
	let bsrp <- mkBarrelShifterRightPipelined;

	method Action shift_request(Bit#(64) operand, Bit#(6) shamt);
	bsrp.shift_request(operand, shamt, operand[63]);
	endmethod

	method ActionValue#(Bit#(64)) shift_response();
		let result <- bsrp.shift_response();
		return result;
	endmethod
endmodule
