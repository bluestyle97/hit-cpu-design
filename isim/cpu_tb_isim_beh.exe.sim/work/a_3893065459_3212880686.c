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
static const char *ng0 = "D:/Xilinx/Projects/CPU_test/fetcher.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_3893065459_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = (0 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 3020);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 2944);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3893065459_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(52, ng0);

LAB3:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 3056);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 2952);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3893065459_3212880686_p_2(char *t0)
{
    char *t1;
    int t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 752U);
    t2 = (0 - 3);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 3U, t5);
    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2960);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t7 = (t0 + 1420U);
    t8 = *((char **)t7);
    t7 = (t0 + 3092);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 16U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB3;

}

static void work_a_3893065459_3212880686_p_3(char *t0)
{
    char t8[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2968);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng0);
    t10 = (t0 + 1512U);
    t14 = *((char **)t10);
    t10 = (t0 + 3128);
    t15 = (t10 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 16U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB5:    t4 = (t0 + 776U);
    t5 = *((char **)t4);
    t4 = (t0 + 4816U);
    t6 = (t0 + 5007);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (3 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t4, t6, t8);
    t1 = t13;
    goto LAB7;

}

static void work_a_3893065459_3212880686_p_4(char *t0)
{
    char t15[16];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 752U);
    t11 = (1 - 3);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 2U, t14);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 2976);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 3164);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 960U);
    t5 = *((char **)t1);
    t1 = (t0 + 3164);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1420U);
    t5 = *((char **)t2);
    t2 = (t0 + 4896U);
    t6 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t15, t5, t2, 1);
    t7 = (t15 + 12U);
    t16 = *((unsigned int *)t7);
    t17 = (1U * t16);
    t4 = (16U != t17);
    if (t4 == 1)
        goto LAB9;

LAB10:    t8 = (t0 + 3164);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t18 = (t10 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 16U);
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB9:    xsi_size_not_matching(16U, t17, 0);
    goto LAB10;

}


extern void work_a_3893065459_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3893065459_3212880686_p_0,(void *)work_a_3893065459_3212880686_p_1,(void *)work_a_3893065459_3212880686_p_2,(void *)work_a_3893065459_3212880686_p_3,(void *)work_a_3893065459_3212880686_p_4};
	xsi_register_didat("work_a_3893065459_3212880686", "isim/cpu_tb_isim_beh.exe.sim/work/a_3893065459_3212880686.didat");
	xsi_register_executes(pe);
}
