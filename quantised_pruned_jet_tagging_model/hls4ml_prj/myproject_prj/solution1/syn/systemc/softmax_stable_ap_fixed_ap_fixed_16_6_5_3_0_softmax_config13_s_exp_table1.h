// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_H__
#define __softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 18;
  static const unsigned AddressRange = 1024;
  static const unsigned AddressWidth = 10;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in <sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in <sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in <sc_lv<AddressWidth> > address4;
sc_core::sc_in <sc_logic> ce4;
sc_core::sc_out <sc_lv<DataWidth> > q4;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_ram) {
        ram[0] = "0b000000010000000000";
        ram[1] = "0b000000010010001000";
        ram[2] = "0b000000010100100010";
        ram[3] = "0b000000010111010001";
        ram[4] = "0b000000011010011000";
        ram[5] = "0b000000011101111001";
        ram[6] = "0b000000100001110111";
        ram[7] = "0b000000100110011000";
        ram[8] = "0b000000101011011111";
        ram[9] = "0b000000110001010010";
        ram[10] = "0b000000110111110110";
        ram[11] = "0b000000111111010001";
        ram[12] = "0b000001000111101101";
        ram[13] = "0b000001010001010000";
        ram[14] = "0b000001011100000100";
        ram[15] = "0b000001101000010101";
        ram[16] = "0b000001110110001110";
        ram[17] = "0b000010000101111101";
        ram[18] = "0b000010010111110011";
        ram[19] = "0b000010101100000001";
        ram[20] = "0b000011000010111010";
        ram[21] = "0b000011011100110111";
        ram[22] = "0b000011111010010010";
        ram[23] = "0b000100011011100110";
        ram[24] = "0b000101000001010111";
        ram[25] = "0b000101101100001010";
        ram[26] = "0b000110011100101001";
        ram[27] = "0b000111010011100101";
        ram[28] = "0b001000010001110110";
        ram[29] = "0b001001011000011001";
        ram[30] = "0b001010101000010101";
        ram[31] = "0b001100000010111011";
        ram[32] = "0b001101101001100100";
        ram[33] = "0b001111011101111000";
        ram[34] = "0b010001100001101011";
        ram[35] = "0b010011110111000010";
        ram[36] = "0b010110100000010001";
        ram[37] = "0b011001100000000010";
        ram[38] = "0b011100111001010110";
        ram[39] = "0b100000101111100101";
        ram[40] = "0b100101000110100111";
        ram[41] = "0b101010000010110010";
        ram[42] = "0b101111101001000011";
        ram[43] = "0b110101111111000010";
        ram[44] = "0b111101001011000100";
        ram[45] = "0b000101010100010110";
        ram[46] = "0b001110100011000011";
        ram[47] = "0b011001000000011001";
        ram[48] = "0b100100110110110111";
        ram[49] = "0b110010010010010100";
        ram[50] = "0b000001100000001101";
        ram[51] = "0b010010101111110001";
        ram[52] = "0b100110010010010001";
        ram[53] = "0b111100011011010001";
        ram[54] = "0b010101100000111100";
        ram[55] = "0b110001111100011010";
        ram[56] = "0b010010001010001000";
        ram[57] = "0b110110101010010111";
        ram[58] = "0b100000000001101011";
        ram[59] = "0b001110111001011110";
        ram[60] = "0b000100000000101011";
        ram[61] = "0b000000001100011111";
        ram[62] = "0b000100011001001010";
        ram[63] = "0b010001101010111110";
        ram[64] = "0b101001001111010101";
        ram[65] = "0b001100011101111000";
        ram[66] = "0b111100111010000000";
        ram[67] = "0b111100010100010010";
        ram[68] = "0b001100101100010011";
        ram[69] = "0b110000010010100110";
        ram[70] = "0b101001101011000000";
        ram[71] = "0b111011101111001001";
        ram[72] = "0b101001110001010110";
        ram[73] = "0b110111011111111101";
        ram[74] = "0b101001001001000011";
        ram[75] = "0b000011011110101100";
        ram[76] = "0b001011111011101000";
        ram[77] = "0b001000101000110111";
        ram[78] = "0b000000100011101010";
        ram[79] = "0b111011100100100110";
        ram[80] = "0b000010100111011100";
        ram[81] = "0b011111110100000110";
        ram[82] = "0b011110101000101010";
        ram[83] = "0b001100000101000110";
        ram[84] = "0b110110111000000100";
        ram[85] = "0b101111101101101100";
        ram[86] = "0b001001100000011100";
        ram[87] = "0b011001101011111100";
        ram[88] = "0b111000100010010000";
        ram[89] = "0b000001100100101000";
        ram[90] = "0b010011111110110000";
        ram[91] = "0b010011000101110000";
        ram[92] = "0b100110111100011000";
        ram[93] = "0b111100111010000000";
        ram[94] = "0b001000011001000000";
        ram[95] = "0b000011101001100000";
        ram[96] = "0b110000101100110000";
        ram[97] = "0b011010010101100000";
        ram[98] = "0b010101010100100000";
        ram[99] = "0b000001101101010000";
        ram[100] = "0b001100010100100000";
        ram[101] = "0b110000011111100000";
        ram[102] = "0b111001111110100000";
        ram[103] = "0b000111000111000000";
        ram[104] = "0b001011010110100000";
        ram[105] = "0b010010000001000000";
        ram[106] = "0b000001100001000000";
        ram[107] = "0b011110111011000000";
        ram[108] = "0b010010000110000000";
        ram[109] = "0b101010010000000000";
        ram[110] = "0b100011010011000000";
        ram[111] = "0b101011101000000000";
        ram[112] = "0b101011000100000000";
        ram[113] = "0b001010010010000000";
        ram[114] = "0b111011101000000000";
        ram[115] = "0b000100101110000000";
        ram[116] = "0b001001110100000000";
        ram[117] = "0b011010001000000000";
        ram[118] = "0b111110010100000000";
        ram[119] = "0b001000011100000000";
        ram[120] = "0b100110010100000000";
        ram[121] = "0b110110100000000000";
        ram[122] = "0b011111011000000000";
        ram[123] = "0b101010000000000000";
        ram[124] = "0b100000101000000000";
        ram[125] = "0b110000001000000000";
        ram[126] = "0b001111100000000000";
        ram[127] = "0b101011010000000000";
        ram[128] = "0b010111110000000000";
        ram[129] = "0b001000100000000000";
        ram[130] = "0b010010000000000000";
        ram[131] = "0b101111110000000000";
        ram[132] = "0b010111110000000000";
        ram[133] = "0b011000000000000000";
        ram[134] = "0b111110000000000000";
        ram[135] = "0b001111100000000000";
        ram[136] = "0b010010000000000000";
        ram[137] = "0b100011000000000000";
        ram[138] = "0b100101100000000000";
        ram[139] = "0b001000000000000000";
        ram[140] = "0b100100000000000000";
        ram[141] = "0b111000000000000000";
        ram[142] = "0b001001000000000000";
        ram[143] = "0b100100000000000000";
        ram[144] = "0b010000000000000000";
        ram[145] = "0b110000000000000000";
        ram[146] = "0b010100000000000000";
        ram[147] = "0b011000000000000000";
        ram[148] = "0b000010000000000000";
        ram[149] = "0b101010000000000000";
        ram[150] = "0b001100000000000000";
        ram[151] = "0b110000000000000000";
        ram[152] = "0b100000000000000000";
        ram[153] = "0b001000000000000000";
        ram[154] = "0b000000000000000000";
        ram[155] = "0b111000000000000000";
        ram[156] = "0b101000000000000000";
        ram[157] = "0b100000000000000000";
        ram[158] = "0b000000000000000000";
        ram[159] = "0b011000000000000000";
        ram[160] = "0b100000000000000000";
        ram[161] = "0b010000000000000000";
        ram[162] = "0b110000000000000000";
        ram[163] = "0b100000000000000000";
        ram[164] = "0b000000000000000000";
        ram[165] = "0b000000000000000000";
        ram[166] = "0b110000000000000000";
        ram[167] = "0b000000000000000000";
        ram[168] = "0b000000000000000000";
        ram[169] = "0b100000000000000000";
        ram[170] = "0b000000000000000000";
        ram[171] = "0b100000000000000000";
        for (unsigned i = 172; i < 969 ; i = i + 1) {
            ram[i] = "0b000000000000000000";
        }
        for (unsigned i = 969; i < 975 ; i = i + 1) {
            ram[i] = "0b000000000000000001";
        }
        ram[975] = "0b000000000000000010";
        ram[976] = "0b000000000000000010";
        ram[977] = "0b000000000000000010";
        ram[978] = "0b000000000000000011";
        ram[979] = "0b000000000000000011";
        ram[980] = "0b000000000000000100";
        ram[981] = "0b000000000000000100";
        ram[982] = "0b000000000000000101";
        ram[983] = "0b000000000000000110";
        ram[984] = "0b000000000000000110";
        ram[985] = "0b000000000000000111";
        ram[986] = "0b000000000000001000";
        ram[987] = "0b000000000000001010";
        ram[988] = "0b000000000000001011";
        ram[989] = "0b000000000000001100";
        ram[990] = "0b000000000000001110";
        ram[991] = "0b000000000000010000";
        ram[992] = "0b000000000000010010";
        ram[993] = "0b000000000000010101";
        ram[994] = "0b000000000000011000";
        ram[995] = "0b000000000000011011";
        ram[996] = "0b000000000000011110";
        ram[997] = "0b000000000000100011";
        ram[998] = "0b000000000000100111";
        ram[999] = "0b000000000000101100";
        ram[1000] = "0b000000000000110010";
        ram[1001] = "0b000000000000111001";
        ram[1002] = "0b000000000001000001";
        ram[1003] = "0b000000000001001010";
        ram[1004] = "0b000000000001010100";
        ram[1005] = "0b000000000001011111";
        ram[1006] = "0b000000000001101011";
        ram[1007] = "0b000000000001111010";
        ram[1008] = "0b000000000010001010";
        ram[1009] = "0b000000000010011101";
        ram[1010] = "0b000000000010110001";
        ram[1011] = "0b000000000011001001";
        ram[1012] = "0b000000000011100100";
        ram[1013] = "0b000000000100000010";
        ram[1014] = "0b000000000100100101";
        ram[1015] = "0b000000000101001100";
        ram[1016] = "0b000000000101111000";
        ram[1017] = "0b000000000110101010";
        ram[1018] = "0b000000000111100011";
        ram[1019] = "0b000000001000100100";
        ram[1020] = "0b000000001001101101";
        ram[1021] = "0b000000001010111111";
        ram[1022] = "0b000000001100011101";
        ram[1023] = "0b000000001110000111";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();


SC_METHOD(prc_write_2);
  sensitive<<clk.pos();


SC_METHOD(prc_write_3);
  sensitive<<clk.pos();


SC_METHOD(prc_write_4);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


void prc_write_2()
{
    if (ce2.read() == sc_dt::Log_1) 
    {
            if(address2.read().is_01() && address2.read().to_uint()<AddressRange)
              q2 = ram[address2.read().to_uint()];
            else
              q2 = sc_lv<DataWidth>();
    }
}


void prc_write_3()
{
    if (ce3.read() == sc_dt::Log_1) 
    {
            if(address3.read().is_01() && address3.read().to_uint()<AddressRange)
              q3 = ram[address3.read().to_uint()];
            else
              q3 = sc_lv<DataWidth>();
    }
}


void prc_write_4()
{
    if (ce4.read() == sc_dt::Log_1) 
    {
            if(address4.read().is_01() && address4.read().to_uint()<AddressRange)
              q4 = ram[address4.read().to_uint()];
            else
              q4 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1) {


static const unsigned DataWidth = 18;
static const unsigned AddressRange = 1024;
static const unsigned AddressWidth = 10;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in<sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in<sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in <sc_lv<AddressWidth> > address4;
sc_core::sc_in<sc_logic> ce4;
sc_core::sc_out <sc_lv<DataWidth> > q4;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_ram* meminst;


SC_CTOR(softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1) {
meminst = new softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_ram("softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->address2(address2);
meminst->ce2(ce2);
meminst->q2(q2);

meminst->address3(address3);
meminst->ce3(ce3);
meminst->q3(q3);

meminst->address4(address4);
meminst->ce4(ce4);
meminst->q4(q4);

meminst->reset(reset);
meminst->clk(clk);
}
~softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1() {
    delete meminst;
}


};//endmodule
#endif
