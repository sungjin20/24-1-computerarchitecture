/*
 * Generated by Bluespec Compiler, version 2023.07 (build 0eb551d)
 * 
 * On Sun Jun  2 02:24:34 KST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "module_decode.h"


/* Constructor */
MOD_module_decode::MOD_module_decode(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192(100u),
    DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191(91u),
    DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190(79u)
{
  PORT_decode.setSize(108u);
  PORT_decode.clear();
  symbol_count = 1u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_module_decode::init_symbols_0()
{
  init_symbol(&symbols[0u], "decode", SYM_PORT, &PORT_decode, 108u);
}


/* Rule actions */


/* Methods */

tUWide MOD_module_decode::METH_decode(tUInt32 ARG_decode_inst)
{
  tUInt32 DEF_x__h1793;
  tUInt32 DEF_x__h1706;
  tUInt32 DEF_x__h1618;
  tUInt8 DEF_NOT_decode_inst_BITS_6_TO_0_EQ_0b1101111___d119;
  tUInt8 DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d95;
  tUInt8 DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d91;
  tUInt8 DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_IF__ETC___d73;
  tUInt8 DEF_decode_inst_BITS_14_TO_12_EQ_0b10___d22;
  tUInt8 DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d56;
  tUInt8 DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b1_0_THEN_IF__ETC___d36;
  tUInt8 DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011___d28;
  tUInt8 DEF_decode_inst_BITS_6_TO_0_EQ_0b10111___d27;
  tUInt8 DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d20;
  tUInt8 DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d65;
  tUInt8 DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45;
  tUInt8 DEF_IF_decode_inst_BIT_30_7_THEN_8_ELSE_9___d48;
  tUInt8 DEF_decode_inst_BITS_6_TO_0_EQ_0b110111___d26;
  tUInt8 DEF_decode_inst_BITS_6_TO_0_EQ_0b110011___d3;
  tUInt8 DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b110011_THEN_de_ETC___d149;
  tUInt8 DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d136;
  tUInt8 DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d104;
  tUInt8 DEF_decode_inst_BITS_6_TO_0_EQ_0b10011___d2;
  tUInt32 DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_SEX_ETC___d188;
  tUInt32 DEF_immS__h25;
  tUInt8 DEF_decode_inst_BITS_6_TO_0_EQ_0b100011___d24;
  tUInt8 DEF_decode_inst_BITS_6_TO_0_EQ_0b11___d21;
  tUInt32 DEF_immB__h26;
  tUInt8 DEF_decode_inst_BITS_6_TO_0_EQ_0b1100011___d7;
  tUInt8 DEF_decode_inst_BITS_6_TO_0_EQ_0b1100111___d6;
  tUInt32 DEF_immJ__h28;
  tUInt8 DEF_decode_inst_BITS_6_TO_0_EQ_0b1101111___d5;
  tUInt32 DEF_immU__h27;
  tUInt8 DEF_decode_inst_BIT_30___d47;
  tUInt8 DEF_decode_inst_BIT_31___d163;
  tUInt8 DEF_funct3__h20;
  tUInt8 DEF_decode_inst_BITS_11_TO_7___d29;
  tUInt8 DEF_rs1__h21;
  tUInt8 DEF_rs2__h22;
  tUInt8 DEF_opcode__h18;
  tUInt32 DEF_x__h1541;
  tUInt32 DEF_immI__h24;
  DEF_x__h1541 = (tUInt32)(ARG_decode_inst >> 20u);
  DEF_immI__h24 = primSignExt32(32u, 12u, (tUInt32)(DEF_x__h1541));
  DEF_opcode__h18 = (tUInt8)((tUInt8)127u & ARG_decode_inst);
  DEF_rs1__h21 = (tUInt8)((tUInt8)31u & (ARG_decode_inst >> 15u));
  DEF_rs2__h22 = (tUInt8)((tUInt8)31u & (ARG_decode_inst >> 20u));
  DEF_decode_inst_BITS_11_TO_7___d29 = (tUInt8)((tUInt8)31u & (ARG_decode_inst >> 7u));
  DEF_funct3__h20 = (tUInt8)((tUInt8)7u & (ARG_decode_inst >> 12u));
  DEF_decode_inst_BIT_31___d163 = (tUInt8)(ARG_decode_inst >> 31u);
  DEF_decode_inst_BITS_6_TO_0_EQ_0b1101111___d5 = DEF_opcode__h18 == (tUInt8)111u;
  DEF_decode_inst_BIT_30___d47 = (tUInt8)((tUInt8)1u & (ARG_decode_inst >> 30u));
  DEF_immU__h27 = ((tUInt32)(ARG_decode_inst >> 12u)) << 12u;
  DEF_decode_inst_BITS_6_TO_0_EQ_0b1100111___d6 = DEF_opcode__h18 == (tUInt8)103u;
  DEF_decode_inst_BITS_6_TO_0_EQ_0b1100011___d7 = DEF_opcode__h18 == (tUInt8)99u;
  DEF_decode_inst_BITS_6_TO_0_EQ_0b11___d21 = DEF_opcode__h18 == (tUInt8)3u;
  DEF_decode_inst_BITS_6_TO_0_EQ_0b100011___d24 = DEF_opcode__h18 == (tUInt8)35u;
  DEF_decode_inst_BITS_6_TO_0_EQ_0b10011___d2 = DEF_opcode__h18 == (tUInt8)19u;
  switch (DEF_opcode__h18) {
  default:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d104 = DEF_decode_inst_BITS_11_TO_7___d29;
  }
  switch (DEF_opcode__h18) {
  case (tUInt8)55u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d136 = (tUInt8)0u;
    break;
  default:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d136 = DEF_rs1__h21;
  }
  switch (DEF_opcode__h18) {
  default:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b110011_THEN_de_ETC___d149 = DEF_rs2__h22;
  }
  DEF_decode_inst_BITS_6_TO_0_EQ_0b110011___d3 = DEF_opcode__h18 == (tUInt8)51u;
  DEF_decode_inst_BITS_6_TO_0_EQ_0b110111___d26 = DEF_opcode__h18 == (tUInt8)55u;
  DEF_IF_decode_inst_BIT_30_7_THEN_8_ELSE_9___d48 = DEF_decode_inst_BIT_30___d47 ? (tUInt8)8u : (tUInt8)9u;
  switch (DEF_funct3__h20) {
  case (tUInt8)7u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d65 = (tUInt8)2u;
    break;
  case (tUInt8)1u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d65 = (tUInt8)7u;
    break;
  case (tUInt8)2u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d65 = (tUInt8)5u;
    break;
  case (tUInt8)3u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d65 = (tUInt8)6u;
    break;
  case (tUInt8)4u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d65 = (tUInt8)4u;
    break;
  case (tUInt8)5u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d65 = DEF_IF_decode_inst_BIT_30_7_THEN_8_ELSE_9___d48;
    break;
  case (tUInt8)6u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d65 = (tUInt8)3u;
    break;
  default:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d65 = DEF_decode_inst_BIT_30___d47 ? (tUInt8)1u : (tUInt8)0u;
  }
  switch (DEF_funct3__h20) {
  case (tUInt8)0u:
  case (tUInt8)1u:
  case (tUInt8)4u:
  case (tUInt8)5u:
  case (tUInt8)6u:
  case (tUInt8)7u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d20 = (tUInt8)6u;
    break;
  default:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d20 = (tUInt8)0u;
  }
  DEF_decode_inst_BITS_6_TO_0_EQ_0b10111___d27 = DEF_opcode__h18 == (tUInt8)23u;
  DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011___d28 = DEF_opcode__h18 == (tUInt8)115u;
  switch (DEF_funct3__h20) {
  case (tUInt8)1u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b1_0_THEN_IF__ETC___d36 = DEF_decode_inst_BITS_11_TO_7___d29 == (tUInt8)0u ? (tUInt8)8u : (tUInt8)0u;
    break;
  case (tUInt8)2u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b1_0_THEN_IF__ETC___d36 = DEF_rs1__h21 == (tUInt8)0u ? (tUInt8)7u : (tUInt8)0u;
    break;
  default:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b1_0_THEN_IF__ETC___d36 = (tUInt8)0u;
  }
  switch (DEF_funct3__h20) {
  case (tUInt8)7u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d56 = (tUInt8)2u;
    break;
  case (tUInt8)1u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d56 = (tUInt8)7u;
    break;
  case (tUInt8)2u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d56 = (tUInt8)5u;
    break;
  case (tUInt8)3u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d56 = (tUInt8)6u;
    break;
  case (tUInt8)4u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d56 = (tUInt8)4u;
    break;
  case (tUInt8)5u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d56 = DEF_IF_decode_inst_BIT_30_7_THEN_8_ELSE_9___d48;
    break;
  case (tUInt8)6u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d56 = (tUInt8)3u;
    break;
  default:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d56 = (tUInt8)0u;
  }
  DEF_decode_inst_BITS_14_TO_12_EQ_0b10___d22 = DEF_funct3__h20 == (tUInt8)2u;
  switch (DEF_opcode__h18) {
  case (tUInt8)19u:
  case (tUInt8)51u:
  case (tUInt8)55u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45 = (tUInt8)1u;
    break;
  case (tUInt8)111u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45 = (tUInt8)4u;
    break;
  case (tUInt8)103u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45 = (tUInt8)5u;
    break;
  case (tUInt8)99u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45 = DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d20;
    break;
  case (tUInt8)3u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45 = DEF_decode_inst_BITS_14_TO_12_EQ_0b10___d22 ? (tUInt8)2u : (tUInt8)0u;
    break;
  case (tUInt8)35u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45 = DEF_decode_inst_BITS_14_TO_12_EQ_0b10___d22 ? (tUInt8)3u : (tUInt8)0u;
    break;
  case (tUInt8)23u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45 = (tUInt8)9u;
    break;
  case (tUInt8)115u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45 = DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b1_0_THEN_IF__ETC___d36;
    break;
  default:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45 = (tUInt8)0u;
  }
  switch (DEF_opcode__h18) {
  case (tUInt8)19u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_IF__ETC___d73 = DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d56;
    break;
  case (tUInt8)51u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_IF__ETC___d73 = DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b111_4_THEN_2_ETC___d65;
    break;
  default:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_IF__ETC___d73 = (tUInt8)0u;
  }
  switch (DEF_funct3__h20) {
  case (tUInt8)0u:
  case (tUInt8)1u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d91 = DEF_funct3__h20;
    break;
  case (tUInt8)4u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d91 = (tUInt8)2u;
    break;
  case (tUInt8)5u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d91 = (tUInt8)4u;
    break;
  case (tUInt8)6u:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d91 = (tUInt8)3u;
    break;
  default:
    DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d91 = (tUInt8)5u;
  }
  switch (DEF_opcode__h18) {
  case (tUInt8)103u:
  case (tUInt8)111u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d95 = (tUInt8)6u;
    break;
  case (tUInt8)99u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d95 = DEF_IF_decode_inst_BITS_14_TO_12_EQ_0b0_OR_decode__ETC___d91;
    break;
  default:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d95 = (tUInt8)7u;
  }
  DEF_NOT_decode_inst_BITS_6_TO_0_EQ_0b1101111___d119 = !DEF_decode_inst_BITS_6_TO_0_EQ_0b1101111___d5;
  DEF_x__h1618 = 2097151u & (((((((tUInt32)(DEF_decode_inst_BIT_31___d163)) << 20u) | (((tUInt32)((tUInt8)((tUInt8)255u & (ARG_decode_inst >> 12u)))) << 12u)) | (((tUInt32)((tUInt8)((tUInt8)1u & (ARG_decode_inst >> 20u)))) << 11u)) | (((tUInt32)(1023u & (ARG_decode_inst >> 21u))) << 1u)) | (tUInt32)((tUInt8)0u));
  DEF_immJ__h28 = primSignExt32(32u, 21u, (tUInt32)(DEF_x__h1618));
  DEF_x__h1706 = 8191u & (((((((tUInt32)(DEF_decode_inst_BIT_31___d163)) << 12u) | (((tUInt32)((tUInt8)((tUInt8)1u & (ARG_decode_inst >> 7u)))) << 11u)) | (((tUInt32)((tUInt8)((tUInt8)63u & (ARG_decode_inst >> 25u)))) << 5u)) | (((tUInt32)((tUInt8)((tUInt8)15u & (ARG_decode_inst >> 8u)))) << 1u)) | (tUInt32)((tUInt8)0u));
  DEF_immB__h26 = primSignExt32(32u, 13u, (tUInt32)(DEF_x__h1706));
  DEF_x__h1793 = 4095u & ((((tUInt32)((tUInt8)(ARG_decode_inst >> 25u))) << 5u) | (tUInt32)(DEF_decode_inst_BITS_11_TO_7___d29));
  DEF_immS__h25 = primSignExt32(32u, 12u, (tUInt32)(DEF_x__h1793));
  switch (DEF_opcode__h18) {
  case (tUInt8)3u:
  case (tUInt8)19u:
  case (tUInt8)103u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_SEX_ETC___d188 = DEF_immI__h24;
    break;
  case (tUInt8)111u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_SEX_ETC___d188 = DEF_immJ__h28;
    break;
  case (tUInt8)99u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_SEX_ETC___d188 = DEF_immB__h26;
    break;
  case (tUInt8)35u:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_SEX_ETC___d188 = DEF_immS__h25;
    break;
  default:
    DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_SEX_ETC___d188 = DEF_immU__h27;
  }
  DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190.set_bits_in_word(32767u & ((((((tUInt32)(DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011___d28)) << 14u) | (((tUInt32)(4095u & DEF_immI__h24)) << 2u)) | (((tUInt32)(DEF_decode_inst_BITS_6_TO_0_EQ_0b10011___d2 || (!DEF_decode_inst_BITS_6_TO_0_EQ_0b110011___d3 && (DEF_decode_inst_BITS_6_TO_0_EQ_0b1101111___d5 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b1100111___d6 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b1100011___d7 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b11___d21 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b100011___d24 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b110111___d26 || DEF_decode_inst_BITS_6_TO_0_EQ_0b10111___d27))))))))) << 1u)) | (tUInt32)((tUInt8)(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_SEX_ETC___d188 >> 31u))),
										 2u,
										 0u,
										 15u).set_whole_word((((tUInt32)(2147483647u & DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_SEX_ETC___d188)) << 1u) | (tUInt32)((tUInt8)(2863311530llu >> 32u)),
												     1u).set_whole_word((tUInt32)(2863311530llu),
															0u);
  DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191.set_bits_in_word(134217727u & (((((((tUInt32)(DEF_decode_inst_BITS_6_TO_0_EQ_0b10011___d2 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b110011___d3 || (DEF_NOT_decode_inst_BITS_6_TO_0_EQ_0b1101111___d119 && (DEF_decode_inst_BITS_6_TO_0_EQ_0b1100111___d6 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b1100011___d7 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b11___d21 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b100011___d24 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b110111___d26 || DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011___d28))))))))) << 26u) | (((tUInt32)(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d136)) << 21u)) | (((tUInt32)(!DEF_decode_inst_BITS_6_TO_0_EQ_0b10011___d2 && (DEF_decode_inst_BITS_6_TO_0_EQ_0b110011___d3 || (DEF_NOT_decode_inst_BITS_6_TO_0_EQ_0b1101111___d119 && (!DEF_decode_inst_BITS_6_TO_0_EQ_0b1100111___d6 && (DEF_decode_inst_BITS_6_TO_0_EQ_0b1100011___d7 || DEF_decode_inst_BITS_6_TO_0_EQ_0b100011___d24)))))) << 20u)) | (((tUInt32)(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b110011_THEN_de_ETC___d149)) << 15u)) | DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190.get_bits_in_word32(2u,
																																																																																																																																																      0u,
																																																																																																																																																      15u)),
										 2u,
										 0u,
										 27u).set_whole_word(DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190.get_whole_word(1u),
												     1u).set_whole_word(DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190.get_whole_word(0u),
															0u);
  DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192.build_concat(68719476735llu & ((((((tUInt64)(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d95)) << 33u) | (((tUInt64)(!(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d104 == (tUInt8)0u) && (DEF_decode_inst_BITS_6_TO_0_EQ_0b10011___d2 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b110011___d3 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b1101111___d5 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b1100111___d6 || (!DEF_decode_inst_BITS_6_TO_0_EQ_0b1100011___d7 && (DEF_decode_inst_BITS_6_TO_0_EQ_0b11___d21 || (!DEF_decode_inst_BITS_6_TO_0_EQ_0b100011___d24 && (DEF_decode_inst_BITS_6_TO_0_EQ_0b110111___d26 || (DEF_decode_inst_BITS_6_TO_0_EQ_0b10111___d27 || DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011___d28))))))))))) << 32u)) | (((tUInt64)(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d104)) << 27u)) | (tUInt64)(DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191.get_bits_in_word32(2u,
																																																																																																																								       0u,
																																																																																																																								       27u))),
									     64u,
									     36u).set_whole_word(DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191.get_whole_word(1u),
												 1u).set_whole_word(DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191.get_whole_word(0u),
														    0u);
  PORT_decode.set_bits_in_word(4095u & (((((tUInt32)(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d45)) << 8u) | (((tUInt32)(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_THEN_IF__ETC___d73)) << 4u)) | (tUInt32)(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192.get_bits_in_word8(3u,
																																					    0u,
																																					    4u))),
			       3u,
			       0u,
			       12u).set_whole_word(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192.get_whole_word(2u),
						   2u).set_whole_word(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192.get_whole_word(1u),
								      1u).set_whole_word(DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192.get_whole_word(0u),
											 0u);
  return PORT_decode;
}

tUInt8 MOD_module_decode::METH_RDY_decode()
{
  tUInt8 PORT_RDY_decode;
  tUInt8 DEF_CAN_FIRE_decode;
  DEF_CAN_FIRE_decode = (tUInt8)1u;
  PORT_RDY_decode = DEF_CAN_FIRE_decode;
  return PORT_RDY_decode;
}


/* Reset routines */


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */


/* State dumping routine */
void MOD_module_decode::dump_state(unsigned int indent)
{
}


/* VCD dumping routines */

unsigned int MOD_module_decode::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 4u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, num++, "IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192", 100u);
  vcd_write_def(sim_hdl, num++, "decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191", 91u);
  vcd_write_def(sim_hdl, num++, "decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190", 79u);
  vcd_write_def(sim_hdl, num++, "decode", 108u);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_module_decode::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_module_decode &backing)
{
  vcd_defs(dt, backing);
}

void MOD_module_decode::vcd_defs(tVCDDumpType dt, MOD_module_decode &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 100u);
    vcd_write_x(sim_hdl, num++, 91u);
    vcd_write_x(sim_hdl, num++, 79u);
    vcd_write_x(sim_hdl, num++, 108u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192) != DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192)
      {
	vcd_write_val(sim_hdl, num, DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192, 100u);
	backing.DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192 = DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192;
      }
      ++num;
      if ((backing.DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191) != DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191)
      {
	vcd_write_val(sim_hdl, num, DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191, 91u);
	backing.DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191 = DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191;
      }
      ++num;
      if ((backing.DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190) != DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190)
      {
	vcd_write_val(sim_hdl, num, DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190, 79u);
	backing.DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190 = DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190;
      }
      ++num;
      if ((backing.PORT_decode) != PORT_decode)
      {
	vcd_write_val(sim_hdl, num, PORT_decode, 108u);
	backing.PORT_decode = PORT_decode;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192, 100u);
      backing.DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192 = DEF_IF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decod_ETC___d192;
      vcd_write_val(sim_hdl, num++, DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191, 91u);
      backing.DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191 = DEF_decode_inst_BITS_6_TO_0_EQ_0b10011_OR_decode_i_ETC___d191;
      vcd_write_val(sim_hdl, num++, DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190, 79u);
      backing.DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190 = DEF_decode_inst_BITS_6_TO_0_EQ_0b1110011_8_CONCAT__ETC___d190;
      vcd_write_val(sim_hdl, num++, PORT_decode, 108u);
      backing.PORT_decode = PORT_decode;
    }
}
