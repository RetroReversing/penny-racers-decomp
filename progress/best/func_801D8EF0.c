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

M2C_UNK func_800DEFF8();                            /* extern */
M2C_UNK func_800DF094();                            /* extern */
M2C_UNK func_800DF138(s32);                         /* extern */
M2C_UNK func_800DF170(u16);                         /* extern */
M2C_UNK func_800DF1A8(u16, s32);                    /* extern */
M2C_UNK func_8014B590(s32);                         /* extern */
M2C_UNK func_8014B714(s32);                         /* extern */
M2C_UNK func_801B7584(s32, s32);                    /* extern */
M2C_UNK func_801D651C(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_801DD938(); /* extern */
s32 func_801DDCDC(s32, M2C_UNK);                    /* extern */
s8 func_801E189C();                                 /* extern */
M2C_UNK func_801E1C38(s32);                         /* extern */
s32 func_801E2BA4();                             /* extern */
M2C_UNK func_801E2BFC();                            /* extern */
M2C_UNK func_801E2D18();                            /* extern */
M2C_UNK func_801E2E48(s32);                         /* extern */
M2C_UNK func_801E2F38(s32);                         /* extern */
s32 func_801E2FCC(s32);                             /* extern */
M2C_UNK nuContPakCodeSet(s32, s32);                 /* extern */
M2C_UNK nuContPakFileOpenJis(void *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK nuContPakFileReadWrite(void *, s32, M2C_UNK, s32 *, s32); /* extern */
M2C_UNK nuContPakOpen(void *, s32);                 /* extern */
M2C_UNK nuContPakRepairId(void *);                  /* extern */
extern M2C_UNK D_80000000;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F330;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern M2C_UNK D_8011F33C;
extern s32 D_80189B38;
extern u8 D_80190CB2;
extern s8 D_801C5EA0;
extern M2C_UNK D_801C698C;
extern M2C_UNK D_801C69AC;
extern s16 D_801E879C;
extern M2C_UNK D_801E87A0;
extern M2C_UNK D_801E87A8;
extern M2C_UNK D_801E87BC;
extern s8 D_801E87E4;
extern s32 D_801E973C;
extern s8 D_801E9766;
extern u8 D_801E9780;
extern u8 D_801E9798;
extern s32 D_801E9988;
extern s32 D_801E998C;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern u16 D_801E9B1A;
extern u16 D_801E9B32;
extern u8 D_801E9B34;
extern u8 D_801F1888;
extern M2C_UNK D_801F1898;
extern M2C_UNK D_801F18A0;
extern M2C_UNK D_801F18A4;
extern s32 D_801F18E0;
extern M2C_UNK D_8021B00C;
extern M2C_UNK D_8021B064;
extern M2C_UNK D_8021B070;
extern M2C_UNK D_8021B690;
extern s8 D_8021E15F;

void func_801D8EF0(s32 arg0) {
    f32 temp_fv1;
    f32 temp_fv1_10;
    f32 temp_fv1_11;
    f32 temp_fv1_12;
    f32 temp_fv1_13;
    f32 temp_fv1_14;
    f32 temp_fv1_15;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 temp_fv1_6;
    f32 temp_fv1_7;
    f32 temp_fv1_8;
    f32 temp_fv1_9;
    s16 var_v0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_s0_13;
    s32 temp_s0_14;
    s32 temp_s0_15;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_11;
    s32 temp_v1_12;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    s32 var_a0;
    s32 var_a0_10;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_a0_8;
    s32 var_a0_9;
    s32 var_s2;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_14;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_11;
    s32 var_v1_12;
    s32 var_v1_13;
    s32 var_v1_14;
    s32 var_v1_15;
    s32 var_v1_17;
    s32 var_v1_2;
    s32 var_v1_4;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    u16 temp_v1_2;
    u32 temp_v1_10;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_s0_3;
    u32 var_s0_4;
    u32 var_s0_5;
    u32 var_v1_10;
    u32 var_v1_16;
    u32 var_v1_3;
    u32 var_v1_5;
    u32 var_v1_9;
    u8 temp_s1;
    u8 temp_s2;
    u8 temp_s2_2;
    void *temp_s2_3;

    temp_s2 = D_801F1888;
    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    temp_s1 = *(&D_8011F2FC + temp_v1);
    temp_v1_2 = *(&D_8011F32E + temp_v1);
    switch (temp_v1_2) {                            /* switch 1 */
        D_801E9798 = 0;
        D_801E9780 = 0;
        D_801E879C = 0;
        var_v1 = (arg0 & 0xFFFF) * 0x64;
        var_v0 = 1;
block_247:
        *(&D_8011F32E + var_v1) = var_v0;
block_248:
        if ((u8) D_801E9798 < 0x1EU) {
            D_801E9798 += 1;
            return;
        }
        D_801E9798 = 0;
        return;
        temp_s0 = arg0 & 0xFFFF;
        func_800DEFF8();
        func_800DF138(temp_s0);
        temp_v0 = temp_s0 * 0x64;
        *(&D_8011F338 + temp_v0) = 0;
        temp_fv1 = *(&D_8011F334 + temp_v0);
        if (temp_fv1 >= 2.1474836e9f) {
            var_a0 = (s32) (temp_fv1 - 2.1474836e9f) | 0x80000000;
        } else {
            var_a0 = (s32) temp_fv1;
        }
        *(&D_8011F32E + temp_v0) = (s16) var_a0;
        temp_v1_3 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F330 + temp_v1_3) = (s16) *(&D_8011F2F0 + temp_v1_3);
        func_800DF1A8(D_801E9B32, temp_v0);
        D_801E9780 = 0;
        goto block_248;
        func_800DF094();
        temp_v1_4 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F32E + temp_v1_4) = 1;
        *(&D_8011F330 + temp_v1_4) = 1;
        func_800DF170(D_801E9B32);
        goto block_248;
        temp_a1 = (arg0 & 0xFFFF) * 0x64;
        temp_fv1_2 = *(&D_8011F338 + temp_a1);
        if (temp_fv1_2 >= 2.1474836e9f) {
            var_v0_2 = (s32) (temp_fv1_2 - 2.1474836e9f) | (s32) (&D_80000000 + 1);
        } else {
            var_v0_2 = (s32) temp_fv1_2 + 1;
        }
        *(&D_8011F338 + temp_a1) = (f32) (var_v0_2 & 0xFFFF);
        var_v1_2 = arg0 & 0xFFFF;
        temp_fv1_3 = *(&D_8011F338 + (var_v1_2 * 0x64));
        if (temp_fv1_3 >= 2.1474836e9f) {
            var_a0_2 = (s32) (temp_fv1_3 - 2.1474836e9f) | 0x80000000;
            var_v1_2 = arg0 & 0xFFFF;
            var_v0_3 = var_v1_2 * 2;
        } else {
            var_a0_2 = (s32) temp_fv1_3;
            var_v0_3 = var_v1_2 * 2;
        }
        temp_fv1_4 = *(&D_8011F33C + ((((var_v0_3 + var_v1_2) * 8) + var_v1_2) * 4));
        if (!(temp_fv1_4 >= 2.1474836e9f)) {
            var_a0_3 = (s32) temp_fv1_4;
            var_v1_3 = var_a0_2 & 0xFFFF;
        } else {
            var_a0_3 = (s32) (temp_fv1_4 - 2.1474836e9f) | 0x80000000;
            var_v1_3 = var_a0_2 & 0xFFFF;
        }
        if ((u32) (var_a0_3 & 0xFFFF) < var_v1_3) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0x13;
        }
        var_v0_4 = arg0 & 0xFFFF;
        if (*(&D_801E9990 + ((temp_s1 & 0xFF) * 0x70)) == 1) {
block_246:
            var_v1 = var_v0_4 * 0x64;
            var_v0 = 0x13;
            goto block_247;
        }
        goto block_248;
        var_v0_4 = arg0 & 0xFFFF;
        if (*(&D_801E9990 + ((temp_s1 & 0xFF) * 0x70)) == 1) {
            goto block_246;
        }
        goto block_248;
        temp_a1_2 = (arg0 & 0xFFFF) * 0x64;
        temp_fv1_5 = *(&D_8011F338 + temp_a1_2);
        if (temp_fv1_5 >= 2.1474836e9f) {
            var_v0_5 = (s32) (temp_fv1_5 - 2.1474836e9f) | (s32) (&D_80000000 + 1);
        } else {
            var_v0_5 = (s32) temp_fv1_5 + 1;
        }
        *(&D_8011F338 + temp_a1_2) = (f32) (var_v0_5 & 0xFFFF);
        var_v1_4 = arg0 & 0xFFFF;
        temp_fv1_6 = *(&D_8011F338 + (var_v1_4 * 0x64));
        if (temp_fv1_6 >= 2.1474836e9f) {
            var_a0_4 = (s32) (temp_fv1_6 - 2.1474836e9f) | 0x80000000;
            var_v1_4 = arg0 & 0xFFFF;
            var_v0_6 = var_v1_4 * 2;
        } else {
            var_a0_4 = (s32) temp_fv1_6;
            var_v0_6 = var_v1_4 * 2;
        }
        temp_fv1_7 = *(&D_8011F33C + ((((var_v0_6 + var_v1_4) * 8) + var_v1_4) * 4));
        if (!(temp_fv1_7 >= 2.1474836e9f)) {
            var_a0_5 = (s32) temp_fv1_7;
            var_v1_5 = var_a0_4 & 0xFFFF;
        } else {
            var_a0_5 = (s32) (temp_fv1_7 - 2.1474836e9f) | 0x80000000;
            var_v1_5 = var_a0_4 & 0xFFFF;
        }
        var_v0_4 = arg0 & 0xFFFF;
        if ((u32) (var_a0_5 & 0xFFFF) < var_v1_5) {
            goto block_246;
        }
        goto block_248;
        if (*(&D_801E9988 + ((temp_s1 & 0xFF) * 0x70)) != 1) {
            temp_s0_2 = temp_s1 & 0xFF;
            if (*(&D_801E998C + ((temp_s1 & 0xFF) * 0x70)) != 1) {
                temp_v1_5 = *(&D_801E9990 + (temp_s0_2 * 0x70));
                if (temp_v1_5 == 1) {
                    temp_s2_2 = D_801E9780;
                    if (temp_s2_2 == temp_v1_5) {
                        func_801D651C(7, 0x3D);
                        temp_s0_3 = temp_s0_2 * 0x10;
                        nuContPakRepairId(temp_s0_3 + &D_801F1898);
                        temp_v1_6 = *(&D_801F18A0 + temp_s0_3);
                        if (temp_v1_6 != temp_s2_2) {
                            switch (temp_v1_6) {    /* switch 2; irregular */
                                var_v0_7 = 0xE;
                                break;
                                var_v0_7 = 0xB;
                                break;
                                var_v0_7 = 0xF;
                                break;
                            }
                        } else {
                            var_v0_7 = 0xA;
                        }
block_242:
                        func_801DD938(0x10, 0x4C, 0xA, 2, var_v0_7);
                    } else {
                        func_801D651C(7, 0x3A);
                        temp_s0_4 = temp_s1 & 0xFF;
                        nuContPakOpen((temp_s0_4 * 0x10) + &D_801F1898, temp_s0_4);
                        if (func_801DDCDC(temp_s0_4, 1) == 2) {
                            var_v0_8 = 0x2F;
block_68:
                            func_801DD938(0x10, 0x1C, 0xA, 6, var_v0_8);
                        } else {
block_245:
                            var_v0_4 = arg0 & 0xFFFF;
                            goto block_246;
                        }
                    }
                }
            } else {
block_235:
block_236:
                func_801D651C(7, 0x3B);
                D_801E9780 = 1;
                D_801E9798 = 0;
            }
        } else {
block_232:
block_233:
            func_801D651C(7, 0x3B);
            D_801E9780 = 0;
            D_801E9798 = 0;
        }
        goto block_248;
        if (*(&D_801E9988 + ((temp_s1 & 0xFF) * 0x70)) != 1) {
            if (*(&D_801E998C + ((temp_s1 & 0xFF) * 0x70)) != 1) {
                temp_v1_7 = *(&D_801E9990 + ((temp_s1 & 0xFF) * 0x70));
                if (temp_v1_7 == 1) {
                    if (D_801E9780 == temp_v1_7) {
                        func_801D651C(7, 0x3A);
                        D_801E879C = 1;
                        var_v1_6 = arg0 & 0xFFFF;
block_223:
                        *(&D_8011F32E + (var_v1_6 * 0x64)) = 0x13;
                    } else {
                        func_801D651C(7, 0x3D);
                        var_v0_8 = 0xD;
                        goto block_68;
                    }
                }
            } else {
                goto block_235;
            }
        } else {
            goto block_232;
        }
        goto block_248;
        if (D_801E9988 != 1) {
            if (D_801E998C != 1) {
                if (D_801E9990 == 1) {
                    if (D_801E9780 == D_801E9990) {
                        func_801D651C(7, 0x3D);
                        *(&D_8011F32E + (D_801E9B1A * 0x64)) = 0x1E;
                        var_v0_7 = 0x2D;
                        goto block_242;
                    }
                    func_801D651C(7, 0x3A);
                    *(&D_8011F32E + (D_801E9B1A * 0x64)) = 0x1F;
                    var_v1_6 = arg0 & 0xFFFF;
                    goto block_223;
                }
                if (D_801E9994 == 1) {
                    func_801D651C(7, 0x3A);
                    *(&D_8011F32E + (D_801E9B1A * 0x64)) = 0x1F;
                    var_v1_6 = arg0 & 0xFFFF;
                    goto block_223;
                }
            } else {
                goto block_236;
            }
        } else {
            goto block_233;
        }
        goto block_248;
        if (*(&D_801E9988 + ((temp_s1 & 0xFF) * 0x70)) != 1) {
            if (*(&D_801E998C + ((temp_s1 & 0xFF) * 0x70)) != 1) {
                temp_v1_8 = *(&D_801E9990 + ((temp_s1 & 0xFF) * 0x70));
                if (temp_v1_8 != 1) {
                    var_v1_7 = temp_s1 & 0xFF;
block_243:
                    if (*(&D_801E9994 + (var_v1_7 * 0x70)) == 1) {
                        goto block_244;
                    }
                } else if (D_801E9780 == temp_v1_8) {
                    func_801D651C(7, 0x3D);
                    temp_v0_2 = (arg0 & 0xFFFF) * 0x64;
                    *(&D_8011F330 + temp_v0_2) = 0x12;
                    *(&D_8011F334 + temp_v0_2) = 27.0f;
                    *(&D_8011F338 + temp_v0_2) = 0;
                    *(&D_8011F33C + temp_v0_2) = 120.0f;
                    *(&D_8011F32E + temp_v0_2) = 0x1A;
                } else {
block_244:
                    func_801D651C(7, 0x3A);
                    goto block_245;
                }
            } else {
                goto block_235;
            }
        } else {
            goto block_232;
        }
        goto block_248;
        temp_a1_3 = (arg0 & 0xFFFF) * 0x64;
        temp_fv1_8 = *(&D_8011F338 + temp_a1_3);
        if (temp_fv1_8 >= 2.1474836e9f) {
            var_v0_9 = (s32) (temp_fv1_8 - 2.1474836e9f) | (s32) (&D_80000000 + 1);
        } else {
            var_v0_9 = (s32) temp_fv1_8 + 1;
        }
        *(&D_8011F338 + temp_a1_3) = (f32) (var_v0_9 & 0xFFFF);
        var_v1_8 = arg0 & 0xFFFF;
        temp_fv1_9 = *(&D_8011F338 + (var_v1_8 * 0x64));
        if (temp_fv1_9 >= 2.1474836e9f) {
            var_a0_6 = (s32) (temp_fv1_9 - 2.1474836e9f) | 0x80000000;
            var_v1_8 = arg0 & 0xFFFF;
            var_v0_10 = var_v1_8 * 2;
        } else {
            var_a0_6 = (s32) temp_fv1_9;
            var_v0_10 = var_v1_8 * 2;
        }
        temp_fv1_10 = *(&D_8011F33C + ((((var_v0_10 + var_v1_8) * 8) + var_v1_8) * 4));
        if (!(temp_fv1_10 >= 2.1474836e9f)) {
            var_a0_7 = (s32) temp_fv1_10;
            var_v1_9 = var_a0_6 & 0xFFFF;
        } else {
            var_a0_7 = (s32) (temp_fv1_10 - 2.1474836e9f) | 0x80000000;
            var_v1_9 = var_a0_6 & 0xFFFF;
        }
        if ((u32) (var_a0_7 & 0xFFFF) < var_v1_9) {
            temp_a1_4 = (arg0 & 0xFFFF) * 0x64;
            temp_fv1_11 = *(&D_8011F334 + temp_a1_4);
            if (temp_fv1_11 >= 2.1474836e9f) {
                var_a0_8 = (s32) (temp_fv1_11 - 2.1474836e9f) | 0x80000000;
            } else {
                var_a0_8 = (s32) temp_fv1_11;
            }
            *(&D_8011F32E + temp_a1_4) = (s16) var_a0_8;
        }
        goto block_248;
        temp_s0_5 = temp_s1 * 0x10;
        nuContPakCodeSet(M2C_FIELD(&D_801E87A0, s32 *, 0), M2C_FIELD(&D_801E87A0, s32 *, 4));
        temp_s2_3 = temp_s0_5 + &D_801F1898;
        nuContPakFileOpenJis(temp_s2_3, &D_801E87A8, &D_801E87BC, 0, 0x4400);
        var_v1_10 = *(&D_801F18A0 + temp_s0_5);
        if (var_v1_10 == 5) {
            nuContPakFileOpenJis(temp_s2_3, &D_801E87A8, &D_801E87BC, 1, 0x4400);
            var_v1_10 = *(&D_801F18A0 + temp_s0_5);
            var_v0_11 = var_v1_10 < 0xAU;
        } else {
            if (var_v1_10 == 0) {
                var_v1_10 = 9;
            }
            var_v0_11 = var_v1_10 < 0xAU;
        }
        if (var_v0_11 != 0) {
            switch (var_v1_10) {                    /* switch 3 */
                D_801E9766 = 1;
                var_v1_6 = arg0 & 0xFFFF;
                goto block_223;
                var_v0_7 = 0xA;
                goto block_242;
                var_v0_7 = 0xB;
                goto block_242;
                var_v0_7 = 0x13;
                goto block_242;
                var_v0_7 = 0x14;
                goto block_242;
                var_v0_7 = 0x15;
                goto block_242;
                goto block_118;
                temp_s0_6 = temp_s1 * 0x10;
                D_801E87E4 = func_801E189C();
                nuContPakFileReadWrite(temp_s0_6 + &D_801F1898, 0, 0x3200, &D_801F18E0, 1);
                if ((*(&D_801F18A0 + temp_s0_6) != 0) || (*(&D_801F18A4 + temp_s0_6) != 1)) {
                    var_v0_12 = 0xC;
                    goto block_214;
                }
                temp_s0_7 = temp_s1 * 0x10;
                nuContPakFileReadWrite(temp_s0_7 + &D_801F1898, 0, 0x3200, &D_801F18E0, 0);
                if ((*(&D_801F18A0 + temp_s0_7) != 0) || (*(&D_801F18A4 + temp_s0_7) != 1)) {
                    var_v0_12 = 0xC;
                    goto block_214;
                }
                D_801E973C = D_801F18E0;
                var_v1_11 = 0;
                var_s0 = 4;
                do {
                    var_v1_11 += *(&D_801F18E0 + var_s0);
                    var_s0 += 1;
                } while (var_s0 < 0x3200U);
                if (D_801E973C != var_v1_11) {
                    var_v0_12 = 0x22;
block_214:
                    func_801DD938(0x10, 0x4C, 0xA, 2, var_v0_12);
                    return;
                }
                goto block_248;
                temp_s0_8 = temp_s1 * 0x10;
                nuContPakFileReadWrite(temp_s0_8 + &D_801F1898, 0, 0x3200, &D_801F18E0, 0);
                temp_a0 = temp_s1 & 0xFF;
                if ((*(&D_801F18A0 + temp_s0_8) != 0) || (var_v1_12 = 0, (*(&D_801F18A4 + temp_s0_8) != 1))) {
                    if (*(&D_801F18A0 + (temp_a0 * 0x10)) == 6) {
                        var_v0_12 = 0x24;
                    } else {
                        var_v0_12 = 0xC;
                    }
                    goto block_214;
                }
                D_801E973C = D_801F18E0;
                var_s0_2 = 4;
                do {
                    var_v1_12 += *(&D_801F18E0 + var_s0_2);
                    var_s0_2 += 1;
                } while (var_s0_2 < 0x3200U);
                if (D_801E973C != var_v1_12) {
                    var_v0_12 = 0x23;
                    goto block_214;
                }
                if ((D_801E973C == 0) & (var_v1_12 == 0)) {
                    var_v0_12 = 0x24;
                    goto block_214;
                }
                func_801E1C38(temp_a0);
                var_v0_7 = 0x2B;
                goto block_242;
                temp_s0_9 = temp_s1 & 0xFF;
                func_8014B590(temp_s0_9);
                temp_s0_10 = temp_s0_9 * 0x10;
                nuContPakFileReadWrite(temp_s0_10 + &D_801F1898, 0x3200, 0x140, &D_80189B38, 1);
                if ((*(&D_801F18A0 + temp_s0_10) != 0) || (*(&D_801F18A4 + temp_s0_10) != 1)) {
                    var_v0_12 = 0xC;
                    goto block_214;
                }
                temp_s0_11 = temp_s1 * 0x10;
                nuContPakFileReadWrite(temp_s0_11 + &D_801F1898, 0x3200, 0x140, &D_80189B38, 0);
                if ((*(&D_801F18A0 + temp_s0_11) != 0) || (*(&D_801F18A4 + temp_s0_11) != 1)) {
                    var_v0_12 = 0xC;
                    goto block_214;
                }
                D_801E973C = D_80189B38;
                var_v1_13 = 0;
                var_s0_3 = 4;
                do {
                    var_v1_13 += *(&D_80189B38 + var_s0_3);
                    var_s0_3 += 1;
                } while (var_s0_3 < 0x140U);
                if (D_801E973C != var_v1_13) {
                    var_v0_12 = 0x25;
                    goto block_214;
                }
                goto block_248;
                temp_s0_12 = temp_s1 * 0x10;
                nuContPakFileReadWrite(temp_s0_12 + &D_801F1898, 0x3200, 0x140, &D_80189B38, 0);
                if ((*(&D_801F18A0 + temp_s0_12) != 0) || (var_v1_14 = 0, (*(&D_801F18A4 + temp_s0_12) != 1))) {
                    if (*(&D_801F18A0 + ((temp_s1 & 0xFF) * 0x10)) == 6) {
                        var_v0_12 = 0x27;
                    } else {
                        var_v0_12 = 0xC;
                    }
                    goto block_214;
                }
                D_801E973C = D_80189B38;
                var_s0_4 = 4;
                do {
                    var_v1_14 += *(&D_80189B38 + var_s0_4);
                    var_s0_4 += 1;
                } while (var_s0_4 < 0x140U);
                if (D_801E973C != var_v1_14) {
                    var_v0_12 = 0x26;
                    goto block_214;
                }
                if ((D_801E973C == 0) & (var_v1_14 == 0)) {
                    var_v0_12 = 0x27;
                    goto block_214;
                }
                func_8014B714(temp_s1 & 0xFF);
                *(&D_8021B064 + D_8021E15F) = 1;
                *(&D_8021B00C + D_8021E15F) = 1;
                goto block_248;
                temp_s0_13 = temp_s1 * 0x10;
                func_801E2BFC();
                nuContPakFileReadWrite(temp_s0_13 + &D_801F1898, (D_801E9B34 << 0xA) + 0x3340, 0x400, &D_801F18E0, 1);
                if ((*(&D_801F18A0 + temp_s0_13) != 0) || (*(&D_801F18A4 + temp_s0_13) != 1)) {
                    var_v0_12 = 0xC;
                    goto block_214;
                }
                temp_s0_14 = temp_s1 * 0x10;
                nuContPakFileReadWrite(temp_s0_14 + &D_801F1898, (D_801E9B34 << 0xA) + 0x3340, 0x400, &D_801F18E0, 0);
                if ((*(&D_801F18A0 + temp_s0_14) != 0) || (*(&D_801F18A4 + temp_s0_14) != 1)) {
                    var_v0_12 = 0xC;
                    goto block_214;
                }
                D_801E973C = D_801F18E0;
                if (D_801E973C != func_801E2BA4()) {
                    var_v0_12 = 0x28;
                    goto block_214;
                }
                D_80190CB2 |= *(&D_8021B690 + D_801E9B34);
                goto block_248;
                temp_s0_15 = temp_s1 * 0x10;
                nuContPakFileReadWrite(temp_s0_15 + &D_801F1898, (D_801E9B34 << 0xA) + 0x3340, 0x400, &D_801F18E0, 0);
                temp_a0_2 = temp_s1 & 0xFF;
                if ((*(&D_801F18A0 + temp_s0_15) != 0) || (*(&D_801F18A4 + temp_s0_15) != 1)) {
                    if (*(&D_801F18A0 + (temp_a0_2 * 0x10)) == 6) {
                        goto block_213;
                    }
                    var_v0_12 = 0xC;
                    goto block_214;
                }
                D_801E973C = D_801F18E0;
                temp_v0_3 = func_801E2BA4(temp_a0_2);
                if (D_801E973C != temp_v0_3) {
                    var_v0_12 = 0x29;
                    goto block_214;
                }
                if ((D_801E973C == 0) & (temp_v0_3 == 0)) {
block_213:
                    var_v0_12 = 0x2A;
                    goto block_214;
                }
                func_801E2D18();
                D_801C5EA0 = 1;
                goto block_248;
                var_s2 = 0;
                var_s0_5 = 0;
                do {
                    if (*(&D_8021B070 + var_s0_5) == 1) {
                        temp_s1_2 = var_s0_5 & 0xFFFF;
                        func_801E2E48(temp_s1_2);
                        func_801E2F38(temp_s1_2);
                        if (func_801E2FCC(temp_s1_2) != 0) {
                            func_801E2E48(temp_s1_2);
                            var_s2 += 1;
                        }
                    }
                    var_s0_5 += 1;
                } while (var_s0_5 < 9U);
                if (var_s2 & 0xFF) {
                    func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x14, 0, 0x66);
                    var_v1_6 = arg0 & 0xFFFF;
                    goto block_223;
                }
                goto block_248;
            }
        } else {
block_118:
            var_v0_7 = 0xC;
            goto block_242;
        }
        break;
        if (*(&D_801E9988 + ((temp_s1 & 0xFF) * 0x70)) != 1) {
            if (*(&D_801E998C + ((temp_s1 & 0xFF) * 0x70)) != 1) {
                temp_v1_9 = *(&D_801E9990 + ((temp_s1 & 0xFF) * 0x70));
                if (temp_v1_9 != 1) {
                    var_v1_7 = temp_s1 & 0xFF;
                    goto block_243;
                }
                if (D_801E9780 == temp_v1_9) {
                    func_801D651C(7, 0x3D);
                    if (temp_s2 & 1) {
                        var_v0_7 = 0x18;
                    } else {
                        var_v0_7 = 0x17;
                    }
                    goto block_242;
                }
                goto block_244;
            }
            goto block_235;
        }
        goto block_232;
        goto block_248;
        temp_a1_5 = (arg0 & 0xFFFF) * 0x64;
        temp_fv1_12 = *(&D_8011F338 + temp_a1_5);
        if (temp_fv1_12 >= 2.1474836e9f) {
            var_v0_13 = (s32) (temp_fv1_12 - 2.1474836e9f) | (s32) (&D_80000000 + 1);
        } else {
            var_v0_13 = (s32) temp_fv1_12 + 1;
        }
        *(&D_8011F338 + temp_a1_5) = (f32) (var_v0_13 & 0xFFFF);
        var_v1_15 = arg0 & 0xFFFF;
        temp_fv1_13 = *(&D_8011F338 + (var_v1_15 * 0x64));
        if (temp_fv1_13 >= 2.1474836e9f) {
            var_a0_9 = (s32) (temp_fv1_13 - 2.1474836e9f) | 0x80000000;
            var_v1_15 = arg0 & 0xFFFF;
            var_v0_14 = var_v1_15 * 2;
        } else {
            var_a0_9 = (s32) temp_fv1_13;
            var_v0_14 = var_v1_15 * 2;
        }
        temp_fv1_14 = *(&D_8011F33C + ((((var_v0_14 + var_v1_15) * 8) + var_v1_15) * 4));
        if (!(temp_fv1_14 >= 2.1474836e9f)) {
            var_a0_10 = (s32) temp_fv1_14;
            var_v1_16 = var_a0_9 & 0xFFFF;
        } else {
            var_a0_10 = (s32) (temp_fv1_14 - 2.1474836e9f) | 0x80000000;
            var_v1_16 = var_a0_9 & 0xFFFF;
        }
        if ((u32) (var_a0_10 & 0xFFFF) < var_v1_16) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0x13;
        }
        temp_fv1_15 = *(&D_8011F338 + ((arg0 & 0xFFFF) * 0x64));
        if (temp_fv1_15 >= 2.1474836e9f) {
            var_v1_17 = ((s32) (temp_fv1_15 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
        } else {
            var_v1_17 = (s32) temp_fv1_15 & 0xFFFF;
        }
        temp_v1_10 = temp_s2 & 0xFF;
        if (var_v1_17 == 0x3C) {
            switch (temp_v1_10);                    /* switch 4; jump table: jtbl_801E92A0 */
        } else {
            goto block_248;
        }
        break;
        if (*(&D_801E9988 + ((temp_s1 & 0xFF) * 0x70)) != 1) {
            if (*(&D_801E998C + ((temp_s1 & 0xFF) * 0x70)) != 1) {
                temp_v1_11 = *(&D_801E9990 + ((temp_s1 & 0xFF) * 0x70));
                if (temp_v1_11 != 1) {
                    var_v1_7 = temp_s1 & 0xFF;
                    goto block_243;
                }
                if (D_801E9780 == temp_v1_11) {
                    func_801D651C(7, 0x3D);
                    var_v0_7 = 0x69;
                    goto block_242;
                }
                goto block_244;
            }
            goto block_235;
        }
        goto block_232;
        goto block_248;
        if (*(&D_801E9988 + ((temp_s1 & 0xFF) * 0x70)) == 1) {
            goto block_232;
        }
        if (*(&D_801E998C + ((temp_s1 & 0xFF) * 0x70)) == 1) {
            goto block_235;
        }
        temp_v1_12 = *(&D_801E9990 + ((temp_s1 & 0xFF) * 0x70));
        if (temp_v1_12 != 1) {
            var_v1_7 = temp_s1 & 0xFF;
            goto block_243;
        }
        if (D_801E9780 == temp_v1_12) {
            func_801D651C(7, 0x3D);
            temp_v0_4 = D_801E9B34 * 4;
            func_801B7584(*(&D_801C698C + temp_v0_4), *(&D_801C69AC + temp_v0_4));
            D_801C5EA0 = 1;
            var_v0_7 = 0x2C;
            goto block_242;
        }
        goto block_244;
        goto block_248;
    }
}
