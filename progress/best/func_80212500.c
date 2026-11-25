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

extern signed char D_8021E191;
extern signed char D_8021E192;
extern unsigned char D_8021B674;
extern unsigned char D_8021E180;
extern signed char D_8021E15C;
extern signed char D_8021E161;
extern unsigned char D_8021E162;
extern unsigned char D_8021B675;
extern unsigned char D_8021B676;
extern signed char D_8021E15F;
extern signed char D_8021E160;
extern signed char D_8021E200;
extern int D_8021B66C;
extern short D_8021E1AC;
extern unsigned short D_8018A44A;
extern unsigned short D_8018A44C;
extern unsigned short D_8018A44E;
extern unsigned short D_8018A450;
s32 func_800DE2E0();
s32 func_800DE38C();
s32 func_800DF100();
s32 func_800DF138();
s32 func_80149FA8();
u16 func_8014A030();
s32 func_8014A870();
s32 func_8014B854();
s32 func_801CF468();
s32 func_801E1EEC();
s32 func_80203BDC();
s32 func_80203DF8();
s32 func_80207DC8();
s32 func_80211E9C();
s32 func_80214230();
s32 func_80231C5C();
extern s32 D_80071F70;
extern char D_8011F32E[];
extern char D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern u8 D_801E9798;
extern char D_801E9988[];
extern char D_801E998C[];
extern char D_801E9990[];
extern char D_801E9994[];
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern char D_8021AFEC[];
extern char D_8021AFFC[];
extern char D_8021B00C[];
extern s32 D_8021B060;
extern char D_8021B064[];
extern s8 D_8021B068;
extern s8 D_8021B06B;
extern s8 D_8021B06C;
extern u8 D_8021B06D;
extern char D_8021B070[];
extern s32 D_8021B128;
extern s32 D_8021B660;
extern s32 D_8021B670;
extern s8 D_8021B677;
extern u8 D_8021B678;
extern s8 D_8021E15D;
extern s32 D_8021E190;
extern s16 D_8021E1A2;
extern s8 D_8021E20B;
extern char D_8021E251[];
extern char D_8021F048[];
extern u16 D_8021F09A;

void func_80212500(s32 arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s16 var_v1_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_14;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s8 *temp_v1_4;
    s8 var_s0;
    u16 temp_v1;
    u8 var_v0_4;
    u8 var_v0_6;

    temp_v1 = *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* switch 1 */
        D_8021E15D = 0;
        if (D_8021AFDC == 2) {
            D_8021B670 = D_80071F70 - 1;
        }
        if (((D_8021AFDC == 6) | (D_8021AFDC == 0x18)) != 0) {
            D_8021B670 = (s32) D_8021E1A2;
        }
        D_8021E191 = 0;
        D_8021E192 = 0;
        D_8021B674 = 0U;
        var_v0 = arg0 & 0xFFFF;
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
block_177:
            *(D_8011F32E + (var_v0 * 0x64)) = 1;
        }
        break;
        D_8021E180 = 0U;
        if (D_8021E15C == 0) {
            D_8021E161 = 1;
            D_8021E162 = 0;
            D_8021B675 = 3U;
            D_8021B676 = 3U;
            if (D_8021E191 == 0) {
                var_s0 = 0;
                if (D_8021B670 >= 0) {
                    do {
                        temp_v0 = func_8014A870(0x14, 3, var_s0);
                        if ((temp_v0 & 0xE) || (temp_v0 & 1)) {
                            D_8021E191 = 0xA;
                            if (temp_v0 & 8) {
                                D_8021B675 = 0U;
                            }
                            if (temp_v0 & 4) {
                                D_8021B675 = 1U;
                            }
                            if (temp_v0 & 2) {
                                D_8021B676 = 0U;
                            }
                            if (temp_v0 & 1) {
                                D_8021B676 = 1U;
                                var_v0_2 = temp_v0 & 0x20;
                            } else {
                                goto block_32;
                            }
                        } else if (temp_v0 & 0x10) {
                            if (((D_8021E15F == var_s0) || (var_v0_3 = temp_v0 & 0x10, (D_8021E15F == 4))) && (var_v0_3 = temp_v0 & 0x10, (D_8021E160 == 0))) {
                                if (M2C_FIELD(&D_8021E160, s8 *, -4) == 0) {
                                    M2C_FIELD(&D_8021E160, s8 *, -4) = 1;
                                    D_8021B677 = var_s0;
                                    func_8014B854(0x3D);
                                    var_v0_2 = temp_v0 & 0x20;
                                } else {
                                    D_8021E180 = 1U;
                                    var_v0_2 = temp_v0 & 0x20;
                                }
                            } else {
                                var_v0_2 = temp_v0 & 0x20;
                                if (var_v0_3 != 0) {
                                    var_v0_2 = temp_v0 & 0x20;
                                    if (D_8021E160 == 1) {
                                        func_8014B854(0x3D);
                                        D_8021E180 = 2U;
                                        goto block_32;
                                    }
                                }
                            }
                        } else {
block_32:
                            var_v0_2 = temp_v0 & 0x20;
                        }
                        if (var_v0_2 != 0) {
                            func_8014B854(0x3A);
                            if (D_8021E15C == 0) {
                                D_8021E180 = 2U;
                            }
                            D_8021E15C = 0;
                        }
                        var_s0 += 1;
                    } while (D_8021B670 >= var_s0);
                }
            }
            if (D_8021E191 == 0xA) {
                if ((D_8021B675 == 0) && (D_8021E160 == 0)) {
                    func_8014B854(0x3B);
                    var_v0_4 = M2C_FIELD(&D_8021E160, u8 *, -1) + 1;
                    goto block_45;
                }
                if ((D_8021B675 == 1) && (D_8021E160 == 0)) {
                    func_8014B854(0x3B);
                    var_v0_4 = M2C_FIELD(&D_8021E160, u8 *, -1) - 1;
block_45:
                    M2C_FIELD(&D_8021E160, u8 *, -1) = var_v0_4;
                    func_80214230(&D_8021E160 - 1, 5);
                } else if (D_8021B676 != 3) {
                    func_8014B854(0x3B);
                    D_8021E160 = (s8) ((u8) D_8021E160 ^ 1);
                }
            }
            if (D_8021E191 != 0) {
                D_8021E191 = (s8) (D_8021E191 - 1);
            }
            if ((D_8021E180 == 2) && (D_8021E15C == 0)) {
                D_8021AFDC = 0x1C;
                D_8021B060 = D_8021AFE0;
                func_80203DF8(2, 6, 0, 0, 0);
                D_8021B068 = 0;
                *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            }
        } else if ((D_8021E15F != 4) && (D_8021E160 == 0)) {
            var_s1 = func_8014A870(0xA, 7, D_8021E15F);
            if (D_8021B674 != 0) {
                var_s1 &= 0x30;
            }
            if (var_s1 & 0x10) {
                if (D_8021E15C == 0) {
                    D_8021E15C = 1;
                    goto block_66;
                }
                D_8021E180 = 1U;
                var_v0_5 = var_s1 & 2;
            } else {
                var_v0_5 = var_s1 & 2;
                if (var_s1 & 0x20) {
                    var_v0_5 = var_s1 & 2;
                    if (D_8021B674 == 0) {
                        func_8014B854(0x3A);
                        if (D_8021E15C == 0) {
                            D_8021E180 = 2U;
                        }
                        D_8021E15C = 0;
block_66:
                        var_v0_5 = var_s1 & 2;
                    }
                }
            }
            if (var_v0_5 == 0) {
                if (var_s1 & 1) {
                    var_v0_6 = D_8021E162 - 1;
                    goto block_73;
                }
            } else {
                var_v0_6 = D_8021E162 + 1;
block_73:
                D_8021E162 = var_v0_6;
                func_8014B854(0x3B);
            }
            func_80214230(&D_8021E162, 4);
            if ((D_8021E180 == 1) && (D_8021E15C == D_8021E180)) {
                if (D_8021E162 == 0) {
                    if (*(D_8021B064 + D_8021E15F) == D_8021E15C) {
                        D_8021E200 = 0;
                        func_8014B854(0x3D, D_8021E15C, &D_8021E180);
                        D_8021AFDC = 0x1C;
                        D_8021B060 = 0x10;
                        func_80203DF8(2, 6, 0, 0, 0);
                        var_v1 = arg0 & 0xFFFF;
                        goto block_92;
                    }
                    goto block_82;
                    goto block_116;
                }
                switch ((s8) D_8021E162) { /* switch 2; irregular */
                    if (*(D_8021B064 + M2C_FIELD(&D_8021E162, s8 *, -3)) == (s8) D_8021E162) {
                        func_8014B854(0x3D, D_8021E15C, &D_8021E180);
                        var_a0 = 2;
block_85:
                        func_801E1EEC(var_a0, (u8) M2C_FIELD(&D_8021E162, s8 *, -3));
                    } else {
block_82:
                        func_8014B854(0x3E, D_8021E15C, &D_8021E180);
                    }
                    goto block_116;
                    func_8014B854(0x3D, D_8021E15C, &D_8021E180);
                    var_a0 = 3;
                    goto block_85;
                    var_v0_7 = (u8) D_8021B674 < 4U;
                    if (D_8021B674 == 0) {
                        func_8014B854(0x3D, D_8021E15C, &D_8021E180);
                        D_8021B674 = 1U;
                        D_8021B678 = 0;
                        func_800DF100(D_8021F09A);
                        goto block_116;
                    }
                    goto block_117;
                }
            } else {
                if ((D_8021E180 == 2) && (D_8021E15C == 0)) {
                    D_8021AFDC = 0x1C;
                    D_8021B060 = D_8021AFE0;
                    func_80203DF8(2, 6, 0, 0, 0);
                    D_8021B068 = 0;
                    var_v1 = arg0 & 0xFFFF;
block_92:
                    *(D_8011F32E + (var_v1 * 0x64)) = 2;
                }
                goto block_116;
            }
        } else {
            if (!(D_8021E190 & 0xFFFF00) && (D_8021E160 == 0)) {
                temp_v0_2 = func_8014A870(0xA, 7, (s8) (u8) D_8021B677);
                if ((temp_v0_2 & 2) || (var_v0_8 = temp_v0_2 & 0x10, ((temp_v0_2 & 1) != 0))) {
                    func_8014B854(0x3B);
                    D_8021E162 ^= 1;
                    var_v0_8 = temp_v0_2 & 0x10;
                }
                if (var_v0_8 != 0) {
                    if (D_8021E15C == 1) {
                        func_8014B854(0x3D);
                    }
                    if (D_8021E15C == 0) {
                        D_8021E15C = 1;
                    } else {
                        D_8021E180 = 1U;
                    }
                    if ((s8) D_8021E162 == 0) {
                        D_8021B06C = 1;
                        D_8021B66C = 0;
                        var_v0_9 = (arg0 & 0xFFFF) * 0x64;
                        var_v1_2 = 4;
                        goto block_110;
                    }
                    var_v0_10 = temp_v0_2 & 0x20;
                    if ((s8) D_8021E162 == 1) {
                        D_8021B06D = 0;
                        var_s0_2 = 0;
                        do {
                            *(D_8021B070 + var_s0_2) = 0;
                            var_s0_2 += 1;
                        } while (var_s0_2 < 9);
                        D_8021B06B = 1;
                        var_v0_9 = (arg0 & 0xFFFF) * 0x64;
                        var_v1_2 = 3;
block_110:
                        *(D_8011F32E + var_v0_9) = var_v1_2;
                        goto block_111;
                    }
                } else {
block_111:
                    var_v0_10 = temp_v0_2 & 0x20;
                }
                if (var_v0_10 != 0) {
                    func_8014B854(0x3A);
                    if (D_8021E15C == 0) {
                        D_8021E180 = 2U;
                    }
                    D_8021E15C = 0;
                    D_8021B660 = 0;
                }
            }
block_116:
            var_v0_7 = (u8) D_8021B674 < 4U;
            if (D_8021B674 != 0) {
block_117:
                if ((var_v0_7 == 0) || (D_8021B674 = (u8) (D_8021B674 + 1), (((u8) D_8021B674 < 4U) == 0))) {
                    temp_v1_2 = D_8021E15F * 0x70;
                    if ((*(D_801E9988 + temp_v1_2) == 1) || (*(D_801E998C + temp_v1_2) == 1)) {
                        D_801E9798 = 0;
                        D_8021B678 ^= 1;
                        func_8014B854(0x3B);
                    } else {
                        temp_v1_3 = *(D_801E9990 + (D_8021E15F * 0x70));
                        if ((temp_v1_3 == 1) && (D_8021B678 == temp_v1_3)) {
                            func_800DF138(D_8021F09A);
                            func_8014B854(0x3D);
                            func_80149FA8(D_8021E15F);
                            func_80211E9C(D_8021E15F);
                            *(D_8021B00C + D_8021E15F) = 0;
                            *(D_8021B064 + D_8021E15F) = 0;
                            *(D_8021AFEC + (D_8021E15F * 4)) = 0;
                            func_80203BDC(D_8021E15F);
                            *(D_8021E251 + (D_8021E15F * 0x110)) = 0;
                            D_8021B674 = 0U;
                            D_8021B128 = 0;
                            D_8021E20B = 0;
                            *(D_8021AFFC + (D_8021E15F * 4)) = 0;
                            var_s0_3 = 0;
                            do {
                                temp_v1_4 = (D_8021E15F * 0xE) + D_8021F048 + var_s0_3;
                                var_s0_3 += 1;
                                *temp_v1_4 = 0;
                            } while (var_s0_3 < 0xE);
                        } else {
                            var_a0_2 = 0x3A;
                            if ((*(D_801E9994 + (D_8021E15F * 0x70)) == 1) || ((*(D_801E9990 + (D_8021E15F * 0x70)) == 1) && (var_a0_2 = 0x3D, (D_8021B678 == 0)))) {
                                func_8014B854(var_a0_2);
                                D_8021B674 = 0U;
                                D_8021B678 = 0;
                                func_800DF138(D_8021F09A);
                            }
                        }
                    }
                }
            }
        }
        break;
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            func_80207DC8();
            if (D_8021E1AC == 0) {
                M2C_FIELD(&D_8021E1AC, s16 *, -6) = 0;
            }
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_80168BB0 = D_8021B060;
        }
        break;
        temp_v0_3 = func_8014A870(0x1E, 7, (s8) (u8) D_8021B677);
        var_v0_11 = temp_v0_3 & 1;
        if (temp_v0_3 & 2) {
            D_8021B06D += 1;
            func_8014B854(0x3B);
            var_v0_11 = temp_v0_3 & 1;
        }
        if (var_v0_11 != 0) {
            D_8021B06D -= 1;
            func_8014B854(0x3B);
        }
        if ((s8) D_8021B06D >= 0xA) {
            D_8021B06D = 0;
        }
        var_v0_12 = temp_v0_3 & 0x10;
        if ((s8) D_8021B06D < 0) {
            D_8021B06D = 9;
            var_v0_12 = temp_v0_3 & 0x10;
        }
        if (var_v0_12 != 0) {
            if ((s8) D_8021B06D == 9) {
                func_8014B854(0x3D);
                D_8021B06B = 0;
                var_s2 = 0;
                var_s0_4 = 0;
                do {
                    if (*(D_8021B070 + var_s0_4) == 1) {
                        var_s2 += 1;
                        D_8018A44A = func_8014A030(D_8018A44A, var_s0_4, 0);
                        D_8018A44C = func_8014A030(D_8018A44C, var_s0_4, 0);
                        D_8018A44E = func_8014A030(D_8018A44E, var_s0_4, 0);
                        D_8018A450 = func_8014A030(D_8018A450, var_s0_4, 0);
                    }
                    var_s0_4 += 1;
                } while (var_s0_4 < 9);
                var_v0 = arg0 & 0xFFFF;
                if (var_s2 != 0) {
                    func_801E1EEC(6, (u8) D_8021B677);
                    var_v0 = arg0 & 0xFFFF;
                }
                goto block_177;
            }
            if (*(D_8021B070 + (s8) D_8021B06D) == 0) {
                func_8014B854(0x3D);
            }
            *(D_8021B070 + (s8) D_8021B06D) = 1;
        } else if (temp_v0_3 & 0x20) {
            func_8014B854(0x3A);
            var_v0 = arg0 & 0xFFFF;
            if (*(D_8021B070 + (s8) D_8021B06D) == 0) {
                D_8021B06B = 0;
                goto block_177;
            }
            *(D_8021B070 + (s8) D_8021B06D) = 0;
        }
        break;
        temp_v0_4 = func_8014A870(0x1E, 7, (s8) (u8) D_8021B677);
        var_v0_13 = temp_v0_4 & 1;
        if (temp_v0_4 & 2) {
            temp_a1 = D_8021B66C;
            D_8021B66C = temp_a1 + 1;
            if (M2C_FIELD(&D_8021B66C, s32 *, -8) == 1) {
                D_8021B66C = temp_a1 + 2;
            }
            func_8014B854(0x3B, (s8) temp_a1);
            var_v0_13 = temp_v0_4 & 1;
        }
        if (var_v0_13 != 0) {
            temp_a1_2 = D_8021B66C;
            D_8021B66C = temp_a1_2 - 1;
            if (M2C_FIELD(&D_8021B66C, s32 *, -8) == 1) {
                D_8021B66C = temp_a1_2 - 2;
            }
            func_8014B854(0x3B, (s8) temp_a1_2);
        }
        if (D_8021B66C >= 3) {
            D_8021B66C = 0;
        }
        var_v0_14 = temp_v0_4 & 0x10;
        if (D_8021B66C < 0) {
            D_8021B66C = 2;
            var_v0_14 = temp_v0_4 & 0x10;
        }
        if (var_v0_14 != 0) {
            var_a0_3 = 0x3D;
            if (D_8021B66C == 2) {
                goto block_176;
            }
        } else {
            var_a0_3 = 0x3A;
            if (temp_v0_4 & 0x20) {
block_176:
                func_8014B854(var_a0_3);
                D_8021B06C = 0;
                var_v0 = arg0 & 0xFFFF;
                goto block_177;
            }
            if ((temp_v0_4 & 0xC) && (D_8021B66C < 2)) {
                func_8014B854(0x3B);
                if (D_8021B66C == 0) {
                    M2C_FIELD(&D_8021B66C, s32 *, -8) ^= 1;
                }
                if ((D_8021B66C == 1) && (M2C_FIELD(&D_8021B66C, s32 *, -8) == 0)) {
                    M2C_FIELD(&D_8021B66C, s32 *, -4) ^= 1;
                }
            }
        }
        break;
    }
    if ((u8) D_801E9798 < 0x1EU) {
        D_801E9798 += 1;
        return;
    }
    D_801E9798 = 0;
}
