typedef struct { u32 w0; u32 w1; } Gfx_;
typedef struct { u8 pad0[0x1C]; f32 f1C; u8 pad20[0x20]; u16 f40; u8 pad42[0x22]; } Rec;
extern Gfx_ *D_800DE0E4;
extern Rec D_8011F2F0[];
extern u8 D_8021F260[];
extern u16 D_80189CC6;
extern u8 D_80189C9A;
extern u8 D_80189C9B;
extern u8 D_80189CB6;
extern u8 D_80189CB7;
extern u8 D_80189CBE[];
extern u8 D_80189CC9[];
extern u8 D_8018A277[];
extern u8 D_8018BC35[];
extern u16 D_8018D140[];
extern u16 D_8018D26C[];
extern u16 D_80187BF0[];
extern u8 D_801CF4C8[];
extern u8 D_801D4390[];
void gfxSetup2DState(Gfx_ **);
void gfxSetPrimAlpha(Gfx_ **, s32);
void gfxSetPrimColor(Gfx_ **, s32, s32, s32, u8);
void gfxDrawText(Gfx_ **, s32, u16, u16, u8 *, u16 *, u8, u8 *, s32, s32, s32, s32);
void gfxDrawSprite(Gfx_ **, s16, s16, s32, s32);
void func_8014A2D0(Gfx_ **, u16, u16, u8, u8, u8);
u8 func_801497AC(u8);
u8 func_8014BA14(u16);
void func_8014A9F4(u16, s32);

void func_80145A6C(Gfx_ **gfxp, u16 id) {
    Rec *rec = &D_8011F2F0[id];
    s32 i;
    s32 j;
    s32 n;
    u32 v;
    s32 c;

    gfxSetup2DState(gfxp);
    {
        Gfx_ *_g = D_800DE0E4++;

        _g->w0 = 0xED000000;
        _g->w1 = 0x5003C0;
    }
    if (D_80189CC6 & 0x100) {
        gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
    } else {
        gfxSetPrimColor(gfxp, 0, 0, 0, 0xFF);
    }
    for (n = 0; n < 5; n++) {
        v = 0x2000;
        if (n & 1) {
            v = 0x20;
        }
        for (i = 0; i < 5; i++) {
            gfxDrawSprite(gfxp, n * 32, i * 64 + (v & 0xFF), 0xB, 7);
            gfxDrawSprite(gfxp, n * 32, i * 64 + (v >> 8), 0xB, 8);
            gfxDrawSprite(gfxp, n * 32 + 0xA0, i * 64 + (v & 0xFF), 0xB, 7);
            gfxDrawSprite(gfxp, n * 32 + 0xA0, i * 64 + (v >> 8), 0xB, 8);
        }
    }
    if (D_80189CC6 & 0x200) {
        for (i = 0; i < 3; i++) {
            n = func_801497AC(D_8018BC35[i]);
            if (n != 0xFF) {
                if (D_80189C9B == i && rec->f40 != 0x100) {
                    gfxSetPrimColor(gfxp, D_8021F260[0], D_8021F260[1], D_8021F260[2], D_8021F260[3]);
                } else {
                    gfxSetPrimColor(gfxp, 0x80, 0x80, 0x80, 0xFF);
                }
                gfxDrawSprite(gfxp, 0x64, i * 20 + 0xE, 7, n);
            }
        }
        gfxSetPrimColor(gfxp, 0, 0, 0, 0xFF);
        gfxDrawSprite(gfxp, 0x97, 0x10, 0xB, 0x38);
        gfxSetPrimAlpha(gfxp, 0xFF);
        gfxDrawSprite(gfxp, 0x97, 0x13, 7, 0);
        gfxDrawSprite(gfxp, 0x1F, 0x11, 7, 1);
        gfxDrawSprite(gfxp, 0x40, 0x11, 7, 2);
        gfxDrawSprite(gfxp, 0x1F, 0x25, 7, 1);
        gfxDrawSprite(gfxp, 0x40, 0x25, 7, 3);
        gfxDrawSprite(gfxp, 0x1F, 0x39, 7, 1);
        gfxDrawSprite(gfxp, 0x40, 0x39, 7, 4);
    }
    if ((rec->f40 == 0x20) | (rec->f40 == 0x30)) {
        gfxSetPrimColor(gfxp, 0, 0, 0, 0xFF);
        gfxDrawSprite(gfxp, 0x37, 0x6B, 0xB, 0x36);
        gfxSetPrimAlpha(gfxp, 0xFF);
        gfxDrawSprite(gfxp, 0x21, 0x5F, 7, 5);
        gfxDrawSprite(gfxp, 0x5A, 0x5F, 7, 6);
    }
    switch (rec->f40) {
    case 0x20:
        gfxSetPrimAlpha(gfxp, 0xFF);
        gfxDrawSprite(gfxp, 0xA6, 0x41, 7, 0xB);
        gfxDrawSprite(gfxp, 0xA6, 0xCE, 7, 0xC);
        gfxDrawSprite(gfxp, 0x120, 0x41, 7, 0xD);
        gfxDrawSprite(gfxp, 0x120, 0xCE, 7, 0xE);
        gfxSetPrimColor(gfxp, 0, 0, 0, 0x7F);
        gfxDrawSprite(gfxp, 0xB1, 0x60, 0xB, 0x39);
        gfxDrawSprite(gfxp, 0xB1, 0x85, 0xB, 0x39);
        gfxDrawSprite(gfxp, 0xB1, 0xAA, 0xB, 0x39);
        gfxSetPrimColor(gfxp, 0, 0, 0, 0xFF);
        gfxDrawSprite(gfxp, 0xAF, 0x5E, 0xB, 0x39);
        gfxDrawSprite(gfxp, 0xAF, 0x83, 0xB, 0x39);
        gfxDrawSprite(gfxp, 0xAF, 0xA8, 0xB, 0x39);
        gfxSetPrimAlpha(gfxp, 0xFF);
        gfxDrawSprite(gfxp, 0xBF, 0x36, 7, 0xA);
        gfxDrawSprite(gfxp, 0xF4, 0xC1, 7, 9);
        gfxSetPrimColor(gfxp, 0x70, 0xFF, 0x6F, 0xFF);
        gfxDrawSprite(gfxp, 0xC1, D_80189C9A * 37 + 0x60, 0xB, 0x3B);
        gfxSetPrimAlpha(gfxp, 0xFF);
        for (i = 0; i < 3; i++) {
            n = func_801497AC(D_8018A277[i]);
            {
                c = n ^ 0xFF; c = c != 0; c = -c; c = (u8) c; c |= 0x60;

                gfxSetPrimColor(gfxp, c, c, c, 0xFF);
            }
            gfxDrawSprite(gfxp, 0xF9, i * 37 + 0x56, 0xB, 0x2C);
        }
        for (i = 0; i < 3; i++) {
            n = func_801497AC(D_8018A277[i]);
            if (n != 0xFF) {
                {
                    c = D_8018A277[i]; c &= 0x10; c = c == 0; c = -c; c = (u8) c; c |= 0x7F;

                    gfxSetPrimColor(gfxp, c, c, c, 0xFF);
                }
                gfxDrawSprite(gfxp, 0xCD, i * 37 + 0x57, 7, n);
                n = 0xF3;
                if (D_80189CC9[i] < 10) {
                    n = 0xEB;
                }
                if (D_80189CC9[i] >= 100) {
                    n = 0xF9;
                }
                func_8014A2D0(gfxp, n, i * 37 + 0x5D, D_80189CC9[i], 3, 0);
            }
        }
        gfxSetPrimAlpha(gfxp, 0xFF);
        break;
    case 0x40:
    case 0x50:
        gfxSetPrimColor(gfxp, 0, 0, 0, 0x7F);
        gfxDrawSprite(gfxp, 0x23, 0x52, 0xB, 0x3A);
        gfxSetPrimColor(gfxp, 0, 0, 0, 0xFF);
        gfxDrawSprite(gfxp, 0x21, 0x50, 0xB, 0x3A);
        gfxSetPrimColor(gfxp, 0xC0, 8, 0x38, 0xFF);
        gfxDrawSprite(gfxp, 0x24, 0x85, 0xB, 0x3C);
        gfxSetPrimAlpha(gfxp, 0xFF);
        gfxDrawSprite(gfxp, 0x53, 0x4D, 0xB, 0x2A);
        gfxDrawSprite(gfxp, 0x53, 0xC2, 0xB, 0x2B);
        gfxDrawSprite(gfxp, 0x28, 0xD1, 7, 7);
        for (i = 0; i < 7; i++) {
           
            v = D_8018D26C[D_80189CBE[1] + i];
            v = (u16) v;
            c = v; c &= 0x1000; c = c == 0; c = -c; c = (u8) c; c |= 0x7F;

            gfxSetPrimColor(gfxp, c, c, c, 0xFF);
            func_8014A9F4(v, D_80189CBE[0]);
            gfxDrawText(gfxp, 0x31, i * 15 + 0x59, 0xA, D_801D4390, D_80187BF0, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        }
    case 0x30:
        gfxSetPrimColor(gfxp, 0, 0, 0, 0x7F);
        gfxDrawSprite(gfxp, 0xAE, 0x52, 0xB, 0x3A);
        gfxSetPrimColor(gfxp, 0, 0, 0, 0xFF);
        gfxDrawSprite(gfxp, 0xAC, 0x50, 0xB, 0x3A);
        gfxSetPrimColor(gfxp, 0xC0, 8, 0x38, 0xFF);
        gfxDrawSprite(gfxp, 0xAF, 0x85, 0xB, 0x3C);
        gfxSetPrimAlpha(gfxp, 0xFF);
        gfxDrawSprite(gfxp, 0xDE, 0x4D, 0xB, 0x2A);
        gfxDrawSprite(gfxp, 0xDE, 0xC2, 0xB, 0x2B);
        gfxDrawSprite(gfxp, 0xB4, 0xD1, 7, 8);
        for (i = 0; i < 7; i++) {
                        u8 r;

            u8 g;
            u8 b;

            v = D_8018D140[D_80189CB7 + i];
            r = 0xFF;
            g = 0xFF;
            b = 0xFF;
            if (v & 0x1000) {
                r = 0x80;
                g = 0x80;
                b = 0x80;
            }
            if (func_8014BA14(v) == 1) {
                r = D_8021F260[0];
                g = D_8021F260[1];
                b = D_8021F260[2];
            }
            gfxSetPrimColor(gfxp, r, g, b, 0xFF);
            func_8014A9F4(v, D_80189CB6);
            gfxDrawText(gfxp, 0xBC, i * 15 + 0x59, 0xA, D_801D4390, D_80187BF0, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        }
        gfxSetPrimColor(gfxp, D_8021F260[0], D_8021F260[1], D_8021F260[2], D_8021F260[3]);
        n = func_801497AC(D_8018A277[D_80189C9A]);
        gfxDrawSprite(gfxp, 0xEF, 0x40, 7, n);
        gfxSetPrimAlpha(gfxp, 0xFF);
        break;
    case 0x100:
        break;
    }
    if ((rec->f40 == 0x40) | (rec->f40 == 0x50)) {
        gfxDrawSprite(gfxp, 0xEB, rec->f1C, 0xB, 0x2D);
    }
    if (rec->f40 == 0x50) {
        gfxDrawSprite(gfxp, 0x19, rec->f1C, 0xB, 0x2D);
    }
}
