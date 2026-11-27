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
typedef struct { s16 a; s16 b; s16 c; s16 d; s16 w; s16 h; u8 f; u8 g; s16 i; s16 j; s16 k; s16 l; } Spr;
typedef struct { s16 a; s16 b; u8 *tex; u8 *tlut; } Sheet;
extern Spr *D_80202484[];
extern Sheet D_80200300[];
#define G_IM_FMT_CI 2
#define G_IM_SIZ_8b 1
#define G_TX_CLAMP 2
#define G_TX_NOMASK 0
#define G_TX_NOLOD 0
#define G_TX_RENDERTILE 0
void func_801CC150(Gfx **gfxp, s16 x, s16 y, s16 s, s16 t, s16 width, s16 h, s16 texW, s16 texH, s16 tileW, s16 tileH, s16 left, s16 cy0, s16 cx1, s16 cy1, u8 *tex, u8 *tlut)
{
    Gfx *g;
    s16 i;
    s16 j;
    s16 nx;
    s16 ny;
    s16 rx;
    s16 ry;
    s16 uls;
    s16 ult;
    s32 flag;
    u8 r1;
    u8 r2;

    g = *gfxp;
    flag = 0;
    if (x < left) {
        s += left - x;
        width -= left - x;
        if (width < 0) {
            flag = 1;
        }
        x = left;
    }
    if (y < cy0) {
        t += cy0 - y;
        h -= cy0 - y;
        if (h < 0) {
            flag = 1;
        }
        y = cy0;
    }
    r1 = flag;
    if (r1) {
        return;
    }
    if (x + width > cx1) {
        width = cx1 - x;
        if (width < 0) {
            flag = 1;
        }
    }
    if (y + h > cy1) {
        h -= y + h - cy1;
        if (h < 0) {
            flag = 1;
        }
    }
    r2 = flag;
    if (r2) {
        return;
    }
    nx = width / tileW;
    rx = width % tileW;
    ny = h / tileH;
    ry = h % tileH;
    gDPLoadTLUT_pal16(g++, 0, tlut);
    for (i = 0; i < ny; i++) {
        for (j = 0; j < nx; j++) {
            uls = s + j * tileW;
            ult = t + i * tileH;
            gDPLoadTextureTile_4b(g++, tex, G_IM_FMT_CI, texW, texH, uls, ult, uls + tileW - 1, ult + tileH - 1, 0, G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            gSPTextureRectangle(g++, (x + j * tileW) << 2, (y + i * tileH) << 2, (tileW + x + j * tileW) << 2, (tileH + y + i * tileH) << 2, G_TX_RENDERTILE, uls << 5, ult << 5, 1 << 10, 1 << 10);
        }
        if (rx != 0) {
            uls = s + j * tileW;
            ult = t + i * tileH;
            gDPLoadTextureTile_4b(g++, tex, G_IM_FMT_CI, texW, texH, uls, ult, uls + rx - 1, ult + tileH - 1, 0, G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            gSPTextureRectangle(g++, (x + j * tileW) << 2, (y + i * tileH) << 2, (rx + x + j * tileW) << 2, (tileH + y + i * tileH) << 2, G_TX_RENDERTILE, uls << 5, ult << 5, 1 << 10, 1 << 10);
        }
    }
    if (ry != 0) {
        for (j = 0; j < nx; j++) {
            uls = s + j * tileW;
            ult = t + i * tileH;
            gDPLoadTextureTile_4b(g++, tex, G_IM_FMT_CI, texW, texH, uls, ult, uls + tileW - 1, ult + ry - 1, 0, G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            gSPTextureRectangle(g++, (x + j * tileW) << 2, (y + i * tileH) << 2, (tileW + x + j * tileW) << 2, (ry + y + i * tileH) << 2, G_TX_RENDERTILE, uls << 5, ult << 5, 1 << 10, 1 << 10);
        }
        if (rx != 0) {
            uls = s + j * tileW;
            ult = t + i * tileH;
            gDPLoadTextureTile_4b(g++, tex, G_IM_FMT_CI, texW, texH, uls, ult, uls + rx - 1, ult + ry - 1, 0, G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            gSPTextureRectangle(g++, (x + j * tileW) << 2, (y + i * tileH) << 2, (rx + x + j * tileW) << 2, (ry + y + i * tileH) << 2, G_TX_RENDERTILE, uls << 5, ult << 5, 1 << 10, 1 << 10);
        }
    }
    gDPPipeSync(g++);
    *gfxp = g;
}
