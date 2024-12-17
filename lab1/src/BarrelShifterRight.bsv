import Multiplexer::*;

interface BarrelShifterRight;
  method ActionValue#(Bit#(64)) rightShift(Bit#(64) val, Bit#(6) shiftAmt, Bit#(1) shiftValue);
endinterface

module mkBarrelShifterRight(BarrelShifterRight);
  method ActionValue#(Bit#(64)) rightShift(Bit#(64) val, Bit#(6) shiftAmt, Bit#(1) shiftValue);
    /* TODO: Implement right barrel shifter using six multiplexers. */
    Bit#(64) result = val;
    Integer j = 1;
    for (Integer i = 0; i < 6; i = i + 1) begin
      Bit#(64) temp = {1'b0, result[63:j]};
      for (Integer k = 0; k < j; k = k + 1) begin
        temp[63-k] = shiftValue;
      end
      result = multiplexer64(shiftAmt[i], result, temp);
      j = j * 2;
    end
    return result;
  endmethod
endmodule

interface BarrelShifterRightLogical;
  method ActionValue#(Bit#(64)) rightShift(Bit#(64) val, Bit#(6) shiftAmt);
endinterface

module mkBarrelShifterRightLogical(BarrelShifterRightLogical);
  let bsr <- mkBarrelShifterRight;
  method ActionValue#(Bit#(64)) rightShift(Bit#(64) val, Bit#(6) shiftAmt);
    /* TODO: Implement logical right shifter using the right shifter */
    Bit#(64) result <- bsr.rightShift(val, shiftAmt, 0);
    return result;
  endmethod
endmodule

typedef BarrelShifterRightLogical BarrelShifterRightArithmetic;

module mkBarrelShifterRightArithmetic(BarrelShifterRightArithmetic);
  let bsr <- mkBarrelShifterRight;
  method ActionValue#(Bit#(64)) rightShift(Bit#(64) val, Bit#(6) shiftAmt);
    /* TODO: Implement arithmetic right shifter using the right shifter */
    Bit#(64) result <- bsr.rightShift(val, shiftAmt, val[63]);
    return result;
  endmethod
endmodule
