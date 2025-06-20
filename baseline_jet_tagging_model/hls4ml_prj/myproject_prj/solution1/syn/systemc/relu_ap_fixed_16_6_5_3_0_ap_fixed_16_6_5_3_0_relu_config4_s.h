// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config4_s_HH_
#define _relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config4_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config4_s : public sc_module {
    // Port declarations 129
    sc_out< sc_logic > ap_ready;
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
    sc_in< sc_lv<16> > data_17_V_read;
    sc_in< sc_lv<16> > data_18_V_read;
    sc_in< sc_lv<16> > data_19_V_read;
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
    sc_in< sc_lv<16> > data_30_V_read;
    sc_in< sc_lv<16> > data_31_V_read;
    sc_in< sc_lv<16> > data_32_V_read;
    sc_in< sc_lv<16> > data_33_V_read;
    sc_in< sc_lv<16> > data_34_V_read;
    sc_in< sc_lv<16> > data_35_V_read;
    sc_in< sc_lv<16> > data_36_V_read;
    sc_in< sc_lv<16> > data_37_V_read;
    sc_in< sc_lv<16> > data_38_V_read;
    sc_in< sc_lv<16> > data_39_V_read;
    sc_in< sc_lv<16> > data_40_V_read;
    sc_in< sc_lv<16> > data_41_V_read;
    sc_in< sc_lv<16> > data_42_V_read;
    sc_in< sc_lv<16> > data_43_V_read;
    sc_in< sc_lv<16> > data_44_V_read;
    sc_in< sc_lv<16> > data_45_V_read;
    sc_in< sc_lv<16> > data_46_V_read;
    sc_in< sc_lv<16> > data_47_V_read;
    sc_in< sc_lv<16> > data_48_V_read;
    sc_in< sc_lv<16> > data_49_V_read;
    sc_in< sc_lv<16> > data_50_V_read;
    sc_in< sc_lv<16> > data_51_V_read;
    sc_in< sc_lv<16> > data_52_V_read;
    sc_in< sc_lv<16> > data_53_V_read;
    sc_in< sc_lv<16> > data_54_V_read;
    sc_in< sc_lv<16> > data_55_V_read;
    sc_in< sc_lv<16> > data_56_V_read;
    sc_in< sc_lv<16> > data_57_V_read;
    sc_in< sc_lv<16> > data_58_V_read;
    sc_in< sc_lv<16> > data_59_V_read;
    sc_in< sc_lv<16> > data_60_V_read;
    sc_in< sc_lv<16> > data_61_V_read;
    sc_in< sc_lv<16> > data_62_V_read;
    sc_in< sc_lv<16> > data_63_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_out< sc_lv<16> > ap_return_2;
    sc_out< sc_lv<16> > ap_return_3;
    sc_out< sc_lv<16> > ap_return_4;
    sc_out< sc_lv<16> > ap_return_5;
    sc_out< sc_lv<16> > ap_return_6;
    sc_out< sc_lv<16> > ap_return_7;
    sc_out< sc_lv<16> > ap_return_8;
    sc_out< sc_lv<16> > ap_return_9;
    sc_out< sc_lv<16> > ap_return_10;
    sc_out< sc_lv<16> > ap_return_11;
    sc_out< sc_lv<16> > ap_return_12;
    sc_out< sc_lv<16> > ap_return_13;
    sc_out< sc_lv<16> > ap_return_14;
    sc_out< sc_lv<16> > ap_return_15;
    sc_out< sc_lv<16> > ap_return_16;
    sc_out< sc_lv<16> > ap_return_17;
    sc_out< sc_lv<16> > ap_return_18;
    sc_out< sc_lv<16> > ap_return_19;
    sc_out< sc_lv<16> > ap_return_20;
    sc_out< sc_lv<16> > ap_return_21;
    sc_out< sc_lv<16> > ap_return_22;
    sc_out< sc_lv<16> > ap_return_23;
    sc_out< sc_lv<16> > ap_return_24;
    sc_out< sc_lv<16> > ap_return_25;
    sc_out< sc_lv<16> > ap_return_26;
    sc_out< sc_lv<16> > ap_return_27;
    sc_out< sc_lv<16> > ap_return_28;
    sc_out< sc_lv<16> > ap_return_29;
    sc_out< sc_lv<16> > ap_return_30;
    sc_out< sc_lv<16> > ap_return_31;
    sc_out< sc_lv<16> > ap_return_32;
    sc_out< sc_lv<16> > ap_return_33;
    sc_out< sc_lv<16> > ap_return_34;
    sc_out< sc_lv<16> > ap_return_35;
    sc_out< sc_lv<16> > ap_return_36;
    sc_out< sc_lv<16> > ap_return_37;
    sc_out< sc_lv<16> > ap_return_38;
    sc_out< sc_lv<16> > ap_return_39;
    sc_out< sc_lv<16> > ap_return_40;
    sc_out< sc_lv<16> > ap_return_41;
    sc_out< sc_lv<16> > ap_return_42;
    sc_out< sc_lv<16> > ap_return_43;
    sc_out< sc_lv<16> > ap_return_44;
    sc_out< sc_lv<16> > ap_return_45;
    sc_out< sc_lv<16> > ap_return_46;
    sc_out< sc_lv<16> > ap_return_47;
    sc_out< sc_lv<16> > ap_return_48;
    sc_out< sc_lv<16> > ap_return_49;
    sc_out< sc_lv<16> > ap_return_50;
    sc_out< sc_lv<16> > ap_return_51;
    sc_out< sc_lv<16> > ap_return_52;
    sc_out< sc_lv<16> > ap_return_53;
    sc_out< sc_lv<16> > ap_return_54;
    sc_out< sc_lv<16> > ap_return_55;
    sc_out< sc_lv<16> > ap_return_56;
    sc_out< sc_lv<16> > ap_return_57;
    sc_out< sc_lv<16> > ap_return_58;
    sc_out< sc_lv<16> > ap_return_59;
    sc_out< sc_lv<16> > ap_return_60;
    sc_out< sc_lv<16> > ap_return_61;
    sc_out< sc_lv<16> > ap_return_62;
    sc_out< sc_lv<16> > ap_return_63;


    // Module declarations
    relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config4_s(sc_module_name name);
    SC_HAS_PROCESS(relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config4_s);

    ~relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config4_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<1> > icmp_ln1494_fu_530_p2;
    sc_signal< sc_lv<15> > trunc_ln45_fu_536_p1;
    sc_signal< sc_lv<15> > select_ln45_fu_540_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_1_fu_552_p2;
    sc_signal< sc_lv<15> > trunc_ln45_32_fu_558_p1;
    sc_signal< sc_lv<15> > select_ln45_32_fu_562_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_2_fu_574_p2;
    sc_signal< sc_lv<15> > trunc_ln45_33_fu_580_p1;
    sc_signal< sc_lv<15> > select_ln45_33_fu_584_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_3_fu_596_p2;
    sc_signal< sc_lv<15> > trunc_ln45_34_fu_602_p1;
    sc_signal< sc_lv<15> > select_ln45_34_fu_606_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_4_fu_618_p2;
    sc_signal< sc_lv<15> > trunc_ln45_35_fu_624_p1;
    sc_signal< sc_lv<15> > select_ln45_35_fu_628_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_5_fu_640_p2;
    sc_signal< sc_lv<15> > trunc_ln45_36_fu_646_p1;
    sc_signal< sc_lv<15> > select_ln45_36_fu_650_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_6_fu_662_p2;
    sc_signal< sc_lv<15> > trunc_ln45_37_fu_668_p1;
    sc_signal< sc_lv<15> > select_ln45_37_fu_672_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_7_fu_684_p2;
    sc_signal< sc_lv<15> > trunc_ln45_38_fu_690_p1;
    sc_signal< sc_lv<15> > select_ln45_38_fu_694_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_8_fu_706_p2;
    sc_signal< sc_lv<15> > trunc_ln45_39_fu_712_p1;
    sc_signal< sc_lv<15> > select_ln45_39_fu_716_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_9_fu_728_p2;
    sc_signal< sc_lv<15> > trunc_ln45_40_fu_734_p1;
    sc_signal< sc_lv<15> > select_ln45_40_fu_738_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_10_fu_750_p2;
    sc_signal< sc_lv<15> > trunc_ln45_41_fu_756_p1;
    sc_signal< sc_lv<15> > select_ln45_41_fu_760_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_11_fu_772_p2;
    sc_signal< sc_lv<15> > trunc_ln45_42_fu_778_p1;
    sc_signal< sc_lv<15> > select_ln45_42_fu_782_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_12_fu_794_p2;
    sc_signal< sc_lv<15> > trunc_ln45_43_fu_800_p1;
    sc_signal< sc_lv<15> > select_ln45_43_fu_804_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_13_fu_816_p2;
    sc_signal< sc_lv<15> > trunc_ln45_44_fu_822_p1;
    sc_signal< sc_lv<15> > select_ln45_44_fu_826_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_14_fu_838_p2;
    sc_signal< sc_lv<15> > trunc_ln45_45_fu_844_p1;
    sc_signal< sc_lv<15> > select_ln45_45_fu_848_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_15_fu_860_p2;
    sc_signal< sc_lv<15> > trunc_ln45_46_fu_866_p1;
    sc_signal< sc_lv<15> > select_ln45_46_fu_870_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_16_fu_882_p2;
    sc_signal< sc_lv<15> > trunc_ln45_47_fu_888_p1;
    sc_signal< sc_lv<15> > select_ln45_47_fu_892_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_17_fu_904_p2;
    sc_signal< sc_lv<15> > trunc_ln45_48_fu_910_p1;
    sc_signal< sc_lv<15> > select_ln45_48_fu_914_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_18_fu_926_p2;
    sc_signal< sc_lv<15> > trunc_ln45_49_fu_932_p1;
    sc_signal< sc_lv<15> > select_ln45_49_fu_936_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_19_fu_948_p2;
    sc_signal< sc_lv<15> > trunc_ln45_50_fu_954_p1;
    sc_signal< sc_lv<15> > select_ln45_50_fu_958_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_20_fu_970_p2;
    sc_signal< sc_lv<15> > trunc_ln45_51_fu_976_p1;
    sc_signal< sc_lv<15> > select_ln45_51_fu_980_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_21_fu_992_p2;
    sc_signal< sc_lv<15> > trunc_ln45_52_fu_998_p1;
    sc_signal< sc_lv<15> > select_ln45_52_fu_1002_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_22_fu_1014_p2;
    sc_signal< sc_lv<15> > trunc_ln45_53_fu_1020_p1;
    sc_signal< sc_lv<15> > select_ln45_53_fu_1024_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_23_fu_1036_p2;
    sc_signal< sc_lv<15> > trunc_ln45_54_fu_1042_p1;
    sc_signal< sc_lv<15> > select_ln45_54_fu_1046_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_24_fu_1058_p2;
    sc_signal< sc_lv<15> > trunc_ln45_55_fu_1064_p1;
    sc_signal< sc_lv<15> > select_ln45_55_fu_1068_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_25_fu_1080_p2;
    sc_signal< sc_lv<15> > trunc_ln45_56_fu_1086_p1;
    sc_signal< sc_lv<15> > select_ln45_56_fu_1090_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_26_fu_1102_p2;
    sc_signal< sc_lv<15> > trunc_ln45_57_fu_1108_p1;
    sc_signal< sc_lv<15> > select_ln45_57_fu_1112_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_27_fu_1124_p2;
    sc_signal< sc_lv<15> > trunc_ln45_58_fu_1130_p1;
    sc_signal< sc_lv<15> > select_ln45_58_fu_1134_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_28_fu_1146_p2;
    sc_signal< sc_lv<15> > trunc_ln45_59_fu_1152_p1;
    sc_signal< sc_lv<15> > select_ln45_59_fu_1156_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_29_fu_1168_p2;
    sc_signal< sc_lv<15> > trunc_ln45_60_fu_1174_p1;
    sc_signal< sc_lv<15> > select_ln45_60_fu_1178_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_30_fu_1190_p2;
    sc_signal< sc_lv<15> > trunc_ln45_61_fu_1196_p1;
    sc_signal< sc_lv<15> > select_ln45_61_fu_1200_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_31_fu_1212_p2;
    sc_signal< sc_lv<15> > trunc_ln45_62_fu_1218_p1;
    sc_signal< sc_lv<15> > select_ln45_62_fu_1222_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_32_fu_1234_p2;
    sc_signal< sc_lv<15> > trunc_ln45_63_fu_1240_p1;
    sc_signal< sc_lv<15> > select_ln45_63_fu_1244_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_33_fu_1256_p2;
    sc_signal< sc_lv<15> > trunc_ln45_64_fu_1262_p1;
    sc_signal< sc_lv<15> > select_ln45_64_fu_1266_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_34_fu_1278_p2;
    sc_signal< sc_lv<15> > trunc_ln45_65_fu_1284_p1;
    sc_signal< sc_lv<15> > select_ln45_65_fu_1288_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_35_fu_1300_p2;
    sc_signal< sc_lv<15> > trunc_ln45_66_fu_1306_p1;
    sc_signal< sc_lv<15> > select_ln45_66_fu_1310_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_36_fu_1322_p2;
    sc_signal< sc_lv<15> > trunc_ln45_67_fu_1328_p1;
    sc_signal< sc_lv<15> > select_ln45_67_fu_1332_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_37_fu_1344_p2;
    sc_signal< sc_lv<15> > trunc_ln45_68_fu_1350_p1;
    sc_signal< sc_lv<15> > select_ln45_68_fu_1354_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_38_fu_1366_p2;
    sc_signal< sc_lv<15> > trunc_ln45_69_fu_1372_p1;
    sc_signal< sc_lv<15> > select_ln45_69_fu_1376_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_39_fu_1388_p2;
    sc_signal< sc_lv<15> > trunc_ln45_70_fu_1394_p1;
    sc_signal< sc_lv<15> > select_ln45_70_fu_1398_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_40_fu_1410_p2;
    sc_signal< sc_lv<15> > trunc_ln45_71_fu_1416_p1;
    sc_signal< sc_lv<15> > select_ln45_71_fu_1420_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_41_fu_1432_p2;
    sc_signal< sc_lv<15> > trunc_ln45_72_fu_1438_p1;
    sc_signal< sc_lv<15> > select_ln45_72_fu_1442_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_42_fu_1454_p2;
    sc_signal< sc_lv<15> > trunc_ln45_73_fu_1460_p1;
    sc_signal< sc_lv<15> > select_ln45_73_fu_1464_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_43_fu_1476_p2;
    sc_signal< sc_lv<15> > trunc_ln45_74_fu_1482_p1;
    sc_signal< sc_lv<15> > select_ln45_74_fu_1486_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_44_fu_1498_p2;
    sc_signal< sc_lv<15> > trunc_ln45_75_fu_1504_p1;
    sc_signal< sc_lv<15> > select_ln45_75_fu_1508_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_45_fu_1520_p2;
    sc_signal< sc_lv<15> > trunc_ln45_76_fu_1526_p1;
    sc_signal< sc_lv<15> > select_ln45_76_fu_1530_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_46_fu_1542_p2;
    sc_signal< sc_lv<15> > trunc_ln45_77_fu_1548_p1;
    sc_signal< sc_lv<15> > select_ln45_77_fu_1552_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_47_fu_1564_p2;
    sc_signal< sc_lv<15> > trunc_ln45_78_fu_1570_p1;
    sc_signal< sc_lv<15> > select_ln45_78_fu_1574_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_48_fu_1586_p2;
    sc_signal< sc_lv<15> > trunc_ln45_79_fu_1592_p1;
    sc_signal< sc_lv<15> > select_ln45_79_fu_1596_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_49_fu_1608_p2;
    sc_signal< sc_lv<15> > trunc_ln45_80_fu_1614_p1;
    sc_signal< sc_lv<15> > select_ln45_80_fu_1618_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_50_fu_1630_p2;
    sc_signal< sc_lv<15> > trunc_ln45_81_fu_1636_p1;
    sc_signal< sc_lv<15> > select_ln45_81_fu_1640_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_51_fu_1652_p2;
    sc_signal< sc_lv<15> > trunc_ln45_82_fu_1658_p1;
    sc_signal< sc_lv<15> > select_ln45_82_fu_1662_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_52_fu_1674_p2;
    sc_signal< sc_lv<15> > trunc_ln45_83_fu_1680_p1;
    sc_signal< sc_lv<15> > select_ln45_83_fu_1684_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_53_fu_1696_p2;
    sc_signal< sc_lv<15> > trunc_ln45_84_fu_1702_p1;
    sc_signal< sc_lv<15> > select_ln45_84_fu_1706_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_54_fu_1718_p2;
    sc_signal< sc_lv<15> > trunc_ln45_85_fu_1724_p1;
    sc_signal< sc_lv<15> > select_ln45_85_fu_1728_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_55_fu_1740_p2;
    sc_signal< sc_lv<15> > trunc_ln45_86_fu_1746_p1;
    sc_signal< sc_lv<15> > select_ln45_86_fu_1750_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_56_fu_1762_p2;
    sc_signal< sc_lv<15> > trunc_ln45_87_fu_1768_p1;
    sc_signal< sc_lv<15> > select_ln45_87_fu_1772_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_57_fu_1784_p2;
    sc_signal< sc_lv<15> > trunc_ln45_88_fu_1790_p1;
    sc_signal< sc_lv<15> > select_ln45_88_fu_1794_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_58_fu_1806_p2;
    sc_signal< sc_lv<15> > trunc_ln45_89_fu_1812_p1;
    sc_signal< sc_lv<15> > select_ln45_89_fu_1816_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_59_fu_1828_p2;
    sc_signal< sc_lv<15> > trunc_ln45_90_fu_1834_p1;
    sc_signal< sc_lv<15> > select_ln45_90_fu_1838_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_60_fu_1850_p2;
    sc_signal< sc_lv<15> > trunc_ln45_91_fu_1856_p1;
    sc_signal< sc_lv<15> > select_ln45_91_fu_1860_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_61_fu_1872_p2;
    sc_signal< sc_lv<15> > trunc_ln45_92_fu_1878_p1;
    sc_signal< sc_lv<15> > select_ln45_92_fu_1882_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_62_fu_1894_p2;
    sc_signal< sc_lv<15> > trunc_ln45_93_fu_1900_p1;
    sc_signal< sc_lv<15> > select_ln45_93_fu_1904_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_63_fu_1916_p2;
    sc_signal< sc_lv<15> > trunc_ln45_94_fu_1922_p1;
    sc_signal< sc_lv<15> > select_ln45_94_fu_1926_p3;
    sc_signal< sc_lv<16> > zext_ln45_fu_548_p1;
    sc_signal< sc_lv<16> > zext_ln45_32_fu_570_p1;
    sc_signal< sc_lv<16> > zext_ln45_33_fu_592_p1;
    sc_signal< sc_lv<16> > zext_ln45_34_fu_614_p1;
    sc_signal< sc_lv<16> > zext_ln45_35_fu_636_p1;
    sc_signal< sc_lv<16> > zext_ln45_36_fu_658_p1;
    sc_signal< sc_lv<16> > zext_ln45_37_fu_680_p1;
    sc_signal< sc_lv<16> > zext_ln45_38_fu_702_p1;
    sc_signal< sc_lv<16> > zext_ln45_39_fu_724_p1;
    sc_signal< sc_lv<16> > zext_ln45_40_fu_746_p1;
    sc_signal< sc_lv<16> > zext_ln45_41_fu_768_p1;
    sc_signal< sc_lv<16> > zext_ln45_42_fu_790_p1;
    sc_signal< sc_lv<16> > zext_ln45_43_fu_812_p1;
    sc_signal< sc_lv<16> > zext_ln45_44_fu_834_p1;
    sc_signal< sc_lv<16> > zext_ln45_45_fu_856_p1;
    sc_signal< sc_lv<16> > zext_ln45_46_fu_878_p1;
    sc_signal< sc_lv<16> > zext_ln45_47_fu_900_p1;
    sc_signal< sc_lv<16> > zext_ln45_48_fu_922_p1;
    sc_signal< sc_lv<16> > zext_ln45_49_fu_944_p1;
    sc_signal< sc_lv<16> > zext_ln45_50_fu_966_p1;
    sc_signal< sc_lv<16> > zext_ln45_51_fu_988_p1;
    sc_signal< sc_lv<16> > zext_ln45_52_fu_1010_p1;
    sc_signal< sc_lv<16> > zext_ln45_53_fu_1032_p1;
    sc_signal< sc_lv<16> > zext_ln45_54_fu_1054_p1;
    sc_signal< sc_lv<16> > zext_ln45_55_fu_1076_p1;
    sc_signal< sc_lv<16> > zext_ln45_56_fu_1098_p1;
    sc_signal< sc_lv<16> > zext_ln45_57_fu_1120_p1;
    sc_signal< sc_lv<16> > zext_ln45_58_fu_1142_p1;
    sc_signal< sc_lv<16> > zext_ln45_59_fu_1164_p1;
    sc_signal< sc_lv<16> > zext_ln45_60_fu_1186_p1;
    sc_signal< sc_lv<16> > zext_ln45_61_fu_1208_p1;
    sc_signal< sc_lv<16> > zext_ln45_62_fu_1230_p1;
    sc_signal< sc_lv<16> > zext_ln45_63_fu_1252_p1;
    sc_signal< sc_lv<16> > zext_ln45_64_fu_1274_p1;
    sc_signal< sc_lv<16> > zext_ln45_65_fu_1296_p1;
    sc_signal< sc_lv<16> > zext_ln45_66_fu_1318_p1;
    sc_signal< sc_lv<16> > zext_ln45_67_fu_1340_p1;
    sc_signal< sc_lv<16> > zext_ln45_68_fu_1362_p1;
    sc_signal< sc_lv<16> > zext_ln45_69_fu_1384_p1;
    sc_signal< sc_lv<16> > zext_ln45_70_fu_1406_p1;
    sc_signal< sc_lv<16> > zext_ln45_71_fu_1428_p1;
    sc_signal< sc_lv<16> > zext_ln45_72_fu_1450_p1;
    sc_signal< sc_lv<16> > zext_ln45_73_fu_1472_p1;
    sc_signal< sc_lv<16> > zext_ln45_74_fu_1494_p1;
    sc_signal< sc_lv<16> > zext_ln45_75_fu_1516_p1;
    sc_signal< sc_lv<16> > zext_ln45_76_fu_1538_p1;
    sc_signal< sc_lv<16> > zext_ln45_77_fu_1560_p1;
    sc_signal< sc_lv<16> > zext_ln45_78_fu_1582_p1;
    sc_signal< sc_lv<16> > zext_ln45_79_fu_1604_p1;
    sc_signal< sc_lv<16> > zext_ln45_80_fu_1626_p1;
    sc_signal< sc_lv<16> > zext_ln45_81_fu_1648_p1;
    sc_signal< sc_lv<16> > zext_ln45_82_fu_1670_p1;
    sc_signal< sc_lv<16> > zext_ln45_83_fu_1692_p1;
    sc_signal< sc_lv<16> > zext_ln45_84_fu_1714_p1;
    sc_signal< sc_lv<16> > zext_ln45_85_fu_1736_p1;
    sc_signal< sc_lv<16> > zext_ln45_86_fu_1758_p1;
    sc_signal< sc_lv<16> > zext_ln45_87_fu_1780_p1;
    sc_signal< sc_lv<16> > zext_ln45_88_fu_1802_p1;
    sc_signal< sc_lv<16> > zext_ln45_89_fu_1824_p1;
    sc_signal< sc_lv<16> > zext_ln45_90_fu_1846_p1;
    sc_signal< sc_lv<16> > zext_ln45_91_fu_1868_p1;
    sc_signal< sc_lv<16> > zext_ln45_92_fu_1890_p1;
    sc_signal< sc_lv<16> > zext_ln45_93_fu_1912_p1;
    sc_signal< sc_lv<16> > zext_ln45_94_fu_1934_p1;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_16();
    void thread_ap_return_17();
    void thread_ap_return_18();
    void thread_ap_return_19();
    void thread_ap_return_2();
    void thread_ap_return_20();
    void thread_ap_return_21();
    void thread_ap_return_22();
    void thread_ap_return_23();
    void thread_ap_return_24();
    void thread_ap_return_25();
    void thread_ap_return_26();
    void thread_ap_return_27();
    void thread_ap_return_28();
    void thread_ap_return_29();
    void thread_ap_return_3();
    void thread_ap_return_30();
    void thread_ap_return_31();
    void thread_ap_return_32();
    void thread_ap_return_33();
    void thread_ap_return_34();
    void thread_ap_return_35();
    void thread_ap_return_36();
    void thread_ap_return_37();
    void thread_ap_return_38();
    void thread_ap_return_39();
    void thread_ap_return_4();
    void thread_ap_return_40();
    void thread_ap_return_41();
    void thread_ap_return_42();
    void thread_ap_return_43();
    void thread_ap_return_44();
    void thread_ap_return_45();
    void thread_ap_return_46();
    void thread_ap_return_47();
    void thread_ap_return_48();
    void thread_ap_return_49();
    void thread_ap_return_5();
    void thread_ap_return_50();
    void thread_ap_return_51();
    void thread_ap_return_52();
    void thread_ap_return_53();
    void thread_ap_return_54();
    void thread_ap_return_55();
    void thread_ap_return_56();
    void thread_ap_return_57();
    void thread_ap_return_58();
    void thread_ap_return_59();
    void thread_ap_return_6();
    void thread_ap_return_60();
    void thread_ap_return_61();
    void thread_ap_return_62();
    void thread_ap_return_63();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_icmp_ln1494_10_fu_750_p2();
    void thread_icmp_ln1494_11_fu_772_p2();
    void thread_icmp_ln1494_12_fu_794_p2();
    void thread_icmp_ln1494_13_fu_816_p2();
    void thread_icmp_ln1494_14_fu_838_p2();
    void thread_icmp_ln1494_15_fu_860_p2();
    void thread_icmp_ln1494_16_fu_882_p2();
    void thread_icmp_ln1494_17_fu_904_p2();
    void thread_icmp_ln1494_18_fu_926_p2();
    void thread_icmp_ln1494_19_fu_948_p2();
    void thread_icmp_ln1494_1_fu_552_p2();
    void thread_icmp_ln1494_20_fu_970_p2();
    void thread_icmp_ln1494_21_fu_992_p2();
    void thread_icmp_ln1494_22_fu_1014_p2();
    void thread_icmp_ln1494_23_fu_1036_p2();
    void thread_icmp_ln1494_24_fu_1058_p2();
    void thread_icmp_ln1494_25_fu_1080_p2();
    void thread_icmp_ln1494_26_fu_1102_p2();
    void thread_icmp_ln1494_27_fu_1124_p2();
    void thread_icmp_ln1494_28_fu_1146_p2();
    void thread_icmp_ln1494_29_fu_1168_p2();
    void thread_icmp_ln1494_2_fu_574_p2();
    void thread_icmp_ln1494_30_fu_1190_p2();
    void thread_icmp_ln1494_31_fu_1212_p2();
    void thread_icmp_ln1494_32_fu_1234_p2();
    void thread_icmp_ln1494_33_fu_1256_p2();
    void thread_icmp_ln1494_34_fu_1278_p2();
    void thread_icmp_ln1494_35_fu_1300_p2();
    void thread_icmp_ln1494_36_fu_1322_p2();
    void thread_icmp_ln1494_37_fu_1344_p2();
    void thread_icmp_ln1494_38_fu_1366_p2();
    void thread_icmp_ln1494_39_fu_1388_p2();
    void thread_icmp_ln1494_3_fu_596_p2();
    void thread_icmp_ln1494_40_fu_1410_p2();
    void thread_icmp_ln1494_41_fu_1432_p2();
    void thread_icmp_ln1494_42_fu_1454_p2();
    void thread_icmp_ln1494_43_fu_1476_p2();
    void thread_icmp_ln1494_44_fu_1498_p2();
    void thread_icmp_ln1494_45_fu_1520_p2();
    void thread_icmp_ln1494_46_fu_1542_p2();
    void thread_icmp_ln1494_47_fu_1564_p2();
    void thread_icmp_ln1494_48_fu_1586_p2();
    void thread_icmp_ln1494_49_fu_1608_p2();
    void thread_icmp_ln1494_4_fu_618_p2();
    void thread_icmp_ln1494_50_fu_1630_p2();
    void thread_icmp_ln1494_51_fu_1652_p2();
    void thread_icmp_ln1494_52_fu_1674_p2();
    void thread_icmp_ln1494_53_fu_1696_p2();
    void thread_icmp_ln1494_54_fu_1718_p2();
    void thread_icmp_ln1494_55_fu_1740_p2();
    void thread_icmp_ln1494_56_fu_1762_p2();
    void thread_icmp_ln1494_57_fu_1784_p2();
    void thread_icmp_ln1494_58_fu_1806_p2();
    void thread_icmp_ln1494_59_fu_1828_p2();
    void thread_icmp_ln1494_5_fu_640_p2();
    void thread_icmp_ln1494_60_fu_1850_p2();
    void thread_icmp_ln1494_61_fu_1872_p2();
    void thread_icmp_ln1494_62_fu_1894_p2();
    void thread_icmp_ln1494_63_fu_1916_p2();
    void thread_icmp_ln1494_6_fu_662_p2();
    void thread_icmp_ln1494_7_fu_684_p2();
    void thread_icmp_ln1494_8_fu_706_p2();
    void thread_icmp_ln1494_9_fu_728_p2();
    void thread_icmp_ln1494_fu_530_p2();
    void thread_select_ln45_32_fu_562_p3();
    void thread_select_ln45_33_fu_584_p3();
    void thread_select_ln45_34_fu_606_p3();
    void thread_select_ln45_35_fu_628_p3();
    void thread_select_ln45_36_fu_650_p3();
    void thread_select_ln45_37_fu_672_p3();
    void thread_select_ln45_38_fu_694_p3();
    void thread_select_ln45_39_fu_716_p3();
    void thread_select_ln45_40_fu_738_p3();
    void thread_select_ln45_41_fu_760_p3();
    void thread_select_ln45_42_fu_782_p3();
    void thread_select_ln45_43_fu_804_p3();
    void thread_select_ln45_44_fu_826_p3();
    void thread_select_ln45_45_fu_848_p3();
    void thread_select_ln45_46_fu_870_p3();
    void thread_select_ln45_47_fu_892_p3();
    void thread_select_ln45_48_fu_914_p3();
    void thread_select_ln45_49_fu_936_p3();
    void thread_select_ln45_50_fu_958_p3();
    void thread_select_ln45_51_fu_980_p3();
    void thread_select_ln45_52_fu_1002_p3();
    void thread_select_ln45_53_fu_1024_p3();
    void thread_select_ln45_54_fu_1046_p3();
    void thread_select_ln45_55_fu_1068_p3();
    void thread_select_ln45_56_fu_1090_p3();
    void thread_select_ln45_57_fu_1112_p3();
    void thread_select_ln45_58_fu_1134_p3();
    void thread_select_ln45_59_fu_1156_p3();
    void thread_select_ln45_60_fu_1178_p3();
    void thread_select_ln45_61_fu_1200_p3();
    void thread_select_ln45_62_fu_1222_p3();
    void thread_select_ln45_63_fu_1244_p3();
    void thread_select_ln45_64_fu_1266_p3();
    void thread_select_ln45_65_fu_1288_p3();
    void thread_select_ln45_66_fu_1310_p3();
    void thread_select_ln45_67_fu_1332_p3();
    void thread_select_ln45_68_fu_1354_p3();
    void thread_select_ln45_69_fu_1376_p3();
    void thread_select_ln45_70_fu_1398_p3();
    void thread_select_ln45_71_fu_1420_p3();
    void thread_select_ln45_72_fu_1442_p3();
    void thread_select_ln45_73_fu_1464_p3();
    void thread_select_ln45_74_fu_1486_p3();
    void thread_select_ln45_75_fu_1508_p3();
    void thread_select_ln45_76_fu_1530_p3();
    void thread_select_ln45_77_fu_1552_p3();
    void thread_select_ln45_78_fu_1574_p3();
    void thread_select_ln45_79_fu_1596_p3();
    void thread_select_ln45_80_fu_1618_p3();
    void thread_select_ln45_81_fu_1640_p3();
    void thread_select_ln45_82_fu_1662_p3();
    void thread_select_ln45_83_fu_1684_p3();
    void thread_select_ln45_84_fu_1706_p3();
    void thread_select_ln45_85_fu_1728_p3();
    void thread_select_ln45_86_fu_1750_p3();
    void thread_select_ln45_87_fu_1772_p3();
    void thread_select_ln45_88_fu_1794_p3();
    void thread_select_ln45_89_fu_1816_p3();
    void thread_select_ln45_90_fu_1838_p3();
    void thread_select_ln45_91_fu_1860_p3();
    void thread_select_ln45_92_fu_1882_p3();
    void thread_select_ln45_93_fu_1904_p3();
    void thread_select_ln45_94_fu_1926_p3();
    void thread_select_ln45_fu_540_p3();
    void thread_trunc_ln45_32_fu_558_p1();
    void thread_trunc_ln45_33_fu_580_p1();
    void thread_trunc_ln45_34_fu_602_p1();
    void thread_trunc_ln45_35_fu_624_p1();
    void thread_trunc_ln45_36_fu_646_p1();
    void thread_trunc_ln45_37_fu_668_p1();
    void thread_trunc_ln45_38_fu_690_p1();
    void thread_trunc_ln45_39_fu_712_p1();
    void thread_trunc_ln45_40_fu_734_p1();
    void thread_trunc_ln45_41_fu_756_p1();
    void thread_trunc_ln45_42_fu_778_p1();
    void thread_trunc_ln45_43_fu_800_p1();
    void thread_trunc_ln45_44_fu_822_p1();
    void thread_trunc_ln45_45_fu_844_p1();
    void thread_trunc_ln45_46_fu_866_p1();
    void thread_trunc_ln45_47_fu_888_p1();
    void thread_trunc_ln45_48_fu_910_p1();
    void thread_trunc_ln45_49_fu_932_p1();
    void thread_trunc_ln45_50_fu_954_p1();
    void thread_trunc_ln45_51_fu_976_p1();
    void thread_trunc_ln45_52_fu_998_p1();
    void thread_trunc_ln45_53_fu_1020_p1();
    void thread_trunc_ln45_54_fu_1042_p1();
    void thread_trunc_ln45_55_fu_1064_p1();
    void thread_trunc_ln45_56_fu_1086_p1();
    void thread_trunc_ln45_57_fu_1108_p1();
    void thread_trunc_ln45_58_fu_1130_p1();
    void thread_trunc_ln45_59_fu_1152_p1();
    void thread_trunc_ln45_60_fu_1174_p1();
    void thread_trunc_ln45_61_fu_1196_p1();
    void thread_trunc_ln45_62_fu_1218_p1();
    void thread_trunc_ln45_63_fu_1240_p1();
    void thread_trunc_ln45_64_fu_1262_p1();
    void thread_trunc_ln45_65_fu_1284_p1();
    void thread_trunc_ln45_66_fu_1306_p1();
    void thread_trunc_ln45_67_fu_1328_p1();
    void thread_trunc_ln45_68_fu_1350_p1();
    void thread_trunc_ln45_69_fu_1372_p1();
    void thread_trunc_ln45_70_fu_1394_p1();
    void thread_trunc_ln45_71_fu_1416_p1();
    void thread_trunc_ln45_72_fu_1438_p1();
    void thread_trunc_ln45_73_fu_1460_p1();
    void thread_trunc_ln45_74_fu_1482_p1();
    void thread_trunc_ln45_75_fu_1504_p1();
    void thread_trunc_ln45_76_fu_1526_p1();
    void thread_trunc_ln45_77_fu_1548_p1();
    void thread_trunc_ln45_78_fu_1570_p1();
    void thread_trunc_ln45_79_fu_1592_p1();
    void thread_trunc_ln45_80_fu_1614_p1();
    void thread_trunc_ln45_81_fu_1636_p1();
    void thread_trunc_ln45_82_fu_1658_p1();
    void thread_trunc_ln45_83_fu_1680_p1();
    void thread_trunc_ln45_84_fu_1702_p1();
    void thread_trunc_ln45_85_fu_1724_p1();
    void thread_trunc_ln45_86_fu_1746_p1();
    void thread_trunc_ln45_87_fu_1768_p1();
    void thread_trunc_ln45_88_fu_1790_p1();
    void thread_trunc_ln45_89_fu_1812_p1();
    void thread_trunc_ln45_90_fu_1834_p1();
    void thread_trunc_ln45_91_fu_1856_p1();
    void thread_trunc_ln45_92_fu_1878_p1();
    void thread_trunc_ln45_93_fu_1900_p1();
    void thread_trunc_ln45_94_fu_1922_p1();
    void thread_trunc_ln45_fu_536_p1();
    void thread_zext_ln45_32_fu_570_p1();
    void thread_zext_ln45_33_fu_592_p1();
    void thread_zext_ln45_34_fu_614_p1();
    void thread_zext_ln45_35_fu_636_p1();
    void thread_zext_ln45_36_fu_658_p1();
    void thread_zext_ln45_37_fu_680_p1();
    void thread_zext_ln45_38_fu_702_p1();
    void thread_zext_ln45_39_fu_724_p1();
    void thread_zext_ln45_40_fu_746_p1();
    void thread_zext_ln45_41_fu_768_p1();
    void thread_zext_ln45_42_fu_790_p1();
    void thread_zext_ln45_43_fu_812_p1();
    void thread_zext_ln45_44_fu_834_p1();
    void thread_zext_ln45_45_fu_856_p1();
    void thread_zext_ln45_46_fu_878_p1();
    void thread_zext_ln45_47_fu_900_p1();
    void thread_zext_ln45_48_fu_922_p1();
    void thread_zext_ln45_49_fu_944_p1();
    void thread_zext_ln45_50_fu_966_p1();
    void thread_zext_ln45_51_fu_988_p1();
    void thread_zext_ln45_52_fu_1010_p1();
    void thread_zext_ln45_53_fu_1032_p1();
    void thread_zext_ln45_54_fu_1054_p1();
    void thread_zext_ln45_55_fu_1076_p1();
    void thread_zext_ln45_56_fu_1098_p1();
    void thread_zext_ln45_57_fu_1120_p1();
    void thread_zext_ln45_58_fu_1142_p1();
    void thread_zext_ln45_59_fu_1164_p1();
    void thread_zext_ln45_60_fu_1186_p1();
    void thread_zext_ln45_61_fu_1208_p1();
    void thread_zext_ln45_62_fu_1230_p1();
    void thread_zext_ln45_63_fu_1252_p1();
    void thread_zext_ln45_64_fu_1274_p1();
    void thread_zext_ln45_65_fu_1296_p1();
    void thread_zext_ln45_66_fu_1318_p1();
    void thread_zext_ln45_67_fu_1340_p1();
    void thread_zext_ln45_68_fu_1362_p1();
    void thread_zext_ln45_69_fu_1384_p1();
    void thread_zext_ln45_70_fu_1406_p1();
    void thread_zext_ln45_71_fu_1428_p1();
    void thread_zext_ln45_72_fu_1450_p1();
    void thread_zext_ln45_73_fu_1472_p1();
    void thread_zext_ln45_74_fu_1494_p1();
    void thread_zext_ln45_75_fu_1516_p1();
    void thread_zext_ln45_76_fu_1538_p1();
    void thread_zext_ln45_77_fu_1560_p1();
    void thread_zext_ln45_78_fu_1582_p1();
    void thread_zext_ln45_79_fu_1604_p1();
    void thread_zext_ln45_80_fu_1626_p1();
    void thread_zext_ln45_81_fu_1648_p1();
    void thread_zext_ln45_82_fu_1670_p1();
    void thread_zext_ln45_83_fu_1692_p1();
    void thread_zext_ln45_84_fu_1714_p1();
    void thread_zext_ln45_85_fu_1736_p1();
    void thread_zext_ln45_86_fu_1758_p1();
    void thread_zext_ln45_87_fu_1780_p1();
    void thread_zext_ln45_88_fu_1802_p1();
    void thread_zext_ln45_89_fu_1824_p1();
    void thread_zext_ln45_90_fu_1846_p1();
    void thread_zext_ln45_91_fu_1868_p1();
    void thread_zext_ln45_92_fu_1890_p1();
    void thread_zext_ln45_93_fu_1912_p1();
    void thread_zext_ln45_94_fu_1934_p1();
    void thread_zext_ln45_fu_548_p1();
};

}

using namespace ap_rtl;

#endif
