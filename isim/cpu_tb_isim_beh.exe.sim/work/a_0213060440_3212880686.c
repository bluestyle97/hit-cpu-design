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
static const char *ng0 = "D:/Xilinx/Projects/CPU_test/clock.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0213060440_3212880686_p_0(char *t0)
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
    int t11;
    int t12;
    int t13;
    int t15;
    char *t16;
    int t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 1724);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2998);
    t6 = (t0 + 1768);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3002);
    t5 = (t0 + 1804);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 868U);
    t5 = *((char **)t2);
    t2 = (t0 + 1768);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 3006);
    t11 = xsi_mem_cmp(t1, t2, 4U);
    if (t11 == 1)
        goto LAB8;

LAB14:    t6 = (t0 + 3010);
    t12 = xsi_mem_cmp(t6, t2, 4U);
    if (t12 == 1)
        goto LAB9;

LAB15:    t8 = (t0 + 3014);
    t13 = xsi_mem_cmp(t8, t2, 4U);
    if (t13 == 1)
        goto LAB10;

LAB16:    t10 = (t0 + 3018);
    t15 = xsi_mem_cmp(t10, t2, 4U);
    if (t15 == 1)
        goto LAB11;

LAB17:    t16 = (t0 + 3022);
    t18 = xsi_mem_cmp(t16, t2, 4U);
    if (t18 == 1)
        goto LAB12;

LAB18:
LAB13:    xsi_set_current_line(63, ng0);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(53, ng0);
    t19 = (t0 + 3026);
    t21 = (t0 + 1804);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 4U);
    xsi_driver_first_trans_fast(t21);
    goto LAB7;

LAB9:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 3030);
    t5 = (t0 + 1804);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB7;

LAB10:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 3034);
    t5 = (t0 + 1804);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB7;

LAB11:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3038);
    t5 = (t0 + 1804);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB7;

LAB12:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 3042);
    t5 = (t0 + 1804);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB7;

LAB19:;
}


extern void work_a_0213060440_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0213060440_3212880686_p_0};
	xsi_register_didat("work_a_0213060440_3212880686", "isim/cpu_tb_isim_beh.exe.sim/work/a_0213060440_3212880686.didat");
	xsi_register_executes(pe);
}
