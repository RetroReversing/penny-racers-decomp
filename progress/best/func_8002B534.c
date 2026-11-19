#define F(p,T,o) (*(T*)((u8*)(p)+(o)))
void *__lookupVoice(void *a, u8 b, u8 c);
void *__mapVoice(void *a, s32 b, s32 c, s32 d);
void __n_seqpReleaseVoice(void *a, void *b, s32 c);
void __setInstChanState(void *a, void *b, s32 c);
s32 __vsPan(void *a, void *b);
s16 __vsVol(void *a, void *b);
f32 alCents2Ratio(s16 a);
void alEvtqPostEvent(void *a, s16 *b, s32 c);
void func_8002FFD0(void *a, s16 *b);
void func_80030250(void *a, s32 b);
void func_80030540(void *a, s32 b, f32 c, s16 d, s32 e, s32 f, s32 g);
void *func_800319F4(void *a, s32 b, s32 c, s32 d);
s32 func_80031B94(void *a, s32 b);
void func_800346B0(char *a, char *b, s32 c);
void n_alSynSetPan(void *a, s32 b);
void n_alSynSetPitch(void *a, f32 b);
void n_alSynSetVol(void *a, s16 b, s32 c);
extern u8 D_8021F02A;

void func_8002B534(void *arg0, void *arg1) {
    s16 sp20;
    void *sp24;
    s32 sp28;
    u8 sp2C;
    s16 sp30;
    s16 sp32;
    s8 sp34;
    s32 sp38;
    f32 sp3C;
    void *sp44;
    u8 status = F(arg1, u8, 8);
    u8 key = F(arg1, u8, 9);
    u8 val = F(arg1, u8, 0xA);
    u8 ch = status & 0xF;
    s32 cmd = status & 0xF0;
    void *v;
    void *r;
    void *p;

    switch (cmd) {
    case 0x90:
        if (val != 0) {
            void *vo = func_800319F4(arg0, key, val, ch);
            if (F(arg0, s32, 0x2C) == 1 && vo != NULL) {
                void *reg = (u8 *)F(arg0, void *, 0x60) + ch * 0x10;
                sp32 = 0;
                sp34 = 0;
                sp30 = (s16)F(reg, u8, 8);
                v = __mapVoice(arg0, key, val, ch);
                if (v != NULL) {
                    sp44 = (u8 *)v + 4;
                    func_8002FFD0(sp44, &sp30);
                    F(v, void *, 0x20) = vo;
                    F(v, s8, 0x34) = 0;
                    if (F(reg, u8, 0xB) < 0x40) {
                        F(v, s8, 0x35) = 0;
                    } else {
                        F(v, s8, 0x35) = 2;
                    }
                    r = F(vo, void *, 4);
                    F(v, f32, 0x28) = alCents2Ratio((s16)((s8)F(r, u8, 5) + ((key - F(r, u8, 4)) * 0x64)));
                    F(v, u8, 0x30) = F(F(vo, void *, 0), u8, 0xC);
                    F(v, u8, 0x37) = 0;
                    F(v, s32, 0x24) = F(arg0, s32, 0x1C) + F(F(vo, void *, 0), s32, 0);
                    p = (u8 *)F(arg0, void *, 0x60) + ch * 0x10;
                    sp3C = 127.0f;
                    if (F(p, u8, 4) != 0 && F(arg0, void *, 0x70) != NULL) {
                        s32 t = ((s32 (*)(s32 *, f32 *, u8, u8, s32, s32))F(arg0, void *, 0x70))((s32 *)&sp38, &sp3C, F(p, u8, 4), F(p, u8, 5), F(p, u8, 6), F(p, u8, 7));
                        if (t != 0) {
                            sp20 = 0x16;
                            sp24 = v;
                            sp28 = sp38;
                            alEvtqPostEvent((u8 *)arg0 + 0x48, &sp20, t);
                            F(v, u8, 0x37) = F(v, u8, 0x37) | 1;
                        }
                    }
                    F(v, s8, 0x36) = (s8)sp3C;
                    sp3C = 1.0f;
                    if (F(p, u8, 8) != 0 && F(arg0, void *, 0x70) != NULL) {
                        s32 t = ((s32 (*)(s32 *, f32 *, u8, u8, s32, s32))F(arg0, void *, 0x70))((s32 *)&sp38, &sp3C, F(p, u8, 8), F(p, u8, 9), F(p, u8, 0xA), F(p, u8, 0xB));
                        if (t != 0) {
                            sp20 = 0x17;
                            sp24 = v;
                            sp2C = ch;
                            sp28 = sp38;
                            alEvtqPostEvent((u8 *)arg0 + 0x48, &sp20, t);
                            F(v, u8, 0x37) = F(v, u8, 0x37) | 2;
                        }
                    }
                    F(v, f32, 0x2C) = sp3C;
                    {
                        void *reg3 = (u8 *)F(arg0, void *, 0x60) + ch * 0x10;
                        u8 s7 = F(reg3, u8, 0xA);
                        f32 fs0 = F(v, f32, 0x28) * F(reg3, f32, 0xC) * sp3C;
                        s32 pan = __vsPan(v, arg0);
                        s32 base = F(F(vo, void *, 0), s32, 0);
                        s16 vol = __vsVol(v, arg0);
                        s32 vv;
                        if (D_8021F02A == 0) {
                            vv = pan & 0xFF;
                        } else {
                            vv = 0x40;
                        }
                        func_80030540(sp44, F(vo, s32, 8), fs0, vol, vv, (s32)s7, base);
                        sp20 = 6;
                        sp24 = sp44;
                        sp2C = F(F(vo, void *, 0), u8, 0xD);
                        sp28 = F(F(vo, void *, 0), s32, 4);
                        alEvtqPostEvent((u8 *)arg0 + 0x48, &sp20, base);
                    }
                    if (F(arg1, s32, 0xC) != 0) {
                        sp20 = 0x15;
                        sp28 = ch | 0x80;
                        sp2C = key;
                        alEvtqPostEvent((u8 *)arg0 + 0x48, &sp20, F(arg0, s32, 0x24) * F(arg1, s32, 0xC));
                        return;
                    }
                }
            }
            break;
        }
        /* fallthrough: velocity 0 is note-off */
    case 0x80:
        v = __lookupVoice(arg0, key, ch);
        if (v != NULL) {
            if (F(v, u8, 0x35) == 2) {
                F(v, u8, 0x35) = 4;
                return;
            }
            F(v, u8, 0x35) = 3;
            __n_seqpReleaseVoice(arg0, (u8 *)v + 4, F(F(v, void **, 0x20), s32, 8));
            return;
        }
        return;
    case 0xA0:
        v = __lookupVoice(arg0, key, ch);
        if (v != NULL) {
            F(v, u8, 0x33) = val;
            {
                s16 vol = __vsVol(v, arg0);
                n_alSynSetVol((u8 *)v + 4, vol, func_80031B94(v, F(arg0, s32, 0x1C)));
            }
            return;
        }
        break;
    case 0xD0:
        for (p = F(arg0, void *, 0x64); p != NULL; p = F(p, void *, 0)) {
            if (F(p, u8, 0x31) == ch) {
                F(p, u8, 0x33) = key;
                n_alSynSetVol((u8 *)p + 4, __vsVol(p, arg0), func_80031B94(p, F(arg0, s32, 0x1C)));
            }
        }
        break;
    case 0xB0:
        if (key == 0x10) {
            F((u8 *)F(arg0, void *, 0x60) + ch * 0x10, u8, 8) = val;
            return;
        }
        if (key < 0x11) {
            if (key == 7) {
                F((u8 *)F(arg0, void *, 0x60) + ch * 0x10, u8, 9) = val;
                for (p = F(arg0, void *, 0x64); p != NULL; p = F(p, void *, 0)) {
                    if (F(p, u8, 0x31) == ch && F(p, u8, 0x34) != 3) {
                        s16 vol = __vsVol(p, arg0);
                        n_alSynSetVol((u8 *)p + 4, vol, func_80031B94(p, F(arg0, s32, 0x1C)));
                    }
                }
            } else if (key == 0xA) {
                F((u8 *)F(arg0, void *, 0x60) + ch * 0x10, u8, 7) = val;
                for (p = F(arg0, void *, 0x64); p != NULL; p = F(p, void *, 0)) {
                    if (F(p, u8, 0x31) == ch) {
                        n_alSynSetPan((u8 *)p + 4, __vsPan(p, arg0) & 0xFF);
                    }
                }
            }
        } else if (key == 0x5B) {
            F((u8 *)F(arg0, void *, 0x60) + ch * 0x10, u8, 0xA) = val;
            for (p = F(arg0, void *, 0x64); p != NULL; p = F(p, void *, 0)) {
                if (F(p, u8, 0x31) == ch) {
                    func_80030250((u8 *)p + 4, val);
                }
            }
        } else if (key == 0x40) {
            F((u8 *)F(arg0, void *, 0x60) + ch * 0x10, u8, 0xB) = val;
            for (p = F(arg0, void *, 0x64); p != NULL; p = F(p, void *, 0)) {
                if (F(p, u8, 0x31) == ch) {
                    u8 st = F(p, u8, 0x35);
                    if (st != 3) {
                        if (val >= 0x40) {
                            if (st == 0) {
                                F(p, u8, 0x35) = 2;
                            }
                        } else if (st == 2) {
                            F(p, u8, 0x35) = 0;
                        } else if (st == 4) {
                            F(p, u8, 0x35) = 3;
                            __n_seqpReleaseVoice(arg0, (u8 *)p + 4, F(F(p, void **, 0x20), s32, 8));
                        }
                    }
                }
            }
        }
        break;
    case 0xC0:
        if (F(arg0, s16 *, 0x20) == NULL) {
            func_800346B0("EX", "n_csplayer.c", 0x295);
        }
        {
            s16 *tab = F(arg0, s16 *, 0x20);
            if (key < *tab) {
                __setInstChanState(arg0, (u8 *)tab + key * 4 + 0xC, ch);
                return;
            }
        }
        break;
    case 0xE0: {
        s32 bend = F((u8 *)arg0 + 0x60, void *, 0) ? 0 : 0;
        s32 t;
        bend = 0;
        t = ch & 0xFF;
        {
            s32 x = F((u8 *)F(arg0, void *, 0x60) + t * 0x10, s16, 4) * ((key + (val << 7)) - 0x2000);
            f32 ratio;
            if (x < 0) {
                x += 0x1FFF;
            }
            ratio = alCents2Ratio((s16)(x >> 0xD));
            F((u8 *)F(arg0, void *, 0x60) + t * 0x10, f32, 0xC) = ratio;
            for (p = F(arg0, void *, 0x64); p != NULL; p = F(p, void *, 0)) {
                if (F(p, u8, 0x31) == t) {
                    n_alSynSetPitch((u8 *)p + 4, F(p, f32, 0x28) * ratio * F(p, f32, 0x2C));
                }
            }
        }
        break;
    }
    }
}
