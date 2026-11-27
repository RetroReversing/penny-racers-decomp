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
typedef struct { u8 pad0[0x40]; u16 state; u8 pad42[0x22]; } Ob6;
extern Ob6 D_8011F2F0[];
extern u32 D_8021EFA0;
extern u8 D_8021B631[][6];
extern u8 D_8021B632[][6];
extern u8 D_8021B635[][6];
extern u16 D_8021EEC4;
extern u16 D_8021EED0[];
extern u16 *D_80203080[];
extern u8 D_802D92A0[];
extern u8 D_802D6898[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, s32);
void gfxSetPrimColor(Gfx **, s32, s32, s32, s32);
void gfxDrawSprite(Gfx **, s16, s16, s32, s32);
void gfxDrawText(Gfx **, u16, u16, u16, u8 *, u16 *, u8, u8 *, s32, s32, s32, s32);

/* Draws the course select overlay: sprites for the frame and labels, then six text rows; state 0 arms it. */ void drawCourseSelectOverlay(Gfx **gfxp, u16 objIndex) {
    s32 i;
    s32 j;
    s32 textCol;

    switch (D_8011F2F0[objIndex].state) {
    case 0:
        D_8011F2F0[objIndex].state = 16;
        break;
    case 16:
        gfxSetup2DState(gfxp);
        gfxSetPrimAlpha(gfxp, 0xFF);
        gfxSetPrimColor(gfxp, 0, 0, 0, 0x7F);
        gfxDrawSprite(gfxp, 0x20, 0x5D, 0xB, 0x40);
        gfxDrawSprite(gfxp, 2, 0x19, 0xB, 0x41);
        gfxSetPrimAlpha(gfxp, 0xFF);
        gfxDrawSprite(gfxp, 0x8E, 0x43, 9, 1);
        gfxDrawSprite(gfxp, 0x118, 0x43, 9, 2);
        gfxSetPrimColor(gfxp, 0x91, 0x83, 0x47, 0xFF);
        gfxDrawSprite(gfxp, 0, 0x17, 0xB, 0x41);
        gfxSetPrimAlpha(gfxp, 0xFF);
        if (D_8021EFA0 & 0x4000) {
            gfxDrawSprite(gfxp, 0x28, 0x1A, 9, 0);
            j = 0xFF;
        } else {
            gfxDrawSprite(gfxp, 0x29, 0x17, 9, 6);
            gfxDrawSprite(gfxp, 0x35, 0x33, 9, 7);
            j = 0x80;
        }
        gfxSetPrimColor(gfxp, (u16)j, (u16)j, (u16)j, 0xFF);
        for (i = 0; i < 2; i++) {
            gfxDrawSprite(gfxp, D_8021B631[i][0], D_8021B632[i][0], 9, D_8021B635[i][0]);
        }
        gfxDrawSprite(gfxp, 0xC4, 0xC8, 9, 4);
        for (i = 0; i < 6; i++) {
            textCol = 0;
            for (j = 0; j < 15; j++) {
                textCol += (j == 5) | (j == 10);
                D_8021EED0[j + textCol] = *D_80203080[i * 15 + (D_8021EED0[-6] + j)];
            }
            D_8021EED0[5] = 0;
            D_8021EED0[11] = 0;
            D_8021EED0[17] = 0xFFFF;
            if (i == 5) {
                for (j = 12; j < 17; j++) {
                    D_8021EED0[j] = 0;
                }
            }
            gfxDrawText(gfxp, 0x28, i * 17 + 0x5E, 0xE, D_802D92A0, D_8021EED0, 0, D_802D6898, 14, 16, 224, 96);
        }
        break;
    }
}
