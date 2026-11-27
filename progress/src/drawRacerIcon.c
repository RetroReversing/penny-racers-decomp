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
typedef struct { u8 kind; u8 pad1[0xB]; u8 alpha; u8 padD[0xB]; f32 x; f32 y; f32 z; u8 pad24[0x40]; } Ob18;
typedef struct { u8 pad[0x2108]; s16 views; } Big;
extern Ob18 D_8011F2F0[];
extern Big sRowBoard;
extern u8 viewIndex;
extern u8 D_80220ED8[], D_80174560[], D_80174A40[], D_80174058[], D_80174538[], D_8016D8F8[], D_8016E8C0[];
extern u16 D_80167F58[], D_80167F60[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, s32);
void gfxDrawClippedTex4b(Gfx **, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);
void gfxDrawClippedTex8b(Gfx **, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);

/* Draws the racer icon for one object slot: offsets it by the view layout, then draws the
   sheet for its kind (or the larger 8-bit icon when z is 0xFF). */
void drawRacerIcon(Gfx **gfxp, u16 objIndex) {
    s32 offsetX;
    s32 offsetY;

    if (viewIndex == sRowBoard.views - 1) {
        gDma((*gfxp)++, 0x06000000, D_80220ED8);
        gfxSetup2DState(gfxp);
        gfxSetPrimAlpha(gfxp, D_8011F2F0[objIndex].alpha);
        if (sRowBoard.views == 1) {
            offsetX = 0x70;
            offsetY = 0x63;
        } else if (sRowBoard.views == 2) {
            offsetX = 0x70;
            offsetY = D_8011F2F0[objIndex].kind * 108 + 0x32;
        } else {
            offsetX = D_80167F58[D_8011F2F0[objIndex].kind];
            offsetY = D_80167F60[D_8011F2F0[objIndex].kind];
        }
        switch ((u16)(u32)D_8011F2F0[objIndex].z) {
        case 0:
            gfxDrawClippedTex4b(gfxp, D_8011F2F0[objIndex].x + offsetX + 8.0f, D_8011F2F0[objIndex].y + offsetY + 5.0f, 0, 0, 0x50, 0x1F, 0x50, 0x1F, 0x50, 0x1F, 0, 0, 319, 239, D_80174560, D_80174A40);
            break;
        case 1:
            gfxDrawClippedTex4b(gfxp, D_8011F2F0[objIndex].x + offsetX + 8.0f, D_8011F2F0[objIndex].y + offsetY + 5.0f, 0, 0, 0x50, 0x1F, 0x50, 0x1F, 0x50, 0x1F, 0, 0, 319, 239, D_80174058, D_80174538);
            break;
        case 0xFF:
            gfxDrawClippedTex8b(gfxp, D_8011F2F0[objIndex].x + offsetX, D_8011F2F0[objIndex].y + offsetY, 0, 0, 0x60, 0x2A, 0x60, 0x2A, 0x60, 0x15, 0, 0, 319, 239, D_8016D8F8, D_8016E8C0);
            break;
        }
    }
}
