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
typedef struct { s16 x; s16 y; s16 w; s16 h; s16 vscale[4]; s16 vtrans[4]; s16 ulx; s16 uly; s16 lrx; s16 lry; u8 pad[8]; } View;
typedef struct { u8 pad[0x2110]; View view[2]; } Big;
typedef struct { u8 pad0[9]; u8 alpha; s16 x; } Panel;
typedef struct { u8 pad0[0x40]; u16 state; u8 pad42[0x1E]; Panel *panel; } Ob5;
typedef struct { u32 w[8]; } Row;
extern Big sRowBoard;
extern u8 viewIndex;
extern Ob5 D_8011F2F0[];
extern u8 D_801E4438[], D_801E4BC0[], D_801E4DC8[], D_801E59D0[], D_801E59F8[], D_801E60E0[], D_801E6108[], D_801E6430[], D_801E6638[], D_801E6960[];
extern u8 D_801CF4C8[];
extern s16 D_801E9D5C;
extern u16 D_801F188A;
extern u16 D_801E9730;
extern u32 D_801E8790[];
extern u32 D_801E8798[];
extern Row D_801E9B38[];
extern u8 D_801E87C0;
extern s32 D_801E9768[];
extern u8 D_801E9799;
extern u16 D_801E9764;
extern u8 D_801E9B1C;
void gfxSetup2DStateAlt(Gfx **);
void gfxSetup2DState(Gfx **);
void gfxDrawClippedTex4b(Gfx **, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);
void drawDecimalNumber(Gfx **, u16, u16, u16, u32, u8, u16);
void drawGlyphCell(Gfx **, u16, u16, u16, u8 *, u32);
void drawNameAndNumber(Gfx **, u16, u16, u16, u32, Row *);

#define BACKDROP() \
    gfxSetup2DStateAlt(gfxp); \
    for (i = 0; i < 4; i++) { \
        for (j = 0; j < 5; j++) { \
            gfxDrawClippedTex4b(gfxp, j * 64, i * 60, 0, 0, 64, 60, 64, 60, 64, 30, 0, 0, 319, 239, D_801E4438, D_801E4BC0); \
        } \
    }
#define TITLE() \
    gfxSetup2DState(gfxp); \
    gfxDrawClippedTex4b(gfxp, 0x40, 0x16, 0, 0, 0xC0, 0x20, 0xC0, 0x20, 0xC0, 0x10, 0, 0, 319, 239, D_801E4DC8, D_801E59D0)

void func_801DECB4(Gfx **gfxp, u16 id) {
    s32 i;
    s32 j;
    s32 flag;
    s32 y;
    s32 up;
    s32 down;
    u32 sum;

    switch (D_8011F2F0[id].state) {
    case 0:
        D_8011F2F0[id].state = 1;
    case 1:
        BACKDROP();
        TITLE();
        up = D_801E9D5C > 0;
        down = D_801E9D5C < 0;
        gDma((*gfxp)++, 0xED000100, 0x004FC288);
        for (i = -up; i < down + 7; i++) {
            flag = D_801F188A + i == D_801E9730;
            y = i * 14 + 0x40;
            drawDecimalNumber(gfxp, 0x20, y + D_801E9D5C, 0xA, D_801E8790[flag], 2, i + 1 + D_801F188A);
            drawGlyphCell(gfxp, 0x34, y + D_801E9D5C, 0x1A, D_801CF4C8, D_801E8790[flag]);
            drawNameAndNumber(gfxp, 0x48, y + D_801E9D5C, 0xA, D_801E8790[flag], &D_801E9B38[D_801F188A + i]);
            drawDecimalNumber(gfxp, 0x106, y + D_801E9D5C, 0xA, D_801E8790[flag], 3, D_801E9B38[D_801F188A + i].w[0] >> 8);
        }
        gDma((*gfxp)++, _S(0xED, 24, 8) | _S((s32)((f32)sRowBoard.view[viewIndex].ulx * 4.0F), 12, 12) | _S((s32)((f32)sRowBoard.view[viewIndex].uly * 4.0F), 0, 12),
             _S((s32)((f32)sRowBoard.view[viewIndex].lrx * 4.0F), 12, 12) | _S((s32)((f32)sRowBoard.view[viewIndex].lry * 4.0F), 0, 12));
        sum = 0;
        for (i = 0; i < 16; i++) {
            sum += D_801E9B38[i].w[0];
        }
        gfxDrawClippedTex4b(gfxp, 0x48, 0xAC, 0, 0, 0xB0, 0x14, 0xB0, 0x14, 0xB0, 0x14, 0, 0, 319, 239, D_801E59F8, D_801E60E0);
        drawDecimalNumber(gfxp, 0xB0, 0xB0, 0xA, D_801E8798[0], 3, D_801E9768[D_801E87C0] >> 8);
        drawGlyphCell(gfxp, 0xCE, 0xB0, 0xF, D_801CF4C8, D_801E8798[0]);
        drawDecimalNumber(gfxp, 0xD8, 0xB0, 0xA, D_801E8798[0], 3, (s32)(sum + D_801E9768[D_801E87C0]) >> 8);
        if (D_801E9799 != 0) {
            D_8011F2F0[D_801E9764].panel->alpha = 0x96;
            gfxDrawClippedTex4b(gfxp, 0x48, 0xC5, 0, 0, 0x50, 0x14, 0x50, 0x14, 0x50, 0x14, 0, 0, 319, 239, D_801E6108, D_801E6430);
            gfxDrawClippedTex4b(gfxp, 0xA8, 0xC5, 0, 0, 0x50, 0x14, 0x50, 0x14, 0x50, 0x14, 0, 0, 319, 239, D_801E6638, D_801E6960);
            if (D_801E9B1C == 1) {
                D_8011F2F0[D_801E9764].panel->x = 0xA8;
            } else {
                D_8011F2F0[D_801E9764].panel->x = 0x48;
            }
        } else {
            D_8011F2F0[D_801E9764].panel->alpha = 0;
        }
        break;
    case 100:
        BACKDROP();
        TITLE();
        break;
    case 200:
        BACKDROP();
        TITLE();
        break;
    }
}
