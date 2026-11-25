#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

void *__lookupVoice(void *, u8, u8);
void *__mapVoice(void *, s32, s32, s32);
void __n_seqpReleaseVoice(void *, void *, s32);
void __setInstChanState(void *, s32, u8);
s32 __vsPan(void *, void *);
s16 __vsVol(void *, void *);
void alEvtqPostEvent(void *, s16 *, s32);
void func_8002FFD0(void *arg0, void *, s16 *);
void func_80030250(void *, s32);
void func_80030540(void *, s32, f32, s16, s32, s32, s32);
void *func_800319F4(void *, s32, s32, s32);
s32 func_80031B94(void *, s32);
void func_800346B0(char *, char *, s32);
void n_alSynSetPan(void *, s32);
void n_alSynSetPitch(void *, f32);
void n_alSynSetVol(void *, s16, s32);
f32 alCents2Ratio(s32);

extern const char D_8004A4B0[];
extern const char D_8004A4B4[];
void func_80030E28(void *arg0, void *arg1) {
    s32 sp20;
    void *sp24;
    s32 sp28;
    u8 sp2C;
    s16 sp30;
    s8 sp34;
    s32 sp38;
    f32 sp3C;
    s32 temp_s4_2;
    s32 temp_s0_2;
    void *temp_v0_2;
void *__repair_phase_temp_v0_2;
    void *temp_v0_3;
    void *temp_s7;
    void *var_s1;
    u8 temp_v0;
    u8 temp_s3;
    u8 temp_s0;
    u8 temp_s5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 temp_v0_5;
s32 __repair_phase_temp_v0_5;
    
    f32 temp_fv0;
    f32 temp_fs0;
    
    s32 temp_s0_8;
    s32 temp_s4_3;
    void *temp_v0_7;
    u8 temp_s0_4;

    if ((u32) (M2C_FIELD(arg1, u16 *, 0) - 1) >= 2U) {
        func_800346B0(D_8004A4B0, D_8004A4B4, 0x179);
    }
    temp_v0 = M2C_FIELD(arg1, u8 *, 8);
    temp_s3 = M2C_FIELD(arg1, u8 *, 9);
    temp_s0 = M2C_FIELD(arg1, u8 *, 0xA);
    temp_s5 = temp_v0 & 0xF;
    temp_v1 = temp_v0 & 0xF0;
    switch (temp_v1) {
    case 0x90:
        if (temp_s0 != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
                temp_s0_2 = temp_s5 & 0xFF;
                temp_v0_2 = func_800319F4(arg0, temp_s3 & 0xFF, temp_s0, temp_s0_2);
                if (temp_v0_2 != NULL) {
                    temp_s4_2 = temp_s0_2 * 0x10;
                    sp34 = 0;
                    sp30 = (s16) M2C_FIELD((temp_s4_2 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 8);
                    temp_v0_3 = __mapVoice(arg0, temp_s3 & 0xFF, temp_s0, temp_s0_2);
                    temp_s7 = (u8 *) temp_v0_3 + 4;
                    if (temp_v0_3 != NULL) {
                        func_8002FFD0(arg0, temp_s7, &sp30);
                        M2C_FIELD(temp_v0_3, void **, 0x20) = temp_v0_2;
                        M2C_FIELD(temp_v0_3, s8 *, 0x34) = 0;
                        if (M2C_FIELD((temp_s4_2 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 0xB) >= 0x40U) {
                            M2C_FIELD(temp_v0_3, s8 *, 0x35) = 2;
                        } else {
                            M2C_FIELD(temp_v0_3, s8 *, 0x35) = 0;
                        }
                        M2C_FIELD(temp_v0_3, f32 *, 0x28) = alCents2Ratio((s32) (s16) ((s8) M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), u8 *, 5) + ((temp_s3 - M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), u8 *, 4)) * 0x64)));
                        M2C_FIELD(temp_v0_3, u8 *, 0x30) = (u8) M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), u8 *, 0xC);
                        M2C_FIELD(temp_v0_3, u8 *, 0x37) = 0U;
                        M2C_FIELD(temp_v0_3, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), s32 *, 0));
                        {
                            void *temp_s0_3 = (u8 *) arg0 + 0x60;
                            u8 *vs = *(u8 **) temp_s0_3;
                            vs = vs + temp_s5 * 0x10;
                            sp3C = 127.0f;
                            if (vs[4] != 0 && M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70) != NULL) {
                                temp_v0_5 = M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70)(&sp38, &sp3C, vs[4], vs[5], vs[6], vs[7]);
                                if (temp_v0_5 != 0) {
                                    sp20 = 0x16;
                                    sp24 = temp_v0_3;
                                    sp28 = sp38;
                                    alEvtqPostEvent((u8 *) arg0 + 0x48, &sp20, temp_v0_5);
                                    M2C_FIELD(temp_v0_3, u8 *, 0x37) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 0x37) | 1);
                                }
                            }
                            if (vs[8] != 0 && M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70) != NULL) {
                                sp3C = 1.0f;
                                __repair_phase_temp_v0_5 = M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70)(&sp38, &sp3C, vs[8], vs[9], vs[10], vs[11]);
                                if (__repair_phase_temp_v0_5 != 0) {
                                    sp20 = 0x17;
                                    sp24 = temp_v0_3;
                                    sp2C = temp_s5;
                                    sp28 = sp38;
                                    alEvtqPostEvent((u8 *) arg0 + 0x48, &sp20, __repair_phase_temp_v0_5);
                                    M2C_FIELD(temp_v0_3, u8 *, 0x37) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 0x37) | 2);
                                }
                            }
                            temp_v0_7 = vs;
                            temp_v0_5 = (u8)(vs[0xA]);
                            temp_fs0 = M2C_FIELD(temp_v0_3, f32 *, 0x28) * M2C_FIELD(temp_v0_7, f32 *, 0xC) * sp3C;
                            __repair_phase_temp_v0_5 = __vsPan(temp_v0_3, arg0);
                            func_80030540(temp_s7, M2C_FIELD(temp_v0_2, s32 *, 8), temp_fs0, __vsVol(temp_v0_3, arg0), __repair_phase_temp_v0_5 & 0xFF, (s32) temp_v0_5, M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), s32 *, 0));
                        }
                        sp20 = 6;
                        sp24 = temp_s7;
                        sp2C = M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), u8 *, 0xD);
                        sp28 = M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), s32 *, 4);
                        alEvtqPostEvent((u8 *) arg0 + 0x48, &sp20, M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), s32 *, 0));
                        return;
                    }
                }
            }
        } else {
            __repair_phase_temp_v0_2 = __lookupVoice(arg0, temp_s3, temp_s5);
            if (__repair_phase_temp_v0_2 != NULL) {
                if (M2C_FIELD(__repair_phase_temp_v0_2, u8 *, 0x35) == 2) {
                    M2C_FIELD(__repair_phase_temp_v0_2, u8 *, 0x35) = 4U;
                    return;
                }
                M2C_FIELD(__repair_phase_temp_v0_2, u8 *, 0x35) = 3U;
                __n_seqpReleaseVoice(arg0, (u8 *) __repair_phase_temp_v0_2 + 4, M2C_FIELD(*M2C_FIELD(__repair_phase_temp_v0_2, void ***, 0x20), s32 *, 8));
                return;
            }
            return;
        }
        break;
    case 0xA0:
        temp_v0_3 = __lookupVoice(arg0, temp_s3, temp_s5);
        if (temp_v0_3 != NULL) {
            M2C_FIELD(temp_v0_3, u8 *, 0x33) = temp_s0;
            n_alSynSetVol((u8 *) temp_v0_3 + 4, __vsVol(temp_v0_3, arg0), func_80031B94(temp_v0_3, M2C_FIELD(arg0, s32 *, 0x1C)));
            return;
        }
        break;
    case 0xD0:
        var_s1 = M2C_FIELD(arg0, void **, 0x64);
        while (var_s1 != NULL) {
            if (M2C_FIELD(var_s1, u8 *, 0x31) == (temp_s5 & 0xFF)) {
                M2C_FIELD(var_s1, u8 *, 0x33) = temp_s3;
                n_alSynSetVol((u8 *) var_s1 + 4, __vsVol(var_s1, arg0), func_80031B94(var_s1, M2C_FIELD(arg0, s32 *, 0x1C)));
            }
            var_s1 = M2C_FIELD(var_s1, void **, 0);
        }
        break;
    case 0xB0:
        temp_v1_2 = temp_s3 & 0xFF;
        if (temp_v1_2 < 0x1C) {
            switch (temp_v1_2) {
            case 10:
                M2C_FIELD(((temp_s5 & 0xFF) * 0x10 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 7) = temp_s0;
                var_s1 = M2C_FIELD(arg0, void **, 0x64);
                while (var_s1 != NULL) {
                    if (M2C_FIELD(var_s1, u8 *, 0x31) == (temp_s5 & 0xFF)) {
                        n_alSynSetPan((u8 *) var_s1 + 4, __vsPan(var_s1, arg0) & 0xFF);
                    }
                    var_s1 = M2C_FIELD(var_s1, void **, 0);
                }
                break;
            case 7:
                M2C_FIELD(((temp_s5 & 0xFF) * 0x10 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 9) = temp_s0;
                var_s1 = M2C_FIELD(arg0, void **, 0x64);
                while (var_s1 != NULL) {
                    if ((M2C_FIELD(var_s1, u8 *, 0x31) == (temp_s5 & 0xFF)) && (M2C_FIELD(var_s1, u8 *, 0x34) != 3)) {
                        n_alSynSetVol((u8 *) var_s1 + 4, __vsVol(var_s1, arg0), func_80031B94(var_s1, M2C_FIELD(arg0, s32 *, 0x1C)));
                    }
                    var_s1 = M2C_FIELD(var_s1, void **, 0);
                }
                break;
            case 16:
                M2C_FIELD(((temp_s5 & 0xFF) * 0x10 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 8) = temp_s0;
                return;
            }
        } else if (temp_v1_2 == 0x5B) {
            M2C_FIELD(((temp_s5 & 0xFF) * 0x10 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 0xA) = temp_s0;
            var_s1 = M2C_FIELD(arg0, void **, 0x64);
            while (var_s1 != NULL) {
                if (M2C_FIELD(var_s1, u8 *, 0x31) == (temp_s5 & 0xFF)) {
                    func_80030250((u8 *) var_s1 + 4, temp_s0 & 0xFF);
                }
                var_s1 = M2C_FIELD(var_s1, void **, 0);
            }
        } else if (temp_v1_2 == 0x40) {
            M2C_FIELD(((temp_s5 & 0xFF) * 0x10 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 0xB) = temp_s0;
            var_s1 = M2C_FIELD(arg0, void **, 0x64);
            while (var_s1 != NULL) {
                if (M2C_FIELD(var_s1, u8 *, 0x31) == (temp_s5 & 0xFF)) {
                    temp_v0 = M2C_FIELD(var_s1, u8 *, 0x35);
                    if (temp_v0 != 3) {
                        if (temp_s0 >= 0x40U) {
                            if (temp_v0 == 0) {
                                M2C_FIELD(var_s1, u8 *, 0x35) = 2U;
                            }
                        } else if (temp_v0 == 2) {
                            M2C_FIELD(var_s1, u8 *, 0x35) = 0U;
                        } else if (temp_v0 == 4) {
                            M2C_FIELD(var_s1, u8 *, 0x35) = 3U;
                            __n_seqpReleaseVoice(arg0, (u8 *) var_s1 + 4, M2C_FIELD(*M2C_FIELD(var_s1, void ***, 0x20), s32 *, 8));
                        }
                    }
                }
                var_s1 = M2C_FIELD(var_s1, void **, 0);
            }
        }
        break;
    case 0xC0:
        if (M2C_FIELD(arg0, s16 **, 0x20) == NULL) {
            func_800346B0(D_8004A4B0, D_8004A4B4, 0x28F);
        }
        temp_s3 = temp_s3 & 0xFF;
        if (temp_s3 < *(M2C_FIELD(arg0, s16 **, 0x20))) {
            __setInstChanState(arg0, M2C_FIELD(((temp_s3 * 4) + M2C_FIELD(arg0, s16 **, 0x20)), s32 *, 0xC), temp_s5);
            return;
        }
        break;
    case 0xE0:
        temp_s4_3 = temp_s5 & 0xFF;
        temp_s0_8 = temp_s4_3 * 0x10;
        sp20 = ((temp_s3 + (temp_s0 << 7)) - 0x2000); var_v0 = M2C_FIELD((temp_s0_8 + M2C_FIELD(arg0, s32 *, 0x60)), s16 *, 4) * sp20;
        if (var_v0 < 0) {
            var_v0 += 0x1FFF;
        }
        temp_fv0 = alCents2Ratio(var_v0 >> 0xD);
        M2C_FIELD((temp_s0_8 + M2C_FIELD(arg0, s32 *, 0x60)), f32 *, 0xC) = temp_fv0;
        var_s1 = M2C_FIELD(arg0, void **, 0x64);
        while (var_s1 != NULL) {
            if (M2C_FIELD(var_s1, u8 *, 0x31) == temp_s4_3) {
                n_alSynSetPitch((u8 *) var_s1 + 4, M2C_FIELD(var_s1, f32 *, 0x28) * temp_fv0 * M2C_FIELD(var_s1, f32 *, 0x2C));
            }
            var_s1 = M2C_FIELD(var_s1, void **, 0);
        }
        break;
    }
}
