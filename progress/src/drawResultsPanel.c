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
typedef struct { u8 pad0[2]; u16 flags[4]; u8 padA[0x36]; u16 state; u8 pad42[0x22]; } Ob7;
extern Ob7 D_8011F2F0[];
extern s16 D_8021E1A2[];
extern u16 D_8021AFE6;
extern u8 D_802E66D8[];
extern u8 D_802F92E0[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimColor(Gfx **, s32, s32, s32, s32);
void gfxDrawClippedTex8b(Gfx **, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);
void gfxDrawSprite(Gfx **, s16, s16, s32, s32);

/* Draws the results panel background and its text rows, then advances the state when the panel is idle. */ void drawResultsPanel(Gfx **gfxp, u16 objIndex) {
    s32 i;

    for (i = 1; i < 4; i++) {
        D_8011F2F0[objIndex].flags[i] |= 0x20;
    }
    switch (D_8011F2F0[objIndex].state) {
    case 1:
        do { } while (0);
        gfxSetup2DState(gfxp);
        gfxSetPrimColor(gfxp, 0x78, 0x78, 0x78, 0xFF);
        gfxDrawClippedTex8b(gfxp, 0, 0, 0, 0, 320, 240, 320, 240, 64, 32, 0, 0, 319, 239, D_802E66D8, D_802F92E0);
        if (D_8021E1A2[0] != 0) {
            gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
            gfxDrawSprite(gfxp, 0xC4, 0x12, 0xB, 0x42);
            gfxDrawSprite(gfxp, 0xDC, 0x11, 0xB, D_8021E1A2[2] + 0x43);
            gfxDrawSprite(gfxp, 0x2B, 0xD, 5, 0);
            gfxSetPrimColor(gfxp, 0, 0, 0, 0xAA);
            switch (D_8021E1A2[0]) {
            case 3:
                gfxDrawSprite(gfxp, 0xA7, D_8021AFE6 + 0x90, 0xB, 0x32);
            case 2:
                gfxDrawSprite(gfxp, 0x1D, D_8021AFE6 + 0x90, 0xB, 0x32);
            case 1:
                gfxDrawSprite(gfxp, 0xA7, D_8021AFE6 + 0x33, 0xB, 0x32);
            case 0:
                gfxDrawSprite(gfxp, 0x1D, D_8021AFE6 + 0x33, 0xB, 0x32);
                break;
            }
        } else {
            gfxSetPrimColor(gfxp, 0, 0, 0, 0x64);
            gfxDrawSprite(gfxp, 0x32, 0x19, 0xB, 0x2E);
            gfxDrawSprite(gfxp, 0x102, 0x19, 0xB, 0x2E);
            gfxDrawSprite(gfxp, 0x32, 0xBE, 0xB, 0x2E);
            gfxDrawSprite(gfxp, 0x102, 0xBE, 0xB, 0x2E);
            gfxDrawSprite(gfxp, 0x42, 0x18, 0xB, 0x2F);
            gfxDrawSprite(gfxp, 0x42, 0xBF, 0xB, 0x2F);
            gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
            gfxDrawSprite(gfxp, 0x30, 0x17, 0xB, 1);
            gfxDrawSprite(gfxp, 0x100, 0x17, 0xB, 3);
            gfxDrawSprite(gfxp, 0x30, 0xBC, 0xB, 4);
            gfxDrawSprite(gfxp, 0x100, 0xBC, 0xB, 6);
            for (i = 0; i < 6; i++) {
                gfxDrawSprite(gfxp, i * 32 + 0x40, 0x16, 0xB, 2);
            }
            for (i = 0; i < 6; i++) {
                gfxDrawSprite(gfxp, i * 32 + 0x40, 0xBD, 0xB, 5);
            }
            gfxDrawSprite(gfxp, 0x4D, 0x10, 5, 0);
            gfxDrawSprite(gfxp, 0x99, 0x2E, 0xB, 0x42);
            gfxDrawSprite(gfxp, 0xB1, 0x2D, 0xB, D_8021E1A2[2] + 0x43);
        }
        break;
    case 0:
    default:
        D_8011F2F0[objIndex].state++;
        break;
    }
    gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
}
