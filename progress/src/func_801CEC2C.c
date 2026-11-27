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

typedef struct { u8 pad0[6]; u8 r; u8 g; u8 b; u8 a; u16 x; u16 y; u16 w; u16 h; } Image;
typedef struct { u16 state; u8 pad2[0x1E]; Image *img; u8 pad24[0x40]; } Slot;
typedef struct { u8 pad0[0x2108]; s16 frame; } Root;
extern Slot D_8011F330[];
extern Root sRowBoard;
extern u8 viewIndex;
extern u8 D_801D5590[];
extern Gfx D_80220ED8[];
void func_801CE7D0(Gfx **, u16);
#define gSPDisplayList(pkt, dl) gDma(pkt, _S(0x06, 24, 8), dl)
#define gDPSetRenderMode(pkt, mode) gDma(pkt, _S(0xb9, 24, 8) | _S(3, 8, 8) | _S(29, 0, 8), mode)
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

void func_801CEC2C(Gfx **gfxp, u16 id) {
    s16 cols;
    s16 rows;
    s16 remw;
    s16 remh;
    s16 i;
    s16 j;
    s32 x1;
    s32 y1;
    s32 y2;
    s32 x2;

    if (viewIndex == sRowBoard.frame - 1) {
        gSPDisplayList((*gfxp)++, D_80220ED8);
        switch (D_8011F330[id].state) {
        case 0:
            D_8011F330[id].state = 1;
            break;
        case 1:
            break;
        default:
            return;
        }
        cols = D_8011F330[id].img->w / 80;
        remw = D_8011F330[id].img->w % 80;
        remh = D_8011F330[id].img->h % 24;
        rows = D_8011F330[id].img->h / 24;
        if (D_8011F330[id].img->a != 0) {
            func_801CE7D0(gfxp, D_8011F330[id].img->h);
            if (D_8011F330[id].img->a == 0xFF) {
                gDPSetRenderMode((*gfxp)++, 0x0F0A4000);
            } else {
                gDPSetRenderMode((*gfxp)++, 0x00504340);
            }
            gDPSetPrimColor((*gfxp)++, 0, 0, D_8011F330[id].img->r, D_8011F330[id].img->g, D_8011F330[id].img->b, D_8011F330[id].img->a);
            gDPLoadTextureBlock_4b((*gfxp)++, D_801D5590, 4, 80, 24, 0, 2, 2, 0, 0, 0, 0);
        }
        if (D_8011F330[id].img->a != 0) {
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    gSPTextureRectangle((*gfxp)++, (D_8011F330[id].img->x + j * 80) * 4, (D_8011F330[id].img->y + i * 24) * 4,
                        (D_8011F330[id].img->x + (x2 = j * 80 + 80)) * 4, (D_8011F330[id].img->y + (y1 = i * 24 + 24)) * 4, 0, 0, 0, 1024, 1024);
                }
                if (remw != 0) {
                    gSPTextureRectangle((*gfxp)++, (D_8011F330[id].img->x + j * 80) * 4, (D_8011F330[id].img->y + i * 24) * 4,
                        (remw + D_8011F330[id].img->x + j * 80) * 4, (D_8011F330[id].img->y + ({ i * 24 + 24; })) * 4, 0, 0, 0, 1024, 1024);
                }
            }
            j = 0;
            if (remh != 0) {
                for (j = 0; j < cols; j++) {
                    gSPTextureRectangle((*gfxp)++, (D_8011F330[id].img->x + j * 80) * 4, (D_8011F330[id].img->y + i * 24) * 4,
                        (D_8011F330[id].img->x + (x2 = j * 80 + 80)) * 4, (remh + D_8011F330[id].img->y + i * 24) * 4, 0, 0, 0, 1024, 1024);
                }
                if (remw != 0) {
                    gSPTextureRectangle((*gfxp)++, (D_8011F330[id].img->x + j * 80) * 4, (D_8011F330[id].img->y + i * 24) * 4,
                        (remw + D_8011F330[id].img->x + j * 80) * 4, (remh + D_8011F330[id].img->y + i * 24) * 4, 0, 0, 0, 1024, 1024);
                }
            }
            gDPPipeSync((*gfxp)++);
        }
    }
}
