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
extern Ob10 D_8011F2F0[];
extern Big sRowBoard;
extern u8 viewIndex;
extern u8 D_80183BA4[];
extern u8 noticeBackgroundDl[];
extern PS16 D_8022AD04[];
extern PU8 D_8022AD05[];
extern PU8 D_8022AFE9[];
extern PU8 D_8022AD06[];
extern PU16 D_8022ACAA[];
extern PS16 D_8022ACCE[];
extern PTime D_8022ACD3[];
extern s32 D_8017D2B8[];
extern u8 D_801D51C8[], D_801D5470[], D_80170F20[], D_80171018[], D_8016ED50[], D_8016EDD8[], D_8016EE00[], D_8016EF48[], D_8016F680[], D_80170678[], D_80173050[], D_80173148[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, s32);
void drawSpriteCell(Gfx **, u16, u16, u16, u8 *, u8 *, u8, s32, s32, s32, s32);
void gfxDrawClippedTex4b(Gfx **, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);
void drawNumberDigits(Gfx **, u16, u16, u16, u8 *, u8 *, u8, s32, s32, s32, s32, s32, s32, u16);

void func_801337B0(Gfx **gfxp, u16 id) {
    s32 i;
    s32 n;
    s32 x;
    s32 y;
    s32 kind;

    if (viewIndex == sRowBoard.views - 1) {
        kind = D_8011F2F0[id].kind;
        switch (kind) {
        case 0:
            x = 0;
            y = 0;
            break;
        case 1:
            x = 0x90;
            y = 0;
            break;
        case 2:
            x = 0;
            y = 0x6C;
            break;
        case 3:
            x = 0x90;
            y = 0x6C;
            break;
        }
        if (D_8011F2F0[id].state == 0) {
            for (i = 0; i < 4; i++) {
                D_80183BA4[i] = 1;
            }
            D_8011F2F0[id].state = 1;
        }
        gDma((*gfxp)++, 0x06000000, noticeBackgroundDl);
        gfxSetup2DState(gfxp);
        gfxSetPrimAlpha(gfxp, D_8011F2F0[id].alpha);
        if (D_80183BA4[kind] < D_8022AD04[kind].v && D_80183BA4[kind] < 4U && D_8022AFE9[kind].v != 5) {
            D_80183BA4[kind] = D_8022AD05[kind].v;
        }
        n = D_80183BA4[kind];
        if (n == 4) {
            n = 0;
        }
        drawSpriteCell(gfxp, x + 0x28, y + 0x10, 0xA, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
        drawSpriteCell(gfxp, x + 0x40, y + 0x10, 0xB, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
        if (D_80183BA4[kind] == 4) {
            gfxDrawClippedTex4b(gfxp, x + 0x5C, y + 0x11, 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 319, 239, D_80170F20, D_80171018);
        } else {
            gfxDrawClippedTex4b(gfxp, x + 0x5C, y + 0x12, 0, 0, 0x20, 8, 0x20, 8, 0x20, 8, 0, 0, 319, 239, D_8016ED50, D_8016EDD8);
            drawNumberDigits(gfxp, x + 0x77, y + 0x12, 8, D_8016EE00, D_8016EF48, 0, 1, 0, 8, 8, 0x50, 8, n);
        }
        drawNumberDigits(gfxp, x + 0x18, y + 0x10, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_8022ACD3[kind].t[n].a);
        drawNumberDigits(gfxp, x + 0x30, y + 0x10, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_8022ACD3[kind].t[n].b);
        drawNumberDigits(gfxp, x + 0x48, y + 0x10, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_8022ACD3[kind].t[n].d);
        if (D_8011F2F0[id].alpha < 0xAA) {
            gfxSetPrimAlpha(gfxp, D_8011F2F0[id].alpha);
        } else {
            gfxSetPrimAlpha(gfxp, 0x64);
        }
        drawNumberDigits(gfxp, x + 0x7B, y + 0x50, 0x1B, D_8016F680, D_80170678, 0, 1, 0, 0x1A, 0x1E, 0x110, 0x1E, (s8)D_8022AD06[kind].v);
        if (D_80183BA4[kind] != 4 && D_8017D2B8[D_8022ACAA[kind].v] != 0 && D_8022ACCE[kind].v != 0) {
            gfxDrawClippedTex4b(gfxp, x + 0x16, y + 0x6A, 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 319, 239, D_80173050, D_80173148);
            drawNumberDigits(gfxp, x + 0x34, y + 0x6B, 8, D_8016EE00, D_8016EF48, 0, 2, 1, 8, 8, 0x50, 8, D_8022ACCE[kind].v);
        }
    }
}
