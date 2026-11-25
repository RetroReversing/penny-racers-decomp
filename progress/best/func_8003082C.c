#define F_S32(p, o) (*(s32 *)((u8 *)(p) + (o)))
#define F_PTR(p, o) (*(void **)((u8 *)(p) + (o)))
#define F_U8(p, o) (*(u8 *)((u8 *)(p) + (o)))
#define F_S8(p, o) (*(s8 *)((u8 *)(p) + (o)))
#define F_U16(p, o) (*(u16 *)((u8 *)(p) + (o)))
#define F_F32(p, o) (*(f32 *)((u8 *)(p) + (o)))
#define F_S16(p, o) (*(s16 *)((u8 *)(p) + (o)))
#define QUEUE(p) ((u8 *)(p) + 0x48)

typedef struct Msg {
    s16 type;
    void *a;
    s32 b;
    u8 c;
} Msg;

extern void func_80030D4C(void *arg0);
extern void func_80030E28(void *arg0, void *arg1);
extern void __postNextSeqEvent(void *arg0);
extern void __setUsptFromTempo(void *arg0, f32 arg1);
extern s32 func_80031B94(void *arg0, s32 arg1);
extern void func_800346B0(void *a, void *b, s32 c);
extern void __handleMetaMsg(void *arg0, void *arg1);
extern void __initFromBank(void *arg0, void *arg1);
extern void __n_seqpReleaseVoice(void *arg0);
extern void __seqpStopOsc(void *arg0, void *arg1);
extern void __unmapVoice(void *arg0, void *arg1);
extern s32 __voiceNeedsNoteKill(void *arg0, void *arg1, s32 arg2);
extern s16 __vsVol(void *arg0, void *arg1);
extern void alEvtqFlushType(void *q, s32 type);
extern s32 alEvtqNextEvent(void *q, void *msg);
extern void alEvtqPostEvent(void *q, void *msg, s32 v);
extern void n_alSynFreeVoice(void *v);
extern void n_alSynSetPitch(void *v, f32 p);
extern void n_alSynSetVol(void *v, s16 vol, s32 delta);
extern void n_alSynStopVoice(void *v);

extern const char D_8004A4B4[];
s32 func_8003082C(void *arg0) {
    Msg msg;
    f32 fval;
    s32 vol;
s32 __repair_phase_vol;
s32 __repair_result___repair_phase_vol;
    void *v;
    void *w;
    
s32 __repair_phase_r;
    s32 ret;
s32 __repair_phase_ret;

    do {
        switch (F_S16(arg0, 0x38)) {
        case 0:
            func_80030D4C(arg0);
            break;
        case 9:
            msg.type = 9;
            alEvtqPostEvent(QUEUE(arg0), &msg, F_S32(arg0, 0x5C));
            break;
        case 5:
            v = F_PTR(arg0, 0x3C);
            n_alSynStopVoice(v);
            n_alSynFreeVoice(v);
            w = F_PTR(v, 0x10);
            if (F_U8(w, 0x37) != 0) {
                __seqpStopOsc(arg0, w);
            }
            __unmapVoice(arg0, v);
            break;
        case 6:
            v = F_PTR(arg0, 0x3C);
            w = F_PTR(v, 0x10);
            if (F_U8(w, 0x34) == 0) {
                F_U8(w, 0x34) = 1;
            }
            __repair_phase_vol = F_S32(arg0, 0x40);
            F_U8(w, 0x30) = F_U8(arg0, 0x44);
            F_S32(w, 0x24) = F_S32(arg0, 0x1C) + __repair_phase_vol;
            n_alSynSetVol(v, __vsVol(w, arg0), __repair_phase_vol);
            break;
        case 22:
            w = F_PTR(arg0, 0x3C);
            __repair_result___repair_phase_vol = F_S32(arg0, 0x40);
            ret = ((s32 (*)(s32, f32 *))F_PTR(arg0, 0x74))(__repair_result___repair_phase_vol, &fval);
            if (!(fval >= 2.1474836e9f)) {
                F_S8(w, 0x36) = (s8)(s32)fval;
            } else {
                F_S8(w, 0x36) = (s8)((s32)(fval - 2.1474836e9f) | 0x80000000);
            }
            vol = __vsVol(w, arg0);
            n_alSynSetVol((u8 *)w + 4, vol, func_80031B94(w, F_S32(arg0, 0x1C)));
            msg.type = 0x16;
            msg.a = w;
            msg.b = __repair_result___repair_phase_vol;
            alEvtqPostEvent(QUEUE(arg0), &msg, ret);
            break;
        case 23:
            w = F_PTR(arg0, 0x3C);
            __repair_phase_r = F_S32(arg0, 0x40);
            msg.c = F_U8(arg0, 0x44);
            ret = ((s32 (*)(s32, f32 *))F_PTR(arg0, 0x74))(__repair_phase_r, &fval);
            F_F32(w, 0x2C) = fval;
            n_alSynSetPitch((u8 *)w + 4, F_F32(w, 0x28) * fval * F_F32(((msg.c * 0x10) + F_S32(arg0, 0x60)), 0xC));
            msg.type = 0x17;
            msg.a = w;
            msg.b = __repair_phase_r;
            alEvtqPostEvent(QUEUE(arg0), &msg, ret);
            break;
        case 2:
            func_80030E28(arg0, (u8 *)arg0 + 0x38);
            break;
        case 7:
            __handleMetaMsg(arg0, (u8 *)arg0 + 0x38);
            break;
        case 15:
            if (F_S32(arg0, 0x2C) != 1) {
                F_S32(arg0, 0x2C) = 1;
                __postNextSeqEvent(arg0);
            }
            break;
        case 16:
            if (F_S32(arg0, 0x2C) == 2) {
                v = F_PTR(arg0, 0x64);
                if (v != NULL) {
                    w = (u8 *)v + 4;
                    do {
                        n_alSynStopVoice(w);
                        n_alSynFreeVoice(w);
                        if (F_U8(F_PTR(arg0, 0x64), 0x37) != 0) {
                            __seqpStopOsc(arg0, F_PTR(arg0, 0x64));
                        }
                        __unmapVoice(arg0, w);
                        v = F_PTR(arg0, 0x64);
                        w = (u8 *)v + 4;
                    } while (v != NULL);
                }
                F_S32(arg0, 0x1C) = 0;
                F_S32(arg0, 0x2C) = 0;
            }
            break;
        case 17:
            if (F_S32(arg0, 0x2C) == 1) {
                alEvtqFlushType(QUEUE(arg0), 0);
                alEvtqFlushType(QUEUE(arg0), 2);
                v = F_PTR(arg0, 0x64);
                if (v != NULL) {
                    do {
                        w = (u8 *)v + 4;
                        if (__voiceNeedsNoteKill(arg0, w, 0xC350) << 0x18) {
                            __n_seqpReleaseVoice(arg0);
                        }
                        v = *(void **)v;
                    } while (v != NULL);
                }
                F_S32(arg0, 0x2C) = 2;
                msg.type = 0x10;
                alEvtqPostEvent(QUEUE(arg0), &msg, 0x7FFFFFFF);
            }
            break;
        case 10:
            v = F_PTR(arg0, 0x64);
            F_U16(arg0, 0x32) = (u16)(u32)F_PTR(arg0, 0x3C);
            if (v != NULL) {
                w = v;
                do {
                    __repair_phase_vol = __vsVol(w, arg0);
                    n_alSynSetVol((u8 *)v + 4, __repair_phase_vol, func_80031B94(v, F_S32(arg0, 0x1C)));
                    v = *(void **)v;
                    w = v;
                } while (v != NULL);
            }
            break;
        case 11:
            F_PTR(arg0, 0x7C) = F_PTR(arg0, 0x3C);
            F_S32(arg0, 0x80) = F_S32(arg0, 0x40);
            F_S32(arg0, 0x84) = F_U8(arg0, 0x44);
            break;
        case 12:
            F_U8(F_S32(arg0, 0x60) + ((u8)(u32)F_PTR(arg0, 0x3C) * 0x10), 0x8) = F_U8(arg0, 0x3D);
            break;
        case 13:
            if (F_S32(arg0, 0x2C) == 1) {
                func_800346B0("EX", D_8004A4B4, 0x118);
            }
            F_PTR(arg0, 0x18) = F_PTR(arg0, 0x3C);
            __setUsptFromTempo(arg0, 500000.0f);
            v = F_PTR(arg0, 0x20);
            if (v != NULL) {
                __initFromBank(arg0, v);
            }
            break;
        case 14:
            if (F_S32(arg0, 0x2C) != 0) {
                func_800346B0("EX", D_8004A4B4, 0x121);
            }
            v = F_PTR(arg0, 0x3C);
            F_PTR(arg0, 0x20) = v;
            __initFromBank(arg0, v);
            break;
        case 1:
        case 3:
        case 4:
            func_800346B0("EX", D_8004A4B4, 0x12B);
            break;
        }
        __repair_phase_ret = alEvtqNextEvent(QUEUE(arg0), (u8 *)arg0 + 0x38);
        F_S32(arg0, 0x28) = __repair_phase_ret;
    } while (__repair_phase_ret == 0);
    F_S32(arg0, 0x1C) = F_S32(arg0, 0x1C) + __repair_phase_ret;
    return F_S32(arg0, 0x28);
}
