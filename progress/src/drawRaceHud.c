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

typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { u8 pad0[2]; u16 slot; u8 pad4[0x875]; u8 kind; u8 pad87A[0x76]; } Car;
typedef struct { u8 pad0[0x20]; u16 course; } Setup;
extern SlotF racerTimers[];
extern SlotF D_8011F33C[];
extern SlotF D_8011F308[];
extern SlotF sPrimColorB[];
extern Car sCars[];
extern Setup D_8006FAF0;
extern Gfx noticeBackgroundDl[];
extern u8 viewIndex;
extern u16 D_802002F0;
extern u16 D_802002F2;
extern u16 D_802002EC;
extern u16 D_802002EE;
extern u16 D_80232840[];
extern u16 D_80233EC0;
extern u8 *D_802002D0[];
extern u8 D_802002DC[];
extern u8 D_80203554[];
extern u8 D_80203558[];
extern u8 fontPalette[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, u16);
void drawText(Gfx **, u16, u16, s32, u8 *, u8 *);
void func_801CBDE8(Gfx **, u16, u16, s32, u8 *, s32, u16);
#define gSPDisplayList(pkt, dl) gDma(pkt, _S(0x06, 24, 8), dl)
#define PULSE(v, dir, step, top) \
    if (dir != 0) { if (v < top) { v += step; } else { dir ^= 1; } } else { if (v > step) { v -= step; } else { dir ^= 1; } }

/* Draws the race HUD: the course map frame, a dot for each track marker and car, and the pulsing highlights, appending the commands to the display list. */ void drawRaceHud(Gfx **gfxp) {
    s32 i;

    gfxSetup2DState(gfxp);
    gSPDisplayList((*gfxp)++, noticeBackgroundDl);
    if (viewIndex == 0) {
        PULSE(D_802002F0, D_802002F2, 0x20, 0xDF)
        PULSE(D_802002EC, D_802002EE, 4, 0xFB)
    }
    gfxSetPrimAlpha(gfxp, 0x64);
    for (i = 0; i < D_80232840[D_8006FAF0.course]; i++) {
        drawText(gfxp, (u32)(racerTimers[D_80233EC0 + i].v / 30.0f + 160.0f), (u32)(D_8011F33C[D_80233EC0 + i].v / 30.0f + 120.0f), 8, D_802002DC, D_80203554);
    }
    gfxSetPrimAlpha(gfxp, D_802002F0);
    for (i = 0; i < 6; i++) {
        func_801CBDE8(gfxp, (u32)(D_8011F308[sCars[i].slot].v / 30.0f + 160.0f), (u32)(sPrimColorB[sCars[i].slot].v / 30.0f + 120.0f), 8, D_802002D0[sCars[i].kind], 1, i + 1);
    }
    gfxSetPrimAlpha(gfxp, D_802002EC);
    drawText(gfxp, 0x18, 0x10, 8, fontPalette, D_80203558);
}
