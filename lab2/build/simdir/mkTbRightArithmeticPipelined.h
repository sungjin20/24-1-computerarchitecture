/*
 * Generated by Bluespec Compiler, version 2023.07 (build 0eb551d)
 * 
 * On Mon Mar 25 22:24:10 KST 2024
 * 
 */

/* Generation options: */
#ifndef __mkTbRightArithmeticPipelined_h__
#define __mkTbRightArithmeticPipelined_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkTbRightArithmeticPipelined module */
class MOD_mkTbRightArithmeticPipelined : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Fifo<tUWide> INST_bsrap_bsrp_inFifo;
  MOD_Fifo<tUInt64> INST_bsrap_bsrp_outFifo;
  MOD_Reg<tUWide> INST_bsrap_bsrp_sReg1;
  MOD_Reg<tUWide> INST_bsrap_bsrp_sReg2;
  MOD_Reg<tUWide> INST_bsrap_bsrp_sReg3;
  MOD_Reg<tUWide> INST_bsrap_bsrp_sReg4;
  MOD_Reg<tUWide> INST_bsrap_bsrp_sReg5;
  MOD_Reg<tUInt32> INST_correct;
  MOD_Reg<tUInt32> INST_input_cycle;
  MOD_Reg<tUInt32> INST_output_cycle;
  MOD_Reg<tUInt8> INST_randomShift_init;
  MOD_Reg<tUInt8> INST_randomVal_init;
  MOD_Fifo<tUWide> INST_valFifo;
 
 /* Constructor */
 public:
  MOD_mkTbRightArithmeticPipelined(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
  tUInt32 DEF_x__h5731;
  tUWide DEF_bsrap_bsrp_sReg5___d5;
  tUInt32 DEF_x__h5375;
  tUInt8 DEF_bsrap_bsrp_inFifo_notEmpty____d1;
  tUInt8 DEF_bsrap_bsrp_sReg5_BIT_71___d6;
  tUInt8 DEF_output_cycle_21_EQ_128___d122;
 
 /* Local definitions */
 private:
  tUInt64 DEF_x__h5153;
  tUInt64 DEF_TASK_getRandom___d114;
  tUWide DEF_TASK_getRandom_14_CONCAT_TASK_getRandom_15_BIT_ETC___d117;
  tUWide DEF_bsrap_bsrp_sReg4___d60;
  tUWide DEF_bsrap_bsrp_sReg3___d45;
  tUWide DEF_bsrap_bsrp_sReg2___d32;
  tUWide DEF_bsrap_bsrp_sReg1___d20;
  tUWide DEF_bsrap_bsrp_inFifo_first____d11;
  tUWide DEF_valFifo_first____d134;
  tUWide DEF_bsrap_bsrp_sReg4_0_BIT_71_1_CONCAT_IF_bsrap_bs_ETC___d78;
  tUWide DEF_bsrap_bsrp_sReg3_5_BIT_71_6_CONCAT_IF_bsrap_bs_ETC___d59;
  tUWide DEF_bsrap_bsrp_sReg2_2_BIT_71_3_CONCAT_IF_bsrap_bs_ETC___d44;
  tUWide DEF_bsrap_bsrp_sReg1_0_BIT_71_1_CONCAT_IF_bsrap_bs_ETC___d31;
  tUWide DEF_bsrap_bsrp_inFifo_notEmpty_CONCAT_IF_bsrap_bsr_ETC___d19;
  tUWide DEF_TASK_getRandom_14_CONCAT_TASK_getRandom_15_BIT_ETC___d119;
 
 /* Rules */
 public:
  void RL_bsrap_bsrp_shift();
  void RL_randomVal_initialize();
  void RL_randomShift_initialize();
  void RL_test_request();
  void RL_test_response();
 
 /* Methods */
 public:
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTbRightArithmeticPipelined &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkTbRightArithmeticPipelined &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkTbRightArithmeticPipelined &backing);
};

#endif /* ifndef __mkTbRightArithmeticPipelined_h__ */
