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
static const char *ng0 = "D:/Xilinx/Projects/CPU_test/mem_access.vhd";



static void work_a_2827403486_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:    t11 = (t0 + 868U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    if (t14 == 1)
        goto LAB7;

LAB8:    t11 = (t0 + 960U);
    t15 = *((char **)t11);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)2);
    t10 = t17;

LAB9:    if (t10 != 0)
        goto LAB5;

LAB6:
LAB10:    t23 = xsi_get_transient_memory(16U);
    memset(t23, 0, 16U);
    t24 = t23;
    memset(t24, (unsigned char)4, 16U);
    t25 = (t0 + 5284);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t23, 16U);
    xsi_driver_first_trans_fast_port(t25);

LAB2:    t30 = (t0 + 5176);
    *((int *)t30) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 684U);
    t5 = *((char **)t1);
    t1 = (t0 + 5284);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    t11 = (t0 + 1052U);
    t18 = *((char **)t11);
    t11 = (t0 + 5284);
    t19 = (t11 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 16U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB2;

LAB7:    t10 = (unsigned char)1;
    goto LAB9;

LAB11:    goto LAB2;

}

static void work_a_2827403486_3212880686_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 868U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 960U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 5320);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t22 = (t0 + 5184);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 5320);
    t13 = (t3 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void work_a_2827403486_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 868U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 5356);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 5192);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 5356);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_2827403486_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 5392);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 5200);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5392);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2827403486_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 5428);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 5208);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5428);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2827403486_3212880686_p_5(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 868U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 960U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 5464);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t22 = (t0 + 5216);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 5464);
    t13 = (t3 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void work_a_2827403486_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB18;

LAB19:    t4 = (unsigned char)0;

LAB20:    if (t4 == 1)
        goto LAB15;

LAB16:    t3 = (unsigned char)0;

LAB17:    if (t3 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(102, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)4, 8U);
    t5 = (t0 + 5536);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(103, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)4, 16U);
    t5 = (t0 + 5500);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);

LAB3:    t1 = (t0 + 5224);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1880U);
    t5 = *((char **)t1);
    t1 = (t0 + 5500);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(85, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)4, 8U);
    t5 = (t0 + 5536);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(87, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t7 = t1;
    memset(t7, (unsigned char)4, 16U);
    t8 = (t0 + 5500);
    t9 = (t8 + 32U);
    t16 = *((char **)t9);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 16U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t19 = (15 - 7);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t5 = (t0 + 5536);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB7:    t1 = (t0 + 1972U);
    t6 = *((char **)t1);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    t3 = t15;
    goto LAB9;

LAB10:    t1 = (t0 + 868U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t4 = t13;
    goto LAB12;

LAB13:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1052U);
    t7 = *((char **)t1);
    t19 = (15 - 1);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t7 + t21);
    t8 = (t0 + 9181);
    t22 = xsi_mem_cmp(t8, t1, 2U);
    if (t22 == 1)
        goto LAB22;

LAB26:    t16 = (t0 + 9183);
    t23 = xsi_mem_cmp(t16, t1, 2U);
    if (t23 == 1)
        goto LAB23;

LAB27:    t18 = (t0 + 9185);
    t25 = xsi_mem_cmp(t18, t1, 2U);
    if (t25 == 1)
        goto LAB24;

LAB28:
LAB25:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    t1 = (t0 + 5536);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB21:    xsi_set_current_line(100, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)4, 16U);
    t5 = (t0 + 5500);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB15:    t1 = (t0 + 1972U);
    t6 = *((char **)t1);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)2);
    t3 = t15;
    goto LAB17;

LAB18:    t1 = (t0 + 868U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t4 = t13;
    goto LAB20;

LAB22:    xsi_set_current_line(92, ng0);
    t26 = (t0 + 2524U);
    t27 = *((char **)t26);
    t26 = (t0 + 5536);
    t28 = (t26 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memcpy(t31, t27, 8U);
    xsi_driver_first_trans_fast_port(t26);
    goto LAB21;

LAB23:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2616U);
    t2 = *((char **)t1);
    t1 = (t0 + 5536);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

LAB24:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2708U);
    t2 = *((char **)t1);
    t1 = (t0 + 5536);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

LAB29:;
}

static void work_a_2827403486_3212880686_p_7(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    int t24;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t3 = (t0 + 592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = (unsigned char)0;

LAB20:    if (t2 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(141, ng0);
    t3 = xsi_get_transient_memory(16U);
    memset(t3, 0, 16U);
    t4 = t3;
    memset(t4, (unsigned char)4, 16U);
    t7 = (t0 + 5572);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 16U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(142, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5608);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(143, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5644);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(144, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5680);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(145, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5716);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB3:    t3 = (t0 + 5232);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 9187);
    t14 = (8U != 8U);
    if (t14 == 1)
        goto LAB11;

LAB12:    t15 = (t0 + 5572);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t3, 8U);
    xsi_driver_first_trans_delta(t15, 0U, 8U, 0LL);
    xsi_set_current_line(111, ng0);
    t3 = (t0 + 1144U);
    t4 = *((char **)t3);
    t3 = (t0 + 5572);
    t7 = (t3 + 32U);
    t10 = *((char **)t7);
    t13 = (t10 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_delta(t3, 8U, 8U, 0LL);
    xsi_set_current_line(112, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5608);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(113, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5644);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(114, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5680);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(115, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5716);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB3;

LAB5:    t3 = (t0 + 2064U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    t3 = (t0 + 960U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    t2 = t9;
    goto LAB10;

LAB11:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 1052U);
    t13 = *((char **)t3);
    t20 = (15 - 1);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t3 = (t13 + t22);
    t15 = (t0 + 9195);
    t23 = xsi_mem_cmp(t15, t3, 2U);
    if (t23 == 1)
        goto LAB22;

LAB26:    t17 = (t0 + 9197);
    t24 = xsi_mem_cmp(t17, t3, 2U);
    if (t24 == 1)
        goto LAB23;

LAB27:    t19 = (t0 + 9199);
    t26 = xsi_mem_cmp(t19, t3, 2U);
    if (t26 == 1)
        goto LAB24;

LAB28:
LAB25:    xsi_set_current_line(134, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5608);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(135, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5644);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(136, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5680);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(137, ng0);
    t3 = (t0 + 1144U);
    t4 = *((char **)t3);
    t3 = (t0 + 5716);
    t7 = (t3 + 32U);
    t10 = *((char **)t7);
    t13 = (t10 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast_port(t3);

LAB21:    xsi_set_current_line(139, ng0);
    t3 = xsi_get_transient_memory(16U);
    memset(t3, 0, 16U);
    t4 = t3;
    memset(t4, (unsigned char)4, 16U);
    t7 = (t0 + 5572);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 16U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB3;

LAB15:    t3 = (t0 + 2064U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;
    goto LAB17;

LAB18:    t3 = (t0 + 960U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;
    goto LAB20;

LAB22:    xsi_set_current_line(119, ng0);
    t27 = (t0 + 1144U);
    t28 = *((char **)t27);
    t27 = (t0 + 5608);
    t29 = (t27 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    memcpy(t32, t28, 8U);
    xsi_driver_first_trans_fast_port(t27);
    xsi_set_current_line(120, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5644);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(121, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5680);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(122, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5716);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB21;

LAB23:    xsi_set_current_line(124, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5608);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(125, ng0);
    t3 = (t0 + 1144U);
    t4 = *((char **)t3);
    t3 = (t0 + 5644);
    t7 = (t3 + 32U);
    t10 = *((char **)t7);
    t13 = (t10 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(126, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5680);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(127, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5716);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB21;

LAB24:    xsi_set_current_line(129, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5608);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(130, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5644);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(131, ng0);
    t3 = (t0 + 1144U);
    t4 = *((char **)t3);
    t3 = (t0 + 5680);
    t7 = (t3 + 32U);
    t10 = *((char **)t7);
    t13 = (t10 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(132, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)4, 8U);
    t7 = (t0 + 5716);
    t10 = (t7 + 32U);
    t13 = *((char **)t10);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB21;

LAB29:;
}

static void work_a_2827403486_3212880686_p_8(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB10;

LAB11:    t1 = (unsigned char)0;

LAB12:    if (t1 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 5752);
    t3 = (t2 + 32U);
    t6 = *((char **)t3);
    t9 = (t6 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5788);
    t3 = (t2 + 32U);
    t6 = *((char **)t3);
    t9 = (t6 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 5824);
    t3 = (t2 + 32U);
    t6 = *((char **)t3);
    t9 = (t6 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(165, ng0);
    t2 = xsi_get_transient_memory(2U);
    memset(t2, 0, 2U);
    t3 = t2;
    memset(t3, (unsigned char)4, 2U);
    t6 = (t0 + 5860);
    t9 = (t6 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_fast_port(t6);

LAB3:    t2 = (t0 + 5240);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 5752);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 5788);
    t3 = (t2 + 32U);
    t6 = *((char **)t3);
    t9 = (t6 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 5824);
    t3 = (t2 + 32U);
    t6 = *((char **)t3);
    t9 = (t6 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1052U);
    t3 = *((char **)t2);
    t13 = (15 - 1);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t6 = (t0 + 5860);
    t9 = (t6 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    t2 = (t0 + 2064U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB8:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 5752);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 5788);
    t3 = (t2 + 32U);
    t6 = *((char **)t3);
    t9 = (t6 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 5824);
    t3 = (t2 + 32U);
    t6 = *((char **)t3);
    t9 = (t6 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 1052U);
    t3 = *((char **)t2);
    t13 = (15 - 1);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t6 = (t0 + 5860);
    t9 = (t6 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB10:    t2 = (t0 + 2064U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB12;

}


extern void work_a_2827403486_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2827403486_3212880686_p_0,(void *)work_a_2827403486_3212880686_p_1,(void *)work_a_2827403486_3212880686_p_2,(void *)work_a_2827403486_3212880686_p_3,(void *)work_a_2827403486_3212880686_p_4,(void *)work_a_2827403486_3212880686_p_5,(void *)work_a_2827403486_3212880686_p_6,(void *)work_a_2827403486_3212880686_p_7,(void *)work_a_2827403486_3212880686_p_8};
	xsi_register_didat("work_a_2827403486_3212880686", "isim/cpu_tb_isim_beh.exe.sim/work/a_2827403486_3212880686.didat");
	xsi_register_executes(pe);
}
