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
typedef struct { u8 a; u8 sel; u8 f2; u8 f3; u16 base; s16 x; s16 y; u8 pad[0xD6]; u32 flags; } Sel;
extern Gfx *D_800DE0E4;
extern s8 menuInputLock;
extern s8 D_8021E231[];
extern u16 D_80187BF0[][9];
extern u8 D_802D92A0[];
extern u32 D_8021EFA0;
extern u8 D_802D6898[];
extern Sel D_8021EEC0;
extern u8 D_8021F260[];
extern u16 *sHexGlyphs[];
extern u8 D_8021B633[][6];
void gfxSetup2DState(Gfx **);
void gfxDrawText(Gfx **, u16, u16, u16, u8 *, u16 *, u8, u8 *, s32, s32, s32, s32);
void gfxSetPrimColor(Gfx **, u8, u8, u8, s32);
void gfxSetPrimAlpha(Gfx **, s32);
void gfxDrawSprite(Gfx **, s16, s16, s32, s32);

/* Draws the select-menu overlay: title text, the highlighted row or cursor sprites, and the selected entry name. */ void drawSelectMenuOverlay(Gfx **gfxp) {
    s32 textIdx;

    gfxSetup2DState(gfxp);
    gDma(D_800DE0E4++, 0xED000000, 0x005003C0);
    textIdx = menuInputLock * 272;
    textIdx = D_8021E231[textIdx + D_8021EEC0.a];
    gfxDrawText(gfxp, 0x9E, 0x44, 0xE, D_802D92A0, D_80187BF0[textIdx], 0, D_802D6898, 14, 16, 224, 96);
    if (!(D_8021EEC0.flags & 0x4000)) {
        if ((D_8021EEC0.flags >> 11) & 1) {
            gfxDrawSprite(gfxp, 0xFF, 0x21, 0xB, 0x29);
        }
        if ((D_8021EFA0 >> 11) & 2) {
            gfxDrawSprite(gfxp, 0x9D, 0x21, 0xB, 0x28);
        }
    } else {
        gfxSetPrimColor(gfxp, D_8021F260[0], D_8021F260[1], D_8021F260[2], D_8021F260[3]);
        if (D_8021EEC0.sel < 0x55) {
            gfxDrawText(gfxp, D_8021EEC0.x + 0xB, D_8021EEC0.y + 0xA, 0xE, D_802D92A0, sHexGlyphs[D_8021EEC0.sel + D_8021EEC0.base], 0, D_802D6898, 14, 16, 224, 96);
        } else if (D_8021EEC0.sel != 0x5A) {
            gfxDrawSprite(gfxp, D_8021B633[D_8021EEC0.sel - 0x55][0] + D_8021EEC0.x, D_8021B633[D_8021EEC0.sel - 0x55][1] + D_8021EEC0.y, 9, D_8021B633[D_8021EEC0.sel - 0x55][2]);
        }
        gfxSetPrimAlpha(gfxp, 0xFF);
        gfxDrawSprite(gfxp, D_8021EEC0.x, D_8021EEC0.y, 0xB, 0x22);
        gfxDrawSprite(gfxp, D_8021EEC0.f2 * 14 + 0x9E, 0x3C, 0xB, 0x2B);
    }
}
