typedef union SeqVal {
    void *ptr;
    u32 w;
    u16 h;
    u8 b[4];
} SeqVal;

typedef struct SeqOsc {
    u8 pad00[0x24];
    s32 unk24;
    u8 pad28[0x8];
    u8 unk30;
    u8 pad31[0x3];
    u8 unk34;
    u8 pad35[0x2];
    u8 unk37;
} SeqOsc;

typedef struct SeqVoice {
    u8 pad00[0x10];
    SeqOsc *osc;
    u8 pad14[0x14];
    f32 unk28;
    f32 unk2C;
    u8 pad30[0x6];
    s8 unk36;
} SeqVoice;

typedef struct SeqEvent {
    s16 type;
    u8 pad02[0x2];
    void *unk4;
    s32 unk8;
    u8 unkC;
    u8 pad0D[0x3];
} SeqEvent;

typedef struct SeqPlayer {
    u8 pad00[0x18];
    void *unk18;
    s32 unk1C;
    void *unk20;
    u8 pad24[0x4];
    s32 unk28;
    s32 unk2C;
    u8 pad30[0x2];
    u16 unk32;
    u8 pad34[0x4];
    s16 unk38;
    u8 pad3A[0x2];
    SeqVal unk3C;
    s32 unk40;
    SeqVal unk44;
    u8 evtq[0x14];
    s32 unk5C;
    u8 *unk60;
    u8 *unk64;
    u8 pad68[0x14];
    void *unk7C;
    s32 unk80;
    s32 unk84;
} SeqPlayer;

typedef union F32Bits {
    f32 f;
    s32 i;
} F32Bits;

void func_80030D4C(void *);
void func_80030E28(void *, void *);
void func_80031680(void *, void *);
void func_800316EC(void *, void *);
void func_8003191C(void *, u32);
void func_80031EC8(void *);
s32 func_80031B94(void *, s32);
void func_800346B0(void *, void *, s32);
void func_8002D270(void *, s32);
s32 func_8002D0CC(void *, s16 *);
void __initFromBank(void *, void *);
void __seqpStopOsc(void *, void *);
void __n_seqpReleaseVoice(void *, void *, s32);
s32 __voiceNeedsNoteKill(void *, void *, s32);
s32 __vsVol(void *, void *);
void alEvtqPostEvent(void *, SeqEvent *, s32);
void n_alSynStopVoice(void *);
void n_alSynFreeVoice(void *);
void n_alSynSetVol(void *, s16, s32);
void n_alSynSetPitch(void *, s32);

s32 func_8003082C(SeqPlayer *arg0) {
    SeqPlayer *p = arg0;
    SeqEvent ev;
    f32 val;
    F32Bits pb;
    s32 len;
    SeqVoice *v;
    SeqVoice *v5;
    SeqVoice *v6;
    SeqOsc *o;
    u8 *node;
    s32 s3;
    s32 s4;
    u8 b44;

    do {
        switch (p->unk38) {
        case 0:
            func_80030D4C(p);
            break;
        case 9:
            ev.type = 9;
            alEvtqPostEvent(p->evtq, &ev, p->unk5C);
            break;
        case 5:
            v5 = (SeqVoice *)p->unk3C.ptr;
            n_alSynStopVoice(v5);
            n_alSynFreeVoice(v5);
            o = v5->osc;
            if (o->unk37 != 0) {
                __seqpStopOsc(p, o);
            }
            func_800316EC(p, v5);
            break;
        case 6:
            v6 = (SeqVoice *)p->unk3C.ptr;
            o = v6->osc;
            if (o->unk34 == 0) {
                o->unk34 = 1;
            }
            s3 = p->unk40;
            o->unk30 = p->unk44.b[0];
            o->unk24 = p->unk1C + s3;
            n_alSynSetVol(v6, __vsVol(o, p), s3);
            break;
        case 22:
            v = (SeqVoice *)p->unk3C.ptr;
            s4 = p->unk40;
            s3 = ((s32 (*)(s32, f32 *))((void **)p)[0x1D])(s4, &val);
            v->unk36 = (u32)val;
            n_alSynSetVol((u8 *)v + 4, (s16)__vsVol(v, p), func_80031B94(v, p->unk1C));
            ev.type = 0x16;
            ev.unk4 = v;
            ev.unk8 = s4;
            alEvtqPostEvent(p->evtq, &ev, s3);
            break;
        case 23:
            v = (SeqVoice *)p->unk3C.ptr;
            s4 = p->unk40;
            b44 = p->unk44.b[0];
            s3 = ((s32 (*)(s32, f32 *))((void **)p)[0x1D])(s4, &val);
            v->unk2C = val;
            pb.f = v->unk28 * val * *(f32 *)((b44 << 4) + (s32)p->unk60 + 0xC);
            n_alSynSetPitch((u8 *)v + 4, pb.i);
            ev.type = 0x17;
            ev.unk4 = v;
            ev.unk8 = s4;
            ev.unkC = b44;
            alEvtqPostEvent(p->evtq, &ev, s3);
            break;
        case 2:
            func_80030E28(p, &p->unk38);
            break;
        case 7:
            func_80031680(p, &p->unk38);
            break;
        case 15:
            if (p->unk2C != 1) {
                p->unk2C = 1;
                func_80031EC8(p);
            }
            break;
        case 16:
            if (p->unk2C == 2) {
                node = p->unk64;
                while (node != NULL) {
                    n_alSynStopVoice(node + 4);
                    n_alSynFreeVoice(node + 4);
                    if (node[0x37] != 0) {
                        __seqpStopOsc(p, node);
                    }
                    func_800316EC(p, node + 4);
                    node = p->unk64;
                }
                p->unk1C = 0;
                p->unk2C = 0;
            }
            break;
        case 17:
            if (p->unk2C == 1) {
                func_8002D270(p->evtq, 0);
                func_8002D270(p->evtq, 2);
                node = p->unk64;
                while (node != NULL) {
                    if ((__voiceNeedsNoteKill(p, node + 4, 0xC350) << 24) != 0) {
                        __n_seqpReleaseVoice(p, node + 4, 0xC350);
                    }
                    node = *(u8 **)node;
                }
                p->unk2C = 2;
                ev.type = 0x10;
                alEvtqPostEvent(p->evtq, &ev, 0x7FFFFFFF);
            }
            break;
        case 10:
            node = p->unk64;
            p->unk32 = p->unk3C.h;
            if (node != NULL) {
                do {
                    n_alSynSetVol(node + 4, (s16)__vsVol(node, p), func_80031B94(node, p->unk1C));
                    node = *(u8 **)node;
                } while (node != NULL);
            }
            break;
        case 11:
            p->unk7C = p->unk3C.ptr;
            p->unk80 = p->unk40;
            p->unk84 = p->unk44.w;
            break;
        case 12:
            p->unk60[p->unk3C.b[0] * 0x10 + 8] = p->unk3C.b[1];
            break;
        case 13:
            if (p->unk2C == 1) {
                func_800346B0("EX", "n_seqplayer.c", 0x118);
            }
            p->unk18 = p->unk3C.ptr;
            func_8003191C(p, 0x48F42400);
            if (p->unk20 != NULL) {
                __initFromBank(p, p->unk20);
            }
            break;
        case 14:
            if (p->unk2C != 0) {
                func_800346B0("EX", "n_seqplayer.c", 0x121);
            }
            p->unk20 = p->unk3C.ptr;
            __initFromBank(p, p->unk20);
            break;
        case 1:
        case 3:
        case 4:
            func_800346B0("EX", "n_seqplayer.c", 0x12B);
            break;
        case 18:
        case 19:
        case 20:
        case 21:
            break;
        }
        len = func_8002D0CC(p->evtq, &p->unk38);
        p->unk28 = len;
    } while (len == 0);
    p->unk1C += len;
    return p->unk28;
}
