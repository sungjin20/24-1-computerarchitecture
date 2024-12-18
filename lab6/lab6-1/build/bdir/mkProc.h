/*
 * Generated by Bluespec Compiler, version 2023.07 (build 0eb551d)
 * 
 * On Thu May 30 01:05:12 KST 2024
 * 
 */

/* Generation options: */
#ifndef __mkProc_h__
#define __mkProc_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkCsrFile.h"
#include "mkDMemory.h"
#include "mkIMemory.h"
#include "mkBypassRFile.h"
#include "module_decode.h"
#include "module_exec.h"


/* Class declaration for the mkProc module */
class MOD_mkProc : public Module {
 
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
  MOD_mkCsrFile INST_csrf;
  MOD_Reg<tUWide> INST_d2e_data_0;
  MOD_Wire<tUInt8> INST_d2e_deqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_d2e_deqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_d2e_deqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_d2e_deqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_d2e_deqP_wires_0;
  MOD_Wire<tUInt8> INST_d2e_deqP_wires_1;
  MOD_Reg<tUInt8> INST_d2e_empty_ehrReg;
  MOD_Wire<tUInt8> INST_d2e_empty_ignored_wires_0;
  MOD_Wire<tUInt8> INST_d2e_empty_ignored_wires_1;
  MOD_Wire<tUInt8> INST_d2e_empty_ignored_wires_2;
  MOD_Reg<tUInt8> INST_d2e_empty_virtual_reg_0;
  MOD_Reg<tUInt8> INST_d2e_empty_virtual_reg_1;
  MOD_Reg<tUInt8> INST_d2e_empty_virtual_reg_2;
  MOD_Wire<tUInt8> INST_d2e_empty_wires_0;
  MOD_Wire<tUInt8> INST_d2e_empty_wires_1;
  MOD_Wire<tUInt8> INST_d2e_empty_wires_2;
  MOD_Wire<tUInt8> INST_d2e_enqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_d2e_enqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_d2e_enqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_d2e_enqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_d2e_enqP_wires_0;
  MOD_Wire<tUInt8> INST_d2e_enqP_wires_1;
  MOD_Reg<tUInt8> INST_d2e_full_ehrReg;
  MOD_Wire<tUInt8> INST_d2e_full_ignored_wires_0;
  MOD_Wire<tUInt8> INST_d2e_full_ignored_wires_1;
  MOD_Wire<tUInt8> INST_d2e_full_ignored_wires_2;
  MOD_Reg<tUInt8> INST_d2e_full_virtual_reg_0;
  MOD_Reg<tUInt8> INST_d2e_full_virtual_reg_1;
  MOD_Reg<tUInt8> INST_d2e_full_virtual_reg_2;
  MOD_Wire<tUInt8> INST_d2e_full_wires_0;
  MOD_Wire<tUInt8> INST_d2e_full_wires_1;
  MOD_Wire<tUInt8> INST_d2e_full_wires_2;
  MOD_mkDMemory INST_dMem;
  MOD_Reg<tUWide> INST_e2m_data_0;
  MOD_Wire<tUInt8> INST_e2m_deqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_e2m_deqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_e2m_deqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_e2m_deqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_e2m_deqP_wires_0;
  MOD_Wire<tUInt8> INST_e2m_deqP_wires_1;
  MOD_Reg<tUInt8> INST_e2m_empty_ehrReg;
  MOD_Wire<tUInt8> INST_e2m_empty_ignored_wires_0;
  MOD_Wire<tUInt8> INST_e2m_empty_ignored_wires_1;
  MOD_Wire<tUInt8> INST_e2m_empty_ignored_wires_2;
  MOD_Reg<tUInt8> INST_e2m_empty_virtual_reg_0;
  MOD_Reg<tUInt8> INST_e2m_empty_virtual_reg_1;
  MOD_Reg<tUInt8> INST_e2m_empty_virtual_reg_2;
  MOD_Wire<tUInt8> INST_e2m_empty_wires_0;
  MOD_Wire<tUInt8> INST_e2m_empty_wires_1;
  MOD_Wire<tUInt8> INST_e2m_empty_wires_2;
  MOD_Wire<tUInt8> INST_e2m_enqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_e2m_enqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_e2m_enqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_e2m_enqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_e2m_enqP_wires_0;
  MOD_Wire<tUInt8> INST_e2m_enqP_wires_1;
  MOD_Reg<tUInt8> INST_e2m_full_ehrReg;
  MOD_Wire<tUInt8> INST_e2m_full_ignored_wires_0;
  MOD_Wire<tUInt8> INST_e2m_full_ignored_wires_1;
  MOD_Wire<tUInt8> INST_e2m_full_ignored_wires_2;
  MOD_Reg<tUInt8> INST_e2m_full_virtual_reg_0;
  MOD_Reg<tUInt8> INST_e2m_full_virtual_reg_1;
  MOD_Reg<tUInt8> INST_e2m_full_virtual_reg_2;
  MOD_Wire<tUInt8> INST_e2m_full_wires_0;
  MOD_Wire<tUInt8> INST_e2m_full_wires_1;
  MOD_Wire<tUInt8> INST_e2m_full_wires_2;
  MOD_CReg<tUInt8> INST_eEpoch;
  MOD_Reg<tUInt32> INST_execRedirect_data_0_ehrReg;
  MOD_Wire<tUInt32> INST_execRedirect_data_0_ignored_wires_0;
  MOD_Wire<tUInt32> INST_execRedirect_data_0_ignored_wires_1;
  MOD_Reg<tUInt8> INST_execRedirect_data_0_virtual_reg_0;
  MOD_Reg<tUInt8> INST_execRedirect_data_0_virtual_reg_1;
  MOD_Wire<tUInt32> INST_execRedirect_data_0_wires_0;
  MOD_Wire<tUInt32> INST_execRedirect_data_0_wires_1;
  MOD_Wire<tUInt8> INST_execRedirect_deqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_deqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_execRedirect_deqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_execRedirect_deqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_execRedirect_deqP_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_deqP_wires_1;
  MOD_Reg<tUInt8> INST_execRedirect_empty_ehrReg;
  MOD_Wire<tUInt8> INST_execRedirect_empty_ignored_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_empty_ignored_wires_1;
  MOD_Wire<tUInt8> INST_execRedirect_empty_ignored_wires_2;
  MOD_Reg<tUInt8> INST_execRedirect_empty_virtual_reg_0;
  MOD_Reg<tUInt8> INST_execRedirect_empty_virtual_reg_1;
  MOD_Reg<tUInt8> INST_execRedirect_empty_virtual_reg_2;
  MOD_Wire<tUInt8> INST_execRedirect_empty_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_empty_wires_1;
  MOD_Wire<tUInt8> INST_execRedirect_empty_wires_2;
  MOD_Wire<tUInt8> INST_execRedirect_enqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_enqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_execRedirect_enqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_execRedirect_enqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_execRedirect_enqP_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_enqP_wires_1;
  MOD_Reg<tUInt8> INST_execRedirect_full_ehrReg;
  MOD_Wire<tUInt8> INST_execRedirect_full_ignored_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_full_ignored_wires_1;
  MOD_Wire<tUInt8> INST_execRedirect_full_ignored_wires_2;
  MOD_Reg<tUInt8> INST_execRedirect_full_virtual_reg_0;
  MOD_Reg<tUInt8> INST_execRedirect_full_virtual_reg_1;
  MOD_Reg<tUInt8> INST_execRedirect_full_virtual_reg_2;
  MOD_Wire<tUInt8> INST_execRedirect_full_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_full_wires_1;
  MOD_Wire<tUInt8> INST_execRedirect_full_wires_2;
  MOD_Reg<tUWide> INST_f2r_data_0;
  MOD_Wire<tUInt8> INST_f2r_deqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_f2r_deqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_f2r_deqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_f2r_deqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_f2r_deqP_wires_0;
  MOD_Wire<tUInt8> INST_f2r_deqP_wires_1;
  MOD_Reg<tUInt8> INST_f2r_empty_ehrReg;
  MOD_Wire<tUInt8> INST_f2r_empty_ignored_wires_0;
  MOD_Wire<tUInt8> INST_f2r_empty_ignored_wires_1;
  MOD_Wire<tUInt8> INST_f2r_empty_ignored_wires_2;
  MOD_Reg<tUInt8> INST_f2r_empty_virtual_reg_0;
  MOD_Reg<tUInt8> INST_f2r_empty_virtual_reg_1;
  MOD_Reg<tUInt8> INST_f2r_empty_virtual_reg_2;
  MOD_Wire<tUInt8> INST_f2r_empty_wires_0;
  MOD_Wire<tUInt8> INST_f2r_empty_wires_1;
  MOD_Wire<tUInt8> INST_f2r_empty_wires_2;
  MOD_Wire<tUInt8> INST_f2r_enqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_f2r_enqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_f2r_enqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_f2r_enqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_f2r_enqP_wires_0;
  MOD_Wire<tUInt8> INST_f2r_enqP_wires_1;
  MOD_Reg<tUInt8> INST_f2r_full_ehrReg;
  MOD_Wire<tUInt8> INST_f2r_full_ignored_wires_0;
  MOD_Wire<tUInt8> INST_f2r_full_ignored_wires_1;
  MOD_Wire<tUInt8> INST_f2r_full_ignored_wires_2;
  MOD_Reg<tUInt8> INST_f2r_full_virtual_reg_0;
  MOD_Reg<tUInt8> INST_f2r_full_virtual_reg_1;
  MOD_Reg<tUInt8> INST_f2r_full_virtual_reg_2;
  MOD_Wire<tUInt8> INST_f2r_full_wires_0;
  MOD_Wire<tUInt8> INST_f2r_full_wires_1;
  MOD_Wire<tUInt8> INST_f2r_full_wires_2;
  MOD_Reg<tUInt8> INST_fEpoch;
  MOD_mkIMemory INST_iMem;
  MOD_Reg<tUWide> INST_m2w_data_0;
  MOD_Wire<tUInt8> INST_m2w_deqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_m2w_deqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_m2w_deqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_m2w_deqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_m2w_deqP_wires_0;
  MOD_Wire<tUInt8> INST_m2w_deqP_wires_1;
  MOD_Reg<tUInt8> INST_m2w_empty_ehrReg;
  MOD_Wire<tUInt8> INST_m2w_empty_ignored_wires_0;
  MOD_Wire<tUInt8> INST_m2w_empty_ignored_wires_1;
  MOD_Wire<tUInt8> INST_m2w_empty_ignored_wires_2;
  MOD_Reg<tUInt8> INST_m2w_empty_virtual_reg_0;
  MOD_Reg<tUInt8> INST_m2w_empty_virtual_reg_1;
  MOD_Reg<tUInt8> INST_m2w_empty_virtual_reg_2;
  MOD_Wire<tUInt8> INST_m2w_empty_wires_0;
  MOD_Wire<tUInt8> INST_m2w_empty_wires_1;
  MOD_Wire<tUInt8> INST_m2w_empty_wires_2;
  MOD_Wire<tUInt8> INST_m2w_enqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_m2w_enqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_m2w_enqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_m2w_enqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_m2w_enqP_wires_0;
  MOD_Wire<tUInt8> INST_m2w_enqP_wires_1;
  MOD_Reg<tUInt8> INST_m2w_full_ehrReg;
  MOD_Wire<tUInt8> INST_m2w_full_ignored_wires_0;
  MOD_Wire<tUInt8> INST_m2w_full_ignored_wires_1;
  MOD_Wire<tUInt8> INST_m2w_full_ignored_wires_2;
  MOD_Reg<tUInt8> INST_m2w_full_virtual_reg_0;
  MOD_Reg<tUInt8> INST_m2w_full_virtual_reg_1;
  MOD_Reg<tUInt8> INST_m2w_full_virtual_reg_2;
  MOD_Wire<tUInt8> INST_m2w_full_wires_0;
  MOD_Wire<tUInt8> INST_m2w_full_wires_1;
  MOD_Wire<tUInt8> INST_m2w_full_wires_2;
  MOD_CReg<tUInt32> INST_pc;
  MOD_mkBypassRFile INST_rf;
  MOD_Reg<tUInt8> INST_sb_f_data_0;
  MOD_Reg<tUInt8> INST_sb_f_data_1;
  MOD_Reg<tUInt8> INST_sb_f_data_2;
  MOD_Reg<tUInt8> INST_sb_f_data_3;
  MOD_Reg<tUInt8> INST_sb_f_deqP_ehrReg;
  MOD_Wire<tUInt8> INST_sb_f_deqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_sb_f_deqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_sb_f_deqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_sb_f_deqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_sb_f_deqP_wires_0;
  MOD_Wire<tUInt8> INST_sb_f_deqP_wires_1;
  MOD_Reg<tUInt8> INST_sb_f_empty_ehrReg;
  MOD_Wire<tUInt8> INST_sb_f_empty_ignored_wires_0;
  MOD_Wire<tUInt8> INST_sb_f_empty_ignored_wires_1;
  MOD_Wire<tUInt8> INST_sb_f_empty_ignored_wires_2;
  MOD_Reg<tUInt8> INST_sb_f_empty_virtual_reg_0;
  MOD_Reg<tUInt8> INST_sb_f_empty_virtual_reg_1;
  MOD_Reg<tUInt8> INST_sb_f_empty_virtual_reg_2;
  MOD_Wire<tUInt8> INST_sb_f_empty_wires_0;
  MOD_Wire<tUInt8> INST_sb_f_empty_wires_1;
  MOD_Wire<tUInt8> INST_sb_f_empty_wires_2;
  MOD_Reg<tUInt8> INST_sb_f_enqP_ehrReg;
  MOD_Wire<tUInt8> INST_sb_f_enqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_sb_f_enqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_sb_f_enqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_sb_f_enqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_sb_f_enqP_wires_0;
  MOD_Wire<tUInt8> INST_sb_f_enqP_wires_1;
  MOD_Reg<tUInt8> INST_sb_f_full_ehrReg;
  MOD_Wire<tUInt8> INST_sb_f_full_ignored_wires_0;
  MOD_Wire<tUInt8> INST_sb_f_full_ignored_wires_1;
  MOD_Wire<tUInt8> INST_sb_f_full_ignored_wires_2;
  MOD_Reg<tUInt8> INST_sb_f_full_virtual_reg_0;
  MOD_Reg<tUInt8> INST_sb_f_full_virtual_reg_1;
  MOD_Reg<tUInt8> INST_sb_f_full_virtual_reg_2;
  MOD_Wire<tUInt8> INST_sb_f_full_wires_0;
  MOD_Wire<tUInt8> INST_sb_f_full_wires_1;
  MOD_Wire<tUInt8> INST_sb_f_full_wires_2;
  MOD_module_decode INST_instance_decode_1;
  MOD_module_exec INST_instance_exec_0;
 
 /* Constructor */
 public:
  MOD_mkProc(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_dMemInit_request_put;
  tUWide PORT_iMemInit_request_put;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_IF_sb_f_full_wires_0_whas__36_THEN_sb_f_full_w_ETC___d139;
  tUInt8 DEF_NOT_sb_f_full_virtual_reg_2_read__75_76_AND_NO_ETC___d242;
  tUInt8 DEF_x__h32845;
  tUInt8 DEF_NOT_sb_f_full_virtual_reg_2_read__75_76_AND_NO_ETC___d188;
  tUInt8 DEF_sb_f_data_3_89_BIT_5_90_AND_decode_93_BIT_84_7_ETC___d281;
  tUInt8 DEF_IF_sb_f_deqP_virtual_reg_1_read__85_THEN_0_ELS_ETC___d222;
  tUInt8 DEF_IF_decode_93_BIT_84_76_THEN_decode_93_BITS_83__ETC___d288;
  tUInt8 DEF_sb_f_data_0_43_BIT_5___d244;
  tUInt8 DEF_decode_93_BIT_84___d276;
  tUInt8 DEF_sb_f_data_3_89_BIT_5___d190;
  tUInt8 DEF_sb_f_data_3_89_BIT_5_90_AND_decode_93_BIT_90_9_ETC___d201;
  tUInt8 DEF_IF_decode_93_BIT_90_94_THEN_decode_93_BITS_89__ETC___d247;
  tUInt8 DEF_decode_93_BIT_90___d194;
  tUInt8 DEF_n__read__h29068;
  tUInt8 DEF_NOT_sb_f_full_virtual_reg_2_read__75_76_AND_NO_ETC___d210;
  tUInt8 DEF_sb_f_data_2_11_BIT_5_12_AND_decode_93_BIT_84_7_ETC___d284;
  tUInt8 DEF_NOT_sb_f_full_virtual_reg_2_read__75_76_AND_NO_ETC___d226;
  tUInt8 DEF_sb_f_data_1_27_BIT_5_28_AND_decode_93_BIT_84_7_ETC___d287;
  tUInt8 DEF_sb_f_data_2_11_BIT_5_12_AND_decode_93_BIT_90_9_ETC___d217;
  tUInt8 DEF_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb_f_en_ETC___d236;
  tUInt8 DEF_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb_f_en_ETC___d239;
  tUInt8 DEF_NOT_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb__ETC___d241;
  tUInt8 DEF_sb_f_data_1_27_BIT_5_28_AND_decode_93_BIT_90_9_ETC___d233;
  tUInt8 DEF_sb_f_full_virtual_reg_2_read____d175;
  tUInt8 DEF_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb_f_en_ETC___d187;
  tUInt8 DEF_sb_f_full_virtual_reg_2_read__75_OR_sb_f_full__ETC___d314;
  tUInt8 DEF_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb_f_en_ETC___d209;
  tUInt8 DEF_sb_f_full_virtual_reg_1_read____d177;
  tUInt8 DEF_NOT_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb__ETC___d225;
  tUInt8 DEF_NOT_sb_f_full_virtual_reg_2_read__75_76_AND_NO_ETC___d180;
  tUWide DEF_decode___d193;
  tUInt32 DEF_inst__h27802;
  tUWide DEF_exec___d490;
  tUWide DEF_d2e_data_0_79_BITS_268_TO_161___d484;
  tUInt32 DEF_rVal1__h34111;
  tUInt32 DEF_rVal2__h34112;
  tUInt32 DEF_pc__h34110;
  tUInt32 DEF_ppc__h34108;
  tUInt32 DEF_csrVal__h34113;
  tUWide DEF_d2e_data_0___d479;
  tUWide DEF_f2r_data_0___d191;
  tUWide DEF_m2w_data_0___d571;
  tUWide DEF_e2m_data_0___d523;
  tUInt8 DEF_sb_f_data_3___d189;
  tUInt8 DEF_sb_f_data_2___d211;
  tUInt8 DEF_sb_f_data_1___d227;
  tUInt8 DEF_sb_f_data_0___d243;
  tUInt8 DEF_x_wget__h20376;
  tUInt8 DEF_x__h44493;
  tUInt8 DEF_def__h33809;
  tUInt8 DEF_sb_f_full_wires_0_whas____d136;
  tUInt8 DEF_sb_f_full_wires_0_wget____d137;
  tUInt8 DEF_sb_f_full_ehrReg__h23170;
  tUInt8 DEF_sb_f_empty_ehrReg__h22054;
  tUInt8 DEF_sb_f_deqP_virtual_reg_1_read____d185;
  tUInt8 DEF_sb_f_enqP_virtual_reg_1_read____d181;
  tUInt8 DEF_m2w_full_wires_0_whas____d102;
  tUInt8 DEF_m2w_full_wires_0_wget____d103;
  tUInt8 DEF_m2w_full_ehrReg__h19015;
  tUInt8 DEF_m2w_empty_ehrReg__h17899;
  tUInt8 DEF_e2m_full_wires_0_whas____d82;
  tUInt8 DEF_e2m_full_wires_0_wget____d83;
  tUInt8 DEF_e2m_full_ehrReg__h15479;
  tUInt8 DEF_e2m_empty_ehrReg__h14363;
  tUInt8 DEF_d2e_full_wires_0_whas____d62;
  tUInt8 DEF_d2e_full_wires_0_wget____d63;
  tUInt8 DEF_d2e_full_ehrReg__h11943;
  tUInt8 DEF_d2e_empty_ehrReg__h10827;
  tUInt8 DEF_f2r_full_wires_0_whas____d42;
  tUInt8 DEF_f2r_full_wires_0_wget____d43;
  tUInt8 DEF_f2r_full_ehrReg__h8407;
  tUInt8 DEF_f2r_empty_ehrReg__h7291;
  tUInt8 DEF_execRedirect_full_ehrReg__h4871;
  tUInt8 DEF_eEpoch_port0__read____d481;
  tUInt8 DEF_csrf_started____d149;
  tUInt8 DEF_x__h29568;
  tUInt8 DEF_x__h29993;
  tUInt8 DEF_x__h29836;
  tUInt8 DEF_x__h29748;
  tUInt8 DEF_x__h29660;
  tUInt8 DEF_x__h29572;
  tUInt8 DEF_m2w_data_0_71_BIT_89___d572;
  tUInt8 DEF_e2m_data_0_23_BIT_89___d524;
  tUInt8 DEF_exec_90_BIT_1___d491;
  tUInt8 DEF_sb_f_data_1_27_BIT_5___d228;
  tUInt8 DEF_sb_f_data_2_11_BIT_5___d212;
  tUInt8 DEF_IF_e2m_data_0_23_BIT_89_24_THEN_e2m_data_0_23__ETC___d528;
  tUInt8 DEF_IF_decode_93_BIT_84_76_THEN_decode_93_BITS_83__ETC___d278;
  tUInt8 DEF_IF_sb_f_data_0_43_BIT_5_44_THEN_sb_f_data_0_43_ETC___d246;
  tUInt8 DEF_IF_sb_f_data_1_27_BIT_5_28_THEN_sb_f_data_1_27_ETC___d230;
  tUInt8 DEF_IF_sb_f_data_2_11_BIT_5_12_THEN_sb_f_data_2_11_ETC___d214;
  tUInt8 DEF_IF_decode_93_BIT_90_94_THEN_decode_93_BITS_89__ETC___d196;
  tUInt8 DEF_IF_sb_f_data_3_89_BIT_5_90_THEN_sb_f_data_3_89_ETC___d198;
  tUInt8 DEF_IF_e2m_data_0_23_BIT_89_24_THEN_e2m_data_0_23__ETC___d527;
  tUInt8 DEF_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb_f_en_ETC___d202;
  tUInt8 DEF_def__h20864;
  tUInt8 DEF_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb_f_en_ETC___d260;
  tUInt8 DEF_sb_f_data_1_27_BIT_5_28_AND_decode_93_BIT_84_7_ETC___d292;
  tUInt8 DEF_sb_f_data_1_27_BIT_5_28_AND_decode_93_BIT_90_9_ETC___d251;
  tUInt8 DEF_IF_decode_93_BIT_84_76_THEN_decode_93_BITS_83__ETC___d285;
  tUInt8 DEF_IF_decode_93_BIT_84_76_THEN_decode_93_BITS_83__ETC___d279;
  tUInt8 DEF_IF_decode_93_BIT_84_76_THEN_decode_93_BITS_83__ETC___d282;
  tUInt8 DEF_IF_decode_93_BIT_90_94_THEN_decode_93_BITS_89__ETC___d231;
  tUInt8 DEF_IF_decode_93_BIT_90_94_THEN_decode_93_BITS_89__ETC___d199;
  tUInt8 DEF_IF_decode_93_BIT_90_94_THEN_decode_93_BITS_89__ETC___d215;
  tUInt8 DEF_IF_e2m_data_0_23_BIT_89_24_THEN_e2m_data_0_23__ETC___d532;
  tUInt8 DEF_IF_sb_f_deqP_virtual_reg_1_read__85_THEN_0_ELS_ETC___d238;
  tUInt8 DEF_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb_f_en_ETC___d234;
  tUInt8 DEF_d2e_data_0_79_BIT_96_80_EQ_eEpoch_port0__read__81___d482;
  tUInt8 DEF_NOT_IF_e2m_data_0_23_BIT_89_24_THEN_e2m_data_0_ETC___d529;
  tUInt8 DEF_decode_93_BIT_90_94_AND_IF_decode_93_BIT_90_94_ETC___d248;
  tUInt8 DEF_decode_93_BIT_84_76_AND_IF_decode_93_BIT_84_76_ETC___d289;
  tUInt8 DEF_NOT_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb__ETC___d235;
  tUInt8 DEF_NOT_IF_sb_f_enqP_virtual_reg_1_read__81_OR_sb__ETC___d219;
  tUInt8 DEF_sb_f_data_0_43_BIT_5_44_AND_decode_93_BIT_84_7_ETC___d290;
  tUInt8 DEF_sb_f_data_0_43_BIT_5_44_AND_decode_93_BIT_90_9_ETC___d249;
  tUInt8 DEF_NOT_IF_sb_f_deqP_virtual_reg_1_read__85_THEN_0_ETC___d206;
 
 /* Local definitions */
 private:
  tUInt32 DEF_x_wget__h876;
  tUInt32 DEF_x__h37973;
  tUInt8 DEF_x_wget__h19560;
  tUInt8 DEF_execRedirect_empty_wires_0_whas____d12;
  tUInt8 DEF_execRedirect_empty_wires_0_wget____d13;
  tUInt8 DEF_execRedirect_empty_ehrReg__h3755;
  tUWide DEF_f2r_data_0_91_BITS_64_TO_0___d399;
  tUInt32 DEF_def__h1366;
  tUInt8 DEF_def__h20048;
  tUInt8 DEF_IF_sb_f_empty_wires_0_whas__26_THEN_sb_f_empty_ETC___d129;
  tUInt8 DEF_IF_m2w_full_wires_0_whas__02_THEN_m2w_full_wir_ETC___d105;
  tUInt8 DEF_IF_m2w_empty_wires_0_whas__2_THEN_m2w_empty_wi_ETC___d95;
  tUInt8 DEF_IF_e2m_full_wires_0_whas__2_THEN_e2m_full_wire_ETC___d85;
  tUInt8 DEF_IF_e2m_empty_wires_0_whas__2_THEN_e2m_empty_wi_ETC___d75;
  tUInt8 DEF_IF_d2e_full_wires_0_whas__2_THEN_d2e_full_wire_ETC___d65;
  tUInt8 DEF_IF_d2e_empty_wires_0_whas__2_THEN_d2e_empty_wi_ETC___d55;
  tUInt8 DEF_IF_f2r_full_wires_0_whas__2_THEN_f2r_full_wire_ETC___d45;
  tUInt8 DEF_IF_f2r_empty_wires_0_whas__2_THEN_f2r_empty_wi_ETC___d35;
  tUInt8 DEF_IF_execRedirect_full_wires_0_whas__2_THEN_exec_ETC___d25;
  tUInt8 DEF_IF_execRedirect_empty_wires_0_whas__2_THEN_exe_ETC___d15;
  tUWide DEF_decode_93_CONCAT_f2r_data_0_91_BITS_64_TO_0_99_ETC___d409;
  tUWide DEF_rf_rd1_IF_decode_93_BIT_90_94_THEN_IF_decode_9_ETC___d408;
  tUWide DEF_iMem_req_pc_port1__read__60_65_CONCAT_pc_port1_ETC___d167;
  tUWide DEF_e2m_data_0_23_BITS_89_TO_66_41_CONCAT_IF_IF_e2_ETC___d547;
  tUWide DEF_d2e_data_0_79_BIT_96_80_EQ_eEpoch_port0__read__ETC___d505;
  tUWide DEF_NOT_IF_e2m_data_0_23_BIT_89_24_THEN_e2m_data_0_ETC___d554;
 
 /* Rules */
 public:
  void RL_execRedirect_data_0_canonicalize();
  void RL_execRedirect_empty_canonicalize();
  void RL_execRedirect_full_canonicalize();
  void RL_f2r_empty_canonicalize();
  void RL_f2r_full_canonicalize();
  void RL_d2e_empty_canonicalize();
  void RL_d2e_full_canonicalize();
  void RL_e2m_empty_canonicalize();
  void RL_e2m_full_canonicalize();
  void RL_m2w_empty_canonicalize();
  void RL_m2w_full_canonicalize();
  void RL_sb_f_enqP_canonicalize();
  void RL_sb_f_deqP_canonicalize();
  void RL_sb_f_empty_canonicalize();
  void RL_sb_f_full_canonicalize();
  void RL_doFetch();
  void RL_doDecode();
  void RL_doExecute();
  void RL_doMemory();
  void RL_doWriteBack();
 
 /* Methods */
 public:
  tUInt64 METH_cpuToHost();
  tUInt8 METH_RDY_cpuToHost();
  void METH_hostToCpu(tUInt32 ARG_hostToCpu_startpc);
  tUInt8 METH_RDY_hostToCpu();
  void METH_iMemInit_request_put(tUWide ARG_iMemInit_request_put);
  tUInt8 METH_RDY_iMemInit_request_put();
  tUInt8 METH_iMemInit_done();
  tUInt8 METH_RDY_iMemInit_done();
  void METH_dMemInit_request_put(tUWide ARG_dMemInit_request_put);
  tUInt8 METH_RDY_dMemInit_request_put();
  tUInt8 METH_dMemInit_done();
  tUInt8 METH_RDY_dMemInit_done();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkProc &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkProc &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkProc &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkProc &backing);
};

#endif /* ifndef __mkProc_h__ */
