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
static const char *ng0 = "//psf/Home/hdl/fir/fir.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1405902285_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);

LAB6:    t2 = (t0 + 3804);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 3804);
    *((int *)t3) = 0;
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    t2 = (t0 + 3900);
    t4 = (t2 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 9U);
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 1152U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    t2 = (t0 + 3864);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 9U);
    xsi_driver_first_trans_delta(t2, 27U, 9U, 0LL);
    xsi_set_current_line(79, ng0);
    t11 = (4 - 2);
    t2 = (t0 + 7308);
    *((int *)t2) = t11;
    t3 = (t0 + 7312);
    *((int *)t3) = 0;
    t12 = t11;
    t13 = 0;

LAB11:    if (t12 >= t13)
        goto LAB12;

LAB14:    goto LAB9;

LAB12:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1796U);
    t7 = *((char **)t4);
    t4 = (t0 + 7308);
    t14 = *((int *)t4);
    t15 = (t14 + 1);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t15);
    t18 = (9U * t17);
    t19 = (0 + t18);
    t8 = (t7 + t19);
    t9 = (t0 + 7308);
    t20 = *((int *)t9);
    t21 = (t20 - 0);
    t22 = (t21 * 1);
    t23 = (9U * t22);
    t24 = (0U + t23);
    t10 = (t0 + 3864);
    t25 = (t10 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t8, 9U);
    xsi_driver_first_trans_delta(t10, t24, 9U, 0LL);

LAB13:    t2 = (t0 + 7308);
    t12 = *((int *)t2);
    t3 = (t0 + 7312);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB14;

LAB15:    t11 = (t12 + -1);
    t12 = t11;
    t4 = (t0 + 7308);
    *((int *)t4) = t12;
    goto LAB11;

}

static void work_a_1405902285_3212880686_p_1(char *t0)
{
    char t12[16];
    char t36[16];
    char t38[16];
    char t50[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    int t8;
    char *t9;
    int t10;
    int t11;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    char *t43;
    int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    char *t52;
    int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned char t57;
    char *t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;

LAB0:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1980U);
    t4 = *((char **)t2);
    t8 = (0 - 0);
    t17 = (t8 * 1);
    t18 = (19U * t17);
    t21 = (0 + t18);
    t2 = (t4 + t21);
    t5 = (t0 + 3972);
    t9 = (t5 + 32U);
    t13 = *((char **)t9);
    t14 = (t13 + 40U);
    t25 = *((char **)t14);
    memcpy(t25, t2, 19U);
    xsi_driver_first_trans_fast(t5);
    t2 = (t0 + 3812);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(90, ng0);
    t8 = (4 - 2);
    t4 = (t0 + 7316);
    *((int *)t4) = 0;
    t9 = (t0 + 7320);
    *((int *)t9) = t8;
    t10 = 0;
    t11 = t8;

LAB8:    if (t10 <= t11)
        goto LAB9;

LAB11:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1888U);
    t4 = *((char **)t2);
    t8 = (18 - 1);
    t10 = (t8 - 17);
    t17 = (t10 * -1);
    t18 = (1U * t17);
    t11 = (4 - 1);
    t15 = (t11 - 0);
    t21 = (t15 * 1);
    t22 = (18U * t21);
    t23 = (0 + t22);
    t24 = (t23 + t18);
    t2 = (t4 + t24);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 1888U);
    t9 = *((char **)t5);
    t16 = (4 - 1);
    t19 = (t16 - 0);
    t31 = (t19 * 1);
    t32 = (18U * t31);
    t33 = (0 + t32);
    t5 = (t9 + t33);
    t14 = ((IEEE_P_2592010699) + 2332);
    t25 = (t36 + 0U);
    t27 = (t25 + 0U);
    *((int *)t27) = 17;
    t27 = (t25 + 4U);
    *((int *)t27) = 0;
    t27 = (t25 + 8U);
    *((int *)t27) = -1;
    t20 = (0 - 17);
    t42 = (t20 * -1);
    t42 = (t42 + 1);
    t27 = (t25 + 12U);
    *((unsigned int *)t27) = t42;
    t13 = xsi_base_array_concat(t13, t12, t14, (char)99, t1, (char)97, t5, t36, (char)101);
    t42 = (1U + 18U);
    t3 = (19U != t42);
    if (t3 == 1)
        goto LAB15;

LAB16:    t27 = (t0 + 3936);
    t28 = (t27 + 32U);
    t34 = *((char **)t28);
    t35 = (t34 + 40U);
    t37 = *((char **)t35);
    memcpy(t37, t13, 19U);
    xsi_driver_first_trans_delta(t27, 57U, 19U, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB9:    xsi_set_current_line(91, ng0);
    t13 = (t0 + 1888U);
    t14 = *((char **)t13);
    t15 = (18 - 1);
    t16 = (t15 - 17);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t13 = (t0 + 7316);
    t19 = *((int *)t13);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t13));
    t22 = (18U * t21);
    t23 = (0 + t22);
    t24 = (t23 + t18);
    t25 = (t14 + t24);
    t26 = *((unsigned char *)t25);
    t27 = (t0 + 1888U);
    t28 = *((char **)t27);
    t27 = (t0 + 7316);
    t29 = *((int *)t27);
    t30 = (t29 - 0);
    t31 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t27));
    t32 = (18U * t31);
    t33 = (0 + t32);
    t34 = (t28 + t33);
    t37 = ((IEEE_P_2592010699) + 2332);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 17;
    t40 = (t39 + 4U);
    *((int *)t40) = 0;
    t40 = (t39 + 8U);
    *((int *)t40) = -1;
    t41 = (0 - 17);
    t42 = (t41 * -1);
    t42 = (t42 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t42;
    t35 = xsi_base_array_concat(t35, t36, t37, (char)99, t26, (char)97, t34, t38, (char)101);
    t40 = (t0 + 1980U);
    t43 = *((char **)t40);
    t40 = (t0 + 7316);
    t44 = *((int *)t40);
    t45 = (t44 + 1);
    t46 = (t45 - 0);
    t42 = (t46 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t45);
    t47 = (19U * t42);
    t48 = (0 + t47);
    t49 = (t43 + t48);
    t51 = (t50 + 0U);
    t52 = (t51 + 0U);
    *((int *)t52) = 18;
    t52 = (t51 + 4U);
    *((int *)t52) = 0;
    t52 = (t51 + 8U);
    *((int *)t52) = -1;
    t53 = (0 - 18);
    t54 = (t53 * -1);
    t54 = (t54 + 1);
    t52 = (t51 + 12U);
    *((unsigned int *)t52) = t54;
    t52 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t35, t36, t49, t50);
    t55 = (t12 + 12U);
    t54 = *((unsigned int *)t55);
    t56 = (1U * t54);
    t57 = (19U != t56);
    if (t57 == 1)
        goto LAB12;

LAB13:    t58 = (t0 + 7316);
    t59 = *((int *)t58);
    t60 = (t59 - 0);
    t61 = (t60 * 1);
    t62 = (19U * t61);
    t63 = (0U + t62);
    t64 = (t0 + 3936);
    t65 = (t64 + 32U);
    t66 = *((char **)t65);
    t67 = (t66 + 40U);
    t68 = *((char **)t67);
    memcpy(t68, t52, 19U);
    xsi_driver_first_trans_delta(t64, t63, 19U, 0LL);

LAB10:    t2 = (t0 + 7316);
    t10 = *((int *)t2);
    t4 = (t0 + 7320);
    t11 = *((int *)t4);
    if (t10 == t11)
        goto LAB11;

LAB14:    t8 = (t10 + 1);
    t10 = t8;
    t5 = (t0 + 7316);
    *((int *)t5) = t10;
    goto LAB8;

LAB12:    xsi_size_not_matching(19U, t56, 0);
    goto LAB13;

LAB15:    xsi_size_not_matching(19U, t42, 0);
    goto LAB16;

}

static void work_a_1405902285_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(114, ng0);

LAB3:    t1 = (t0 + 1704U);
    t2 = *((char **)t1);
    t3 = (19 - 1);
    t4 = (18 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 4008);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 11U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 3820);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

extern void work_a_1405902285_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1405902285_3212880686_p_0,(void *)work_a_1405902285_3212880686_p_1,(void *)work_a_1405902285_3212880686_p_2};
	xsi_register_didat("work_a_1405902285_3212880686", "isim/tb_isim_beh.exe.sim/work/a_1405902285_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 5);
	xsi_register_resolution_function(2, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 5);
	xsi_register_resolution_function(3, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 5);
}
