typedef struct { u32 w0; u32 w1; } Gwords;
typedef union { Gwords words; long long force; } Gfx;
#define _S(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))
#define gDma(pkt, w0v, w1v) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (w0v); _g->words.w1 = (u32)(w1v); }
#define gDPSetTextureImage(pkt, f, s, w, i) gDma(pkt, _S(0xfd, 24, 8) | _S(f, 21, 3) | _S(s, 19, 2) | _S((w) - 1, 0, 12), i)
#define gDPNoParam(pkt, cmd) gDma(pkt, _S(cmd, 24, 8), 0)
#define gDPTileSync(pkt) gDPNoParam(pkt, 0xe8)
#define gDPLoadSync(pkt) gDPNoParam(pkt, 0xe6)
#define gDPPipeSync(pkt) gDPNoParam(pkt, 0xe7)
#define gDPSetTile(pkt, fmt, siz, line, tmem, tile, palette, cmt, maskt, shiftt, cms, masks, shifts) \
    gDma(pkt, _S(0xf5, 24, 8) | _S(fmt, 21, 3) | _S(siz, 19, 2) | _S(line, 9, 9) | _S(tmem, 0, 9), \
         _S(tile, 24, 3) | _S(palette, 20, 4) | _S(cmt, 18, 2) | _S(maskt, 14, 4) | _S(shiftt, 10, 4) | _S(cms, 8, 2) | _S(masks, 4, 4) | _S(shifts, 0, 4))
#define gDPLoadTLUTCmd(pkt, tile, count) gDma(pkt, _S(0xf0, 24, 8), _S(tile, 24, 3) | _S(count, 14, 10))
#define gDPLoadTileGeneric(pkt, c, tile, uls, ult, lrs, lrt) \
    gDma(pkt, _S(c, 24, 8) | _S(uls, 12, 12) | _S(ult, 0, 12), _S(tile, 24, 3) | _S(lrs, 12, 12) | _S(lrt, 0, 12))
#define gDPLoadTile(pkt, tile, uls, ult, lrs, lrt) gDPLoadTileGeneric(pkt, 0xf4, tile, uls, ult, lrs, lrt)
#define gDPSetTileSize(pkt, tile, uls, ult, lrs, lrt) gDPLoadTileGeneric(pkt, 0xf2, tile, uls, ult, lrs, lrt)
#define gDPLoadTLUT_pal16(pkt, pal, dram) { \
    gDPSetTextureImage(pkt, 0, 2, 1, dram); \
    gDPTileSync(pkt); \
    gDPSetTile(pkt, 0, 0, 0, (256 + (((pal) & 0xf) * 16)), 7, 0, 0, 0, 0, 0, 0, 0); \
    gDPLoadSync(pkt); \
    gDPLoadTLUTCmd(pkt, 7, 15); \
    gDPPipeSync(pkt); }
#define gDPLoadTLUT_pal256(pkt, dram) { \
    gDPSetTextureImage(pkt, 0, 2, 1, dram); \
    gDPTileSync(pkt); \
    gDPSetTile(pkt, 0, 0, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0); \
    gDPLoadSync(pkt); \
    gDPLoadTLUTCmd(pkt, 7, 255); \
    gDPPipeSync(pkt); }
#define gDPLoadTextureTile_4b(pkt, timg, fmt, width, height, uls, ult, lrs, lrt, pal, cms, cmt, masks, maskt, shifts, shiftt) { \
    gDPSetTextureImage(pkt, fmt, 1, ((width) >> 1), timg); \
    gDPSetTile(pkt, fmt, 1, (((((lrs) - (uls) + 1) >> 1) + 7) >> 3), 0, 7, 0, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPLoadSync(pkt); \
    gDPLoadTile(pkt, 7, (uls) << 1, (ult) << 2, (lrs) << 1, (lrt) << 2); \
    gDPPipeSync(pkt); \
    gDPSetTile(pkt, fmt, 0, (((((lrs) - (uls) + 1) >> 1) + 7) >> 3), 0, 0, pal, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPSetTileSize(pkt, 0, (uls) << 2, (ult) << 2, (lrs) << 2, (lrt) << 2); }
#define gDPLoadTextureTile_8b(pkt, timg, fmt, width, height, uls, ult, lrs, lrt, pal, cms, cmt, masks, maskt, shifts, shiftt) { \
    gDPSetTextureImage(pkt, fmt, 1, width, timg); \
    gDPSetTile(pkt, fmt, 1, ((((lrs) - (uls) + 1) + 7) >> 3), 0, 7, 0, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPLoadSync(pkt); \
    gDPLoadTile(pkt, 7, (uls) << 2, (ult) << 2, (lrs) << 2, (lrt) << 2); \
    gDPPipeSync(pkt); \
    gDPSetTile(pkt, fmt, 1, ((((lrs) - (uls) + 1) + 7) >> 3), 0, 0, pal, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPSetTileSize(pkt, 0, (uls) << 2, (ult) << 2, (lrs) << 2, (lrt) << 2); }
#define gImmp1(pkt, c, w1v) gDma(pkt, _S(c, 24, 8), w1v)
#define gSPTextureRectangle(pkt, xl, yl, xh, yh, tile, s, t, dsdx, dtdy) { \
    gDma(pkt, _S(0xe4, 24, 8) | _S(xh, 12, 12) | _S(yh, 0, 12), _S(tile, 24, 3) | _S(xl, 12, 12) | _S(yl, 0, 12)); \
    gImmp1(pkt, 0xb4, _S(s, 16, 16) | _S(t, 0, 16)); \
    gImmp1(pkt, 0xb3, _S(dsdx, 16, 16) | _S(dtdy, 0, 16)); }

typedef struct { s32 m[16]; } Mtx;
#define K0(x) ((u32)(x) - 0x80000000)
#define gSPMatrix(pkt, m, p) gDma(pkt, _S(0x01, 24, 8) | _S(p, 16, 8) | _S(64, 0, 16), m)
#define gSPDisplayList(pkt, dl) gDma(pkt, _S(0x06, 24, 8), dl)
#define gDPPipeSyncP(pkt) gDPPipeSync(pkt)
typedef struct { u8 pad0[0x3E]; u16 model; u16 state; u8 pad42[0x22]; } Ob9;
extern Ob9 D_8011F2F0[];
extern u8 D_80190CB4, D_80190CA8, D_80190CAA, D_80190CAE, D_80190CB2, menuSelectRow;
extern u8 D_8021F080[];
extern u8 D_8021B690[];
extern u8 D_801E6B68[], D_801E7470[], D_801D4390[], D_801CF4C8[];
extern u8 *D_802036BC;
void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, s32);
void gfxSetPrimColor(Gfx **, s32, s32, s32, s32);
void gfxDrawSprite(Gfx **, s32, s32, s32, s32);
void drawPanelFrame(Gfx **, s32, s32, s32, s32, u8 *, u8 *);
void gfxDrawText(Gfx **, s32, s32, s32, u8 *, u8 *, s32, u8 *, s32, s32, s32, s32);
#define D(x, y, id) gfxDrawSprite(gfxp, x, y, 0xA, id)

void func_80216D80(Gfx **gfxp, u16 id) {
    Ob9 *obj;
    s32 i;
    s32 k;
    s16 y;
    u8 r;
    u8 g;
    u8 b;

    obj = &D_8011F2F0[id];
    gfxSetup2DState(gfxp);
    if (obj->state & 1) {
        gfxSetPrimAlpha(gfxp, 0xC0);
        D(0x36, 0x39, 0x17);
        D(0x36, 0x8B, 0x18);
        D(0xD8, 0x39, 0x19);
        D(0xD8, 0x8B, 0x1A);
        gfxSetPrimAlpha(gfxp, 0xFF);
        D(0x4B, 0x42, 0xC);
        r = D_80190CB4;
        g = 0x7F;
        b = 0x7F;
        switch (D_80190CA8) {
        case 1:
            g = D_80190CB4;
            r = 0x7F;
            break;
        case 2:
            b = D_80190CB4;
            r = 0x7F;
            break;
        }
        gfxSetPrimColor(gfxp, r, r, r, 0xFF);
        D(0x4B, 0x54, 9);
        gfxSetPrimColor(gfxp, g, g, g, 0xFF);
        D(0x4B, 0x66, 0xA);
        gfxSetPrimColor(gfxp, b, b, b, 0xFF);
        D(0x4B, 0x78, 0xB);
        gfxSetPrimAlpha(gfxp, 0xFF);
    }
    if (obj->state & 2) {
        gfxSetPrimAlpha(gfxp, 0xC0);
        D(0x90, 0x54, 0x1B);
        D(0x90, 0xC1, 0x1C);
        D(0x10B, 0x54, 0x1D);
        D(0x10B, 0xC1, 0x1E);
        gfxSetPrimColor(gfxp, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        D(0x7D, 0x54, 0x2B);
        gfxSetPrimAlpha(gfxp, 0xFF);
        for (i = 0; i < 5; i++) {
            k = D_8021F080[D_80190CAA + i];
            if (k != 0xFF) {
                if (k < 8) {
                    D(0xAD, (s16)(i * 18 + 0x63), 7);
                } else {
                    k -= 8;
                    if (D_80190CB2 & D_8021B690[k]) {
                        D(0xDE, (s16)(i * 18 + 0x68), 0x2D);
                    }
                    D(0xAD, (s16)(i * 18 + 0x63), 8);
                }
                D(0xD3, (s16)(i * 18 + 0x63), k + 0x21);
            }
        }
        if (D_80190CAE & 0xF0) {
            D(0xCB, 0x54, 0x13);
        }
        if (D_80190CAE & 0xF) {
            D(0xCB, 0xBE, 0x14);
        }
        gfxSetPrimColor(gfxp, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        D(0x9D, menuSelectRow * 18 + 0x63, 0x2B);
        gfxSetPrimAlpha(gfxp, 0xFF);
    }
    if (obj->state & 4) {
        gfxSetPrimAlpha(gfxp, 0xC0);
        D(0x90, 0x68, 0x1B);
        D(0x90, 0xD5, 0x1C);
        D(0x10B, 0x68, 0x1D);
        D(0x10B, 0xD5, 0x1E);
        gfxSetPrimColor(gfxp, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        D(0x7D, 0x66, 0x2B);
        gfxSetPrimAlpha(gfxp, 0xFF);
        for (i = 0; i < 5; i++) {
            k = D_8021F080[D_80190CAA + i];
            if (k != 0xFF) {
                y = i * 18 + 0x75;
                D(0xAD, y, 8);
                D(0xD3, y, k + 0x21);
                if (D_80190CB2 & D_8021B690[k]) {
                    D(0xDE, (s16)(i * 18 + 0x7A), 0x2D);
                }
            }
        }
        gfxSetPrimColor(gfxp, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        D(0x9D, menuSelectRow * 18 + 0x75, 0x2B);
        gfxSetPrimAlpha(gfxp, 0xFF);
    }
    if (obj->model == 0x41) {
        drawPanelFrame(gfxp, 0x10, 0x4C, 0xA, 2, D_801E6B68, D_801E7470);
        gfxDrawText(gfxp, 0x28, 0x64, 0xA, D_801D4390, D_802036BC, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
    }
}
