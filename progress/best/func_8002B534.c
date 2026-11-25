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

void *__lookupVoice(void *, u8, u8);                /* extern */
void *__mapVoice(void *, s32, s32, s32);            /* extern */
M2C_UNK __n_seqpReleaseVoice(void *, void *, s32);  /* extern */
M2C_UNK __setInstChanState(void *, s32, u8);        /* extern */
s32 __vsPan(void *, void *);                        /* extern */
s16 __vsVol(void *, void *);                        /* extern */
M2C_UNK alEvtqPostEvent(void *, s16 *, s32);        /* extern */
M2C_UNK func_8002FFD0(void *, s16 *);               /* extern */
M2C_UNK func_80030250(void *, s32);                 /* extern */
M2C_UNK func_80030540(void *, s32, f32, s16, s32, s32, s32); /* extern */
void *func_800319F4(void *, s32, s32, s32);         /* extern */
s32 func_80031B94(void *, s32);                     /* extern */
M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK n_alSynSetPan(void *, s32);                 /* extern */
M2C_UNK n_alSynSetPitch(void *, f32);               /* extern */
M2C_UNK n_alSynSetVol(void *, s16, s32);            /* extern */
extern u8 D_8021F02A;

extern const char D_8004A270[];
void func_8002B534(void *arg0, void *arg1) {
    s32 unksp29;
    s32 unksp2A;
    s16 sp20;
    void *sp24;
    s32 sp28;                                       /* compiler-managed */
    u8 sp2C;
    s16 sp30;
    s16 sp32;
    s8 sp34;
    s32 sp38;
    f32 sp3C;
    void *sp44;
    void *sp4C;
    f32 temp_fs0;
    f32 temp_fv0;
    s16 *temp_a0;
    s16 temp_s0_2;
    s16 temp_s0_8;
    s16 temp_s4;
    s16 temp_s4_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a2_6;
    s32 temp_s0_3;
    s32 temp_s0_5;
    s32 temp_s0_7;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s2_4;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_fp;
    u8 temp_s0;
    u8 temp_s5;
    u8 temp_s7;
    u8 temp_v0;
    u8 temp_v0_10;
    void *temp_s0_4;
    void *temp_s0_6;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_8;
    void *temp_v0_9;
    void *var_s1;
    void *var_s1_2;
    void *var_s1_3;
    void *var_s1_4;
    void *var_s1_5;
    void *var_s1_6;
    int temp;

    temp_v0 = M2C_FIELD(arg1, u8 *, 8);
    sp4C = arg1 + 4;
    temp_fp = M2C_FIELD(arg1, u8 *, 9);
    temp_s0 = M2C_FIELD(arg1, u8 *, 0xA);
    temp_s5 = temp_v0 & 0xF;
    temp = temp_v0 & 0xF0;
    temp_v1 = temp;
    if (temp_v1 != 0xB0) {
        if (temp_v1 < 0xB1) {
            if (temp_v1 != 0x90) {
                if (temp_v1 < 0x91) {
                    if (temp_v1 != 0x80) {
                        return;
                    }
                    goto block_41;
                }
                if (temp_v1 != 0xA0) {
                    return;
                }
                temp_v0_2 = __lookupVoice(arg0, temp_fp, temp_s5);
                if (temp_v0_2 != NULL) {
                    M2C_FIELD(temp_v0_2, u8 *, 0x33) = temp_s0;
                    temp_s0_2 = __vsVol(temp_v0_2, arg0);
                    n_alSynSetVol(temp_v0_2 + 4, temp_s0_2, func_80031B94(temp_v0_2, M2C_FIELD(arg0, s32 *, 0x1C)));
                }
            } else {
                temp_s1 = temp_s0 & 0xFF;
                if (temp_s1 != 0) {
                    if ((M2C_FIELD(arg0, s32 *, 0x2C) == 1) && (temp_s2 = temp_fp & 0xFF, temp_s0_3 = temp_s5 & 0xFF, temp_v0_3 = func_800319F4(arg0, temp_s2, temp_s1, temp_s0_3), (temp_v0_3 != NULL)) && (temp_s2_2 = temp_s0_3 * 0x10, sp32 = 0, sp34 = 0, sp30 = (s16) M2C_FIELD((temp_s2_2 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 8), temp_v0_4 = __mapVoice(arg0, temp_s2, temp_s1, temp_s0_3), (temp_v0_4 != NULL))) {
                        sp44 = temp_v0_4 + 4;
                        func_8002FFD0(sp44, &sp30);
                        M2C_FIELD(temp_v0_4, M2C_UNK **, 0x20) = temp_v0_3;
                        M2C_FIELD(temp_v0_4, s8 *, 0x34) = 0;
                        if ((u8) M2C_FIELD((temp_s2_2 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 0xB) < 0x40U) {
                            M2C_FIELD(temp_v0_4, s8 *, 0x35) = 0;
                        } else {
                            M2C_FIELD(temp_v0_4, s8 *, 0x35) = 2;
                        }
                        temp_v0_5 = M2C_FIELD(temp_v0_3, M2C_UNK **, 4);
                        M2C_FIELD(temp_v0_4, f32 *, 0x28) = alCents2Ratio((s32) (s16) ((s8) M2C_FIELD(temp_v0_5, u8 *, 5) + ((temp_fp - M2C_FIELD(temp_v0_5, u8 *, 4)) * 0x64)));
                        M2C_FIELD(temp_v0_4, u8 *, 0x30) = (u8) M2C_FIELD(M2C_FIELD(temp_v0_3, M2C_UNK **, 0), u8 *, 0xC);
                        M2C_FIELD(temp_v0_4, u8 *, 0x37) = 0U;
                        M2C_FIELD(temp_v0_4, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(M2C_FIELD(temp_v0_3, M2C_UNK **, 0), s32 *, 0));
                        temp_s0_4 = *(s32 *)((temp_s5 * 0x10) + M2C_FIELD(arg0, s32 *, 0x60));
                        sp3C = 127.0f;
                        temp_a2 = M2C_FIELD(temp_s0_4, u8 *, 4);
                        if ((temp_a2 != 0) && (M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70) != NULL)) {
                            temp_v0_6 = M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70)(&sp38, &sp3C, temp_a2, M2C_FIELD(temp_s0_4, u8 *, 5), (s32) M2C_FIELD(temp_s0_4, u8 *, 6), (s32) M2C_FIELD(temp_s0_4, u8 *, 7));
                            if (temp_v0_6 != 0) {
                                sp20 = 0x16;
                                sp24 = temp_v0_4;
                                sp28 = sp38;
                                alEvtqPostEvent(arg0 + 0x48, &sp20, temp_v0_6);
                                M2C_FIELD(temp_v0_4, u8 *, 0x37) = (u8) (M2C_FIELD(temp_v0_4, u8 *, 0x37) | 1);
                            }
                        }
                        if (sp3C >= 2.1474836e9f) {
                            var_v1 = (s32) (sp3C - 2.1474836e9f) | 0x80000000;
                        } else {
                            var_v1 = (s32) sp3C;
                        }
                        M2C_FIELD(temp_v0_4, s8 *, 0x36) = (s8) var_v1;
                        sp3C = 1.0f;
                        temp_a2_2 = M2C_FIELD(temp_s0_4, u8 *, 8);
                        if ((temp_a2_2 != 0) && (M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70) != NULL)) {
                            temp_v0_7 = M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70)(&sp38, &sp3C, temp_a2_2, M2C_FIELD(temp_s0_4, u8 *, 9), (s32) M2C_FIELD(temp_s0_4, u8 *, 0xA), (s32) M2C_FIELD(temp_s0_4, u8 *, 0xB));
                            if (temp_v0_7 != 0) {
                                sp20 = 0x17;
                                sp24 = temp_v0_4;
                                sp2C = temp_s5;
                                sp28 = sp38;
                                alEvtqPostEvent(arg0 + 0x48, &sp20, temp_v0_7);
                                M2C_FIELD(temp_v0_4, u8 *, 0x37) = (u8) (M2C_FIELD(temp_v0_4, u8 *, 0x37) | 2);
                            }
                        }
                        M2C_FIELD(temp_v0_4, f32 *, 0x2C) = sp3C;
                        temp_v0_8 = (temp_s5 * 0x10) + M2C_FIELD(arg0, s32 *, 0x60);
                        temp_s7 = M2C_FIELD(temp_v0_8, u8 *, 0xA);
                        temp_fs0 = M2C_FIELD(temp_v0_4, f32 *, 0x28) * M2C_FIELD(temp_v0_8, f32 *, 0xC) * sp3C;
                        temp_s0_5 = __vsPan(temp_v0_4, arg0);
                        temp_v0_7 = M2C_FIELD(M2C_FIELD(temp_v0_3, M2C_UNK **, 0), s32 *, 0);
                        temp_s4 = __vsVol(temp_v0_4, arg0);
                        if (D_8021F02A == 0) {
                            var_v0 = temp_s0_5 & 0xFF;
                          func_80030540(sp44, M2C_FIELD(temp_v0_3, s32 *, 8), temp_fs0, temp_s4, var_v0, (s32) temp_s7, temp_v0_7);
                        } else {
                            var_v0 = 0x40;
                          func_80030540(sp44, M2C_FIELD(temp_v0_3, s32 *, 8), temp_fs0, temp_s4, var_v0, (s32) temp_s7, temp_v0_7);
                        }
                        sp20 = 6;
                        sp24 = sp44;
                        sp2C = M2C_FIELD(M2C_FIELD(temp_v0_3, M2C_UNK **, 0), u8 *, 0xD);
                        temp_s0_6 = arg0 + 0x48;
                        sp28 = M2C_FIELD(M2C_FIELD(temp_v0_3, M2C_UNK **, 0), s32 *, 4);
                        alEvtqPostEvent(temp_s0_6, &sp20, temp_v0_7);
                        if (M2C_FIELD(sp4C, s32 *, 8) != 0) {
                            sp20 = 0x15;
                            sp28 = temp_s5 | 0x80;
                            unksp29 = temp_fp;
                            unksp2A = 0;
                            alEvtqPostEvent(temp_s0_6, &sp20, M2C_FIELD(arg0, s32 *, 0x24) * M2C_FIELD(sp4C, s32 *, 8));
                        }
                    }
                } else {
block_41:
                    temp_v0_9 = __lookupVoice(arg0, temp_fp, temp_s5);
                    if (temp_v0_9 != NULL) {
                        if (M2C_FIELD(temp_v0_9, u8 *, 0x35) == 2) {
                            M2C_FIELD(temp_v0_9, u8 *, 0x35) = 4U;
                            return;
                        }
                        M2C_FIELD(temp_v0_9, u8 *, 0x35) = 3U;
                        __n_seqpReleaseVoice(arg0, temp_v0_9 + 4, M2C_FIELD(*M2C_FIELD(temp_v0_9, void ***, 0x20), s32 *, 8));
                    }
                }
            }
        } else if (temp_v1 != 0xD0) {
            if (temp_v1 < 0xD1) {
                if (temp_v1 != 0xC0) {
                    return;
                }
                if (M2C_FIELD(arg0, s16 **, 0x20) == NULL) {
                    func_800346B0(D_8004A270, "n_csplayer.c", 0x295);
                }
                temp_a0 = M2C_FIELD(arg0, s16 **, 0x20);
                temp_v1_2 = temp_fp & 0xFF;
                if (temp_v1_2 < *temp_a0) {
                    __setInstChanState(arg0, M2C_FIELD(((temp_v1_2 * 4) + temp_a0), s32 *, 0xC), temp_s5);
                }
            } else {
                if (temp_v1 != 0xE0) {
                    return;
                }
                temp_s2_4 = temp_s5 & 0xFF;
                temp_s0_7 = temp_s2_4 * 0x10;
                var_v0_2 = M2C_FIELD((temp_s0_7 + M2C_FIELD(arg0, s32 *, 0x60)), s16 *, 4) * ((temp_fp + (temp_s0 << 7)) - 0x2000);
                if (var_v0_2 < 0) {
                    var_v0_2 += 0x1FFF;
                }
                temp_fv0 = alCents2Ratio(var_v0_2 >> 0xD);
                M2C_FIELD((temp_s0_7 + M2C_FIELD(arg0, s32 *, 0x60)), f32 *, 0xC) = temp_fv0;
                var_s1 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
                if (var_s1 != NULL) {
                    do {
                        if (M2C_FIELD(var_s1, u8 *, 0x31) == temp_s2_4) {
                            n_alSynSetPitch(var_s1 + 4, M2C_FIELD(var_s1, f32 *, 0x28) * temp_fv0 * M2C_FIELD(var_s1, f32 *, 0x2C));
                        }
                        var_s1 = M2C_FIELD(var_s1, M2C_UNK **, 0);
                    } while (var_s1 != NULL);
                }
            }
        } else {
            var_s1_2 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
            if (var_s1_2 != NULL) {
loop_48:
                if (M2C_FIELD(var_s1_2, u8 *, 0x31) == (temp_s5 & 0xFF)) {
                    M2C_FIELD(var_s1_2, u8 *, 0x33) = temp_fp;
                    temp_s0_8 = __vsVol(var_s1_2, arg0);
                    n_alSynSetVol(var_s1_2 + 4, temp_s0_8, func_80031B94(var_s1_2, M2C_FIELD(arg0, s32 *, 0x1C)));
                }
                var_s1_2 = M2C_FIELD(var_s1_2, M2C_UNK **, 0);
                if (var_s1_2 != NULL) {
                    goto loop_48;
                }
            }
        }
    } else {
        temp_v1_3 = temp_fp & 0xFF;
        if (temp_v1_3 != 0x10) {
            if (temp_v1_3 < 0x11) {
                if (temp_v1_3 != 7) {
                    temp_a2_3 = temp_s5 & 0xFF;
                    if (temp_v1_3 != 0xA) {
                        return;
                    }
                    M2C_FIELD(((temp_a2_3 * 0x10) + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 7) = temp_s0;
                    var_s1_3 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
                    if (var_s1_3 != NULL) {
loop_61:
                        if (M2C_FIELD(var_s1_3, u8 *, 0x31) == temp_a2_3) {
                            n_alSynSetPan(var_s1_3 + 4, __vsPan(var_s1_3, arg0) & 0xFF);
                        }
                        var_s1_3 = M2C_FIELD(var_s1_3, M2C_UNK **, 0);
                        if (var_s1_3 != NULL) {
                            goto loop_61;
                        }
                    }
                } else {
                    temp_a2_4 = temp_s5 & 0xFF;
                    M2C_FIELD(((temp_a2_4 * 0x10) + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 9) = temp_s0;
                    var_s1_4 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
                    if (var_s1_4 != NULL) {
do {
                        if ((M2C_FIELD(var_s1_4, u8 *, 0x31) == temp_a2_4) && (M2C_FIELD(var_s1_4, u8 *, 0x34) != 3)) {
                            temp_s4_2 = __vsVol(var_s1_4, arg0);
                            n_alSynSetVol(var_s1_4 + 4, temp_s4_2, func_80031B94(var_s1_4, M2C_FIELD(arg0, s32 *, 0x1C)));
                        }
                        var_s1_4 = M2C_FIELD(var_s1_4, M2C_UNK **, 0);
                        } while (var_s1_4 != NULL);
                    }
                }
            } else if (temp_v1_3 != 0x40) {
                temp_a2_5 = temp_s5 & 0xFF;
                if (temp_v1_3 != 0x5B) {
                    return;
                }
                M2C_FIELD(((temp_a2_5 * 0x10) + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 0xA) = temp_s0;
                var_s1_5 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
                if (var_s1_5 != NULL) {
loop_89:
                    if (M2C_FIELD(var_s1_5, u8 *, 0x31) == temp_a2_5) {
                        func_80030250(var_s1_5 + 4, temp_s0 & 0xFF);
                    }
                    var_s1_5 = M2C_FIELD(var_s1_5, M2C_UNK **, 0);
                    if (var_s1_5 != NULL) {
                        goto loop_89;
                    }
                }
            } else {
                temp_a2_6 = temp_s5 & 0xFF;
                M2C_FIELD(((temp_a2_6 * 0x10) + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 0xB) = temp_s0;
                var_s1_6 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
                if (var_s1_6 != NULL) {
do {
                    if (M2C_FIELD(var_s1_6, u8 *, 0x31) == temp_a2_6) {
                        temp_v0_10 = M2C_FIELD(var_s1_6, u8 *, 0x35);
                        if (temp_v0_10 != 3) {
                            if (temp_s0 >= 0x40U) {
                                if (temp_v0_10 == 0) {
                                    M2C_FIELD(var_s1_6, u8 *, 0x35) = 2U;
                                }
                            } else if (temp_v0_10 == 2) {
                                M2C_FIELD(var_s1_6, u8 *, 0x35) = 0U;
                            } else if (temp_v0_10 == 4) {
                                M2C_FIELD(var_s1_6, u8 *, 0x35) = 3U;
                                __n_seqpReleaseVoice(arg0, var_s1_6 + 4, M2C_FIELD(*M2C_FIELD(var_s1_6, void ***, 0x20), s32 *, 8));
                            }
                        }
                    }
                    var_s1_6 = M2C_FIELD(var_s1_6, M2C_UNK **, 0);
                    } while (var_s1_6 != NULL);
                }
            }
        } else {
            M2C_FIELD(((temp_s5 * 0x10) + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 8) = temp_s0;
        }
    }
}
