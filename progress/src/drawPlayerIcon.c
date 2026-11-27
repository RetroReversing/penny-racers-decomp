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
typedef struct { u8 v; u8 pad[0x63]; } SlotB;
typedef struct { u8 b[16]; } Vtx;
extern SlotF racerTimers[];
extern SlotF racerAnimFrames[];
extern SlotF D_8011F33C[];
extern SlotB racerTimerFlags[];
extern u8 D_80182E20[];
extern Vtx D_8018B530[][4][4];
#define gDPSetPrimColor(pkt, m, l, r, g, b, a) gDma(pkt, _S(0xfa, 24, 8) | _S(m, 8, 8) | _S(l, 0, 8), (_S(r, 24, 8) | _S(g, 16, 8) | _S(b, 8, 8) | _S(a, 0, 8)))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define TXL2WORDS_4b(w) ((w)/16 > 1 ? (w)/16 : 1)
#define CALC_DXT_4b(w) (((1 << 11) + TXL2WORDS_4b(w) - 1) / TXL2WORDS_4b(w))
#define gDPLoadBlock(pkt, tile, uls, ult, lrs, dxt) gDma(pkt, _S(0xf3, 24, 8) | _S(uls, 12, 12) | _S(ult, 0, 12), _S(tile, 24, 3) | _S(MIN(lrs, 2047), 12, 12) | _S(dxt, 0, 12))
#define gDPLoadTextureBlock_4b(pkt, timg, fmt, width, height, pal, cms, cmt, masks, maskt, shifts, shiftt) { \
    gDPSetTextureImage(pkt, fmt, 2, 1, timg); \
    gDPSetTile(pkt, fmt, 2, 0, 0, 7, 0, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPLoadSync(pkt); \
    gDPLoadBlock(pkt, 7, 0, 0, ((((width) * (height)) + 3) >> 2) - 1, CALC_DXT_4b(width)); \
    gDPPipeSync(pkt); \
    gDPSetTile(pkt, fmt, 0, ((((width) >> 1) + 7) >> 3), 0, 0, pal, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPSetTileSize(pkt, 0, 0, 0, ((width) - 1) << 2, ((height) - 1) << 2); }
#define gSPVertex(pkt, v, n, v0) gDma(pkt, _S(0x04, 24, 8) | _S((v0) * 2, 16, 8) | _S(((n) << 10) | (16 * (n) - 1), 0, 16), v)
#define TRIW(a, b, c) (_S((a) * 2, 16, 8) | _S((b) * 2, 8, 8) | _S((c) * 2, 0, 8))
#define gSP2Triangles(pkt, a, b, c, f, d, e, g, h) gDma(pkt, _S(0xb1, 24, 8) | TRIW(a, b, c), TRIW(d, e, g))

typedef struct { u16 v; u8 pad[0x62]; } SlotH;
typedef struct { f32 v; u8 pad[0x8EC]; } Course;
typedef struct { s32 w[4]; } Quad;
extern SlotH playerSlots[];
extern SlotB D_8011F2F0[];
extern Course D_8022AFD4[];
extern s32 D_80046834;
extern Quad D_80189DC8[][7][4];
extern Quad D_80189970[][4];
void drawPlayerIcon(Gfx **gfxp, u16 id) {
    u8 slot;
    f32 progress;
    s32 i;

    if (playerSlots[id].v != 0) {
        slot = D_8011F2F0[id].v;
        progress = D_8022AFD4[slot].v;
        if (progress > 0.95 && racerTimers[id].v == 0.0) {
            return;
        }
        gDPSetPrimColor((*gfxp)++, 0, 0, 0, 0, 0, racerTimerFlags[id].v);
        gDPLoadTextureBlock_4b((*gfxp)++, D_80182E20, 4, 32, 1, 0, 2, 2, 0, 0, 0, 0);
        for (i = 0; i < 4; i++) {
            D_80189DC8[D_80046834][slot][i] = D_80189970[slot][i];
        }
        gSPVertex((*gfxp)++, &D_80189DC8[D_80046834][slot][0], 4, 0);
        if (progress >= 0.0f) {
            gSP2Triangles((*gfxp)++, 0, 1, 2, 0, 1, 3, 2, 0);
        } else {
            gSP2Triangles((*gfxp)++, 0, 2, 1, 0, 1, 2, 3, 0);
        }
    }
}
