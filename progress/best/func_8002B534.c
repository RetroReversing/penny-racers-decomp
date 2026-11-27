/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *__lookupVoice(void *, u8, u8);                /* extern */
void *__mapVoice(void *, s32, s32, s32);            /* extern */
s32 __n_seqpReleaseVoice(void *, void *, s32);  /* extern */
s32 __setInstChanState(void *, s32, u8);        /* extern */
s32 __vsPan(void *, void *);                        /* extern */
s16 __vsVol(void *, void *);                        /* extern */
s32 alEvtqPostEvent(void *, s16 *, s32);        /* extern */
s32 func_8002FFD0(void *, s16 *);               /* extern */
s32 func_80030250(void *, s32);                 /* extern */
s32 func_80030540(void *, s32, f32, s16, s32, s32, s32); /* extern */
void *func_800319F4(void *, s32, s32, s32);         /* extern */
s32 func_80031B94(void *, s32);                     /* extern */
s32 func_800346B0(s32 *, s32 *, s32); /* extern */
s32 n_alSynSetPan(void *, s32);                 /* extern */
s32 n_alSynSetPitch(void *, f32);               /* extern */
s32 n_alSynSetVol(void *, s16, s32);            /* extern */
extern u8 D_8021F02A;

extern const char D_8004A270[];
extern char D_8004A274[];
struct __rows_temp_a0_4 { char pad[0xc]; struct { s32 m0; } e[1]; };
void func_8002B534(void *arg0, void *arg1) {
    s32 temp_v0_7_a1;
    s32 unksp29;
    s32 unksp2A;
    s32 sp20;
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
    u8 temp_a2_4;
    u8 temp_a2_5;
    u8 temp_a2_6;
    s32 temp_s0_3;
    
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
    
    void *var_s1;
    void *var_s1_3;
    void *var_s1_4;
    void *var_s1_5;
    void *var_s1_6;
    int temp;

    temp_v0 = (*(u8 *)((s8 *)arg1 + 8));
    sp4C = arg1 + 4;
    temp_fp = (*(u8 *)((s8 *)arg1 + 9));
    temp_s0 = (*(u8 *)((s8 *)arg1 + 0xA));
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
                    (*(u8 *)((s8 *)temp_v0_2 + 0x33)) = temp_s0;
                    temp_s0_2 = __vsVol(temp_v0_2, arg0);
                    n_alSynSetVol(temp_v0_2 + 4, temp_s0_2, func_80031B94(temp_v0_2, (*(s32 *)((s8 *)arg0 + 0x1C))));
                }
            } else {
                temp_s1 = temp_s0 & 0xFF;
                if (temp_s1 != 0) {
                    if (((*(s32 *)((s8 *)arg0 + 0x2C)) == 1) && (temp_s2 = temp_fp & 0xFF, temp_s0_3 = temp_s5 & 0xFF, temp_v0_3 = func_800319F4(arg0, temp_s2, temp_s1, temp_s0_3), (temp_v0_3 != NULL)) && (temp_s2_2 = temp_s0_3 * 0x10, sp32 = 0, sp34 = 0, sp30 = (s16) (*(u8 *)((s8 *)(temp_s2_2 + (*(s32 *)((s8 *)arg0 + 0x60))) + 8)), temp_v0_4 = __mapVoice(arg0, temp_s2, temp_s1, temp_s0_3), (temp_v0_4 != NULL))) {
                        sp44 = temp_v0_4 + 4;
                        func_8002FFD0(sp44, &sp30);
                        (*(s32 **)((s8 *)temp_v0_4 + 0x20)) = temp_v0_3;
                        (*(s8 *)((s8 *)temp_v0_4 + 0x34)) = 0;
                        if ((u8) (*(u8 *)((s8 *)(temp_s2_2 + (*(s32 *)((s8 *)arg0 + 0x60))) + 0xB)) >= 0x40U) {
                            (*(s8 *)((s8 *)temp_v0_4 + 0x35)) = 2;
                        } else {
                            (*(s8 *)((s8 *)temp_v0_4 + 0x35)) = 0;
                        }
                        (*(f32 *)((s8 *)temp_v0_4 + 0x28)) = alCents2Ratio((s32) (s16) ((s8) (*(u8 *)((s8 *)temp_v0_5 + 5)) + ((temp_fp - (*(u8 *)((s8 *)temp_v0_5 + 4))) * 0x64)));
                        temp_v0_5 = (*(s32 **)((s8 *)temp_v0_3 + 4));
                        (*(u8 *)((s8 *)temp_v0_4 + 0x30)) = (u8) (*(u8 *)((s8 *)(*(s32 **)((s8 *)temp_v0_3 + 0)) + 0xC));
                        (*(u8 *)((s8 *)temp_v0_4 + 0x37)) = 0U;
                        (*(s32 *)((s8 *)temp_v0_4 + 0x24)) = (s32) ((*(s32 *)((s8 *)arg0 + 0x1C)) + (*(s32 *)((s8 *)(*(s32 **)((s8 *)temp_v0_3 + 0)) + 0)));
                        temp_s0_4 = *(s32 *)((temp_s5 * 0x10) + (*(s32 *)((s8 *)arg0 + 0x60)));
                        sp3C = 127.0f;
                        temp_a2 = (*(u8 *)((s8 *)temp_s0_4 + 4));
                        if ((temp_a2 != 0) && ((*(s32 (**)(s32 *, f32 *, u8, u8, s32, s32))((s8 *)arg0 + 0x70)) != NULL)) {
                            temp_v0_6 = (*(s32 (**)(s32 *, f32 *, u8, u8, s32, s32))((s8 *)arg0 + 0x70))(&sp38, &sp3C, temp_a2, (*(u8 *)((s8 *)temp_s0_4 + 5)), (s32) (*(u8 *)((s8 *)temp_s0_4 + 6)), (s32) (*(u8 *)((s8 *)temp_s0_4 + 7)));
                            if (temp_v0_6 != 0) {
                                void *sp24_a1;
                                s32 sp28_a1;
                                sp20 = 0x16;
                                sp24_a1 = temp_v0_4;
                                sp28_a1 = sp38;
                                alEvtqPostEvent(arg0 + 0x48, &sp20, temp_v0_6);
                                (*(u8 *)((s8 *)temp_v0_4 + 0x37)) = (u8) ((*(u8 *)((s8 *)temp_v0_4 + 0x37)) | 1);
                            }
                        }
                        var_v1 = (u32) sp3C;
                        (*(s8 *)((s8 *)temp_v0_4 + 0x36)) = (s8) var_v1;
                        sp3C = 1.0f;
                        temp_a2_2 = (*(u8 *)((s8 *)temp_s0_4 + 8));
                        if ((temp_a2_2 != 0) && ((*(s32 (**)(s32 *, f32 *, u8, u8, s32, s32))((s8 *)arg0 + 0x70)) != (unsigned)NULL)) {
                            
                            temp_v0_7_a1 = (*(s32 (**)(s32 *, f32 *, u8, u8, s32, s32))((s8 *)arg0 + 0x70))(&sp38, &sp3C, temp_a2_2, (*(u8 *)((s8 *)temp_s0_4 + 9)), (s32) (*(u8 *)((s8 *)temp_s0_4 + 0xA)), (s32) (*(u8 *)((s8 *)temp_s0_4 + 0xB)));
                            if (temp_v0_7_a1 != 0) {
                                void *sp24_a2;
                                u8 sp2C_a1;
                                s32 sp28_a2;
                                sp20 = 0x17;
                                sp24_a2 = temp_v0_4;
                                sp2C_a1 = temp_s5;
                                sp28_a2 = sp38;
                                alEvtqPostEvent(arg0 + 0x48, &sp20, temp_v0_7_a1);
                                (*(u8 *)((s8 *)temp_v0_4 + 0x37)) = (u8) ((*(u8 *)((s8 *)temp_v0_4 + 0x37)) | 2);
                            }
                        }
                        (*(f32 *)((s8 *)temp_v0_4 + 0x2C)) = sp3C;
                        temp_v0_8 = (temp_s5 * 0x10) + (*(s32 *)((s8 *)arg0 + 0x60));
                        temp_s7 = (*(u8 *)((s8 *)temp_v0_8 + 0xA));
                        temp_fs0 = (*(f32 *)((s8 *)temp_v0_4 + 0x28)) * (*(f32 *)((s8 *)temp_v0_8 + 0xC)) * sp3C;
                        temp_v0_7_a1 = __vsPan(temp_v0_4, arg0);
                        temp_v0_7 = (*(s32 *)((s8 *)(*(s32 **)((s8 *)temp_v0_3 + 0)) + 0));
                        temp_s4 = __vsVol(temp_v0_4, arg0);
                        if (D_8021F02A == 0) {
                            s32 var_v0_a1;
                            var_v0_a1 = temp_v0_7_a1 & 0xFF;
                          func_80030540(sp44, (*(s32 *)((s8 *)temp_v0_3 + 8)), temp_fs0, temp_s4, var_v0_a1, (s32) temp_s7, temp_v0_7);
                        } else {
                            s32 var_v0_a2;
                            var_v0_a2 = 0x40;
                          func_80030540(sp44, (*(s32 *)((s8 *)temp_v0_3 + 8)), temp_fs0, temp_s4, var_v0_a2, (s32) temp_s7, temp_v0_7);
                        }
                        sp20 = 6;
                        { void *__fence_sp44; do { __fence_sp44 = sp44; } while (0); sp24 = __fence_sp44; }
                        sp2C = (*(u8 *)((s8 *)(*(s32 **)((s8 *)temp_v0_3 + 0)) + 0xD));
                        temp_s0_6 = arg0 + 0x48;
                        sp28 = (*(s32 *)((s8 *)(*(s32 **)((s8 *)temp_v0_3 + 0)) + 4));
                        alEvtqPostEvent(temp_s0_6, &sp20, temp_v0_7);
                        if ((*(s32 *)((s8 *)sp4C + 8)) != 0) {
                            s32 sp28_a3;
                            sp20 = 0x15;
                            sp28_a3 = temp_s5 | 0x80;
                            unksp29 = temp_fp;
                            unksp2A = 0;
                            alEvtqPostEvent(temp_s0_6, &sp20, (*(s32 *)((s8 *)arg0 + 0x24)) * (*(s32 *)((s8 *)sp4C + 8)));
                        }
                    }
                } else {
block_41:
                    temp_v0_2 = __lookupVoice(arg0, temp_fp, temp_s5);
                    if (temp_v0_2 != NULL) {
                        if ((*(u8 *)((s8 *)temp_v0_2 + 0x35)) == 2) {
                            (*(u8 *)((s8 *)temp_v0_2 + 0x35)) = 4U;
                            return;
                        }
                        (*(u8 *)((s8 *)temp_v0_2 + 0x35)) = 3U;
                        __n_seqpReleaseVoice(arg0, temp_v0_2 + 4, (*(s32 *)((s8 *)(*(*(void ***)((s8 *)temp_v0_2 + 0x20))) + 8)));
                    }
                }
            }
        } else if (temp_v1 != 0xD0) {
            if (temp_v1 < 0xD1) {
                if (temp_v1 != 0xC0) {
                    return;
                }
                if ((*(s16 **)((s8 *)arg0 + 0x20)) == NULL) {
                    func_800346B0(D_8004A270, D_8004A274, 0x295);
                }
                temp_a0 = (*(s16 **)((s8 *)arg0 + 0x20));
                temp_v1_2 = temp_fp & 0xFF;
                if (temp_v1_2 < *temp_a0) {
                    __setInstChanState(arg0, ((((struct __rows_temp_a0_4 *)temp_a0)->e[temp_v1_2].m0)), temp_s5);
                }
            } else {
                if (temp_v1 != 0xE0) {
                    return;
                }
                temp_s2_4 = temp_s5 & 0xFF;
                temp_s0_7 = temp_s2_4 * 0x10;
                temp_a2_3 = ((temp_fp + (temp_s0 << 7)) - 0x2000); var_v0_2 = temp_a2_3 * (*(s16 *)((s8 *)(temp_s0_7 + (*(s32 *)((s8 *)arg0 + 0x60))) + 4));
                if (var_v0_2 < 0) {
                    var_v0_2 += 0x1FFF;
                }
                temp_fv0 = alCents2Ratio(var_v0_2 >> 0xD);
                (*(f32 *)((s8 *)(temp_s0_7 + (*(s32 *)((s8 *)arg0 + 0x60))) + 0xC)) = temp_fv0;
                var_s1 = (*(s32 **)((s8 *)arg0 + 0x64));
                if (var_s1 != NULL) {
                    __repair_rows: {
                        if ((*(u8 *)((s8 *)var_s1 + 0x31)) == temp_s2_4) {
                            n_alSynSetPitch(var_s1 + 4, (*(f32 *)((s8 *)var_s1 + 0x28)) * temp_fv0 * (*(f32 *)((s8 *)var_s1 + 0x2C)));
                        }
                        var_s1 = (*(s32 **)((s8 *)var_s1 + 0));
                    }
if (var_s1 != NULL) goto __repair_rows;
                }
            }
        } else {
            var_s1 = (*(s32 **)((s8 *)arg0 + 0x64));
            if (var_s1 != NULL) {
do {
                if ((*(u8 *)((s8 *)var_s1 + 0x31)) == (temp_s5 & 0xFF)) {
                    (*(u8 *)((s8 *)var_s1 + 0x33)) = temp_fp;
                    temp_s0_8 = __vsVol(var_s1, arg0);
                    do { n_alSynSetVol(var_s1 + 4, temp_s0_8, func_80031B94(var_s1, (*(s32 *)((s8 *)arg0 + 0x1C)))); } while (0);
                }
                var_s1 = (*(s32 **)((s8 *)var_s1 + 0));
                } while (var_s1 != NULL);
            }
        }
    } else {
        temp_v1_3 = temp_fp & 0xFF;
        if (temp_v1_3 != 0x10) {
            if (temp_v1_3 < 0x11) {
                if (temp_v1_3 != 7) {
                    s32 temp_a2_3_a1;
                    temp_a2_3_a1 = temp_s5 & 0xFF;
                    if (temp_v1_3 != 0xA) {
                        return;
                    }
                    (*(u8 *)((s8 *)((temp_a2_3_a1 * 0x10) + (*(s32 *)((s8 *)arg0 + 0x60))) + 7)) = temp_s0;
                    var_s1_3 = (*(s32 **)((s8 *)arg0 + 0x64));
                    if (var_s1_3 != NULL) {
loop_61:
                        if ((*(u8 *)((s8 *)var_s1_3 + 0x31)) == temp_a2_3_a1) {
                            n_alSynSetPan(var_s1_3 + 4, __vsPan(var_s1_3, arg0) & 0xFF);
                        }
                        var_s1_3 = (*(s32 **)((s8 *)var_s1_3 + 0));
                        if (var_s1_3 != NULL) {
                            goto loop_61;
                        }
                    }
                } else {
                    temp_a2_4 = temp_s5 & 0xFF;
                    (*(u8 *)((s8 *)((temp_a2_4 * 0x10) + (*(s32 *)((s8 *)arg0 + 0x60))) + 9)) = temp_s0;
                    var_s1_4 = (*(s32 **)((s8 *)arg0 + 0x64));
                    if (var_s1_4 != NULL) {
do {
                        if (((*(u8 *)((s8 *)var_s1_4 + 0x31)) == temp_a2_4) && ((*(u8 *)((s8 *)var_s1_4 + 0x34)) != 3)) {
                            temp_s4_2 = __vsVol(var_s1_4, arg0);
                            n_alSynSetVol(var_s1_4 + 4, temp_s4_2, func_80031B94(var_s1_4, (*(s32 *)((s8 *)arg0 + 0x1C))));
                        }
                        var_s1_4 = (*(s32 **)((s8 *)var_s1_4 + 0));
                        } while (var_s1_4 != NULL);
                    }
                }
            } else if (temp_v1_3 == 0x40) {
                temp_a2_6 = temp_s5 & 0xFF;
                (*(u8 *)((s8 *)((temp_a2_6 * 0x10) + (*(s32 *)((s8 *)arg0 + 0x60))) + 0xB)) = temp_s0;
                var_s1_6 = (*(s32 **)((s8 *)arg0 + 0x64));
                if (var_s1_6 != NULL) {
do {
                    if ((*(u8 *)((s8 *)var_s1_6 + 0x31)) == temp_a2_6) {
                        temp_v0_10 = (*(u8 *)((s8 *)var_s1_6 + 0x35));
                        if (temp_v0_10 != 3) {
                            if (temp_s0 >= 0x40U) {
                                if (temp_v0_10 == 0) {
                                    (*(u8 *)((s8 *)var_s1_6 + 0x35)) = 2U;
                                }
                            } else if (temp_v0_10 == 2) {
                                (*(u8 *)((s8 *)var_s1_6 + 0x35)) = 0U;
                            } else if (temp_v0_10 == 4) {
                                (*(u8 *)((s8 *)var_s1_6 + 0x35)) = 3U;
                                __n_seqpReleaseVoice(arg0, var_s1_6 + 4, (*(s32 *)((s8 *)(*(*(void ***)((s8 *)var_s1_6 + 0x20))) + 8)));
                            }
                        }
                    }
                    var_s1_6 = (*(s32 **)((s8 *)var_s1_6 + 0));
                    } while (var_s1_6 != NULL);
                }
            } else {
                temp_a2_5 = temp_s5 & 0xFF;
                if (temp_v1_3 != 0x5B) {
                    return;
                }
                (*(u8 *)((s8 *)((temp_a2_5 * 0x10) + (*(s32 *)((s8 *)arg0 + 0x60))) + 0xA)) = temp_s0;
                var_s1_5 = (*(s32 **)((s8 *)arg0 + 0x64));
                if (var_s1_5 != NULL) {
for (;;)
{
                    if ((*(u8 *)((s8 *)var_s1_5 + 0x31)) == temp_a2_5) {
                        func_80030250(var_s1_5 + 4, temp_s0 & 0xFF);
                    }
                    var_s1_5 = (*(s32 **)((s8 *)var_s1_5 + 0));
                    if (var_s1_5 != NULL) {
                        continue;
                    }
break;
}
                }
            }
        } else {
            (*(u8 *)((s8 *)((temp_s5 * 0x10) + (*(s32 *)((s8 *)arg0 + 0x60))) + 8)) = temp_s0;
        }
    }
}
