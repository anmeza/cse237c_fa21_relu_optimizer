#include "dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[2];
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[3];
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[4];
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op4157.read()));
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op4157.read()));
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op4157.read());
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_block_state6() {
    ap_block_state6 = (esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_0_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_1_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_2_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_3_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_4_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_5_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_6_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_7_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_8_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_9_V_U_apdone_blk.read()));
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln41_fu_11005_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_0_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_1_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_2_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_3_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_4_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_5_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_6_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_7_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_8_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_9_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_0_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_1_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_2_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_3_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_4_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_5_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_6_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_7_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_8_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_stream_V_data_9_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_0_V_blk_n = data_stream_V_data_0_V_empty_n.read();
    } else {
        data_stream_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_0_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_0_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_10_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_10_V_blk_n = data_stream_V_data_10_V_empty_n.read();
    } else {
        data_stream_V_data_10_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_10_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_10_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_10_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_11_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_11_V_blk_n = data_stream_V_data_11_V_empty_n.read();
    } else {
        data_stream_V_data_11_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_11_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_11_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_11_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_12_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_12_V_blk_n = data_stream_V_data_12_V_empty_n.read();
    } else {
        data_stream_V_data_12_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_12_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_12_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_12_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_13_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_13_V_blk_n = data_stream_V_data_13_V_empty_n.read();
    } else {
        data_stream_V_data_13_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_13_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_13_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_13_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_14_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_14_V_blk_n = data_stream_V_data_14_V_empty_n.read();
    } else {
        data_stream_V_data_14_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_14_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_14_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_14_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_15_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_15_V_blk_n = data_stream_V_data_15_V_empty_n.read();
    } else {
        data_stream_V_data_15_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_15_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_15_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_15_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_16_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_16_V_blk_n = data_stream_V_data_16_V_empty_n.read();
    } else {
        data_stream_V_data_16_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_16_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_16_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_16_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_17_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_17_V_blk_n = data_stream_V_data_17_V_empty_n.read();
    } else {
        data_stream_V_data_17_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_17_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_17_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_17_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_18_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_18_V_blk_n = data_stream_V_data_18_V_empty_n.read();
    } else {
        data_stream_V_data_18_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_18_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_18_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_18_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_19_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_19_V_blk_n = data_stream_V_data_19_V_empty_n.read();
    } else {
        data_stream_V_data_19_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_19_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_19_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_19_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_1_V_blk_n = data_stream_V_data_1_V_empty_n.read();
    } else {
        data_stream_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_1_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_1_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_20_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_20_V_blk_n = data_stream_V_data_20_V_empty_n.read();
    } else {
        data_stream_V_data_20_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_20_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_20_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_20_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_21_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_21_V_blk_n = data_stream_V_data_21_V_empty_n.read();
    } else {
        data_stream_V_data_21_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_21_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_21_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_21_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_22_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_22_V_blk_n = data_stream_V_data_22_V_empty_n.read();
    } else {
        data_stream_V_data_22_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_22_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_22_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_22_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_23_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_23_V_blk_n = data_stream_V_data_23_V_empty_n.read();
    } else {
        data_stream_V_data_23_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_23_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_23_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_23_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_24_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_24_V_blk_n = data_stream_V_data_24_V_empty_n.read();
    } else {
        data_stream_V_data_24_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_24_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_24_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_24_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_25_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_25_V_blk_n = data_stream_V_data_25_V_empty_n.read();
    } else {
        data_stream_V_data_25_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_25_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_25_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_25_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_26_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_26_V_blk_n = data_stream_V_data_26_V_empty_n.read();
    } else {
        data_stream_V_data_26_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_26_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_26_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_26_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_27_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_27_V_blk_n = data_stream_V_data_27_V_empty_n.read();
    } else {
        data_stream_V_data_27_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_27_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_27_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_27_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_28_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_28_V_blk_n = data_stream_V_data_28_V_empty_n.read();
    } else {
        data_stream_V_data_28_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_28_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_28_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_28_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_29_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_29_V_blk_n = data_stream_V_data_29_V_empty_n.read();
    } else {
        data_stream_V_data_29_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_29_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_29_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_29_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_2_V_blk_n = data_stream_V_data_2_V_empty_n.read();
    } else {
        data_stream_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_2_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_2_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_30_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_30_V_blk_n = data_stream_V_data_30_V_empty_n.read();
    } else {
        data_stream_V_data_30_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_30_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_30_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_30_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_31_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_31_V_blk_n = data_stream_V_data_31_V_empty_n.read();
    } else {
        data_stream_V_data_31_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_31_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_31_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_31_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_3_V_blk_n = data_stream_V_data_3_V_empty_n.read();
    } else {
        data_stream_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_3_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_3_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_3_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_4_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_4_V_blk_n = data_stream_V_data_4_V_empty_n.read();
    } else {
        data_stream_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_4_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_4_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_4_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_5_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_5_V_blk_n = data_stream_V_data_5_V_empty_n.read();
    } else {
        data_stream_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_5_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_5_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_5_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_6_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_6_V_blk_n = data_stream_V_data_6_V_empty_n.read();
    } else {
        data_stream_V_data_6_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_6_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_6_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_6_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_7_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_7_V_blk_n = data_stream_V_data_7_V_empty_n.read();
    } else {
        data_stream_V_data_7_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_7_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_7_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_7_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_8_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_8_V_blk_n = data_stream_V_data_8_V_empty_n.read();
    } else {
        data_stream_V_data_8_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_8_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_8_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_8_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_9_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_9_V_blk_n = data_stream_V_data_9_V_empty_n.read();
    } else {
        data_stream_V_data_9_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_data_stream_V_data_9_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_9_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_9_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_start() {
    grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_start = grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_start_reg.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_i_in_fu_11011_p2() {
    i_in_fu_11011_p2 = (!i_in_0_reg_8940.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_in_0_reg_8940.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_icmp_ln41_fu_11005_p2() {
    icmp_ln41_fu_11005_p2 = (!i_in_0_reg_8940.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(i_in_0_reg_8940.read() == ap_const_lv7_40);
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_io_acc_block_signal_op4157() {
    io_acc_block_signal_op4157 = (data_stream_V_data_0_V_empty_n.read() & data_stream_V_data_1_V_empty_n.read() & data_stream_V_data_2_V_empty_n.read() & data_stream_V_data_3_V_empty_n.read() & data_stream_V_data_4_V_empty_n.read() & data_stream_V_data_5_V_empty_n.read() & data_stream_V_data_6_V_empty_n.read() & data_stream_V_data_7_V_empty_n.read() & data_stream_V_data_8_V_empty_n.read() & data_stream_V_data_9_V_empty_n.read() & data_stream_V_data_10_V_empty_n.read() & data_stream_V_data_11_V_empty_n.read() & data_stream_V_data_12_V_empty_n.read() & data_stream_V_data_13_V_empty_n.read() & data_stream_V_data_14_V_empty_n.read() & data_stream_V_data_15_V_empty_n.read() & data_stream_V_data_16_V_empty_n.read() & data_stream_V_data_17_V_empty_n.read() & data_stream_V_data_18_V_empty_n.read() & data_stream_V_data_19_V_empty_n.read() & data_stream_V_data_20_V_empty_n.read() & data_stream_V_data_21_V_empty_n.read() & data_stream_V_data_22_V_empty_n.read() & data_stream_V_data_23_V_empty_n.read() & data_stream_V_data_24_V_empty_n.read() & data_stream_V_data_25_V_empty_n.read() & data_stream_V_data_26_V_empty_n.read() & data_stream_V_data_27_V_empty_n.read() & data_stream_V_data_28_V_empty_n.read() & data_stream_V_data_29_V_empty_n.read() & data_stream_V_data_30_V_empty_n.read() & data_stream_V_data_31_V_empty_n.read());
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_0_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_stream_V_data_0_V_TDATA_blk_n = res_stream_V_data_0_V_TREADY_int.read();
    } else {
        res_stream_V_data_0_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_0_V_TVALID() {
    res_stream_V_data_0_V_TVALID = regslice_both_res_stream_V_data_0_V_U_vld_out.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_0_V_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        res_stream_V_data_0_V_TVALID_int = ap_const_logic_1;
    } else {
        res_stream_V_data_0_V_TVALID_int = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_1_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_stream_V_data_1_V_TDATA_blk_n = res_stream_V_data_1_V_TREADY_int.read();
    } else {
        res_stream_V_data_1_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_1_V_TVALID() {
    res_stream_V_data_1_V_TVALID = regslice_both_res_stream_V_data_1_V_U_vld_out.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_1_V_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        res_stream_V_data_1_V_TVALID_int = ap_const_logic_1;
    } else {
        res_stream_V_data_1_V_TVALID_int = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_2_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_stream_V_data_2_V_TDATA_blk_n = res_stream_V_data_2_V_TREADY_int.read();
    } else {
        res_stream_V_data_2_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_2_V_TVALID() {
    res_stream_V_data_2_V_TVALID = regslice_both_res_stream_V_data_2_V_U_vld_out.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_2_V_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        res_stream_V_data_2_V_TVALID_int = ap_const_logic_1;
    } else {
        res_stream_V_data_2_V_TVALID_int = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_3_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_stream_V_data_3_V_TDATA_blk_n = res_stream_V_data_3_V_TREADY_int.read();
    } else {
        res_stream_V_data_3_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_3_V_TVALID() {
    res_stream_V_data_3_V_TVALID = regslice_both_res_stream_V_data_3_V_U_vld_out.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_3_V_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        res_stream_V_data_3_V_TVALID_int = ap_const_logic_1;
    } else {
        res_stream_V_data_3_V_TVALID_int = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_4_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_stream_V_data_4_V_TDATA_blk_n = res_stream_V_data_4_V_TREADY_int.read();
    } else {
        res_stream_V_data_4_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_4_V_TVALID() {
    res_stream_V_data_4_V_TVALID = regslice_both_res_stream_V_data_4_V_U_vld_out.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_4_V_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        res_stream_V_data_4_V_TVALID_int = ap_const_logic_1;
    } else {
        res_stream_V_data_4_V_TVALID_int = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_5_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_stream_V_data_5_V_TDATA_blk_n = res_stream_V_data_5_V_TREADY_int.read();
    } else {
        res_stream_V_data_5_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_5_V_TVALID() {
    res_stream_V_data_5_V_TVALID = regslice_both_res_stream_V_data_5_V_U_vld_out.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_5_V_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        res_stream_V_data_5_V_TVALID_int = ap_const_logic_1;
    } else {
        res_stream_V_data_5_V_TVALID_int = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_6_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_stream_V_data_6_V_TDATA_blk_n = res_stream_V_data_6_V_TREADY_int.read();
    } else {
        res_stream_V_data_6_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_6_V_TVALID() {
    res_stream_V_data_6_V_TVALID = regslice_both_res_stream_V_data_6_V_U_vld_out.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_6_V_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        res_stream_V_data_6_V_TVALID_int = ap_const_logic_1;
    } else {
        res_stream_V_data_6_V_TVALID_int = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_7_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_stream_V_data_7_V_TDATA_blk_n = res_stream_V_data_7_V_TREADY_int.read();
    } else {
        res_stream_V_data_7_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_7_V_TVALID() {
    res_stream_V_data_7_V_TVALID = regslice_both_res_stream_V_data_7_V_U_vld_out.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_7_V_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        res_stream_V_data_7_V_TVALID_int = ap_const_logic_1;
    } else {
        res_stream_V_data_7_V_TVALID_int = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_8_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_stream_V_data_8_V_TDATA_blk_n = res_stream_V_data_8_V_TREADY_int.read();
    } else {
        res_stream_V_data_8_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_8_V_TVALID() {
    res_stream_V_data_8_V_TVALID = regslice_both_res_stream_V_data_8_V_U_vld_out.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_8_V_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        res_stream_V_data_8_V_TVALID_int = ap_const_logic_1;
    } else {
        res_stream_V_data_8_V_TVALID_int = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_9_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_stream_V_data_9_V_TDATA_blk_n = res_stream_V_data_9_V_TREADY_int.read();
    } else {
        res_stream_V_data_9_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_9_V_TVALID() {
    res_stream_V_data_9_V_TVALID = regslice_both_res_stream_V_data_9_V_U_vld_out.read();
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_res_stream_V_data_9_V_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_8_6_5_3_0_config18_s_fu_8951_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, res_stream_V_data_0_V_TREADY_int.read())))) {
        res_stream_V_data_9_V_TVALID_int = ap_const_logic_1;
    } else {
        res_stream_V_data_9_V_TVALID_int = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_8_6_5_3_0_10u_config18_s::thread_trunc_ln203_fu_11017_p1() {
    trunc_ln203_fu_11017_p1 = i_in_0_reg_8940.read().range(6-1, 0);
}

}

