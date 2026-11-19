/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

void func_801CCE7C(void **arg0, s16 arg1, s16 arg2, s32 arg3, u16 arg4, s32 arg5, u16 arg6, u16 arg7, u16 arg9, u16 arg10, s32 arg11, u16 arg12, u16 arg13, u16 arg14, s32 arg15, s32 arg16) {
    void **sp4;
    u16 spE;
    u16 sp16;
    u16 sp1E;
    u16 sp26;
    u16 sp2E;
    s32 sp34;
    s32 sp3C;
    s32 sp54;
    s32 sp5C;
    s32 sp6C;
    s32 sp7C;
    s32 sp84;
    s32 sp8C;
    s16 temp_a0_2;
    s16 temp_a3_3;
    s16 temp_t0;
    s16 temp_t1_2;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t3;
    s16 temp_v0_10;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v1;
    s16 var_fp;
    s16 var_s5;
    s16 var_t7;
    s16 var_t7_2;
    s16 var_t8;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_lo_6;
    s32 temp_lo_7;
    s32 temp_lo_8;
    s32 temp_lo_9;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t1;
    s32 temp_t1_3;
    s32 temp_t4;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_9;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_s6;
    s32 var_t2;
    u16 temp_v0_4;
    u16 temp_v0_6;
    u16 var_a2;
    u16 var_s7;
    u32 var_t0;
    void *temp_t5;
    void *temp_t5_10;
    void *temp_t5_11;
    void *temp_t5_12;
    void *temp_t5_13;
    void *temp_t5_14;
    void *temp_t5_15;
    void *temp_t5_16;
    void *temp_t5_17;
    void *temp_t5_18;
    void *temp_t5_19;
    void *temp_t5_20;
    void *temp_t5_21;
    void *temp_t5_22;
    void *temp_t5_23;
    void *temp_t5_24;
    void *temp_t5_25;
    void *temp_t5_26;
    void *temp_t5_27;
    void *temp_t5_28;
    void *temp_t5_29;
    void *temp_t5_2;
    void *temp_t5_30;
    void *temp_t5_31;
    void *temp_t5_32;
    void *temp_t5_33;
    void *temp_t5_34;
    void *temp_t5_35;
    void *temp_t5_36;
    void *temp_t5_37;
    void *temp_t5_38;
    void *temp_t5_39;
    void *temp_t5_3;
    void *temp_t5_40;
    void *temp_t5_41;
    void *temp_t5_42;
    void *temp_t5_4;
    void *temp_t5_5;
    void *temp_t5_6;
    void *temp_t5_7;
    void *temp_t5_8;
    void *temp_t5_9;
    void *var_t5;

    sp4 = arg0;
    var_fp = arg1;
    var_s5 = arg2;
    var_s6 = arg3;
    var_s7 = arg4;
    var_t2 = arg5;
    var_a2 = arg6;
    spE = arg7;
    temp_t5 = *sp4;
    var_t0 = 0;
    if (arg1 < (s16) arg11) {
        temp_v0 = arg11 - arg1;
        var_s6 = arg3 + temp_v0;
        temp_v0_2 = arg5 - temp_v0;
        var_t2 = temp_v0_2;
        var_t0 = (u32) (temp_v0_2 << 0x10) >> 0x1F;
        var_fp = (s16) arg11;
    }
    temp_v0_3 = arg12 - var_s5;
    if (var_s5 < (s16) arg12) {
        var_s7 += temp_v0_3;
        temp_v0_4 = var_a2 - temp_v0_3;
        var_a2 = temp_v0_4;
        if (temp_v0_4 & 0x8000) {
            var_t0 = 1;
        }
        var_s5 = (s16) arg12;
    }
    if (var_t0 == 0) {
        temp_v0_5 = arg13 - var_fp;
        if ((s16) arg13 < (var_fp + (s16) var_t2)) {
            var_t2 = temp_v0_5;
            if (temp_v0_5 & 0x8000) {
                var_t0 = 1;
            }
        }
        temp_v0_6 = arg14 - var_s5;
        if ((s16) arg14 < (var_s5 + (s16) var_a2)) {
            var_a2 = temp_v0_6;
            if (temp_v0_6 & 0x8000) {
                var_t0 = 1;
            }
        }
        if (var_t0 == 0) {
            sp16 = (u16) ((s16) var_t2 / (s16) arg9);
            sp26 = (u16) ((s16) var_t2 % (s16) arg9);
            temp_lo = (s16) var_a2 / (s16) arg10;
            sp1E = (u16) temp_lo;
            sp2E = (u16) ((s16) var_a2 % (s16) arg10);
            temp_t5_2 = temp_t5 + 8;
            M2C_FIELD(temp_t5, s32 *, 0) = 0xFD100000;
            M2C_FIELD(temp_t5, s32 *, 4) = arg16;
            temp_t5_3 = temp_t5_2 + 8;
            M2C_FIELD(temp_t5, s32 *, 8) = 0xE8000000;
            M2C_FIELD(temp_t5_2, s32 *, 4) = 0;
            temp_t5_4 = temp_t5_3 + 8;
            M2C_FIELD(temp_t5_2, s32 *, 8) = 0xF5000100;
            M2C_FIELD(temp_t5_3, s32 *, 4) = 0x07000000;
            temp_t5_5 = temp_t5_4 + 8;
            M2C_FIELD(temp_t5_3, s32 *, 8) = 0xE6000000;
            M2C_FIELD(temp_t5_4, s32 *, 4) = 0;
            temp_t5_6 = temp_t5_5 + 8;
            M2C_FIELD(temp_t5_4, s32 *, 8) = 0xF0000000;
            M2C_FIELD(temp_t5_5, s32 *, 4) = 0x073FC000;
            var_t5 = temp_t5_6 + 8;
            M2C_FIELD(temp_t5_5, s32 *, 8) = 0xE7000000;
            M2C_FIELD(temp_t5_6, s32 *, 4) = 0;
            var_t8 = 0;
            if ((s32) var_t0 < (s16) temp_lo) {
                sp7C = (s32) (s16) sp16;
                sp84 = (s16) sp16 > 0;
                sp34 = (((s16) spE - 1) & 0xFFF) | 0xFD480000;
                sp3C = arg9 << 0x10;
                __repair_rows: {
                    var_t7 = 0;
                    if (sp84 != 0) {
                        temp_v0_7 = var_s7 + (var_t8 * arg10);
                        temp_t1 = sp3C >> 0x10;
                        temp_t9 = (temp_v0_7 * 4) & 0xFFF;
                        sp8C = (s16) arg10 + var_s5;
                        do {
                            temp_t0 = var_s6 + (var_t7 * arg9);
                            temp_t5_7 = var_t5 + 8;
                            M2C_FIELD(var_t5, s32 *, 0) = sp34;
                            M2C_FIELD(var_t5, s32 *, 4) = arg15;
                            temp_t5_8 = temp_t5_7 + 8;
                            temp_a1 = ((((s32) (temp_t1 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000;
                            M2C_FIELD(var_t5, s32 *, 8) = temp_a1;
                            M2C_FIELD(temp_t5_7, s32 *, 4) = 0x07080200;
                            temp_t5_9 = temp_t5_8 + 8;
                            M2C_FIELD(temp_t5_7, s32 *, 8) = 0xE6000000;
                            M2C_FIELD(temp_t5_8, s32 *, 4) = 0;
                            temp_t5_10 = temp_t5_9 + 8;
                            temp_a3 = ((temp_t0 * 4) & 0xFFF) << 0xC;
                            M2C_FIELD(temp_t5_8, s32 *, 8) = (s32) (temp_a3 | (temp_t9 | 0xF4000000));
                            temp_a2 = ((((temp_t0 + temp_t1) - 1) * 4) & 0xFFF) << 0xC;
                            temp_a0 = (((temp_v0_7 + (s16) arg10) - 1) * 4) & 0xFFF;
                            M2C_FIELD(temp_t5_9, s32 *, 4) = (s32) (temp_a2 | (temp_a0 | 0x07000000));
                            temp_t5_11 = temp_t5_10 + 8;
                            M2C_FIELD(temp_t5_9, s32 *, 8) = 0xE7000000;
                            M2C_FIELD(temp_t5_10, s32 *, 4) = 0;
                            temp_t5_12 = temp_t5_11 + 8;
                            M2C_FIELD(temp_t5_10, s32 *, 8) = temp_a1;
                            M2C_FIELD(temp_t5_11, s32 *, 4) = 0x80200;
                            temp_t5_13 = temp_t5_12 + 8;
                            M2C_FIELD(temp_t5_11, s32 *, 8) = (s32) (temp_a3 | (temp_t9 | 0xF2000000));
                            M2C_FIELD(temp_t5_12, s32 *, 4) = (s32) (temp_a2 | temp_a0);
                            temp_t5_14 = temp_t5_13 + 8;
                            temp_lo_2 = var_t7 * temp_t1;
                            temp_lo_3 = var_t8 * (s16) arg10;
                            M2C_FIELD(temp_t5_12, s32 *, 8) = (s32) (((((temp_t1 + var_fp + temp_lo_2) * 4) & 0xFFF) << 0xC) | ((((sp8C + temp_lo_3) * 4) & 0xFFF) | 0xE4000000));
                            M2C_FIELD(temp_t5_13, s32 *, 4) = (s32) (((((var_fp + temp_lo_2) * 4) & 0xFFF) << 0xC) | (((var_s5 + temp_lo_3) * 4) & 0xFFF));
                            temp_t5_15 = temp_t5_14 + 8;
                            M2C_FIELD(temp_t5_13, s32 *, 8) = 0xB4000000;
                            M2C_FIELD(temp_t5_14, s32 *, 4) = (s32) ((temp_t0 << 0x15) | ((temp_v0_7 << 5) & 0xFFFF));
                            M2C_FIELD(temp_t5_14, s32 *, 8) = 0xB3000000;
                            M2C_FIELD(temp_t5_15, s32 *, 4) = 0x04000400;
                            temp_v0_8 = var_t7 + 1;
                            var_t7 = temp_v0_8;
                            var_t5 = temp_t5_15 + 8;
                        } while (temp_v0_8 < sp7C);
                    }
                    if ((s16) sp26 != 0) {
                        temp_t1_2 = var_s6 + (var_t7 * arg9);
                        temp_t2 = var_s7 + (var_t8 * arg10);
                        temp_t5_16 = var_t5 + 8;
                        M2C_FIELD(var_t5, s32 *, 0) = sp34;
                        M2C_FIELD(var_t5, s32 *, 4) = arg15;
                        temp_t5_17 = temp_t5_16 + 8;
                        temp_a2_2 = ((((s32) ((s16) sp26 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000;
                        M2C_FIELD(var_t5, s32 *, 8) = temp_a2_2;
                        M2C_FIELD(temp_t5_16, s32 *, 4) = 0x07080200;
                        temp_t5_18 = temp_t5_17 + 8;
                        M2C_FIELD(temp_t5_16, s32 *, 8) = 0xE6000000;
                        M2C_FIELD(temp_t5_17, s32 *, 4) = 0;
                        temp_t5_19 = temp_t5_18 + 8;
                        temp_a3_2 = ((temp_t1_2 * 4) & 0xFFF) << 0xC;
                        temp_t0_2 = (temp_t2 * 4) & 0xFFF;
                        M2C_FIELD(temp_t5_17, s32 *, 8) = (s32) (temp_a3_2 | (temp_t0_2 | 0xF4000000));
                        temp_a1_2 = ((((temp_t1_2 + (s16) sp26) - 1) * 4) & 0xFFF) << 0xC;
                        temp_v1_2 = (((temp_t2 + (s16) arg10) - 1) * 4) & 0xFFF;
                        M2C_FIELD(temp_t5_18, s32 *, 4) = (s32) (temp_a1_2 | (temp_v1_2 | 0x07000000));
                        temp_t5_20 = temp_t5_19 + 8;
                        M2C_FIELD(temp_t5_18, s32 *, 8) = 0xE7000000;
                        M2C_FIELD(temp_t5_19, s32 *, 4) = 0;
                        temp_t5_21 = temp_t5_20 + 8;
                        M2C_FIELD(temp_t5_19, s32 *, 8) = temp_a2_2;
                        M2C_FIELD(temp_t5_20, s32 *, 4) = 0x80200;
                        temp_t5_22 = temp_t5_21 + 8;
                        M2C_FIELD(temp_t5_20, s32 *, 8) = (s32) (temp_a3_2 | (temp_t0_2 | 0xF2000000));
                        M2C_FIELD(temp_t5_21, s32 *, 4) = (s32) (temp_a1_2 | temp_v1_2);
                        temp_t5_23 = temp_t5_22 + 8;
                        temp_lo_4 = var_t7 * (sp3C >> 0x10);
                        temp_lo_5 = var_t8 * (s16) arg10;
                        M2C_FIELD(temp_t5_21, s32 *, 8) = (s32) ((((((s16) sp26 + var_fp + temp_lo_4) * 4) & 0xFFF) << 0xC) | (((((s16) arg10 + var_s5 + temp_lo_5) * 4) & 0xFFF) | 0xE4000000));
                        M2C_FIELD(temp_t5_22, s32 *, 4) = (s32) (((((var_fp + temp_lo_4) * 4) & 0xFFF) << 0xC) | (((var_s5 + temp_lo_5) * 4) & 0xFFF));
                        temp_t5_24 = temp_t5_23 + 8;
                        M2C_FIELD(temp_t5_22, s32 *, 8) = 0xB4000000;
                        M2C_FIELD(temp_t5_23, s32 *, 4) = (s32) ((temp_t1_2 << 0x15) | ((temp_t2 << 5) & 0xFFFF));
                        var_t5 = temp_t5_24 + 8;
                        M2C_FIELD(temp_t5_23, s32 *, 8) = 0xB3000000;
                        M2C_FIELD(temp_t5_24, s32 *, 4) = 0x04000400;
                    }
                    temp_v1 = var_t8 + 1;
                    var_t8 = temp_v1;
                }
if (temp_v1 < (s16) sp1E) goto __repair_rows;
            }
            var_t7_2 = 0;
            if ((sp2E << 0x10) != 0) {
                temp_v0_9 = sp16 << 0x10;
                sp54 = temp_v0_9;
                if (temp_v0_9 > 0) {
                    temp_a0_2 = var_s7 + (var_t8 * arg10);
                    sp5C = (((s16) spE - 1) & 0xFFF) | 0xFD480000;
                    temp_v1_3 = (temp_a0_2 * 4) & 0xFFF;
                    sp6C = temp_v1_3 | 0xF4000000;
                    temp_t4 = (((temp_a0_2 + (s16) sp2E) - 1) * 4) & 0xFFF;
                    sp8C = (s16) sp2E + var_s5;
                    do {
                        temp_a3_3 = var_s6 + (var_t7_2 * arg9);
                        temp_t5_25 = var_t5 + 8;
                        M2C_FIELD(var_t5, s32 *, 0) = sp5C;
                        M2C_FIELD(var_t5, s32 *, 4) = arg15;
                        temp_t5_26 = temp_t5_25 + 8;
                        temp_a2_3 = ((((s32) ((s16) arg9 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000;
                        M2C_FIELD(var_t5, s32 *, 8) = temp_a2_3;
                        M2C_FIELD(temp_t5_25, s32 *, 4) = 0x07080200;
                        temp_t5_27 = temp_t5_26 + 8;
                        M2C_FIELD(temp_t5_25, s32 *, 8) = 0xE6000000;
                        M2C_FIELD(temp_t5_26, s32 *, 4) = 0;
                        temp_t5_28 = temp_t5_27 + 8;
                        temp_v1_4 = ((temp_a3_3 * 4) & 0xFFF) << 0xC;
                        M2C_FIELD(temp_t5_26, s32 *, 8) = (s32) (temp_v1_4 | sp6C);
                        temp_a1_3 = ((((temp_a3_3 + (s16) arg9) - 1) * 4) & 0xFFF) << 0xC;
                        M2C_FIELD(temp_t5_27, s32 *, 4) = (s32) (temp_a1_3 | (temp_t4 | 0x07000000));
                        temp_t5_29 = temp_t5_28 + 8;
                        M2C_FIELD(temp_t5_27, s32 *, 8) = 0xE7000000;
                        M2C_FIELD(temp_t5_28, s32 *, 4) = 0;
                        temp_t5_30 = temp_t5_29 + 8;
                        M2C_FIELD(temp_t5_28, s32 *, 8) = temp_a2_3;
                        M2C_FIELD(temp_t5_29, s32 *, 4) = 0x80200;
                        temp_t5_31 = temp_t5_30 + 8;
                        M2C_FIELD(temp_t5_29, s32 *, 8) = (s32) (temp_v1_4 | (temp_v1_3 | 0xF2000000));
                        M2C_FIELD(temp_t5_30, s32 *, 4) = (s32) (temp_a1_3 | temp_t4);
                        temp_t5_32 = temp_t5_31 + 8;
                        temp_lo_6 = var_t7_2 * (s16) arg9;
                        temp_lo_7 = var_t8 * (s16) arg10;
                        M2C_FIELD(temp_t5_30, s32 *, 8) = (s32) ((((((s16) arg9 + var_fp + temp_lo_6) * 4) & 0xFFF) << 0xC) | ((((sp8C + temp_lo_7) * 4) & 0xFFF) | 0xE4000000));
                        M2C_FIELD(temp_t5_31, s32 *, 4) = (s32) (((((var_fp + temp_lo_6) * 4) & 0xFFF) << 0xC) | (((var_s5 + temp_lo_7) * 4) & 0xFFF));
                        temp_t5_33 = temp_t5_32 + 8;
                        M2C_FIELD(temp_t5_31, s32 *, 8) = 0xB4000000;
                        M2C_FIELD(temp_t5_32, s32 *, 4) = (s32) ((temp_a3_3 << 0x15) | ((temp_a0_2 << 5) & 0xFFFF));
                        M2C_FIELD(temp_t5_32, s32 *, 8) = 0xB3000000;
                        M2C_FIELD(temp_t5_33, s32 *, 4) = 0x04000400;
                        temp_v0_10 = var_t7_2 + 1;
                        var_t7_2 = temp_v0_10;
                        var_t5 = temp_t5_33 + 8;
                    } while ((temp_v0_10 << 0x10) < sp54);
                }
                if ((s16) sp26 != 0) {
                    temp_t2_2 = var_s6 + (var_t7_2 * arg9);
                    temp_t3 = var_s7 + (var_t8 * arg10);
                    temp_t5_34 = var_t5 + 8;
                    M2C_FIELD(var_t5, s32 *, 0) = (s32) ((((s16) spE - 1) & 0xFFF) | 0xFD480000);
                    M2C_FIELD(var_t5, s32 *, 4) = arg15;
                    temp_t5_35 = temp_t5_34 + 8;
                    temp_a2_4 = ((((s32) ((s16) sp26 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000;
                    M2C_FIELD(var_t5, s32 *, 8) = temp_a2_4;
                    M2C_FIELD(temp_t5_34, s32 *, 4) = 0x07080200;
                    temp_t5_36 = temp_t5_35 + 8;
                    M2C_FIELD(temp_t5_34, s32 *, 8) = 0xE6000000;
                    M2C_FIELD(temp_t5_35, s32 *, 4) = 0;
                    temp_t5_37 = temp_t5_36 + 8;
                    temp_t0_3 = ((temp_t2_2 * 4) & 0xFFF) << 0xC;
                    temp_t1_3 = (temp_t3 * 4) & 0xFFF;
                    M2C_FIELD(temp_t5_35, s32 *, 8) = (s32) (temp_t0_3 | (temp_t1_3 | 0xF4000000));
                    temp_a1_4 = ((((temp_t2_2 + (s16) sp26) - 1) * 4) & 0xFFF) << 0xC;
                    temp_v1_5 = (((temp_t3 + (s16) sp2E) - 1) * 4) & 0xFFF;
                    M2C_FIELD(temp_t5_36, s32 *, 4) = (s32) (temp_a1_4 | (temp_v1_5 | 0x07000000));
                    temp_t5_38 = temp_t5_37 + 8;
                    M2C_FIELD(temp_t5_36, s32 *, 8) = 0xE7000000;
                    M2C_FIELD(temp_t5_37, s32 *, 4) = 0;
                    temp_t5_39 = temp_t5_38 + 8;
                    M2C_FIELD(temp_t5_37, s32 *, 8) = temp_a2_4;
                    M2C_FIELD(temp_t5_38, s32 *, 4) = 0x80200;
                    temp_t5_40 = temp_t5_39 + 8;
                    M2C_FIELD(temp_t5_38, s32 *, 8) = (s32) (temp_t0_3 | (temp_t1_3 | 0xF2000000));
                    M2C_FIELD(temp_t5_39, s32 *, 4) = (s32) (temp_a1_4 | temp_v1_5);
                    temp_t5_41 = temp_t5_40 + 8;
                    temp_lo_8 = var_t7_2 * (s16) arg9;
                    temp_lo_9 = var_t8 * (s16) arg10;
                    M2C_FIELD(temp_t5_39, s32 *, 8) = (s32) ((((((s16) sp26 + var_fp + temp_lo_8) * 4) & 0xFFF) << 0xC) | (((((s16) sp2E + var_s5 + temp_lo_9) * 4) & 0xFFF) | 0xE4000000));
                    M2C_FIELD(temp_t5_40, s32 *, 4) = (s32) (((((var_fp + temp_lo_8) * 4) & 0xFFF) << 0xC) | (((var_s5 + temp_lo_9) * 4) & 0xFFF));
                    temp_t5_42 = temp_t5_41 + 8;
                    M2C_FIELD(temp_t5_40, s32 *, 8) = 0xB4000000;
                    M2C_FIELD(temp_t5_41, s32 *, 4) = (s32) ((temp_t2_2 << 0x15) | ((temp_t3 << 5) & 0xFFFF));
                    var_t5 = temp_t5_42 + 8;
                    M2C_FIELD(temp_t5_41, s32 *, 8) = 0xB3000000;
                    M2C_FIELD(temp_t5_42, s32 *, 4) = 0x04000400;
                }
            }
            M2C_FIELD(var_t5, s32 *, 0) = 0xE7000000;
            M2C_FIELD(var_t5, s32 *, 4) = 0;
            *sp4 = var_t5 + 8;
        }
    }
}
