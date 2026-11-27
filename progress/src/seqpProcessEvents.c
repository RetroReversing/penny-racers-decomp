typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef struct { s32 a, b, c; } Three;
typedef struct Msg {
    s16 type;
    void *a;
    s32 b;
    u8 c;
} Msg;

M2C_UNK func_80031680(void *, void *);
M2C_UNK __initFromBank(void *, M2C_UNK *);
M2C_UNK __n_seqpReleaseVoice(void *, M2C_UNK *, M2C_UNK);
M2C_UNK __seqpStopOsc(void *, M2C_UNK *);
M2C_UNK __unmapVoice(void *, M2C_UNK *);
s32 __voiceNeedsNoteKill(void *, M2C_UNK *, M2C_UNK);
s16 __vsVol(M2C_UNK *, void *);
M2C_UNK alEvtqFlushType(s32, M2C_UNK);
s32 alEvtqNextEvent(void *, void *);
M2C_UNK alEvtqPostEvent(void *, void *, s32);
M2C_UNK func_80030D4C(void *);
M2C_UNK func_80030E28(void *, void *);
M2C_UNK func_8003191C(void *, f32);
M2C_UNK func_80031EC8(void *);
s32 func_80031B94(M2C_UNK *, s32);
M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK);
M2C_UNK n_alSynFreeVoice(M2C_UNK *);
M2C_UNK n_alSynSetPitch(M2C_UNK *, f32);
M2C_UNK n_alSynSetVol(M2C_UNK *, s16, s32);
M2C_UNK n_alSynStopVoice(M2C_UNK *);

extern const char D_8004A4B0[];
extern const char D_8004A4B4[];
/* Drains the sequence player event queue and applies each event to its voices, returning the next delay. */ s32 seqpProcessEvents(void *seqp) {
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

    temp_s6 = seqp + 0x48;
    do {
        temp_s0_3 = M2C_FIELD(seqp, s16 *, 0x38);
        switch (temp_s0_3) {
        case 0:
            func_80030D4C(seqp);
            break;
        case 9:
            msg.type = 9;
            alEvtqPostEvent(seqp + 0x48, &msg, M2C_FIELD(seqp, s32 *, 0x5C));
            break;
        case 5: {
            voice = M2C_FIELD(seqp, u8 **, 0x3C);
            n_alSynStopVoice(voice);
            n_alSynFreeVoice(voice);
            vs = M2C_FIELD(voice, u8 **, 0x10);
            if (vs[0x37] != 0) {
                __seqpStopOsc(seqp, vs);
            }
            __unmapVoice(seqp, voice);
            break;
        }
        case 6: {
            voice = M2C_FIELD(seqp, u8 **, 0x3C);
            vs = M2C_FIELD(voice, u8 **, 0x10);
            if (vs[0x34] == 0) {
                vs[0x34] = 1;
            }
            delta = M2C_FIELD(seqp, s32 *, 0x40);
            vs[0x30] = M2C_FIELD(seqp, u8 *, 0x44);
            M2C_FIELD(vs, s32 *, 0x24) = M2C_FIELD(seqp, s32 *, 0x1C) + delta;
            n_alSynSetVol(voice, __vsVol(vs, seqp), delta);
            break;
        }
        case 22: {
            vs = M2C_FIELD(seqp, u8 **, 0x3C);
            osc = M2C_FIELD(seqp, s32 *, 0x40);
            delta = M2C_FIELD(seqp, s32 (**)(s32, f32 *), 0x74)(osc, &sp20);
            vs[0x36] = (u8) sp20;
            n_alSynSetVol(vs + 4, __vsVol(vs, seqp), func_80031B94(vs, M2C_FIELD(seqp, s32 *, 0x1C)));
            msg.type = 0x16;
            msg.a = vs;
            msg.b = osc;
            alEvtqPostEvent(seqp + 0x48, &msg, delta);
            break;
        }
        case 23: {
            vs = M2C_FIELD(seqp, u8 **, 0x3C);
            osc = M2C_FIELD(seqp, s32 *, 0x40);
            chan = M2C_FIELD(seqp, u8 *, 0x44);
            delta = M2C_FIELD(seqp, s32 (**)(s32, f32 *), 0x74)(osc, &sp20);
            *(f32 *)(vs + 0x2C) = sp20;
            n_alSynSetPitch(vs + 4, *(f32 *)(vs + 0x28) * *(f32 *)(vs + 0x2C) * M2C_FIELD(((chan * 0x10) + M2C_FIELD(seqp, s32 *, 0x60)), f32 *, 0xC));
            msg.type = 0x17;
            msg.a = vs;
            msg.b = osc;
            msg.c = chan;
            alEvtqPostEvent(seqp + 0x48, &msg, delta);
            break;
        }
        case 2:
            func_80030E28(seqp, seqp + 0x38);
            break;
        case 7:
            func_80031680(seqp, seqp + 0x38);
            break;
        case 15:
            if (M2C_FIELD(seqp, s32 *, 0x2C) != 1) {
                M2C_FIELD(seqp, s32 *, 0x2C) = 1;
                func_80031EC8(seqp);
            }
            break;
        case 16:
            if (M2C_FIELD(seqp, s32 *, 0x2C) == 2) {
                while ((vs = M2C_FIELD(seqp, u8 **, 0x64)) != NULL) {
                    n_alSynStopVoice(vs + 4);
                    n_alSynFreeVoice(vs + 4);
                    if (vs[0x37] != 0) {
                        __seqpStopOsc(seqp, vs);
                    }
                    __unmapVoice(seqp, vs + 4);
                }
                M2C_FIELD(seqp, s32 *, 0x1C) = 0;
                M2C_FIELD(seqp, s32 *, 0x2C) = 0;
            }
            break;
        case 17:
            if (M2C_FIELD(seqp, s32 *, 0x2C) == 1) {
                alEvtqFlushType((seqp + 0x48), 0);
                alEvtqFlushType((seqp + 0x48), 2);
                var_s1_2 = M2C_FIELD(seqp, M2C_UNK **, 0x64);
                if (var_s1_2 != NULL) {
                    do {
                        temp_s0_6 = (void *) ((4) + (s32) var_s1_2);
                        if ((__voiceNeedsNoteKill(seqp, temp_s0_6, 0xC350) << 0x18) != 0) {
                            do { do { do { __n_seqpReleaseVoice(seqp, temp_s0_6, 0xC350); } while (0); } while (0); } while (0);
                        }
                        var_s1_2 = *var_s1_2;
                    } while (var_s1_2 != NULL);
                }
                var_a0_3 = (void *) ((0x48) + (s32) seqp);
                M2C_FIELD(seqp, s32 *, 0x2C) = 2;
                msg.type = 0x10;
                alEvtqPostEvent(var_a0_3, &msg, 0x7FFFFFFF);
            }
            break;
        case 10:
            var_s1 = M2C_FIELD(seqp, M2C_UNK **, 0x64);
            M2C_FIELD(seqp, u16 *, 0x32) = M2C_FIELD(seqp, u16 *, 0x3C);
            if (var_s1 != NULL) {
                var_a0_2 = var_s1;
                do {
                    __repair_phase_temp_s3 = (s16)(__vsVol(var_a0_2, seqp));
                    n_alSynSetVol((s8 *) var_s1 + 4, __repair_phase_temp_s3, func_80031B94(var_s1, M2C_FIELD(seqp, s32 *, 0x1C)));
                    var_s1 = *var_s1;
                    var_a0_2 = var_s1;
                } while (var_s1 != NULL);
            }
            break;
        case 11:
            M2C_FIELD(seqp, s32 *, 0x7C) = M2C_FIELD(seqp, s32 *, 0x3C); M2C_FIELD(seqp, s32 *, 0x80) = M2C_FIELD(seqp, s32 *, 0x40); M2C_FIELD(seqp, s32 *, 0x84) = M2C_FIELD(seqp, s32 *, 0x44);
            break;
        case 12:
            M2C_FIELD(((M2C_FIELD(seqp, u8 *, 0x3C) * 0x10) + M2C_FIELD(seqp, s32 *, 0x60)), u8 *, 8) = (u8) M2C_FIELD(seqp, u8 *, 0x3D);
            break;
        case 13:
            if (M2C_FIELD(seqp, s32 *, 0x2C) == 1) {
                func_800346B0(D_8004A4B0, D_8004A4B4, 0x118);
            }
            M2C_FIELD(seqp, M2C_UNK **, 0x18) = (M2C_UNK *) M2C_FIELD(seqp, M2C_UNK **, 0x3C);
            func_8003191C(seqp, 500000.0f);
            temp_a1 = M2C_FIELD(seqp, M2C_UNK **, 0x20);
            if (temp_a1 != NULL) {
                __initFromBank(seqp, temp_a1);
            }
            break;
        case 14:
            if (M2C_FIELD(seqp, s32 *, 0x2C) != 0) {
                func_800346B0(D_8004A4B0, D_8004A4B4, 0x121);
            }
            temp_a1_2 = M2C_FIELD(seqp, M2C_UNK **, 0x3C);
            M2C_FIELD(seqp, M2C_UNK **, 0x20) = temp_a1_2;
            __initFromBank(seqp, temp_a1_2);
            break;
        case 1:
        case 3:
        case 4:
            func_800346B0(D_8004A4B0, D_8004A4B4, 0x12B);
            break;
        }
        temp_v0 = alEvtqNextEvent(seqp + 0x48, seqp + 0x38);
        M2C_FIELD(seqp, s32 *, 0x28) = temp_v0;
    } while (temp_v0 == 0);
    M2C_FIELD(seqp, s32 *, 0x1C) = (s32) (M2C_FIELD(seqp, s32 *, 0x1C) + temp_v0);
    return M2C_FIELD(seqp, s32 *, 0x28);
}

