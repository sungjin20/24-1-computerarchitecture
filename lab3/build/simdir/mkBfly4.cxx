/*
 * Generated by Bluespec Compiler, version 2023.07 (build 0eb551d)
 * 
 * On Wed Apr  3 16:38:51 KST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkBfly4.h"


/* Constructor */
MOD_mkBfly4::MOD_mkBfly4(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent), __clk_handle_0(BAD_CLOCK_HANDLE), PORT_RST_N((tUInt8)1u)
{
  symbol_count = 0u;
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkBfly4::init_symbols_0()
{
}


/* Rule actions */


/* Methods */

tUInt64 MOD_mkBfly4::METH_bfly4(tUInt64 ARG_bfly4_t, tUInt64 ARG_bfly4_x)
{
  tUInt8 DEF_x__h1810;
  tUInt8 DEF_x__h1859;
  tUInt8 DEF_y__h1619;
  tUInt8 DEF_x__h1618;
  tUInt8 DEF_y__h1667;
  tUInt8 DEF_x__h1666;
  tUInt8 DEF_y__h1756;
  tUInt8 DEF_x__h1755;
  tUInt8 DEF_y__h1496;
  tUInt8 DEF_x__h1495;
  tUInt8 DEF_y__h1510;
  tUInt8 DEF_x__h1509;
  tUInt8 DEF_y__h1494;
  tUInt8 DEF_x__h1493;
  tUInt8 DEF_y__h1587;
  tUInt8 DEF_x__h1586;
  tUInt8 DEF_y__h1687;
  tUInt8 DEF_x__h1686;
  tUInt8 DEF_x__h1774;
  tUInt8 DEF_x__h1725;
  tUInt32 DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d72;
  tUInt8 DEF_x__h1685;
  tUInt8 DEF_x__h1556;
  tUInt8 DEF_x__h1492;
  tUInt8 DEF_x__h239;
  tUInt32 DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d69;
  tUInt8 DEF_y__h1498;
  tUInt8 DEF_y__h1501;
  tUInt8 DEF_y__h1512;
  tUInt8 DEF_y__h1515;
  tUInt8 DEF_y__h1504;
  tUInt8 DEF_y__h1507;
  tUInt8 DEF_y__h1518;
  tUInt8 DEF_y__h1521;
  tUInt8 DEF_x__h1500;
  tUInt8 DEF_x__h1497;
  tUInt8 DEF_x__h1514;
  tUInt8 DEF_x__h1511;
  tUInt8 DEF_x__h1506;
  tUInt8 DEF_x__h1503;
  tUInt8 DEF_x__h1520;
  tUInt8 DEF_x__h1517;
  tUInt8 DEF_ii__h831;
  tUInt8 DEF_rr__h830;
  tUInt8 DEF_rr__h1136;
  tUInt8 DEF_ii__h1137;
  tUInt8 DEF_rr__h1280;
  tUInt8 DEF_ii__h1281;
  tUInt8 DEF_rr__h1392;
  tUInt8 DEF_ii__h1393;
  tUInt8 DEF_ri__h833;
  tUInt8 DEF_ir__h832;
  tUInt8 DEF_ri__h1139;
  tUInt8 DEF_ir__h1138;
  tUInt8 DEF_ri__h1283;
  tUInt8 DEF_ir__h1282;
  tUInt8 DEF_ri__h1395;
  tUInt8 DEF_ir__h1394;
  tUInt64 PORT_bfly4;
  DEF_x__h1517 = (tUInt8)(ARG_bfly4_x >> 56u);
  DEF_x__h1520 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 48u));
  DEF_x__h1503 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 40u));
  DEF_x__h1511 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 24u));
  DEF_x__h1506 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 32u));
  DEF_x__h1514 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 16u));
  DEF_x__h1497 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 8u));
  DEF_x__h1500 = (tUInt8)((tUInt8)255u & ARG_bfly4_x);
  DEF_y__h1521 = (tUInt8)(ARG_bfly4_t >> 56u);
  DEF_ir__h1394 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1520)) * ((tUInt32)(DEF_y__h1521)))));
  DEF_rr__h1392 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1517)) * ((tUInt32)(DEF_y__h1521)))));
  DEF_y__h1518 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 48u));
  DEF_ri__h1395 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1517)) * ((tUInt32)(DEF_y__h1518)))));
  DEF_ii__h1393 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1520)) * ((tUInt32)(DEF_y__h1518)))));
  DEF_y__h1507 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 40u));
  DEF_ir__h1138 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1506)) * ((tUInt32)(DEF_y__h1507)))));
  DEF_rr__h1136 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1503)) * ((tUInt32)(DEF_y__h1507)))));
  DEF_y__h1504 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 32u));
  DEF_ri__h1139 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1503)) * ((tUInt32)(DEF_y__h1504)))));
  DEF_ii__h1137 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1506)) * ((tUInt32)(DEF_y__h1504)))));
  DEF_y__h1515 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 24u));
  DEF_ir__h1282 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1514)) * ((tUInt32)(DEF_y__h1515)))));
  DEF_rr__h1280 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1511)) * ((tUInt32)(DEF_y__h1515)))));
  DEF_y__h1512 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 16u));
  DEF_ri__h1283 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1511)) * ((tUInt32)(DEF_y__h1512)))));
  DEF_ii__h1281 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1514)) * ((tUInt32)(DEF_y__h1512)))));
  DEF_y__h1501 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 8u));
  DEF_ir__h832 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1500)) * ((tUInt32)(DEF_y__h1501)))));
  DEF_rr__h830 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1497)) * ((tUInt32)(DEF_y__h1501)))));
  DEF_y__h1498 = (tUInt8)((tUInt8)255u & ARG_bfly4_t);
  DEF_ri__h833 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1497)) * ((tUInt32)(DEF_y__h1498)))));
  DEF_ii__h831 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1500)) * ((tUInt32)(DEF_y__h1498)))));
  DEF_x__h1509 = (tUInt8)255u & (DEF_ri__h1283 + DEF_ir__h1282);
  DEF_y__h1510 = (tUInt8)255u & (DEF_ri__h1395 + DEF_ir__h1394);
  DEF_y__h1687 = (tUInt8)255u & (DEF_x__h1509 + DEF_y__h1510);
  DEF_y__h1494 = (tUInt8)255u & (DEF_x__h1509 - DEF_y__h1510);
  DEF_x__h1495 = (tUInt8)255u & (DEF_ri__h833 + DEF_ir__h832);
  DEF_y__h1496 = (tUInt8)255u & (DEF_ri__h1139 + DEF_ir__h1138);
  DEF_x__h1686 = (tUInt8)255u & (DEF_x__h1495 + DEF_y__h1496);
  DEF_x__h1685 = (tUInt8)255u & (DEF_x__h1686 - DEF_y__h1687);
  DEF_x__h1493 = (tUInt8)255u & (DEF_x__h1495 - DEF_y__h1496);
  DEF_x__h1492 = (tUInt8)255u & (DEF_x__h1493 - DEF_y__h1494);
  DEF_x__h1774 = (tUInt8)255u & (DEF_x__h1493 + DEF_y__h1494);
  DEF_x__h1666 = (tUInt8)255u & (DEF_rr__h1280 - DEF_ii__h1281);
  DEF_y__h1667 = (tUInt8)255u & (DEF_rr__h1392 - DEF_ii__h1393);
  DEF_y__h1587 = (tUInt8)255u & (DEF_x__h1666 + DEF_y__h1667);
  DEF_y__h1756 = (tUInt8)255u & (DEF_x__h1666 - DEF_y__h1667);
  DEF_x__h1618 = (tUInt8)255u & (DEF_rr__h830 - DEF_ii__h831);
  DEF_y__h1619 = (tUInt8)255u & (DEF_rr__h1136 - DEF_ii__h1137);
  DEF_x__h1586 = (tUInt8)255u & (DEF_x__h1618 + DEF_y__h1619);
  DEF_x__h1556 = (tUInt8)255u & (DEF_x__h1586 - DEF_y__h1587);
  DEF_x__h1755 = (tUInt8)255u & (DEF_x__h1618 - DEF_y__h1619);
  DEF_x__h239 = (tUInt8)255u & (DEF_x__h1755 - DEF_y__h1756);
  DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d69 = (((((tUInt32)(DEF_x__h239)) << 24u) | (((tUInt32)(DEF_x__h1492)) << 16u)) | (((tUInt32)(DEF_x__h1556)) << 8u)) | (tUInt32)(DEF_x__h1685);
  DEF_x__h1725 = (tUInt8)255u & (DEF_x__h1755 + DEF_y__h1756);
  DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d72 = 65535u & ((((tUInt32)(DEF_x__h1725)) << 8u) | (tUInt32)(DEF_x__h1774));
  DEF_x__h1859 = (tUInt8)255u & (DEF_x__h1686 + DEF_y__h1687);
  DEF_x__h1810 = (tUInt8)255u & (DEF_x__h1586 + DEF_y__h1587);
  PORT_bfly4 = (((((tUInt64)(DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d69)) << 32u) | (((tUInt64)(DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d72)) << 16u)) | (((tUInt64)(DEF_x__h1810)) << 8u)) | (tUInt64)(DEF_x__h1859);
  return PORT_bfly4;
}

tUInt8 MOD_mkBfly4::METH_RDY_bfly4()
{
  tUInt8 PORT_RDY_bfly4;
  tUInt8 DEF_CAN_FIRE_bfly4;
  DEF_CAN_FIRE_bfly4 = (tUInt8)1u;
  PORT_RDY_bfly4 = DEF_CAN_FIRE_bfly4;
  return PORT_RDY_bfly4;
}


/* Reset routines */

void MOD_mkBfly4::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkBfly4::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkBfly4::dump_state(unsigned int indent)
{
}


/* VCD dumping routines */

unsigned int MOD_mkBfly4::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 1u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkBfly4::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkBfly4 &backing)
{
  vcd_defs(dt, backing);
}

void MOD_mkBfly4::vcd_defs(tVCDDumpType dt, MOD_mkBfly4 &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
    }
}