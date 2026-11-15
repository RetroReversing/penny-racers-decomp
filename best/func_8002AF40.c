s32 func_8002B454(void *);
s32 func_8002B534(void *, void *);
s32 __CSPHandleMetaMsg(void *, void *);
s32 func_8002BFDC(void *, s32);
s32 func_8002C010(void *);
s32 func_8002D0CC(void *, void *);
s32 alEvtqPostEvent(void *, s16 *, s32);
s32 func_8002D270(s32, s32);
s32 func_800301B0(s32 *);
s32 func_80030370(s32 *, f32);
s32 func_80030400(s32 *, s16, s32);
s32 func_80030630(s32 *);
s32 func_800316EC(void *, s32 *);
s32 func_80031750(void *, s32 *, s32);
s32 __voiceNeedsNoteKill(void *, s32 *, s32);
s16 __vsVol(s32 *, void *);
s32 func_80031B94(s32 *, s32);
s32 __initFromBank(void *, s32 *);
s32 __seqpStopOsc(void *, s32 *);
s32 func_800346B0(s32 *, s32 *, s32);

extern s32 D_8004A270;
extern s32 D_8004A274;

s32 func_8002AF40(void *arg0)
{
    struct {
        s16 type;
        s16 pad;
        s32 *p;
        s32 t;
        u8 idx;
        u8 pad2[3];
        f32 val;
    } ev;
    u8 *evq;
    s32 ret;
    s32 *p;
    s32 *q;
    s32 *s0;
    s32 t;
    s32 v;
    s32 iv;
    u8 *b;

    evq = (u8 *)arg0 + 0x48;
    do {
        switch (*(s16 *)((u8 *)arg0 + 0x38)) {
        case 0:
            func_8002B454(arg0);
            break;
        case 9:
            ev.type = 9;
            alEvtqPostEvent((u8 *)arg0 + 0x48, &ev.type, *(s32 *)((u8 *)arg0 + 0x5C));
            break;
        case 5:
            p = *(s32 **)((u8 *)arg0 + 0x3C);
            func_80030630(p);
            func_800301B0(p);
            q = *(s32 **)((u8 *)p + 0x10);
            if (*(u8 *)((u8 *)q + 0x37) != 0) {
                __seqpStopOsc(arg0, q);
            }
            func_800316EC(arg0, p);
            break;
        case 6:
            p = *(s32 **)((u8 *)arg0 + 0x3C);
            q = *(s32 **)((u8 *)p + 0x10);
            if (*(u8 *)((u8 *)q + 0x34) == 0) {
                *(u8 *)((u8 *)q + 0x34) = 1;
            }
            t = *(s32 *)((u8 *)arg0 + 0x40);
            *(s32 *)((u8 *)q + 0x24) = *(s32 *)((u8 *)arg0 + 0x1C) + t;
            *(u8 *)((u8 *)q + 0x30) = *(u8 *)((u8 *)arg0 + 0x44);
            func_80030400(p, (s16)__vsVol(q, arg0), t);
            break;
        case 22:
            q = *(s32 **)((u8 *)arg0 + 0x3C);
            t = *(s32 *)((u8 *)arg0 + 0x40);
            v = (*(s32 (**)(s32, f32 *))((u8 *)arg0 + 0x74))(t, &ev.val);
            *(u8 *)((u8 *)q + 0x36) = (u8)ev.val;
            func_80030400((s32 *)((u8 *)q + 4), (s16)__vsVol(q, arg0),
                          func_80031B94(q, *(s32 *)((u8 *)arg0 + 0x1C)));
            ev.type = 0x16;
            ev.p = q;
            ev.t = t;
            alEvtqPostEvent((u8 *)arg0 + 0x48, &ev.type, v);
            break;
        case 23:
            q = *(s32 **)((u8 *)arg0 + 0x3C);
            t = *(s32 *)((u8 *)arg0 + 0x40);
            ev.idx = *(u8 *)((u8 *)arg0 + 0x44);
            v = (*(s32 (**)(s32, f32 *))((u8 *)arg0 + 0x74))(t, &ev.val);
            *(f32 *)((u8 *)q + 0x2C) = ev.val;
            func_80030370((s32 *)((u8 *)q + 4),
                          *(f32 *)((u8 *)q + 0x28) * ev.val *
                              *(f32 *)((u8 *)arg0 + ev.idx * 0x10 +
                                       *(s32 *)((u8 *)arg0 + 0x60) + 0xC));
            ev.type = 0x17;
            ev.p = q;
            ev.t = t;
            alEvtqPostEvent((u8 *)arg0 + 0x48, &ev.type, v);
            break;
        case 2:
        case 21:
            func_8002B534(arg0, (u8 *)arg0 + 0x38);
            break;
        case 7:
            __CSPHandleMetaMsg(arg0, (u8 *)arg0 + 0x38);
            break;
        case 10:
            *(u16 *)((u8 *)arg0 + 0x32) = *(u16 *)((u8 *)arg0 + 0x3C);
            p = *(s32 **)((u8 *)arg0 + 0x64);
            if (p != 0) {
                do {
                    func_80030400((s32 *)((u8 *)p + 4), (s16)__vsVol(p, arg0),
                                  func_80031B94(p, *(s32 *)((u8 *)arg0 + 0x1C)));
                    p = *(s32 **)p;
                } while (p != 0);
            }
            break;
        case 15:
            if (*(s32 *)((u8 *)arg0 + 0x2C) != 1) {
                *(s32 *)((u8 *)arg0 + 0x2C) = 1;
                func_8002C010(arg0);
            }
            break;
        case 16:
            if (*(s32 *)((u8 *)arg0 + 0x2C) == 2) {
                p = *(s32 **)((u8 *)arg0 + 0x64);
                if (p != 0) {
                    do {
                        s0 = (s32 *)((u8 *)p + 4);
                        func_80030630(s0);
                        func_800301B0(s0);
                        if (*(u8 *)((u8 *)p + 0x37) != 0) {
                            __seqpStopOsc(arg0, p);
                        }
                        func_800316EC(arg0, s0);
                        p = *(s32 **)((u8 *)arg0 + 0x64);
                    } while (p != 0);
                }
                *(s32 *)((u8 *)arg0 + 0x2C) = 0;
            }
            break;
        case 17:
            if (*(s32 *)((u8 *)arg0 + 0x2C) == 1) {
                func_8002D270((s32)evq, 0);
                func_8002D270((s32)evq, 0x15);
                func_8002D270((s32)evq, 2);
                p = *(s32 **)((u8 *)arg0 + 0x64);
                if (p != 0) {
                    do {
                        s0 = (s32 *)((u8 *)p + 4);
                        if (__voiceNeedsNoteKill(arg0, s0, 0xC350) << 0x18) {
                            func_80031750(arg0, s0, 0xC350);
                        }
                        p = *(s32 **)p;
                    } while (p != 0);
                }
                *(s32 *)((u8 *)arg0 + 0x2C) = 2;
                ev.type = 0x10;
                alEvtqPostEvent((u8 *)arg0 + 0x48, &ev.type, 0x7FFFFFFF);
            }
            break;
        case 12:
            b = (u8 *)(*(s32 *)((u8 *)arg0 + 0x60) +
                       *(u8 *)((u8 *)arg0 + 0x3C) * 0x10);
            b[8] = *(u8 *)((u8 *)arg0 + 0x3D);
            break;
        case 13:
            if (*(s32 *)((u8 *)arg0 + 0x2C) == 1) {
                func_800346B0(&D_8004A270, &D_8004A274, 0x111);
            }
            *(s32 **)((u8 *)arg0 + 0x18) = *(s32 **)((u8 *)arg0 + 0x3C);
            func_8002BFDC(arg0, 0x48F42400);
            p = *(s32 **)((u8 *)arg0 + 0x20);
            if (p != 0) {
                __initFromBank(arg0, p);
            }
            break;
        case 14:
            if (*(s32 *)((u8 *)arg0 + 0x2C) != 0) {
                func_800346B0(&D_8004A270, &D_8004A274, 0x11B);
            }
            p = *(s32 **)((u8 *)arg0 + 0x3C);
            *(s32 **)((u8 *)arg0 + 0x20) = p;
            __initFromBank(arg0, p);
            break;
        case 1:
        case 3:
        case 4:
            func_800346B0(&D_8004A270, &D_8004A274, 0x128);
            break;
        default:
            break;
        }
        ret = func_8002D0CC((u8 *)arg0 + 0x48, (u8 *)arg0 + 0x38);
        *(s32 *)((u8 *)arg0 + 0x28) = ret;
    } while (ret == 0);
    *(s32 *)((u8 *)arg0 + 0x1C) = *(s32 *)((u8 *)arg0 + 0x1C) + ret;
    return *(s32 *)((u8 *)arg0 + 0x28);
}
