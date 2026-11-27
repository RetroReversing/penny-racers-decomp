#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

void *__lookupVoice(void *, u8, u8);
void *__mapVoice(void *, s32, s32, s32);
void __n_seqpReleaseVoice(void *, void *, s32);
void __setInstChanState(void *, s32, u8);
s32 __vsPan(void *, void *);
s16 __vsVol(void *, void *);
void alEvtqPostEvent(void *, s16 *, s32);
void func_8002FFD0(void *, s16 *);
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
typedef struct { u8 *instrument; u8 reserved[6]; u8 fxmix; u8 pad; f32 pitch; } Channel;
void func_80030E28(void *arg0, void *arg1) {
    struct { s16 type; s16 pad; void *ptr; s32 value; u8 chan; u8 pad2[3]; } evt;
    struct { s16 priority; s16 fxBus; u8 unityPitch; } config;
    s32 sp38;
    s32 bendVal;
    f32 sp3C;
    s32 temp_s4_2;
    s32 temp_s0_2;
    void *temp_v0_2;

    void *temp_v0_3;
    void *temp_s7;
    void *var_s1;
    u8 temp_v0;
    u8 key;
    u8 velocity;
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
    
    u8 temp_s0_8;
    s16 note_vol;
    s32 temp_s4_3;
u32 __repair_phase_temp_s4_3;
    void *temp_v0_7;
    u8 temp_s0_4;

    if ((u32) (M2C_FIELD(arg1, u16 *, 0) - 1) >= 2U) {
        func_800346B0(D_8004A4B0, D_8004A4B4, 0x179);
    }
    temp_v0 = M2C_FIELD(arg1, u8 *, 8);
    temp_s3 = M2C_FIELD(arg1, u8 *, 9);
    temp_s0 = M2C_FIELD(arg1, u8 *, 0xA);
    key = temp_s3;
    velocity = temp_s0;
    temp_s5 = temp_v0 & 0xF;
    temp_v1_2 = temp_v0 & 0xF0;
    switch (temp_v1_2) {
    case 0x90:
        if (temp_s0 != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
                temp_s0_2 = temp_s5 & 0xFF;
                temp_v0_2 = func_800319F4(arg0, temp_s3 & 0xFF, temp_s0, temp_s0_2);
                if (temp_v0_2 != NULL) {
                    temp_s4_2 = temp_s0_2 * 0x10;
                    config.priority = (s16) M2C_FIELD((temp_s4_2 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 8);
                    config.fxBus = 0; config.unityPitch = 0;
                    temp_v0_3 = __mapVoice(arg0, temp_s3 & 0xFF, temp_s0, temp_s0_2);
                    temp_s7 = (u8 *) temp_v0_3 + 4;
                    if (temp_v0_3 != NULL) {
                        func_8002FFD0(temp_s7, (s16 *)&config);
                        M2C_FIELD(temp_v0_3, void **, 0x20) = temp_v0_2;
                        M2C_FIELD(temp_v0_3, s8 *, 0x34) = 0;
                        if (M2C_FIELD((temp_s4_2 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 0xB) >= 0x40U) {
                            M2C_FIELD(temp_v0_3, s8 *, 0x35) = 2;
                        } else {
                            M2C_FIELD(temp_v0_3, s8 *, 0x35) = 0;
                        }
                        M2C_FIELD(temp_v0_3, f32 *, 0x28) = alCents2Ratio((s32) (s16) ((s8) M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), u8 *, 5) + ((temp_s3 - M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), u8 *, 4)) * 0x64)));
                        M2C_FIELD(temp_v0_3, u8 *, 0x30) = (u8) M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), u8 *, 0xC);
                        { s32 time = M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), s32 *, 0); M2C_FIELD(temp_v0_3, u8 *, 0x37) = 0U; M2C_FIELD(temp_v0_3, s32 *, 0x24) = time; }
                        {
                            u8 *vs;
                            vs = ((Channel *) *(u8 **)((u8 *) arg0 + 0x60))[temp_s5].instrument;
                            sp3C = 127.0f;
                            if (vs[4] != 0 && M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70) != NULL) {
                                { temp_v0_5 = M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70)(&sp38, &sp3C, vs[4], vs[5], vs[6], vs[7]); }
                                if (temp_v0_5 != 0) {
                                    evt.type = 0x16;
                                    evt.ptr = temp_v0_3;
                                    evt.value = sp38;
                                    alEvtqPostEvent((u8 *) arg0 + 0x48, &evt.type, temp_v0_5);
                                    M2C_FIELD(temp_v0_3, u8 *, 0x37) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 0x37) | 1);
                                }
                            }
                            M2C_FIELD(temp_v0_3, u8 *, 0x36) = (u8) sp3C;
                            sp3C = 1.0f;
                            if (vs[8] != 0 && M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70) != NULL) {
                                { temp_v0_5 = M2C_FIELD(arg0, s32 (**)(s32 *, f32 *, u8, u8, s32, s32), 0x70)(&sp38, &sp3C, vs[8], vs[9], vs[10], vs[11]); }
                                if (temp_v0_5 != 0) {
                                    evt.type = 0x17;
                                    evt.ptr = temp_v0_3;
                                    evt.chan = temp_s5;
                                    evt.value = sp38;
                                    alEvtqPostEvent((u8 *) arg0 + 0x48, &evt.type, temp_v0_5);
                                    M2C_FIELD(temp_v0_3, u8 *, 0x37) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 0x37) | 2);
                                }
                            }
                            M2C_FIELD(temp_v0_3, f32 *, 0x2C) = sp3C;
                            temp_s4_3 = ((Channel *)*(u8 **)((u8 *) arg0 + 0x60))[temp_s5].fxmix;
                            temp_fs0 = M2C_FIELD(temp_v0_3, f32 *, 0x28) * ((Channel *)*(u8 **)((u8 *) arg0 + 0x60))[temp_s5].pitch * sp3C;
                            temp_s0_8 = __vsPan(temp_v0_3, arg0); note_vol = __vsVol(temp_v0_3, arg0); temp_v0_5 = M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), s32 *, 0);
                            func_80030540(temp_s7, M2C_FIELD(temp_v0_2, s32 *, 8), temp_fs0, note_vol, temp_s0_8 & 0xFF, (s32) temp_s4_3, temp_v0_5);
                        }
                        evt.type = 6;
                        evt.ptr = temp_s7;
                        evt.chan = M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), u8 *, 0xD);
                        evt.value = M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), s32 *, 4);
                        alEvtqPostEvent((u8 *) arg0 + 0x48, &evt.type, M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), s32 *, 0));
                        return;
                    }
                }
            }
        
            break;
}
    case 0x80:
        {
            var_s1 = __lookupVoice(arg0, temp_s3, temp_s5);
            if (var_s1 != NULL) {
                if (M2C_FIELD(var_s1, u8 *, 0x35) == 2) {
                    M2C_FIELD(var_s1, u8 *, 0x35) = 4U;
                    return;
                }
                M2C_FIELD(var_s1, u8 *, 0x35) = 3U;
                __n_seqpReleaseVoice(arg0, (u8 *) var_s1 + 4, M2C_FIELD(*M2C_FIELD(var_s1, void ***, 0x20), s32 *, 8));
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
                M2C_FIELD(var_s1, u8 *, 0x33) = key;
                n_alSynSetVol((u8 *) var_s1 + 4, __vsVol(var_s1, arg0), func_80031B94(var_s1, M2C_FIELD(arg0, s32 *, 0x1C)));
            }
            var_s1 = M2C_FIELD(var_s1, void **, 0);
        }
        break;
    case 0xB0:
        temp_v1_2 = temp_s3 & 0xFF;
        switch (temp_v1_2) {
            case 10:
                M2C_FIELD(((temp_s5 & 0xFF) * 0x10 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 7) = velocity;
                var_s1 = M2C_FIELD(arg0, void **, 0x64);
                while (var_s1 != NULL) {
                    if (M2C_FIELD(var_s1, u8 *, 0x31) == (temp_s5 & 0xFF)) {
                        n_alSynSetPan((u8 *) var_s1 + 4, __vsPan(var_s1, arg0) & 0xFF);
                    }
                    var_s1 = M2C_FIELD(var_s1, void **, 0);
                }
                break;
            case 7:
                M2C_FIELD(((temp_s5 & 0xFF) * 0x10 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 9) = velocity;
                var_s1 = M2C_FIELD(arg0, void **, 0x64);
                while (var_s1 != NULL) {
                    if ((M2C_FIELD(var_s1, u8 *, 0x31) == (temp_s5 & 0xFF)) && (M2C_FIELD(var_s1, u8 *, 0x34) != 3)) {
                        { s32 duration; note_vol = __vsVol(var_s1, arg0); duration = func_80031B94(var_s1, M2C_FIELD(arg0, s32 *, 0x1C)); n_alSynSetVol((u8 *) var_s1 + 4, note_vol, duration); }
                    }
                    var_s1 = M2C_FIELD(var_s1, void **, 0);
                }
                break;
            case 16:
                M2C_FIELD(((temp_s5 & 0xFF) * 0x10 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 8) = velocity;
                return;
                        case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 93:
                break;
            case 0x40: {
            M2C_FIELD(((temp_s5 & 0xFF) * 0x10 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 0xB) = velocity;
            var_s1 = M2C_FIELD(arg0, void **, 0x64);
            while (var_s1 != NULL) {
                if (M2C_FIELD(var_s1, u8 *, 0x31) == (temp_s5 & 0xFF)) {
                    temp_v0 = M2C_FIELD(var_s1, u8 *, 0x35);
                    if (temp_v0 != 3) {
                        if (velocity >= 0x40U) {
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
                    } break;
            case 0x5B: {
            M2C_FIELD(((temp_s5 & 0xFF) * 0x10 + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 0xA) = velocity;
            var_s1 = M2C_FIELD(arg0, void **, 0x64);
            while (var_s1 != NULL) {
                if (M2C_FIELD(var_s1, u8 *, 0x31) == (temp_s5 & 0xFF)) {
                    func_80030250((u8 *) var_s1 + 4, velocity & 0xFF);
                }
                var_s1 = M2C_FIELD(var_s1, void **, 0);
            }
                    } break;
        }
        break;
    case 0xC0:
        if (M2C_FIELD(arg0, s16 **, 0x20) == NULL) {
            func_800346B0(D_8004A4B0, D_8004A4B4, 0x28F);
        }
        temp_s3 = temp_s3 & 0xFF;
        if (temp_s3 < *(M2C_FIELD(arg0, s16 **, 0x20))) {
            __setInstChanState(arg0, M2C_FIELD(((temp_s3 * 4) + (u8 *) M2C_FIELD(arg0, s16 **, 0x20)), s32 *, 0xC), temp_s5);
            return;
        }
        break;
    case 0xE0:
        bendVal = ((temp_s3 + (temp_s0 << 7)) - 0x2000);
        __repair_phase_temp_s4_3 = (temp_s5 & 0xFF);
        temp_s0_8 = __repair_phase_temp_s4_3 * 0x10;
        var_v0 = M2C_FIELD((temp_s0_8 + M2C_FIELD(arg0, s32 *, 0x60)), s16 *, 4) * bendVal;
        if (var_v0 < 0) {
            var_v0 += 0x1FFF;
        }
        temp_fv0 = alCents2Ratio(var_v0 >> 0xD);
        M2C_FIELD((temp_s0_8 + M2C_FIELD(arg0, s32 *, 0x60)), f32 *, 0xC) = temp_fv0;
        temp_v1 = __repair_phase_temp_s4_3;
        var_s1 = M2C_FIELD(arg0, void **, 0x64);
        while (var_s1 != NULL) {
            if (M2C_FIELD(var_s1, u8 *, 0x31) == temp_v1) {
                n_alSynSetPitch((u8 *) var_s1 + 4, M2C_FIELD(var_s1, f32 *, 0x28) * temp_fv0 * M2C_FIELD(var_s1, f32 *, 0x2C));
            }
            var_s1 = M2C_FIELD(var_s1, void **, 0);
        }
        break;
    }
}

