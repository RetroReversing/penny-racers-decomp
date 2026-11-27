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
typedef struct { u8 kind; u8 pad1[0xB]; u8 alpha; u8 padD[0x31]; u16 model; u8 pad40[0x24]; } Ob12;
typedef struct { u8 v; u8 pad[4]; } R5;
extern Ob12 D_8011F2F0[];
extern u16 hudSlotIndex, D_801C7078;
extern u8 D_801C6B50;
extern u16 D_801C6BE0[];
extern u8 *trackInfo;
extern u8 D_801CA130;
extern R5 glyphCode[];
extern R5 glyphLine[];
extern u8 trackPointEntryCount;
extern u16 *D_801C5B3C[];
extern u16 *D_801C586C[];
extern u8 D_801D4390[], D_801CF4C8[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, s32);
void gfxDrawSprite(Gfx **, s32, s32, s32, s32);
void gfxDrawText(Gfx **, s32, s32, s32, u8 *, u16 *, s32, u8 *, s32, s32, s32, s32);
#define D(x, y, id) gfxDrawSprite(gfxp, x, y, 0xD, id)
#define S(x, y, str) gfxDrawText(gfxp, x, y, 0xA, D_801D4390, str, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC)

void func_801B42C8(Gfx **gfxp, u16 id) {
    u8 i;
    u8 j;
    s8 k;
    s32 t;
    u8 h;
    u8 m;
    u8 o;

    gfxSetup2DState(gfxp);
    for (i = 0; i < 16; i++) {
        for (j = 0; j < 2; j++) {
            D(j * 32 + 0xF0, (s16)(i * 16), 2);
        }
    }
    if (D_8011F2F0[hudSlotIndex].model == 0xD || D_8011F2F0[hudSlotIndex].model == 0x14) {
        D_801C6B50 = D_8011F2F0[hudSlotIndex].kind;
    } else {
        D_801C6B50 = D_8011F2F0[hudSlotIndex].model;
    }
    if ((D_801C6B50 >= 4 && D_801C6B50 <= 5) || (D_801C6B50 >= 6 && D_801C6B50 <= 7) || (D_801C6B50 >= 8 && D_801C6B50 <= 9) || (D_801C6B50 >= 10 && D_801C6B50 <= 11) || D_801C6B50 == 12) {
        gfxSetPrimAlpha(gfxp, D_8011F2F0[id].alpha);
        D(0xF1, 0xC, 3);
        gfxSetPrimAlpha(gfxp, 0xFF);
    } else if (D_801C6B50 >= 0x11 && D_801C6B50 <= 0x12) {
        gfxSetPrimAlpha(gfxp, D_8011F2F0[id].alpha);
        D(0xF1, 0x17, 5);
        gfxSetPrimAlpha(gfxp, 0xFF);
    } else if ((D_801C6B50 >= 0xE && D_801C6B50 <= 0xF) || D_801C6B50 == 0x10 || D_801C6B50 == 0x13) {
        gfxSetPrimAlpha(gfxp, D_8011F2F0[id].alpha);
        D(0xF1, 0xC, 4);
        gfxSetPrimAlpha(gfxp, 0xFF);
        if (D_801C6B50 >= 0xF) {
            D(0xF3, 0x3B, 0x15);
            D(0xF1, 0x45, 0x13);
            D(0xF2, 0x57, 6);
            D(0x10E, 0x59, 0x14);
            if (D_801C6BE0[D_801C7078] != 0xFFFF) {
                if (trackInfo[0] == 3) {
                    k = glyphCode[D_801CA130].v;
                } else {
                    k = glyphCode[D_801CA130].v - 0x2E;
                }
                if ((u8)k < 10) {
                    S(0xF8, 0x46, D_801C5B3C[k]);
                } else if ((u8)(k - 10) < 0x20) {
                    S(0xF3, 0x46, D_801C5B3C[k]);
                } else if ((u8)(k - 0x2A) < 4) {
                    S(0xFD, 0x46, D_801C5B3C[k]);
                }
                S(0x11A, 0x5A, D_801C586C[glyphLine[D_801CA130].v / 60]);
            }
        }
    }
    D(0xF2, 0x73, 0x24);
    D(0xF2, 0x6B, 7);
    D(0x10E, 0x6D, 0x14);
    t = 200 - trackPointEntryCount;
    h = t / 100;
    m = t % 100 / 10;
    o = t % 10;
    if (h != 0) {
        S(0x110, 0x6E, D_801C586C[h]);
    }
    if (h != 0 || m != 0) {
        S(0x11A, 0x6E, D_801C586C[m]);
    }
    S(0x124, 0x6E, D_801C586C[o]);
    if (trackInfo[1] == 5) {
        D(0xF7, 0x7F, 0);
    } else {
        D(0xF7, 0x7F, 0x25);
        D(0xF8, 0x80, 0x26);
        D(0xF7, 0x8C, 1);
    }
    D(0xF3, 0xAC, 0x12);
    D(0xFC, 0xAD, 0x23);
    D(0xF3, 0xB6, 0x16);
}
