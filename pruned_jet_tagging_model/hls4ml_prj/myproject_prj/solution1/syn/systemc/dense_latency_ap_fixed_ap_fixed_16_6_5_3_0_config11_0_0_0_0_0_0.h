// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0_HH_
#define _dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_mul_16s_10s_26_2_0.h"
#include "myproject_mul_16s_12ns_26_2_0.h"
#include "myproject_mul_16s_11s_26_2_0.h"
#include "myproject_mul_16s_12s_26_2_0.h"
#include "myproject_mul_16s_11ns_26_2_0.h"
#include "myproject_mul_16s_10ns_26_2_0.h"

namespace ap_rtl {

struct dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0 : public sc_module {
    // Port declarations 37
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<16> > data_0_V_read;
    sc_in< sc_lv<16> > data_1_V_read;
    sc_in< sc_lv<16> > data_2_V_read;
    sc_in< sc_lv<16> > data_3_V_read;
    sc_in< sc_lv<16> > data_4_V_read;
    sc_in< sc_lv<16> > data_5_V_read;
    sc_in< sc_lv<16> > data_6_V_read;
    sc_in< sc_lv<16> > data_7_V_read;
    sc_in< sc_lv<16> > data_8_V_read;
    sc_in< sc_lv<16> > data_9_V_read;
    sc_in< sc_lv<16> > data_10_V_read;
    sc_in< sc_lv<16> > data_11_V_read;
    sc_in< sc_lv<16> > data_12_V_read;
    sc_in< sc_lv<16> > data_13_V_read;
    sc_in< sc_lv<16> > data_14_V_read;
    sc_in< sc_lv<16> > data_15_V_read;
    sc_in< sc_lv<16> > data_16_V_read;
    sc_in< sc_lv<16> > data_18_V_read;
    sc_in< sc_lv<16> > data_20_V_read;
    sc_in< sc_lv<16> > data_21_V_read;
    sc_in< sc_lv<16> > data_22_V_read;
    sc_in< sc_lv<16> > data_23_V_read;
    sc_in< sc_lv<16> > data_24_V_read;
    sc_in< sc_lv<16> > data_25_V_read;
    sc_in< sc_lv<16> > data_26_V_read;
    sc_in< sc_lv<16> > data_27_V_read;
    sc_in< sc_lv<16> > data_28_V_read;
    sc_in< sc_lv<16> > data_29_V_read;
    sc_in< sc_lv<16> > data_31_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_out< sc_lv<16> > ap_return_2;
    sc_out< sc_lv<16> > ap_return_3;
    sc_out< sc_lv<16> > ap_return_4;
    sc_in< sc_logic > ap_ce;


    // Module declarations
    dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0(sc_module_name name);
    SC_HAS_PROCESS(dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0);

    ~dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config11_0_0_0_0_0_0();

    sc_trace_file* mVcdFile;

    myproject_mul_16s_10s_26_2_0<1,2,16,10,26>* myproject_mul_16s_10s_26_2_0_U1126;
    myproject_mul_16s_12ns_26_2_0<1,2,16,12,26>* myproject_mul_16s_12ns_26_2_0_U1127;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1128;
    myproject_mul_16s_10s_26_2_0<1,2,16,10,26>* myproject_mul_16s_10s_26_2_0_U1129;
    myproject_mul_16s_10s_26_2_0<1,2,16,10,26>* myproject_mul_16s_10s_26_2_0_U1130;
    myproject_mul_16s_12s_26_2_0<1,2,16,12,26>* myproject_mul_16s_12s_26_2_0_U1131;
    myproject_mul_16s_12s_26_2_0<1,2,16,12,26>* myproject_mul_16s_12s_26_2_0_U1132;
    myproject_mul_16s_12ns_26_2_0<1,2,16,12,26>* myproject_mul_16s_12ns_26_2_0_U1133;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1134;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1135;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1136;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1137;
    myproject_mul_16s_11ns_26_2_0<1,2,16,11,26>* myproject_mul_16s_11ns_26_2_0_U1138;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1139;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1140;
    myproject_mul_16s_12s_26_2_0<1,2,16,12,26>* myproject_mul_16s_12s_26_2_0_U1141;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1142;
    myproject_mul_16s_10s_26_2_0<1,2,16,10,26>* myproject_mul_16s_10s_26_2_0_U1143;
    myproject_mul_16s_11ns_26_2_0<1,2,16,11,26>* myproject_mul_16s_11ns_26_2_0_U1144;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1145;
    myproject_mul_16s_10s_26_2_0<1,2,16,10,26>* myproject_mul_16s_10s_26_2_0_U1146;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1147;
    myproject_mul_16s_10s_26_2_0<1,2,16,10,26>* myproject_mul_16s_10s_26_2_0_U1148;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1149;
    myproject_mul_16s_11ns_26_2_0<1,2,16,11,26>* myproject_mul_16s_11ns_26_2_0_U1150;
    myproject_mul_16s_11ns_26_2_0<1,2,16,11,26>* myproject_mul_16s_11ns_26_2_0_U1151;
    myproject_mul_16s_11ns_26_2_0<1,2,16,11,26>* myproject_mul_16s_11ns_26_2_0_U1152;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1153;
    myproject_mul_16s_10s_26_2_0<1,2,16,10,26>* myproject_mul_16s_10s_26_2_0_U1154;
    myproject_mul_16s_12s_26_2_0<1,2,16,12,26>* myproject_mul_16s_12s_26_2_0_U1155;
    myproject_mul_16s_12s_26_2_0<1,2,16,12,26>* myproject_mul_16s_12s_26_2_0_U1156;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1157;
    myproject_mul_16s_11s_26_2_0<1,2,16,11,26>* myproject_mul_16s_11s_26_2_0_U1158;
    myproject_mul_16s_11ns_26_2_0<1,2,16,11,26>* myproject_mul_16s_11ns_26_2_0_U1159;
    myproject_mul_16s_10s_26_2_0<1,2,16,10,26>* myproject_mul_16s_10s_26_2_0_U1160;
    myproject_mul_16s_10ns_26_2_0<1,2,16,10,26>* myproject_mul_16s_10ns_26_2_0_U1161;
    myproject_mul_16s_11ns_26_2_0<1,2,16,11,26>* myproject_mul_16s_11ns_26_2_0_U1162;
    myproject_mul_16s_10s_26_2_0<1,2,16,10,26>* myproject_mul_16s_10s_26_2_0_U1163;
    sc_signal< sc_lv<16> > data_31_V_read_4_reg_7131;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<16> > data_16_V_read_4_reg_7136;
    sc_signal< sc_lv<16> > data_9_V_read_4_reg_7141;
    sc_signal< sc_lv<16> > data_5_V_read_4_reg_7147;
    sc_signal< sc_lv<16> > data_1_V_read_5_reg_7152;
    sc_signal< sc_lv<26> > sext_ln1118_fu_6323_p1;
    sc_signal< sc_lv<26> > sext_ln1118_2_fu_6329_p1;
    sc_signal< sc_lv<26> > sext_ln1118_3_fu_6335_p1;
    sc_signal< sc_lv<26> > sext_ln1118_4_fu_6341_p1;
    sc_signal< sc_lv<26> > sext_ln1118_7_fu_6352_p1;
    sc_signal< sc_lv<26> > sext_ln1118_15_fu_6383_p1;
    sc_signal< sc_lv<26> > sext_ln1118_21_fu_6409_p1;
    sc_signal< sc_lv<26> > sext_ln1118_23_fu_6420_p1;
    sc_signal< sc_lv<26> > sext_ln1118_24_fu_6426_p1;
    sc_signal< sc_lv<26> > sext_ln1118_25_fu_6432_p1;
    sc_signal< sc_lv<26> > sext_ln1118_27_fu_6443_p1;
    sc_signal< sc_lv<16> > mult_3_V_reg_7289;
    sc_signal< sc_lv<16> > mult_4_V_reg_7294;
    sc_signal< sc_lv<16> > mult_9_V_reg_7299;
    sc_signal< sc_lv<16> > mult_10_V_reg_7304;
    sc_signal< sc_lv<16> > mult_13_V_reg_7309;
    sc_signal< sc_lv<16> > mult_16_V_reg_7314;
    sc_signal< sc_lv<16> > mult_18_V_reg_7319;
    sc_signal< sc_lv<16> > mult_23_V_reg_7324;
    sc_signal< sc_lv<16> > mult_24_V_reg_7329;
    sc_signal< sc_lv<16> > mult_30_V_reg_7339;
    sc_signal< sc_lv<16> > mult_38_V_reg_7344;
    sc_signal< sc_lv<16> > mult_39_V_reg_7349;
    sc_signal< sc_lv<16> > mult_41_V_reg_7354;
    sc_signal< sc_lv<16> > mult_49_V_reg_7359;
    sc_signal< sc_lv<16> > mult_53_V_reg_7364;
    sc_signal< sc_lv<16> > mult_57_V_reg_7369;
    sc_signal< sc_lv<16> > mult_64_V_reg_7374;
    sc_signal< sc_lv<16> > mult_69_V_reg_7379;
    sc_signal< sc_lv<16> > trunc_ln_reg_7384;
    sc_signal< sc_lv<16> > trunc_ln708_5_reg_7389;
    sc_signal< sc_lv<16> > trunc_ln708_6_reg_7394;
    sc_signal< sc_lv<16> > trunc_ln708_8_reg_7404;
    sc_signal< sc_lv<16> > trunc_ln708_9_reg_7409;
    sc_signal< sc_lv<16> > trunc_ln708_s_reg_7414;
    sc_signal< sc_lv<16> > trunc_ln708_1_reg_7419;
    sc_signal< sc_lv<16> > trunc_ln708_1_reg_7419_pp0_iter2_reg;
    sc_signal< sc_lv<16> > trunc_ln708_2_reg_7424;
    sc_signal< sc_lv<16> > trunc_ln708_3_reg_7429;
    sc_signal< sc_lv<16> > trunc_ln708_4_reg_7434;
    sc_signal< sc_lv<16> > trunc_ln708_4_reg_7434_pp0_iter2_reg;
    sc_signal< sc_lv<16> > trunc_ln708_10_reg_7439;
    sc_signal< sc_lv<16> > trunc_ln708_11_reg_7444;
    sc_signal< sc_lv<16> > trunc_ln708_12_reg_7449;
    sc_signal< sc_lv<16> > trunc_ln708_12_reg_7449_pp0_iter2_reg;
    sc_signal< sc_lv<16> > trunc_ln708_13_reg_7454;
    sc_signal< sc_lv<16> > trunc_ln708_14_reg_7459;
    sc_signal< sc_lv<16> > trunc_ln708_14_reg_7459_pp0_iter2_reg;
    sc_signal< sc_lv<16> > trunc_ln708_15_reg_7464;
    sc_signal< sc_lv<16> > trunc_ln708_16_reg_7469;
    sc_signal< sc_lv<16> > trunc_ln708_17_reg_7474;
    sc_signal< sc_lv<16> > trunc_ln708_17_reg_7474_pp0_iter2_reg;
    sc_signal< sc_lv<16> > trunc_ln708_18_reg_7479;
    sc_signal< sc_lv<16> > mult_29_V_reg_7489;
    sc_signal< sc_lv<16> > trunc_ln708_7_reg_7494;
    sc_signal< sc_lv<16> > trunc_ln708_19_reg_7499;
    sc_signal< sc_lv<16> > add_ln703_1_fu_6928_p2;
    sc_signal< sc_lv<16> > add_ln703_1_reg_7504;
    sc_signal< sc_lv<16> > add_ln703_2_fu_6933_p2;
    sc_signal< sc_lv<16> > add_ln703_2_reg_7509;
    sc_signal< sc_lv<16> > add_ln703_6_fu_6942_p2;
    sc_signal< sc_lv<16> > add_ln703_6_reg_7514;
    sc_signal< sc_lv<16> > add_ln703_7_fu_6947_p2;
    sc_signal< sc_lv<16> > add_ln703_7_reg_7519;
    sc_signal< sc_lv<16> > add_ln703_10_fu_6952_p2;
    sc_signal< sc_lv<16> > add_ln703_10_reg_7524;
    sc_signal< sc_lv<16> > add_ln703_11_fu_6956_p2;
    sc_signal< sc_lv<16> > add_ln703_11_reg_7529;
    sc_signal< sc_lv<16> > add_ln703_15_fu_6965_p2;
    sc_signal< sc_lv<16> > add_ln703_15_reg_7534;
    sc_signal< sc_lv<16> > add_ln703_16_fu_6970_p2;
    sc_signal< sc_lv<16> > add_ln703_16_reg_7539;
    sc_signal< sc_lv<16> > add_ln703_17_fu_6974_p2;
    sc_signal< sc_lv<16> > add_ln703_17_reg_7544;
    sc_signal< sc_lv<16> > add_ln703_20_fu_6978_p2;
    sc_signal< sc_lv<16> > add_ln703_20_reg_7549;
    sc_signal< sc_lv<16> > add_ln703_23_fu_6982_p2;
    sc_signal< sc_lv<16> > add_ln703_23_reg_7554;
    sc_signal< sc_lv<16> > add_ln703_29_fu_6990_p2;
    sc_signal< sc_lv<16> > add_ln703_29_reg_7559;
    sc_signal< sc_lv<16> > add_ln703_30_fu_6995_p2;
    sc_signal< sc_lv<16> > add_ln703_30_reg_7564;
    sc_signal< sc_lv<16> > add_ln703_34_fu_7003_p2;
    sc_signal< sc_lv<16> > add_ln703_34_reg_7569;
    sc_signal< sc_lv<16> > add_ln703_34_reg_7569_pp0_iter3_reg;
    sc_signal< sc_lv<16> > add_ln703_35_fu_7008_p2;
    sc_signal< sc_lv<16> > add_ln703_35_reg_7574;
    sc_signal< sc_lv<16> > add_ln703_4_fu_7016_p2;
    sc_signal< sc_lv<16> > add_ln703_4_reg_7579;
    sc_signal< sc_lv<16> > acc_1_V_fu_7025_p2;
    sc_signal< sc_lv<16> > acc_1_V_reg_7584;
    sc_signal< sc_lv<16> > acc_2_V_fu_7034_p2;
    sc_signal< sc_lv<16> > acc_2_V_reg_7589;
    sc_signal< sc_lv<16> > add_ln703_19_fu_7043_p2;
    sc_signal< sc_lv<16> > add_ln703_19_reg_7594;
    sc_signal< sc_lv<16> > add_ln703_22_fu_7052_p2;
    sc_signal< sc_lv<16> > add_ln703_22_reg_7599;
    sc_signal< sc_lv<16> > add_ln703_25_fu_7062_p2;
    sc_signal< sc_lv<16> > add_ln703_25_reg_7604;
    sc_signal< sc_lv<16> > add_ln703_32_fu_7071_p2;
    sc_signal< sc_lv<16> > add_ln703_32_reg_7609;
    sc_signal< sc_lv<16> > add_ln703_37_fu_7081_p2;
    sc_signal< sc_lv<16> > add_ln703_37_reg_7614;
    sc_signal< sc_lv<16> > grp_fu_356_p0;
    sc_signal< sc_lv<10> > grp_fu_356_p1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<12> > grp_fu_357_p1;
    sc_signal< sc_lv<16> > grp_fu_358_p0;
    sc_signal< sc_lv<11> > grp_fu_358_p1;
    sc_signal< sc_lv<10> > grp_fu_359_p1;
    sc_signal< sc_lv<16> > grp_fu_360_p0;
    sc_signal< sc_lv<10> > grp_fu_360_p1;
    sc_signal< sc_lv<12> > grp_fu_361_p1;
    sc_signal< sc_lv<12> > grp_fu_362_p1;
    sc_signal< sc_lv<16> > grp_fu_363_p0;
    sc_signal< sc_lv<12> > grp_fu_363_p1;
    sc_signal< sc_lv<11> > grp_fu_364_p1;
    sc_signal< sc_lv<16> > grp_fu_365_p0;
    sc_signal< sc_lv<11> > grp_fu_365_p1;
    sc_signal< sc_lv<11> > grp_fu_366_p1;
    sc_signal< sc_lv<16> > grp_fu_367_p0;
    sc_signal< sc_lv<11> > grp_fu_367_p1;
    sc_signal< sc_lv<16> > grp_fu_368_p0;
    sc_signal< sc_lv<11> > grp_fu_368_p1;
    sc_signal< sc_lv<11> > grp_fu_369_p1;
    sc_signal< sc_lv<11> > grp_fu_370_p1;
    sc_signal< sc_lv<16> > grp_fu_371_p0;
    sc_signal< sc_lv<12> > grp_fu_371_p1;
    sc_signal< sc_lv<11> > grp_fu_372_p1;
    sc_signal< sc_lv<16> > grp_fu_373_p0;
    sc_signal< sc_lv<10> > grp_fu_373_p1;
    sc_signal< sc_lv<16> > grp_fu_374_p0;
    sc_signal< sc_lv<11> > grp_fu_374_p1;
    sc_signal< sc_lv<11> > grp_fu_375_p1;
    sc_signal< sc_lv<10> > grp_fu_376_p1;
    sc_signal< sc_lv<16> > grp_fu_377_p0;
    sc_signal< sc_lv<11> > grp_fu_377_p1;
    sc_signal< sc_lv<16> > grp_fu_379_p0;
    sc_signal< sc_lv<10> > grp_fu_379_p1;
    sc_signal< sc_lv<11> > grp_fu_380_p1;
    sc_signal< sc_lv<16> > grp_fu_381_p0;
    sc_signal< sc_lv<11> > grp_fu_381_p1;
    sc_signal< sc_lv<16> > grp_fu_382_p0;
    sc_signal< sc_lv<11> > grp_fu_382_p1;
    sc_signal< sc_lv<16> > grp_fu_383_p0;
    sc_signal< sc_lv<11> > grp_fu_383_p1;
    sc_signal< sc_lv<11> > grp_fu_384_p1;
    sc_signal< sc_lv<10> > grp_fu_385_p1;
    sc_signal< sc_lv<12> > grp_fu_386_p1;
    sc_signal< sc_lv<12> > grp_fu_387_p1;
    sc_signal< sc_lv<16> > grp_fu_388_p0;
    sc_signal< sc_lv<11> > grp_fu_388_p1;
    sc_signal< sc_lv<16> > grp_fu_389_p0;
    sc_signal< sc_lv<11> > grp_fu_389_p1;
    sc_signal< sc_lv<16> > grp_fu_390_p0;
    sc_signal< sc_lv<11> > grp_fu_390_p1;
    sc_signal< sc_lv<16> > grp_fu_392_p0;
    sc_signal< sc_lv<10> > grp_fu_392_p1;
    sc_signal< sc_lv<16> > grp_fu_393_p0;
    sc_signal< sc_lv<10> > grp_fu_393_p1;
    sc_signal< sc_lv<16> > grp_fu_394_p0;
    sc_signal< sc_lv<11> > grp_fu_394_p1;
    sc_signal< sc_lv<16> > grp_fu_395_p0;
    sc_signal< sc_lv<10> > grp_fu_395_p1;
    sc_signal< sc_lv<26> > grp_fu_392_p2;
    sc_signal< sc_lv<26> > grp_fu_390_p2;
    sc_signal< sc_lv<24> > shl_ln1118_s_fu_6481_p3;
    sc_signal< sc_lv<26> > shl_ln_fu_6474_p3;
    sc_signal< sc_lv<26> > sext_ln1118_1_fu_6488_p1;
    sc_signal< sc_lv<26> > sub_ln1118_fu_6492_p2;
    sc_signal< sc_lv<26> > grp_fu_363_p2;
    sc_signal< sc_lv<26> > grp_fu_388_p2;
    sc_signal< sc_lv<26> > grp_fu_382_p2;
    sc_signal< sc_lv<26> > grp_fu_377_p2;
    sc_signal< sc_lv<26> > grp_fu_367_p2;
    sc_signal< sc_lv<26> > grp_fu_381_p2;
    sc_signal< sc_lv<26> > grp_fu_370_p2;
    sc_signal< sc_lv<26> > grp_fu_394_p2;
    sc_signal< sc_lv<26> > grp_fu_371_p2;
    sc_signal< sc_lv<26> > grp_fu_376_p2;
    sc_signal< sc_lv<25> > shl_ln1118_1_fu_6612_p3;
    sc_signal< sc_lv<26> > sext_ln1118_9_fu_6619_p1;
    sc_signal< sc_lv<21> > shl_ln1118_2_fu_6629_p3;
    sc_signal< sc_lv<26> > sub_ln1118_1_fu_6623_p2;
    sc_signal< sc_lv<26> > sext_ln1118_10_fu_6636_p1;
    sc_signal< sc_lv<26> > sub_ln1118_2_fu_6640_p2;
    sc_signal< sc_lv<26> > grp_fu_359_p2;
    sc_signal< sc_lv<26> > grp_fu_380_p2;
    sc_signal< sc_lv<26> > grp_fu_384_p2;
    sc_signal< sc_lv<26> > grp_fu_366_p2;
    sc_signal< sc_lv<26> > grp_fu_356_p2;
    sc_signal< sc_lv<26> > grp_fu_374_p2;
    sc_signal< sc_lv<26> > grp_fu_372_p2;
    sc_signal< sc_lv<26> > grp_fu_369_p2;
    sc_signal< sc_lv<26> > grp_fu_364_p2;
    sc_signal< sc_lv<26> > grp_fu_386_p2;
    sc_signal< sc_lv<26> > grp_fu_368_p2;
    sc_signal< sc_lv<26> > grp_fu_360_p2;
    sc_signal< sc_lv<26> > grp_fu_361_p2;
    sc_signal< sc_lv<26> > grp_fu_373_p2;
    sc_signal< sc_lv<26> > grp_fu_365_p2;
    sc_signal< sc_lv<26> > grp_fu_358_p2;
    sc_signal< sc_lv<26> > grp_fu_389_p2;
    sc_signal< sc_lv<26> > grp_fu_379_p2;
    sc_signal< sc_lv<26> > grp_fu_393_p2;
    sc_signal< sc_lv<26> > grp_fu_385_p2;
    sc_signal< sc_lv<26> > grp_fu_395_p2;
    sc_signal< sc_lv<26> > grp_fu_383_p2;
    sc_signal< sc_lv<26> > grp_fu_362_p2;
    sc_signal< sc_lv<26> > grp_fu_375_p2;
    sc_signal< sc_lv<26> > grp_fu_357_p2;
    sc_signal< sc_lv<26> > grp_fu_387_p2;
    sc_signal< sc_lv<16> > add_ln703_fu_6924_p2;
    sc_signal< sc_lv<16> > add_ln703_5_fu_6938_p2;
    sc_signal< sc_lv<16> > add_ln703_14_fu_6961_p2;
    sc_signal< sc_lv<16> > add_ln703_28_fu_6986_p2;
    sc_signal< sc_lv<16> > add_ln703_33_fu_6999_p2;
    sc_signal< sc_lv<16> > add_ln703_3_fu_7012_p2;
    sc_signal< sc_lv<16> > add_ln703_8_fu_7021_p2;
    sc_signal< sc_lv<16> > add_ln703_12_fu_7030_p2;
    sc_signal< sc_lv<16> > add_ln703_18_fu_7039_p2;
    sc_signal< sc_lv<16> > add_ln703_21_fu_7048_p2;
    sc_signal< sc_lv<16> > add_ln703_24_fu_7057_p2;
    sc_signal< sc_lv<16> > add_ln703_31_fu_7067_p2;
    sc_signal< sc_lv<16> > add_ln703_36_fu_7076_p2;
    sc_signal< sc_lv<16> > add_ln703_26_fu_7086_p2;
    sc_signal< sc_lv<16> > add_ln703_38_fu_7095_p2;
    sc_signal< sc_lv<16> > acc_3_V_fu_7090_p2;
    sc_signal< sc_lv<16> > acc_4_V_fu_7099_p2;
    sc_signal< sc_logic > grp_fu_356_ce;
    sc_signal< sc_logic > grp_fu_357_ce;
    sc_signal< sc_logic > grp_fu_358_ce;
    sc_signal< sc_logic > grp_fu_359_ce;
    sc_signal< sc_logic > grp_fu_360_ce;
    sc_signal< sc_logic > grp_fu_361_ce;
    sc_signal< sc_logic > grp_fu_362_ce;
    sc_signal< sc_logic > grp_fu_363_ce;
    sc_signal< sc_logic > grp_fu_364_ce;
    sc_signal< sc_logic > grp_fu_365_ce;
    sc_signal< sc_logic > grp_fu_366_ce;
    sc_signal< sc_logic > grp_fu_367_ce;
    sc_signal< sc_logic > grp_fu_368_ce;
    sc_signal< sc_logic > grp_fu_369_ce;
    sc_signal< sc_logic > grp_fu_370_ce;
    sc_signal< sc_logic > grp_fu_371_ce;
    sc_signal< sc_logic > grp_fu_372_ce;
    sc_signal< sc_logic > grp_fu_373_ce;
    sc_signal< sc_logic > grp_fu_374_ce;
    sc_signal< sc_logic > grp_fu_375_ce;
    sc_signal< sc_logic > grp_fu_376_ce;
    sc_signal< sc_logic > grp_fu_377_ce;
    sc_signal< sc_logic > grp_fu_379_ce;
    sc_signal< sc_logic > grp_fu_380_ce;
    sc_signal< sc_logic > grp_fu_381_ce;
    sc_signal< sc_logic > grp_fu_382_ce;
    sc_signal< sc_logic > grp_fu_383_ce;
    sc_signal< sc_logic > grp_fu_384_ce;
    sc_signal< sc_logic > grp_fu_385_ce;
    sc_signal< sc_logic > grp_fu_386_ce;
    sc_signal< sc_logic > grp_fu_387_ce;
    sc_signal< sc_logic > grp_fu_388_ce;
    sc_signal< sc_logic > grp_fu_389_ce;
    sc_signal< sc_logic > grp_fu_390_ce;
    sc_signal< sc_logic > grp_fu_392_ce;
    sc_signal< sc_logic > grp_fu_393_ce;
    sc_signal< sc_logic > grp_fu_394_ce;
    sc_signal< sc_logic > grp_fu_395_ce;
    sc_signal< sc_logic > ap_ce_reg;
    sc_signal< sc_lv<16> > data_0_V_read_int_reg;
    sc_signal< sc_lv<16> > data_1_V_read_int_reg;
    sc_signal< sc_lv<16> > data_2_V_read_int_reg;
    sc_signal< sc_lv<16> > data_3_V_read_int_reg;
    sc_signal< sc_lv<16> > data_4_V_read_int_reg;
    sc_signal< sc_lv<16> > data_5_V_read_int_reg;
    sc_signal< sc_lv<16> > data_6_V_read_int_reg;
    sc_signal< sc_lv<16> > data_7_V_read_int_reg;
    sc_signal< sc_lv<16> > data_8_V_read_int_reg;
    sc_signal< sc_lv<16> > data_9_V_read_int_reg;
    sc_signal< sc_lv<16> > data_10_V_read_int_reg;
    sc_signal< sc_lv<16> > data_11_V_read_int_reg;
    sc_signal< sc_lv<16> > data_12_V_read_int_reg;
    sc_signal< sc_lv<16> > data_13_V_read_int_reg;
    sc_signal< sc_lv<16> > data_14_V_read_int_reg;
    sc_signal< sc_lv<16> > data_15_V_read_int_reg;
    sc_signal< sc_lv<16> > data_16_V_read_int_reg;
    sc_signal< sc_lv<16> > data_18_V_read_int_reg;
    sc_signal< sc_lv<16> > data_20_V_read_int_reg;
    sc_signal< sc_lv<16> > data_21_V_read_int_reg;
    sc_signal< sc_lv<16> > data_22_V_read_int_reg;
    sc_signal< sc_lv<16> > data_23_V_read_int_reg;
    sc_signal< sc_lv<16> > data_24_V_read_int_reg;
    sc_signal< sc_lv<16> > data_25_V_read_int_reg;
    sc_signal< sc_lv<16> > data_26_V_read_int_reg;
    sc_signal< sc_lv<16> > data_27_V_read_int_reg;
    sc_signal< sc_lv<16> > data_28_V_read_int_reg;
    sc_signal< sc_lv<16> > data_29_V_read_int_reg;
    sc_signal< sc_lv<16> > data_31_V_read_int_reg;
    sc_signal< sc_lv<16> > ap_return_0_int_reg;
    sc_signal< sc_lv<16> > ap_return_1_int_reg;
    sc_signal< sc_lv<16> > ap_return_2_int_reg;
    sc_signal< sc_lv<16> > ap_return_3_int_reg;
    sc_signal< sc_lv<16> > ap_return_4_int_reg;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<26> ap_const_lv26_3FFFE79;
    static const sc_lv<26> ap_const_lv26_424;
    static const sc_lv<26> ap_const_lv26_3FFFDBD;
    static const sc_lv<26> ap_const_lv26_3FFFE07;
    static const sc_lv<26> ap_const_lv26_3FFFE7E;
    static const sc_lv<26> ap_const_lv26_3FFFB5B;
    static const sc_lv<26> ap_const_lv26_3FFFBEE;
    static const sc_lv<26> ap_const_lv26_455;
    static const sc_lv<26> ap_const_lv26_3FFFCCB;
    static const sc_lv<26> ap_const_lv26_3FFFC2F;
    static const sc_lv<26> ap_const_lv26_3FFFD6A;
    static const sc_lv<26> ap_const_lv26_3FFFD26;
    static const sc_lv<26> ap_const_lv26_252;
    static const sc_lv<26> ap_const_lv26_3FFFCF1;
    static const sc_lv<26> ap_const_lv26_3FFFD4F;
    static const sc_lv<26> ap_const_lv26_3FFFAEC;
    static const sc_lv<26> ap_const_lv26_3FFFD4C;
    static const sc_lv<26> ap_const_lv26_3FFFE05;
    static const sc_lv<26> ap_const_lv26_26A;
    static const sc_lv<26> ap_const_lv26_3FFFC8B;
    static const sc_lv<26> ap_const_lv26_3FFFE54;
    static const sc_lv<26> ap_const_lv26_3FFFDCF;
    static const sc_lv<26> ap_const_lv26_3FFFE2E;
    static const sc_lv<26> ap_const_lv26_3FFFCF4;
    static const sc_lv<26> ap_const_lv26_2DC;
    static const sc_lv<26> ap_const_lv26_236;
    static const sc_lv<26> ap_const_lv26_34C;
    static const sc_lv<26> ap_const_lv26_3FFFDF7;
    static const sc_lv<26> ap_const_lv26_3FFFB98;
    static const sc_lv<26> ap_const_lv26_3FFFAB8;
    static const sc_lv<26> ap_const_lv26_3FFFD8F;
    static const sc_lv<26> ap_const_lv26_3FFFD9A;
    static const sc_lv<26> ap_const_lv26_33C;
    static const sc_lv<26> ap_const_lv26_3FFFE29;
    static const sc_lv<26> ap_const_lv26_1F5;
    static const sc_lv<26> ap_const_lv26_2CA;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<26> ap_const_lv26_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<16> ap_const_lv16_FF72;
    static const sc_lv<16> ap_const_lv16_FFAB;
    static const sc_lv<16> ap_const_lv16_8F;
    static const sc_lv<16> ap_const_lv16_6F;
    static const sc_lv<16> ap_const_lv16_FFC9;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_1_V_fu_7025_p2();
    void thread_acc_2_V_fu_7034_p2();
    void thread_acc_3_V_fu_7090_p2();
    void thread_acc_4_V_fu_7099_p2();
    void thread_add_ln703_10_fu_6952_p2();
    void thread_add_ln703_11_fu_6956_p2();
    void thread_add_ln703_12_fu_7030_p2();
    void thread_add_ln703_14_fu_6961_p2();
    void thread_add_ln703_15_fu_6965_p2();
    void thread_add_ln703_16_fu_6970_p2();
    void thread_add_ln703_17_fu_6974_p2();
    void thread_add_ln703_18_fu_7039_p2();
    void thread_add_ln703_19_fu_7043_p2();
    void thread_add_ln703_1_fu_6928_p2();
    void thread_add_ln703_20_fu_6978_p2();
    void thread_add_ln703_21_fu_7048_p2();
    void thread_add_ln703_22_fu_7052_p2();
    void thread_add_ln703_23_fu_6982_p2();
    void thread_add_ln703_24_fu_7057_p2();
    void thread_add_ln703_25_fu_7062_p2();
    void thread_add_ln703_26_fu_7086_p2();
    void thread_add_ln703_28_fu_6986_p2();
    void thread_add_ln703_29_fu_6990_p2();
    void thread_add_ln703_2_fu_6933_p2();
    void thread_add_ln703_30_fu_6995_p2();
    void thread_add_ln703_31_fu_7067_p2();
    void thread_add_ln703_32_fu_7071_p2();
    void thread_add_ln703_33_fu_6999_p2();
    void thread_add_ln703_34_fu_7003_p2();
    void thread_add_ln703_35_fu_7008_p2();
    void thread_add_ln703_36_fu_7076_p2();
    void thread_add_ln703_37_fu_7081_p2();
    void thread_add_ln703_38_fu_7095_p2();
    void thread_add_ln703_3_fu_7012_p2();
    void thread_add_ln703_4_fu_7016_p2();
    void thread_add_ln703_5_fu_6938_p2();
    void thread_add_ln703_6_fu_6942_p2();
    void thread_add_ln703_7_fu_6947_p2();
    void thread_add_ln703_8_fu_7021_p2();
    void thread_add_ln703_fu_6924_p2();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state4_pp0_stage0_iter3();
    void thread_ap_block_state5_pp0_stage0_iter4();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_grp_fu_356_ce();
    void thread_grp_fu_356_p0();
    void thread_grp_fu_356_p1();
    void thread_grp_fu_357_ce();
    void thread_grp_fu_357_p1();
    void thread_grp_fu_358_ce();
    void thread_grp_fu_358_p0();
    void thread_grp_fu_358_p1();
    void thread_grp_fu_359_ce();
    void thread_grp_fu_359_p1();
    void thread_grp_fu_360_ce();
    void thread_grp_fu_360_p0();
    void thread_grp_fu_360_p1();
    void thread_grp_fu_361_ce();
    void thread_grp_fu_361_p1();
    void thread_grp_fu_362_ce();
    void thread_grp_fu_362_p1();
    void thread_grp_fu_363_ce();
    void thread_grp_fu_363_p0();
    void thread_grp_fu_363_p1();
    void thread_grp_fu_364_ce();
    void thread_grp_fu_364_p1();
    void thread_grp_fu_365_ce();
    void thread_grp_fu_365_p0();
    void thread_grp_fu_365_p1();
    void thread_grp_fu_366_ce();
    void thread_grp_fu_366_p1();
    void thread_grp_fu_367_ce();
    void thread_grp_fu_367_p0();
    void thread_grp_fu_367_p1();
    void thread_grp_fu_368_ce();
    void thread_grp_fu_368_p0();
    void thread_grp_fu_368_p1();
    void thread_grp_fu_369_ce();
    void thread_grp_fu_369_p1();
    void thread_grp_fu_370_ce();
    void thread_grp_fu_370_p1();
    void thread_grp_fu_371_ce();
    void thread_grp_fu_371_p0();
    void thread_grp_fu_371_p1();
    void thread_grp_fu_372_ce();
    void thread_grp_fu_372_p1();
    void thread_grp_fu_373_ce();
    void thread_grp_fu_373_p0();
    void thread_grp_fu_373_p1();
    void thread_grp_fu_374_ce();
    void thread_grp_fu_374_p0();
    void thread_grp_fu_374_p1();
    void thread_grp_fu_375_ce();
    void thread_grp_fu_375_p1();
    void thread_grp_fu_376_ce();
    void thread_grp_fu_376_p1();
    void thread_grp_fu_377_ce();
    void thread_grp_fu_377_p0();
    void thread_grp_fu_377_p1();
    void thread_grp_fu_379_ce();
    void thread_grp_fu_379_p0();
    void thread_grp_fu_379_p1();
    void thread_grp_fu_380_ce();
    void thread_grp_fu_380_p1();
    void thread_grp_fu_381_ce();
    void thread_grp_fu_381_p0();
    void thread_grp_fu_381_p1();
    void thread_grp_fu_382_ce();
    void thread_grp_fu_382_p0();
    void thread_grp_fu_382_p1();
    void thread_grp_fu_383_ce();
    void thread_grp_fu_383_p0();
    void thread_grp_fu_383_p1();
    void thread_grp_fu_384_ce();
    void thread_grp_fu_384_p1();
    void thread_grp_fu_385_ce();
    void thread_grp_fu_385_p1();
    void thread_grp_fu_386_ce();
    void thread_grp_fu_386_p1();
    void thread_grp_fu_387_ce();
    void thread_grp_fu_387_p1();
    void thread_grp_fu_388_ce();
    void thread_grp_fu_388_p0();
    void thread_grp_fu_388_p1();
    void thread_grp_fu_389_ce();
    void thread_grp_fu_389_p0();
    void thread_grp_fu_389_p1();
    void thread_grp_fu_390_ce();
    void thread_grp_fu_390_p0();
    void thread_grp_fu_390_p1();
    void thread_grp_fu_392_ce();
    void thread_grp_fu_392_p0();
    void thread_grp_fu_392_p1();
    void thread_grp_fu_393_ce();
    void thread_grp_fu_393_p0();
    void thread_grp_fu_393_p1();
    void thread_grp_fu_394_ce();
    void thread_grp_fu_394_p0();
    void thread_grp_fu_394_p1();
    void thread_grp_fu_395_ce();
    void thread_grp_fu_395_p0();
    void thread_grp_fu_395_p1();
    void thread_sext_ln1118_10_fu_6636_p1();
    void thread_sext_ln1118_15_fu_6383_p1();
    void thread_sext_ln1118_1_fu_6488_p1();
    void thread_sext_ln1118_21_fu_6409_p1();
    void thread_sext_ln1118_23_fu_6420_p1();
    void thread_sext_ln1118_24_fu_6426_p1();
    void thread_sext_ln1118_25_fu_6432_p1();
    void thread_sext_ln1118_27_fu_6443_p1();
    void thread_sext_ln1118_2_fu_6329_p1();
    void thread_sext_ln1118_3_fu_6335_p1();
    void thread_sext_ln1118_4_fu_6341_p1();
    void thread_sext_ln1118_7_fu_6352_p1();
    void thread_sext_ln1118_9_fu_6619_p1();
    void thread_sext_ln1118_fu_6323_p1();
    void thread_shl_ln1118_1_fu_6612_p3();
    void thread_shl_ln1118_2_fu_6629_p3();
    void thread_shl_ln1118_s_fu_6481_p3();
    void thread_shl_ln_fu_6474_p3();
    void thread_sub_ln1118_1_fu_6623_p2();
    void thread_sub_ln1118_2_fu_6640_p2();
    void thread_sub_ln1118_fu_6492_p2();
};

}

using namespace ap_rtl;

#endif
