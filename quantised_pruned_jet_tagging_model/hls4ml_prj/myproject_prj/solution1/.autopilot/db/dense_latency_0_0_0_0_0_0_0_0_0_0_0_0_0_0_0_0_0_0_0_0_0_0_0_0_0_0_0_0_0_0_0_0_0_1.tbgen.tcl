set moduleName dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 1
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dense_latency.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.1}
set C_modelType { int 468 }
set C_modelArgList {
	{ data_0_V_read int 6 regular  }
	{ data_1_V_read int 6 regular  }
	{ data_2_V_read int 6 regular  }
	{ data_3_V_read int 6 regular  }
	{ data_4_V_read int 6 regular  }
	{ data_5_V_read int 6 regular  }
	{ data_6_V_read int 6 regular  }
	{ data_8_V_read int 6 regular  }
	{ data_9_V_read int 6 regular  }
	{ data_10_V_read int 6 regular  }
	{ data_11_V_read int 6 regular  }
	{ data_12_V_read int 6 regular  }
	{ data_13_V_read int 6 regular  }
	{ data_14_V_read int 6 regular  }
	{ data_15_V_read int 6 regular  }
	{ data_16_V_read int 6 regular  }
	{ data_17_V_read int 6 regular  }
	{ data_19_V_read int 6 regular  }
	{ data_20_V_read int 6 regular  }
	{ data_22_V_read int 6 regular  }
	{ data_23_V_read int 6 regular  }
	{ data_24_V_read int 6 regular  }
	{ data_25_V_read int 6 regular  }
	{ data_26_V_read int 6 regular  }
	{ data_27_V_read int 6 regular  }
	{ data_28_V_read int 6 regular  }
	{ data_29_V_read int 6 regular  }
	{ data_31_V_read int 6 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_0_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_1_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_2_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_3_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_4_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_5_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_6_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_8_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_9_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_10_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_11_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_12_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_13_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_14_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_15_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_16_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_17_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_19_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_20_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_22_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_23_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_24_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_25_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_26_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_27_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_28_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_29_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_31_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 468} ]}
# RTL Port declarations: 
set portNum 57
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ data_0_V_read sc_in sc_lv 6 signal 0 } 
	{ data_1_V_read sc_in sc_lv 6 signal 1 } 
	{ data_2_V_read sc_in sc_lv 6 signal 2 } 
	{ data_3_V_read sc_in sc_lv 6 signal 3 } 
	{ data_4_V_read sc_in sc_lv 6 signal 4 } 
	{ data_5_V_read sc_in sc_lv 6 signal 5 } 
	{ data_6_V_read sc_in sc_lv 6 signal 6 } 
	{ data_8_V_read sc_in sc_lv 6 signal 7 } 
	{ data_9_V_read sc_in sc_lv 6 signal 8 } 
	{ data_10_V_read sc_in sc_lv 6 signal 9 } 
	{ data_11_V_read sc_in sc_lv 6 signal 10 } 
	{ data_12_V_read sc_in sc_lv 6 signal 11 } 
	{ data_13_V_read sc_in sc_lv 6 signal 12 } 
	{ data_14_V_read sc_in sc_lv 6 signal 13 } 
	{ data_15_V_read sc_in sc_lv 6 signal 14 } 
	{ data_16_V_read sc_in sc_lv 6 signal 15 } 
	{ data_17_V_read sc_in sc_lv 6 signal 16 } 
	{ data_19_V_read sc_in sc_lv 6 signal 17 } 
	{ data_20_V_read sc_in sc_lv 6 signal 18 } 
	{ data_22_V_read sc_in sc_lv 6 signal 19 } 
	{ data_23_V_read sc_in sc_lv 6 signal 20 } 
	{ data_24_V_read sc_in sc_lv 6 signal 21 } 
	{ data_25_V_read sc_in sc_lv 6 signal 22 } 
	{ data_26_V_read sc_in sc_lv 6 signal 23 } 
	{ data_27_V_read sc_in sc_lv 6 signal 24 } 
	{ data_28_V_read sc_in sc_lv 6 signal 25 } 
	{ data_29_V_read sc_in sc_lv 6 signal 26 } 
	{ data_31_V_read sc_in sc_lv 6 signal 27 } 
	{ ap_return_0 sc_out sc_lv 18 signal -1 } 
	{ ap_return_1 sc_out sc_lv 18 signal -1 } 
	{ ap_return_2 sc_out sc_lv 18 signal -1 } 
	{ ap_return_3 sc_out sc_lv 18 signal -1 } 
	{ ap_return_4 sc_out sc_lv 18 signal -1 } 
	{ ap_return_5 sc_out sc_lv 18 signal -1 } 
	{ ap_return_6 sc_out sc_lv 18 signal -1 } 
	{ ap_return_7 sc_out sc_lv 18 signal -1 } 
	{ ap_return_8 sc_out sc_lv 18 signal -1 } 
	{ ap_return_9 sc_out sc_lv 18 signal -1 } 
	{ ap_return_10 sc_out sc_lv 18 signal -1 } 
	{ ap_return_11 sc_out sc_lv 18 signal -1 } 
	{ ap_return_12 sc_out sc_lv 18 signal -1 } 
	{ ap_return_13 sc_out sc_lv 18 signal -1 } 
	{ ap_return_14 sc_out sc_lv 18 signal -1 } 
	{ ap_return_15 sc_out sc_lv 18 signal -1 } 
	{ ap_return_16 sc_out sc_lv 18 signal -1 } 
	{ ap_return_17 sc_out sc_lv 18 signal -1 } 
	{ ap_return_18 sc_out sc_lv 18 signal -1 } 
	{ ap_return_19 sc_out sc_lv 18 signal -1 } 
	{ ap_return_20 sc_out sc_lv 18 signal -1 } 
	{ ap_return_21 sc_out sc_lv 18 signal -1 } 
	{ ap_return_22 sc_out sc_lv 18 signal -1 } 
	{ ap_return_23 sc_out sc_lv 18 signal -1 } 
	{ ap_return_24 sc_out sc_lv 18 signal -1 } 
	{ ap_return_25 sc_out sc_lv 18 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "data_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_0_V_read", "role": "default" }} , 
 	{ "name": "data_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_1_V_read", "role": "default" }} , 
 	{ "name": "data_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_2_V_read", "role": "default" }} , 
 	{ "name": "data_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_3_V_read", "role": "default" }} , 
 	{ "name": "data_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_4_V_read", "role": "default" }} , 
 	{ "name": "data_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_5_V_read", "role": "default" }} , 
 	{ "name": "data_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_6_V_read", "role": "default" }} , 
 	{ "name": "data_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_8_V_read", "role": "default" }} , 
 	{ "name": "data_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_9_V_read", "role": "default" }} , 
 	{ "name": "data_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_10_V_read", "role": "default" }} , 
 	{ "name": "data_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_11_V_read", "role": "default" }} , 
 	{ "name": "data_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_12_V_read", "role": "default" }} , 
 	{ "name": "data_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_13_V_read", "role": "default" }} , 
 	{ "name": "data_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_14_V_read", "role": "default" }} , 
 	{ "name": "data_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_15_V_read", "role": "default" }} , 
 	{ "name": "data_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_16_V_read", "role": "default" }} , 
 	{ "name": "data_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_17_V_read", "role": "default" }} , 
 	{ "name": "data_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_19_V_read", "role": "default" }} , 
 	{ "name": "data_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_20_V_read", "role": "default" }} , 
 	{ "name": "data_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_22_V_read", "role": "default" }} , 
 	{ "name": "data_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_23_V_read", "role": "default" }} , 
 	{ "name": "data_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_24_V_read", "role": "default" }} , 
 	{ "name": "data_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_25_V_read", "role": "default" }} , 
 	{ "name": "data_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_26_V_read", "role": "default" }} , 
 	{ "name": "data_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_27_V_read", "role": "default" }} , 
 	{ "name": "data_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_28_V_read", "role": "default" }} , 
 	{ "name": "data_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_29_V_read", "role": "default" }} , 
 	{ "name": "data_31_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_31_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }} , 
 	{ "name": "ap_return_25", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_25", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "4", "EstimateLatencyMin" : "4", "EstimateLatencyMax" : "4",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4", "Max" : "4"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_0_V_read { ap_none {  { data_0_V_read in_data 0 6 } } }
	data_1_V_read { ap_none {  { data_1_V_read in_data 0 6 } } }
	data_2_V_read { ap_none {  { data_2_V_read in_data 0 6 } } }
	data_3_V_read { ap_none {  { data_3_V_read in_data 0 6 } } }
	data_4_V_read { ap_none {  { data_4_V_read in_data 0 6 } } }
	data_5_V_read { ap_none {  { data_5_V_read in_data 0 6 } } }
	data_6_V_read { ap_none {  { data_6_V_read in_data 0 6 } } }
	data_8_V_read { ap_none {  { data_8_V_read in_data 0 6 } } }
	data_9_V_read { ap_none {  { data_9_V_read in_data 0 6 } } }
	data_10_V_read { ap_none {  { data_10_V_read in_data 0 6 } } }
	data_11_V_read { ap_none {  { data_11_V_read in_data 0 6 } } }
	data_12_V_read { ap_none {  { data_12_V_read in_data 0 6 } } }
	data_13_V_read { ap_none {  { data_13_V_read in_data 0 6 } } }
	data_14_V_read { ap_none {  { data_14_V_read in_data 0 6 } } }
	data_15_V_read { ap_none {  { data_15_V_read in_data 0 6 } } }
	data_16_V_read { ap_none {  { data_16_V_read in_data 0 6 } } }
	data_17_V_read { ap_none {  { data_17_V_read in_data 0 6 } } }
	data_19_V_read { ap_none {  { data_19_V_read in_data 0 6 } } }
	data_20_V_read { ap_none {  { data_20_V_read in_data 0 6 } } }
	data_22_V_read { ap_none {  { data_22_V_read in_data 0 6 } } }
	data_23_V_read { ap_none {  { data_23_V_read in_data 0 6 } } }
	data_24_V_read { ap_none {  { data_24_V_read in_data 0 6 } } }
	data_25_V_read { ap_none {  { data_25_V_read in_data 0 6 } } }
	data_26_V_read { ap_none {  { data_26_V_read in_data 0 6 } } }
	data_27_V_read { ap_none {  { data_27_V_read in_data 0 6 } } }
	data_28_V_read { ap_none {  { data_28_V_read in_data 0 6 } } }
	data_29_V_read { ap_none {  { data_29_V_read in_data 0 6 } } }
	data_31_V_read { ap_none {  { data_31_V_read in_data 0 6 } } }
}
set moduleName dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 1
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dense_latency.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.1}
set C_modelType { int 486 }
set C_modelArgList {
	{ data_0_V_read int 6 regular  }
	{ data_1_V_read int 6 regular  }
	{ data_2_V_read int 6 regular  }
	{ data_3_V_read int 6 regular  }
	{ data_4_V_read int 6 regular  }
	{ data_5_V_read int 6 regular  }
	{ data_6_V_read int 6 regular  }
	{ data_7_V_read int 6 regular  }
	{ data_8_V_read int 6 regular  }
	{ data_9_V_read int 6 regular  }
	{ data_10_V_read int 6 regular  }
	{ data_11_V_read int 6 regular  }
	{ data_12_V_read int 6 regular  }
	{ data_13_V_read int 6 regular  }
	{ data_14_V_read int 6 regular  }
	{ data_15_V_read int 6 regular  }
	{ data_17_V_read int 6 regular  }
	{ data_18_V_read int 6 regular  }
	{ data_19_V_read int 6 regular  }
	{ data_20_V_read int 6 regular  }
	{ data_21_V_read int 6 regular  }
	{ data_22_V_read int 6 regular  }
	{ data_23_V_read int 6 regular  }
	{ data_24_V_read int 6 regular  }
	{ data_25_V_read int 6 regular  }
	{ data_26_V_read int 6 regular  }
	{ data_27_V_read int 6 regular  }
	{ data_28_V_read int 6 regular  }
	{ data_29_V_read int 6 regular  }
	{ data_30_V_read int 6 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_0_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_1_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_2_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_3_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_4_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_5_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_6_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_7_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_8_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_9_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_10_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_11_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_12_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_13_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_14_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_15_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_17_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_18_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_19_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_20_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_21_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_22_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_23_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_24_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_25_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_26_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_27_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_28_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_29_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_30_V_read", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 486} ]}
# RTL Port declarations: 
set portNum 60
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ data_0_V_read sc_in sc_lv 6 signal 0 } 
	{ data_1_V_read sc_in sc_lv 6 signal 1 } 
	{ data_2_V_read sc_in sc_lv 6 signal 2 } 
	{ data_3_V_read sc_in sc_lv 6 signal 3 } 
	{ data_4_V_read sc_in sc_lv 6 signal 4 } 
	{ data_5_V_read sc_in sc_lv 6 signal 5 } 
	{ data_6_V_read sc_in sc_lv 6 signal 6 } 
	{ data_7_V_read sc_in sc_lv 6 signal 7 } 
	{ data_8_V_read sc_in sc_lv 6 signal 8 } 
	{ data_9_V_read sc_in sc_lv 6 signal 9 } 
	{ data_10_V_read sc_in sc_lv 6 signal 10 } 
	{ data_11_V_read sc_in sc_lv 6 signal 11 } 
	{ data_12_V_read sc_in sc_lv 6 signal 12 } 
	{ data_13_V_read sc_in sc_lv 6 signal 13 } 
	{ data_14_V_read sc_in sc_lv 6 signal 14 } 
	{ data_15_V_read sc_in sc_lv 6 signal 15 } 
	{ data_17_V_read sc_in sc_lv 6 signal 16 } 
	{ data_18_V_read sc_in sc_lv 6 signal 17 } 
	{ data_19_V_read sc_in sc_lv 6 signal 18 } 
	{ data_20_V_read sc_in sc_lv 6 signal 19 } 
	{ data_21_V_read sc_in sc_lv 6 signal 20 } 
	{ data_22_V_read sc_in sc_lv 6 signal 21 } 
	{ data_23_V_read sc_in sc_lv 6 signal 22 } 
	{ data_24_V_read sc_in sc_lv 6 signal 23 } 
	{ data_25_V_read sc_in sc_lv 6 signal 24 } 
	{ data_26_V_read sc_in sc_lv 6 signal 25 } 
	{ data_27_V_read sc_in sc_lv 6 signal 26 } 
	{ data_28_V_read sc_in sc_lv 6 signal 27 } 
	{ data_29_V_read sc_in sc_lv 6 signal 28 } 
	{ data_30_V_read sc_in sc_lv 6 signal 29 } 
	{ ap_return_0 sc_out sc_lv 18 signal -1 } 
	{ ap_return_1 sc_out sc_lv 18 signal -1 } 
	{ ap_return_2 sc_out sc_lv 18 signal -1 } 
	{ ap_return_3 sc_out sc_lv 18 signal -1 } 
	{ ap_return_4 sc_out sc_lv 18 signal -1 } 
	{ ap_return_5 sc_out sc_lv 18 signal -1 } 
	{ ap_return_6 sc_out sc_lv 18 signal -1 } 
	{ ap_return_7 sc_out sc_lv 18 signal -1 } 
	{ ap_return_8 sc_out sc_lv 18 signal -1 } 
	{ ap_return_9 sc_out sc_lv 18 signal -1 } 
	{ ap_return_10 sc_out sc_lv 18 signal -1 } 
	{ ap_return_11 sc_out sc_lv 18 signal -1 } 
	{ ap_return_12 sc_out sc_lv 18 signal -1 } 
	{ ap_return_13 sc_out sc_lv 18 signal -1 } 
	{ ap_return_14 sc_out sc_lv 18 signal -1 } 
	{ ap_return_15 sc_out sc_lv 18 signal -1 } 
	{ ap_return_16 sc_out sc_lv 18 signal -1 } 
	{ ap_return_17 sc_out sc_lv 18 signal -1 } 
	{ ap_return_18 sc_out sc_lv 18 signal -1 } 
	{ ap_return_19 sc_out sc_lv 18 signal -1 } 
	{ ap_return_20 sc_out sc_lv 18 signal -1 } 
	{ ap_return_21 sc_out sc_lv 18 signal -1 } 
	{ ap_return_22 sc_out sc_lv 18 signal -1 } 
	{ ap_return_23 sc_out sc_lv 18 signal -1 } 
	{ ap_return_24 sc_out sc_lv 18 signal -1 } 
	{ ap_return_25 sc_out sc_lv 18 signal -1 } 
	{ ap_return_26 sc_out sc_lv 18 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "data_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_0_V_read", "role": "default" }} , 
 	{ "name": "data_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_1_V_read", "role": "default" }} , 
 	{ "name": "data_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_2_V_read", "role": "default" }} , 
 	{ "name": "data_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_3_V_read", "role": "default" }} , 
 	{ "name": "data_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_4_V_read", "role": "default" }} , 
 	{ "name": "data_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_5_V_read", "role": "default" }} , 
 	{ "name": "data_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_6_V_read", "role": "default" }} , 
 	{ "name": "data_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_7_V_read", "role": "default" }} , 
 	{ "name": "data_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_8_V_read", "role": "default" }} , 
 	{ "name": "data_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_9_V_read", "role": "default" }} , 
 	{ "name": "data_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_10_V_read", "role": "default" }} , 
 	{ "name": "data_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_11_V_read", "role": "default" }} , 
 	{ "name": "data_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_12_V_read", "role": "default" }} , 
 	{ "name": "data_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_13_V_read", "role": "default" }} , 
 	{ "name": "data_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_14_V_read", "role": "default" }} , 
 	{ "name": "data_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_15_V_read", "role": "default" }} , 
 	{ "name": "data_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_17_V_read", "role": "default" }} , 
 	{ "name": "data_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_18_V_read", "role": "default" }} , 
 	{ "name": "data_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_19_V_read", "role": "default" }} , 
 	{ "name": "data_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_20_V_read", "role": "default" }} , 
 	{ "name": "data_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_21_V_read", "role": "default" }} , 
 	{ "name": "data_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_22_V_read", "role": "default" }} , 
 	{ "name": "data_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_23_V_read", "role": "default" }} , 
 	{ "name": "data_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_24_V_read", "role": "default" }} , 
 	{ "name": "data_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_25_V_read", "role": "default" }} , 
 	{ "name": "data_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_26_V_read", "role": "default" }} , 
 	{ "name": "data_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_27_V_read", "role": "default" }} , 
 	{ "name": "data_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_28_V_read", "role": "default" }} , 
 	{ "name": "data_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_29_V_read", "role": "default" }} , 
 	{ "name": "data_30_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_30_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }} , 
 	{ "name": "ap_return_25", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_25", "role": "default" }} , 
 	{ "name": "ap_return_26", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_26", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "4", "EstimateLatencyMin" : "4", "EstimateLatencyMax" : "4",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4", "Max" : "4"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_0_V_read { ap_none {  { data_0_V_read in_data 0 6 } } }
	data_1_V_read { ap_none {  { data_1_V_read in_data 0 6 } } }
	data_2_V_read { ap_none {  { data_2_V_read in_data 0 6 } } }
	data_3_V_read { ap_none {  { data_3_V_read in_data 0 6 } } }
	data_4_V_read { ap_none {  { data_4_V_read in_data 0 6 } } }
	data_5_V_read { ap_none {  { data_5_V_read in_data 0 6 } } }
	data_6_V_read { ap_none {  { data_6_V_read in_data 0 6 } } }
	data_7_V_read { ap_none {  { data_7_V_read in_data 0 6 } } }
	data_8_V_read { ap_none {  { data_8_V_read in_data 0 6 } } }
	data_9_V_read { ap_none {  { data_9_V_read in_data 0 6 } } }
	data_10_V_read { ap_none {  { data_10_V_read in_data 0 6 } } }
	data_11_V_read { ap_none {  { data_11_V_read in_data 0 6 } } }
	data_12_V_read { ap_none {  { data_12_V_read in_data 0 6 } } }
	data_13_V_read { ap_none {  { data_13_V_read in_data 0 6 } } }
	data_14_V_read { ap_none {  { data_14_V_read in_data 0 6 } } }
	data_15_V_read { ap_none {  { data_15_V_read in_data 0 6 } } }
	data_17_V_read { ap_none {  { data_17_V_read in_data 0 6 } } }
	data_18_V_read { ap_none {  { data_18_V_read in_data 0 6 } } }
	data_19_V_read { ap_none {  { data_19_V_read in_data 0 6 } } }
	data_20_V_read { ap_none {  { data_20_V_read in_data 0 6 } } }
	data_21_V_read { ap_none {  { data_21_V_read in_data 0 6 } } }
	data_22_V_read { ap_none {  { data_22_V_read in_data 0 6 } } }
	data_23_V_read { ap_none {  { data_23_V_read in_data 0 6 } } }
	data_24_V_read { ap_none {  { data_24_V_read in_data 0 6 } } }
	data_25_V_read { ap_none {  { data_25_V_read in_data 0 6 } } }
	data_26_V_read { ap_none {  { data_26_V_read in_data 0 6 } } }
	data_27_V_read { ap_none {  { data_27_V_read in_data 0 6 } } }
	data_28_V_read { ap_none {  { data_28_V_read in_data 0 6 } } }
	data_29_V_read { ap_none {  { data_29_V_read in_data 0 6 } } }
	data_30_V_read { ap_none {  { data_30_V_read in_data 0 6 } } }
}
