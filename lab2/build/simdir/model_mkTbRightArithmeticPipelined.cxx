/*
 * Generated by Bluespec Compiler, version 2023.07 (build 0eb551d)
 * 
 * On Mon Mar 25 22:24:10 KST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTbRightArithmeticPipelined.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTbRightArithmeticPipelined::MODEL_mkTbRightArithmeticPipelined()
{
  mkTbRightArithmeticPipelined_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTbRightArithmeticPipelined()
{
  MODEL_mkTbRightArithmeticPipelined *model = new MODEL_mkTbRightArithmeticPipelined();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTbRightArithmeticPipelined &INST_top = *((MOD_mkTbRightArithmeticPipelined *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bsrap_bsrp_shift;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bsrap_bsrp_shift;
	 tUInt8 DEF_INST_top_DEF_randomVal_init__h4678;
	 tUInt8 DEF_INST_top_DEF_randomShift_init__h4761;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal_initialize;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal_initialize;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomShift_initialize;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomShift_initialize;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_request;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test_request;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_response;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test_response;
	 INST_top.DEF_bsrap_bsrp_sReg5___d5 = INST_top.INST_bsrap_bsrp_sReg5.METH_read();
	 INST_top.DEF_bsrap_bsrp_inFifo_notEmpty____d1 = INST_top.INST_bsrap_bsrp_inFifo.METH_notEmpty();
	 INST_top.DEF_bsrap_bsrp_sReg5_BIT_71___d6 = INST_top.DEF_bsrap_bsrp_sReg5___d5.get_bits_in_word8(2u,
													  7u,
													  1u);
	 DEF_INST_top_DEF_CAN_FIRE_RL_bsrap_bsrp_shift = (!(INST_top.DEF_bsrap_bsrp_inFifo_notEmpty____d1) || INST_top.INST_bsrap_bsrp_inFifo.METH_i_notEmpty()) && (!(INST_top.DEF_bsrap_bsrp_sReg5_BIT_71___d6) || INST_top.INST_bsrap_bsrp_outFifo.METH_i_notFull());
	 DEF_INST_top_DEF_WILL_FIRE_RL_bsrap_bsrp_shift = DEF_INST_top_DEF_CAN_FIRE_RL_bsrap_bsrp_shift;
	 DEF_INST_top_DEF_randomShift_init__h4761 = INST_top.INST_randomShift_init.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_randomShift_initialize = !DEF_INST_top_DEF_randomShift_init__h4761;
	 DEF_INST_top_DEF_WILL_FIRE_RL_randomShift_initialize = DEF_INST_top_DEF_CAN_FIRE_RL_randomShift_initialize;
	 DEF_INST_top_DEF_randomVal_init__h4678 = INST_top.INST_randomVal_init.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal_initialize = !DEF_INST_top_DEF_randomVal_init__h4678;
	 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal_initialize = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal_initialize;
	 INST_top.DEF_x__h5375 = INST_top.INST_input_cycle.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_request = (DEF_INST_top_DEF_randomVal_init__h4678 && (DEF_INST_top_DEF_randomShift_init__h4761 && (INST_top.INST_valFifo.METH_i_notFull() && INST_top.INST_bsrap_bsrp_inFifo.METH_i_notFull()))) && (INST_top.DEF_x__h5375) < 128u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_test_request = DEF_INST_top_DEF_CAN_FIRE_RL_test_request;
	 INST_top.DEF_x__h5731 = INST_top.INST_output_cycle.METH_read();
	 INST_top.DEF_output_cycle_21_EQ_128___d122 = (INST_top.DEF_x__h5731) == 128u;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_response = INST_top.DEF_output_cycle_21_EQ_128___d122 || (INST_top.INST_bsrap_bsrp_outFifo.METH_i_notEmpty() && INST_top.INST_valFifo.METH_i_notEmpty());
	 DEF_INST_top_DEF_WILL_FIRE_RL_test_response = DEF_INST_top_DEF_CAN_FIRE_RL_test_response;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bsrap_bsrp_shift)
	   INST_top.RL_bsrap_bsrp_shift();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test_response)
	   INST_top.RL_test_response();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal_initialize)
	   INST_top.RL_randomVal_initialize();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_randomShift_initialize)
	   INST_top.RL_randomShift_initialize();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test_request)
	   INST_top.RL_test_request();
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_bsrap_bsrp_inFifo.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_bsrap_bsrp_outFifo.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_bsrap_bsrp_sReg1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_bsrap_bsrp_sReg2.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_bsrap_bsrp_sReg3.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_bsrap_bsrp_sReg4.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_bsrap_bsrp_sReg5.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_input_cycle.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_output_cycle.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_correct.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_randomVal_init.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_randomShift_init.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_valFifo.rst_tick_clk((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTbRightArithmeticPipelined::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTbRightArithmeticPipelined_instance = new MOD_mkTbRightArithmeticPipelined(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkTbRightArithmeticPipelined_instance->INST_bsrap_bsrp_inFifo.set_clk_0)("CLK");
  (mkTbRightArithmeticPipelined_instance->INST_bsrap_bsrp_outFifo.set_clk_0)("CLK");
  (mkTbRightArithmeticPipelined_instance->INST_valFifo.set_clk_0)("CLK");
  (mkTbRightArithmeticPipelined_instance->set_clk_0)("CLK");
}
void MODEL_mkTbRightArithmeticPipelined::destroy_model()
{
  delete mkTbRightArithmeticPipelined_instance;
  mkTbRightArithmeticPipelined_instance = NULL;
}
void MODEL_mkTbRightArithmeticPipelined::reset_model(bool asserted)
{
  (mkTbRightArithmeticPipelined_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTbRightArithmeticPipelined::get_instance()
{
  return mkTbRightArithmeticPipelined_instance;
}

/* Fill in version numbers */
void MODEL_mkTbRightArithmeticPipelined::get_version(char const **name, char const **build)
{
  *name = "2023.07";
  *build = "0eb551d";
}

/* Get the model creation time */
time_t MODEL_mkTbRightArithmeticPipelined::get_creation_time()
{
  
  /* Mon Mar 25 13:24:10 UTC 2024 */
  return 1711373050llu;
}

/* State dumping function */
void MODEL_mkTbRightArithmeticPipelined::dump_state()
{
  (mkTbRightArithmeticPipelined_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTbRightArithmeticPipelined & mkTbRightArithmeticPipelined_backing(tSimStateHdl simHdl)
{
  static MOD_mkTbRightArithmeticPipelined *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTbRightArithmeticPipelined(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTbRightArithmeticPipelined::dump_VCD_defs()
{
  (mkTbRightArithmeticPipelined_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTbRightArithmeticPipelined::dump_VCD(tVCDDumpType dt)
{
  (mkTbRightArithmeticPipelined_instance->dump_VCD)(dt,
						    vcd_depth(sim_hdl),
						    mkTbRightArithmeticPipelined_backing(sim_hdl));
}
