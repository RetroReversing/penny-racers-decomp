typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef struct Msg {
    s16 type;
    void *a;
    s32 b;
    u8 c;
} Msg;

M2C_UNK __CSPHandleMetaMsg(void *, void *);
M2C_UNK __initFromBank(void *, M2C_UNK *);
M2C_UNK __n_seqpReleaseVoice(void *, M2C_UNK *, M2C_UNK);
M2C_UNK __seqpStopOsc(void *, M2C_UNK *);
M2C_UNK __unmapVoice(void *, M2C_UNK *);
s32 __voiceNeedsNoteKill(void *, M2C_UNK *, M2C_UNK);
s16 __vsVol(M2C_UNK *, void *);
M2C_UNK alEvtqFlushType(s32, M2C_UNK);
s32 alEvtqNextEvent(void *, void *);
M2C_UNK alEvtqPostEvent(void *, void *, s32);
M2C_UNK func_8002B454(void *);
M2C_UNK func_8002B534(void *, void *);
M2C_UNK __n_setUsptFromTempo(void *, f32);
M2C_UNK __CSPPostNextSeqEvent(void *);
s32 func_80031B94(M2C_UNK *, s32);
M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK);
M2C_UNK n_alSynFreeVoice(M2C_UNK *);
M2C_UNK n_alSynSetPitch(M2C_UNK *, f32);
M2C_UNK n_alSynSetVol(M2C_UNK *, s16, s32);
M2C_UNK n_alSynStopVoice(M2C_UNK *);

extern const char D_8004A270[];
extern const char D_8004A274[];
s32 func_8002AF40(void *arg0) {
    u16 __repair_narrow_0;
    Msg msg;
    f32 sp20;
    u8 *voice;
    u8 *vs;
    s32 osc;
    s32 delta;
    u8 chan;
    M2C_UNK *temp_a1;
    M2C_UNK *temp_a1_2;
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s0_2;
    M2C_UNK *temp_s0_6;
    union { M2C_UNK * pointer; s32 value; } __repair_phase_storage;
    M2C_UNK *temp_s1_2;
    M2C_UNK *temp_s1_4;
    M2C_UNK *temp_s1_5;
    M2C_UNK *temp_s1_6;
    M2C_UNK *var_a0_2;
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    M2C_UNK *var_s1_2;
    s32 temp_s0_3;
    s32 temp_s0_3_arm;
    s16 temp_s0_5;
    
    
s32 __repair_phase_temp_s3;
    s32 temp_s3_2;
    
    s32 temp_s4_2;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;
    u8 temp_s0_4;
    void *var_a0_3;

    temp_s6 = arg0 + 0x48;
    do {
        temp_s0_3 = M2C_FIELD(arg0, s16 *, 0x38);
        switch (temp_s0_3) {
        case 0:
            func_8002B454(arg0);
            break;
        case 9:
            msg.type = 9;
            alEvtqPostEvent(arg0 + 0x48, &msg, M2C_FIELD(arg0, s32 *, 0x5C));
            break;
        case 5: {
            voice = M2C_FIELD(arg0, u8 **, 0x3C);
            n_alSynStopVoice(voice);
            n_alSynFreeVoice(voice);
            vs = M2C_FIELD(voice, u8 **, 0x10);
            if (vs[0x37] != 0) {
                __seqpStopOsc(arg0, vs);
            }
            __unmapVoice(arg0, voice);
            break;
        }
        case 6: {
            voice = M2C_FIELD(arg0, u8 **, 0x3C);
            vs = M2C_FIELD(voice, u8 **, 0x10);
            if (vs[0x34] == 0) {
                vs[0x34] = 1;
            }
            delta = M2C_FIELD(arg0, s32 *, 0x40);
            M2C_FIELD(vs, s32 *, 0x24) = M2C_FIELD(arg0, s32 *, 0x1C) + delta;
            vs[0x30] = M2C_FIELD(arg0, u8 *, 0x44);
            n_alSynSetVol(voice, __vsVol(vs, arg0), delta);
            break;
        }
        case 22: {
            vs = M2C_FIELD(arg0, u8 **, 0x3C);
            osc = M2C_FIELD(arg0, s32 *, 0x40);
            delta = M2C_FIELD(arg0, s32 (**)(s32, f32 *), 0x74)(osc, &sp20);
            vs[0x36] = (u8) sp20;
            n_alSynSetVol(vs + 4, __vsVol(vs, arg0), func_80031B94(vs, M2C_FIELD(arg0, s32 *, 0x1C)));
            msg.type = 0x16;
            msg.a = vs;
            msg.b = osc;
            alEvtqPostEvent(arg0 + 0x48, &msg, delta);
            break;
        }
        case 23: {
            vs = M2C_FIELD(arg0, u8 **, 0x3C);
            osc = M2C_FIELD(arg0, s32 *, 0x40);
            chan = M2C_FIELD(arg0, u8 *, 0x44);
            delta = M2C_FIELD(arg0, s32 (**)(s32, f32 *), 0x74)(osc, &sp20);
            *(f32 *)(vs + 0x2C) = sp20;
            n_alSynSetPitch(vs + 4, *(f32 *)(vs + 0x28) * *(f32 *)(vs + 0x2C) * M2C_FIELD(((chan * 0x10) + M2C_FIELD(arg0, s32 *, 0x60)), f32 *, 0xC));
            msg.type = 0x17;
            msg.a = vs;
            msg.b = osc;
            msg.c = chan;
            alEvtqPostEvent(arg0 + 0x48, &msg, delta);
            break;
        }
        case 2:
        case 21:
            func_8002B534(arg0, arg0 + 0x38);
            break;
        case 7:
            __CSPHandleMetaMsg(arg0, arg0 + 0x38);
            break;
        case 10:
            var_s1 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
            M2C_FIELD(arg0, u16 *, 0x32) = M2C_FIELD(arg0, u16 *, 0x3C);
            if (var_s1 != NULL) {
                var_a0_2 = var_s1;
                do {
                    __repair_phase_temp_s3 = (s16)(__vsVol(var_a0_2, arg0));
                    n_alSynSetVol((s8 *) var_s1 + 4, __repair_phase_temp_s3, func_80031B94(var_s1, M2C_FIELD(arg0, s32 *, 0x1C)));
                    var_s1 = *var_s1;
                    var_a0_2 = var_s1;
                } while (var_s1 != NULL);
            } else {
            default:
block_50:
            }
            break;
        case 15:
            if (M2C_FIELD(arg0, s32 *, 0x2C) != 1) {
                M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                __CSPPostNextSeqEvent(arg0);
            }
            break;
        case 16:
            if (M2C_FIELD(arg0, s32 *, 0x2C) == 2) {
                while ((vs = M2C_FIELD(arg0, u8 **, 0x64)) != NULL) {
                    n_alSynStopVoice(vs + 4);
                    n_alSynFreeVoice(vs + 4);
                    if (vs[0x37] != 0) {
                        __seqpStopOsc(arg0, vs);
                    }
                    __unmapVoice(arg0, vs + 4);
                }
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            }
            break;
        case 17:
            if (M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
                alEvtqFlushType((arg0 + 0x48), 0);
                alEvtqFlushType((arg0 + 0x48), 0x15);
                alEvtqFlushType((arg0 + 0x48), 2);
                var_s1_2 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
                if (var_s1_2 != NULL) {
                    do {
                        temp_s0_6 = (void *) ((4) + (s32) var_s1_2);
                        if ((__voiceNeedsNoteKill(arg0, temp_s0_6, 0xC350) << 0x18) != 0) {
                            do { do { do { __n_seqpReleaseVoice(arg0, temp_s0_6, 0xC350); } while (0); } while (0); } while (0);
                        }
                        var_s1_2 = *var_s1_2;
                    } while (var_s1_2 != NULL);
                }
                var_a0_3 = (void *) ((0x48) + (s32) arg0);
                M2C_FIELD(arg0, s32 *, 0x2C) = 2;
                msg.type = 0x10;
                alEvtqPostEvent(var_a0_3, &msg, 0x7FFFFFFF);
            }
            break;
        case 12:
            M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x3C) * 0x10) + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 0x3D);
            goto block_50;
        case 13:
            if (M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
                func_800346B0(D_8004A270, D_8004A274, 0x111);
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0x3C);
            __n_setUsptFromTempo(arg0, 500000.0f);
            temp_a1 = M2C_FIELD(arg0, M2C_UNK **, 0x20);
            if (temp_a1 != NULL) {
                __initFromBank(arg0, temp_a1);
            }
            break;
        case 14:
            if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
                func_800346B0(D_8004A270, D_8004A274, 0x11B);
            }
            temp_a1_2 = M2C_FIELD(arg0, M2C_UNK **, 0x3C);
            M2C_FIELD(arg0, M2C_UNK **, 0x20) = temp_a1_2;
            __initFromBank(arg0, temp_a1_2);
            break;
        case 1:
        case 3:
        case 4:
            func_800346B0(D_8004A270, D_8004A274, 0x128);
            goto block_50;
        }
        temp_v0 = alEvtqNextEvent(arg0 + 0x48, arg0 + 0x38);
        M2C_FIELD(arg0, s32 *, 0x28) = temp_v0;
    } while (temp_v0 == 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_v0);
    return M2C_FIELD(arg0, s32 *, 0x28);
}

