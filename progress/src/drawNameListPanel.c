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
typedef struct { u8 pad0[0xC]; u8 count; u8 padD[0x31]; u16 model; u8 pad40[0x24]; } Ob16;
typedef struct { u8 pad[0x2108]; s16 views; } Big;
typedef struct { u16 sel; u8 pad2[0x6C]; u16 name[14][9]; u8 pad[14]; } Car;
extern Ob16 D_8011F2F0[];
extern Big sRowBoard;
extern u8 viewIndex, D_8018A248, D_80189DC0, D_8018BC32;
extern u8 noticeBackgroundDl[], D_80173170[], D_80173970[], D_80173998[], D_80173C40[], D_801CF4C8[], D_801D4390[];
extern u8 D_8018D661[], D_8018993F[];
extern u16 D_80237630[];
extern Car sCarSlots[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, s32);
void gfxDrawClippedTex4b(Gfx **, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);
void drawSpriteCell(Gfx **, u16, u16, u16, u8 *, u8 *, s32, s32, s32, s32, s32);
void gfxDrawText(Gfx **, s32, u16, s32, u8 *, u16 *, s32, u8 *, s32, s32, s32, s32);

void drawNameListPanel(Gfx **gfxp, u16 entryId) {
    s32 row;

    /* Draws the background and per-row car names for the list shown in the final view, when the entry has a model. */
    if (viewIndex == sRowBoard.views - 1 && D_8011F2F0[entryId].model != 0) {
        gDma((*gfxp)++, 0x06000000, noticeBackgroundDl);
        gfxSetup2DState(gfxp);
        gfxSetPrimAlpha(gfxp, D_8018A248);
        gfxDrawClippedTex4b(gfxp, 0x2C, D_80189DC0 + 0x12, 0, 0, 80, 51, 80, 51, 80, 51, 0, 0, 319, 239, D_80173170, D_80173970);
        for (row = 1; row < D_8011F2F0[entryId].count; row++) {
            gfxSetPrimAlpha(gfxp, D_8018BC32);
            gfxDrawClippedTex4b(gfxp, D_8018D661[row] + 0x28, (s16)(row * 24 + 0x3B), 0, 0, 96, 14, 96, 14, 96, 14, 0, 0, 0xA0, 239, D_80173998, D_80173C40);
            if (D_8018D661[row] == 0) {
                drawSpriteCell(gfxp, 0x1E, row * 24 + 0x34, row + 0x10, D_801CF4C8, D_801D4390, 0, 0xA, 0xE, 0xA0, 0xFC);
            }
            gfxSetPrimAlpha(gfxp, D_8018993F[row]);
            gfxDrawText(gfxp, 0x37, (row * 2 + row) * 8 + 0x37, 0xA, D_801D4390, sCarSlots[D_80237630[row]].name[sCarSlots[D_80237630[row]].sel], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        }
    }
}
