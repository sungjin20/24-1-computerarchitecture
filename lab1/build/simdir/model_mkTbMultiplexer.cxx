/*
 * Generated by Bluespec Compiler, version 2023.07 (build 0eb551d)
 * 
 * On Tue Mar 19 01:30:11 KST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTbMultiplexer.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTbMultiplexer::MODEL_mkTbMultiplexer()
{
  mkTbMultiplexer_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTbMultiplexer()
{
  MODEL_mkTbMultiplexer *model = new MODEL_mkTbMultiplexer();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTbMultiplexer &INST_top = *((MOD_mkTbMultiplexer *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_randomVal1_init__h111;
	 tUInt8 DEF_INST_top_DEF_randomVal2_init__h198;
	 tUInt8 DEF_INST_top_DEF_randomSel_init__h279;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_initialize;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_initialize;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_initialize;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_initialize;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomSel_initialize;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomSel_initialize;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test;
	 DEF_INST_top_DEF_randomSel_init__h279 = INST_top.INST_randomSel_init.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_randomSel_initialize = !DEF_INST_top_DEF_randomSel_init__h279;
	 DEF_INST_top_DEF_WILL_FIRE_RL_randomSel_initialize = DEF_INST_top_DEF_CAN_FIRE_RL_randomSel_initialize;
	 DEF_INST_top_DEF_randomVal1_init__h111 = INST_top.INST_randomVal1_init.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_initialize = !DEF_INST_top_DEF_randomVal1_init__h111;
	 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_initialize = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_initialize;
	 DEF_INST_top_DEF_randomVal2_init__h198 = INST_top.INST_randomVal2_init.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_initialize = !DEF_INST_top_DEF_randomVal2_init__h198;
	 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_initialize = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_initialize;
	 INST_top.DEF__read__h53 = INST_top.INST_cycle.METH_read();
	 INST_top.DEF_cycle_EQ_128___d8 = (INST_top.DEF__read__h53) == 128u;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test = INST_top.DEF_cycle_EQ_128___d8 || (DEF_INST_top_DEF_randomVal1_init__h111 && (DEF_INST_top_DEF_randomVal2_init__h198 && DEF_INST_top_DEF_randomSel_init__h279));
	 DEF_INST_top_DEF_WILL_FIRE_RL_test = DEF_INST_top_DEF_CAN_FIRE_RL_test;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test)
	   INST_top.RL_test();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_initialize)
	   INST_top.RL_randomVal1_initialize();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_initialize)
	   INST_top.RL_randomVal2_initialize();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_randomSel_initialize)
	   INST_top.RL_randomSel_initialize();
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_cycle.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_randomVal1_init.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_randomVal2_init.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_randomSel_init.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTbMultiplexer::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTbMultiplexer_instance = new MOD_mkTbMultiplexer(sim_hdl, "top", NULL);
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
  (mkTbMultiplexer_instance->set_clk_0)("CLK");
}
void MODEL_mkTbMultiplexer::destroy_model()
{
  delete mkTbMultiplexer_instance;
  mkTbMultiplexer_instance = NULL;
}
void MODEL_mkTbMultiplexer::reset_model(bool asserted)
{
  (mkTbMultiplexer_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTbMultiplexer::get_instance()
{
  return mkTbMultiplexer_instance;
}

/* Fill in version numbers */
void MODEL_mkTbMultiplexer::get_version(char const **name, char const **build)
{
  *name = "2023.07";
  *build = "0eb551d";
}

/* Get the model creation time */
time_t MODEL_mkTbMultiplexer::get_creation_time()
{
  
  /* Mon Mar 18 16:30:11 UTC 2024 */
  return 1710779411llu;
}

/* State dumping function */
void MODEL_mkTbMultiplexer::dump_state()
{
  (mkTbMultiplexer_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTbMultiplexer & mkTbMultiplexer_backing(tSimStateHdl simHdl)
{
  static MOD_mkTbMultiplexer *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTbMultiplexer(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTbMultiplexer::dump_VCD_defs()
{
  (mkTbMultiplexer_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTbMultiplexer::dump_VCD(tVCDDumpType dt)
{
  (mkTbMultiplexer_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkTbMultiplexer_backing(sim_hdl));
}
