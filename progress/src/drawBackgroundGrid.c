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

typedef struct { u16 on; u16 state; u8 pad4[0x60]; } Slot;
typedef struct { u8 pad0[0x64]; Gfx *gfx; } Globals;
typedef struct { u8 b[16]; } Vtx;
typedef struct { u8 a[8]; u8 l[16]; } Lights1;
extern Slot playerSlots[];
extern Gfx *D_800DE0E4;
extern s32 D_80046834;
extern Vtx D_80187D00[][14][16];
extern Lights1 D_80189928;
extern Gfx D_800E18A0[];
extern u16 menuPanelTlut[];
extern u8 menuPanelTex[];
#define gSPDisplayList(pkt, dl) gDma(pkt, _S(0x06, 24, 8), dl)
#define gDPSetRenderMode(pkt, mode) gDma(pkt, _S(0xb9, 24, 8) | _S(3, 8, 8) | _S(29, 0, 8), mode)
#define gSPClearGeometryMode(pkt, mode) gDma(pkt, _S(0xb6, 24, 8), mode)
#define gMoveWd(pkt, index, offset, data) gDma(pkt, _S(0xbc, 24, 8) | _S(offset, 8, 16) | _S(index, 0, 8), data)
#define gSPNumLights(pkt, n) gMoveWd(pkt, 2, 0, ((n) + 1) * 32 + 0x80000000)
#define gSPLight(pkt, l, n) gDma(pkt, _S(0x03, 24, 8) | _S((((n) - 1) * 2 + 0x86), 16, 8) | _S(16, 0, 16), l)
#define gSPSetLights1(pkt, name) { gSPNumLights(pkt, 1); gSPLight(pkt, &name.l[0], 1); gSPLight(pkt, &name.a, 2); }
#define gSPVertex(pkt, v, n, v0) gDma(pkt, _S(0x04, 24, 8) | _S((v0) * 2, 16, 8) | _S(((n) << 10) | (16 * (n) - 1), 0, 16), v)
#define TRIW(a, b, c) (_S((a) * 2, 16, 8) | _S((b) * 2, 8, 8) | _S((c) * 2, 0, 8))
#define gSP2Triangles(pkt, a, b, c, f, d, e, g, h) gDma(pkt, _S(0xb1, 24, 8) | TRIW(a, b, c), TRIW(d, e, g))

/* Draws the background as a 13x15 grid of 272x143 tiles from the current background vertex buffer, once the slot is on and idle. */ void drawBackgroundGrid(Gfx **gfxp, u16 id) {
    s32 i;
    s32 j;
    s16 s;
    s16 e;
    s16 t;
    s16 b;

    if (playerSlots[id].on != 0 && playerSlots[id].state == 0) {
        gSPDisplayList((*gfxp)++, D_800E18A0);
        gDPSetRenderMode((*gfxp)++, 0x00552048);
        gSPClearGeometryMode((*gfxp)++, 0x2001);
        gSPSetLights1(D_800DE0E4++, D_80189928);
        gDPLoadTLUT_pal256((*gfxp)++, menuPanelTlut);
        for (i = 0; i < 13; i++) {
            gSPVertex((*gfxp)++, &D_80187D00[D_80046834][i][0], 32, 0);
            for (j = 0; j < 15; j++) {
                if (j == 0 || j == 14 || i == 0 || i == 12) {
                    gDPLoadTextureTile_8b((*gfxp)++, menuPanelTex, 2, 272, 143, 0, 0, 19, 10, 0, 2, 2, 0, 0, 0, 0);
                    gSP2Triangles((*gfxp)++, j, j + 16, j + 1, 0, j + 1, j + 16, j + 17, 0);
                } else {
                    t = (i - 1) * 11;
                    b = t + 10;
                    e = (j - 1) * 20 + 19;
                    s = (j - 1) * 20;
                    gDPLoadTextureTile_8b((*gfxp)++, menuPanelTex, 2, 272, 143, s, t, e, b, 0, 2, 2, 0, 0, 0, 0);
                    gSP2Triangles((*gfxp)++, j, j + 16, j + 1, 0, j + 1, j + 16, j + 17, 0);
                }
            }
        }
    }
}
