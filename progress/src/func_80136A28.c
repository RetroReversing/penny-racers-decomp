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
typedef struct { u8 kind; u8 pad1[0xB]; u8 alpha; u8 padD[0x33]; u16 state; u8 pad42[0x22]; } Ob10;
typedef struct { u8 pad[0x2108]; s16 views; } Big;
typedef struct { u16 v; u8 pad[0x8EE]; } PU16;
typedef struct { s16 v; u8 pad[0x8EE]; } PS16;
typedef struct { u8 v; u8 pad[0x8EF]; } PU8;
typedef struct { u8 a; u8 b; u8 c; u8 d; u8 e; } Time;
typedef struct { Time t[4]; u8 pad[0x8F0 - 20]; } PTime;
typedef struct { u8 kind; u8 pad1[0xB]; u8 count; u8 padD[0x31]; u16 f3E; u8 pad40[0x24]; } Rec;
typedef struct { u8 v; u8 pad[4]; } B5;
typedef struct { B5 t[4]; u8 pad[0x8F0 - 20]; } PB5;
extern Rec D_8011F2F0[];
extern Big sRowBoard;
extern u8 viewIndex, D_80189CC8, D_801E9738, D_801E9740;
extern u16 D_80167FA0[], D_80167FA8[];
extern u8 *D_80167F68[], *D_80167F84[];
extern u8 D_80183BA4[], D_8018A250[][5], D_8018A254[][5], D_8018A452[];
extern u8 D_80220ED8[], D_801D51C8[], D_801D5470[], D_80170F20[], D_80171018[], D_8016ED50[], D_8016EDD8[], D_8016EE00[], D_8016EF48[], D_8016F680[], D_80170678[], D_80175348[], D_80175828[];
extern PU8 D_8022AFE9[];
extern PU8 D_8022AD06[];
extern PB5 D_8022ACD2[], D_8022ACD3[], D_8022ACD4[], D_8022ACD6[];

void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, s32);
void drawSpriteCell(Gfx **, u16, u16, u16, u8 *, u8 *, u8, s32, s32, s32, s32);
void gfxDrawClippedTex4b(Gfx **, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);
void func_801CB9EC(Gfx **, u16, u16, u16, u8 *, u8 *, u8, s32, s32, s32, s32, s32, s32, u16);

void func_80136A28(Gfx **gfxp, u16 id) {
    s32 car;
    u8 k;
    u16 w;
    s32 x;
    s32 y;
    s32 i;
    s32 next;
    s32 show;
    s32 limit;
    s32 n;
    s32 row;

    k = D_8011F2F0[id].kind;
    car = k;
    if (D_80189CC8 == 3 && sRowBoard.views >= 3) {
        w = D_80167FA0[car];
        x = w;
        w = D_80167FA8[car];
        y = w;
    } else {
        x = 0;
        k = D_8011F2F0[id].kind;
        y = k;
        y = y * 108;
        if (sRowBoard.views == 1) {
            y += 0x31;
        }
    }
    if (viewIndex == sRowBoard.views - 1 && D_8011F2F0[id].f3E != 0) {

        if (D_8022AFE9[car].v == (limit = 5)) {
            k = D_80183BA4[car];
            limit = k;
        }
        gDma((*gfxp)++, 0x06000000, D_80220ED8);
        gfxSetup2DState(gfxp);
        if (D_8011F2F0[id].count) {
            k = D_8018A254[car][0];
            gfxSetPrimAlpha(gfxp, k);
            switch (D_80189CC8) {
            case 0:
                gfxDrawClippedTex4b(gfxp, 0x28, 0x3F, 0, 0, 0x50, 0x1F, 0x50, 0x1F, 0x50, 0x1F, 0, 0, 319, 239, D_80175348, D_80175828);
                break;
            case 1:
                break;
            case 3:
                if (sRowBoard.views == 1) {
                    gfxDrawClippedTex4b(gfxp, 0x28, 0x3F, 0, 0, 0x50, 0x1F, 0x50, 0x1F, 0x50, 0x1F, 0, 0, 319, 239, D_80175348, D_80175828);
                    break;
                }
            case 2:
                n = (s8)D_8022AD06[car].v;
                func_801CB9EC(gfxp, x + 0x3E, y + 0x10, 0x1B, D_8016F680, D_80170678, 0, 1, 0, 0x1A, 0x1E, 0x110, 0x1E, n);
                gfxDrawClippedTex4b(gfxp, x + 0x5C, y + 0x1B, 0, 0, 0x20, 0x13, 0x20, 0x13, 0x20, 0x13, 0, 0, 319, 239, D_80167F68[n], D_80167F84[n]);
                break;
            }
        }
        for (i = 0; i < D_8011F2F0[id].count; i++) {
            show = 1;
            if (D_80189CC8 == 0 || (D_80189CC8 == 2 && sRowBoard.views == 1)) {
                if (D_8022AFE9[car].v != 5 && D_8018A452[car] >= 0x11) {
                    if (D_801E9738 == 1 && i == 3) {
                        show = 0;
                    }
                    if (D_801E9740 == i + 1) {
                        show = 0;
                    }
                }
            }
            gfxSetPrimAlpha(gfxp, D_8018A250[car][i]);
            next = i + 1;
            if (i == 3) {
                next = 0;
            }
            drawSpriteCell(gfxp, x + 0x30, i * 14 + 0x38 + y, 0xA, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
            drawSpriteCell(gfxp, x + 0x48, i * 14 + 0x38 + y, 0xB, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
            if (i + 1 >= limit || D_8022ACD2[car].t[next].v != 0) {
                drawSpriteCell(gfxp, x + 0x20, i * 14 + 0x38 + y, 0xC, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                drawSpriteCell(gfxp, x + 0x28, i * 14 + 0x38 + y, 0xC, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                drawSpriteCell(gfxp, x + 0x38, i * 14 + 0x38 + y, 0xC, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                drawSpriteCell(gfxp, x + 0x40, i * 14 + 0x38 + y, 0xC, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                drawSpriteCell(gfxp, x + 0x50, i * 14 + 0x38 + y, 0xC, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                drawSpriteCell(gfxp, x + 0x58, i * 14 + 0x38 + y, 0xC, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
            } else {
                func_801CB9EC(gfxp, x + 0x20, i * 14 + 0x38 + y, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_8022ACD3[car].t[next].v);
                func_801CB9EC(gfxp, x + 0x38, i * 14 + 0x38 + y, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_8022ACD4[car].t[next].v);
                func_801CB9EC(gfxp, x + 0x50, i * 14 + 0x38 + y, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_8022ACD6[car].t[next].v);
            }
            if (show) {
                if (i == 3) {
                    gfxDrawClippedTex4b(gfxp, x + 0x64, y + 0x63, 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 319, 239, D_80170F20, D_80171018);
                } else {
                    gfxDrawClippedTex4b(gfxp, x + 0x64, i * 14 + ({ y + 0x3A; }), 0, 0, 0x20, 8, 0x20, 8, 0x20, 8, 0, 0, 319, 239, D_8016ED50, D_8016EDD8);
                    func_801CB9EC(gfxp, x + 0x7F, (n = i * 14) + 0x3A + y, 8, D_8016EE00, D_8016EF48, 0, 1, 0, 8, 8, 0x50, 8, next);
                }
            }
        }
    }
}
