/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Xilinx/Projects/CPU_test/cpu_tb.vhd";



static void work_a_1912994691_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3720);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2788U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3244);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3720);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2788U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3244);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1912994691_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3756);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3756);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 6688);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(150, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(151, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(152, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 6704);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(155, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(156, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(157, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 6720);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(160, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(161, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(162, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 6736);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(165, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(166, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(167, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 6752);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(170, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(171, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(172, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 6768);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(175, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(176, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(177, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 6784);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(180, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    xsi_set_current_line(181, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(182, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 6800);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(185, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    xsi_set_current_line(186, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(187, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 6816);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(189, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    xsi_set_current_line(190, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(191, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 6832);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(194, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB82:    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    xsi_set_current_line(195, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(196, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB81:    goto LAB80;

LAB83:    goto LAB81;

LAB84:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 6848);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(199, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    xsi_set_current_line(200, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(201, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 6864);
    t4 = (t0 + 3828);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(203, ng0);
    t7 = (80 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB98:    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB96:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 6872);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(206, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB97:    goto LAB96;

LAB99:    goto LAB97;

LAB100:    xsi_set_current_line(207, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(208, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB106:    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 6888);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(211, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB105:    goto LAB104;

LAB107:    goto LAB105;

LAB108:    xsi_set_current_line(212, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)4, 16U);
    t4 = (t0 + 3792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(213, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 3388);
    xsi_process_wait(t2, t7);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

LAB112:    xsi_set_current_line(215, ng0);

LAB118:    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

LAB116:    goto LAB2;

LAB117:    goto LAB116;

LAB119:    goto LAB117;

}


extern void work_a_1912994691_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1912994691_2372691052_p_0,(void *)work_a_1912994691_2372691052_p_1};
	xsi_register_didat("work_a_1912994691_2372691052", "isim/cpu_tb_isim_beh.exe.sim/work/a_1912994691_2372691052.didat");
	xsi_register_executes(pe);
}
