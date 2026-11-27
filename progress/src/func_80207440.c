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
typedef struct { u8 pad0[0x40]; u16 state; u8 pad42[0x22]; } Ob14;
typedef struct { u8 alpha; u8 pad; s16 row; s16 a; s16 b; s16 c; s16 d; s16 e; s16 f; } Menu;
extern Ob14 D_8011F2F0[];
extern u8 D_8021E189;
extern Menu D_8021E19E;
extern s16 D_8021E1A0[];
extern s16 D_8021E1A2;
extern s16 D_8021E1A4;
extern s16 D_8021E1A6;
extern u8 D_802E66D8[], D_802F92E0[], D_802D92A0[], D_802D6898[];
extern u8 D_8021F260[];
extern u16 *D_8021B0D0[], *D_8021B0E0[], *D_8021B0F0[], *D_8021B0F8[], *D_8021B100[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimColor(Gfx **, s32, s32, s32, s32);
void gfxDrawClippedTex8b(Gfx **, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);
void gfxDrawSprite(Gfx **, s32, s32, s32, s32);
s32 textWidth(u16 *, s32);
void gfxDrawText(Gfx **, s32, s32, s32, u8 *, u16 *, s32, u8 *, s32, s32, s32, s32);
#define D(x, y, id) gfxDrawSprite(gfxp, x, y, 3, id)
#define T(x, y, str) gfxDrawText(gfxp, (u8)(x), y, 0xF, D_802D92A0, str, 0, D_802D6898, 14, 16, 224, 96)
#define SEL(k) \
    if (D_8021E1A0[0] == k) { gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF); } else { gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF); }
#define HI(k) \
    if (D_8021E19E.row == k) { gfxSetPrimColor(gfxp, D_8021F260[0], D_8021F260[1], D_8021F260[2], D_8021F260[3]); } else { gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF); }
#define ROW(y) \
    D(0x48, y, 5); \
    for (i = 0; i < 5; i++) { D(i * 32 + 0x50, y, 6); } \
    D(0xF0, y, 7)

void func_80207440(Gfx **gfxp, u16 id) {
    u8 i;
    s32 n;

    switch (D_8011F2F0[id].state) {
    case 0:
        D_8021E189 = 0;
        D_8011F2F0[id].state = 1;
        break;
    case 1:
        gfxSetup2DState(gfxp);
        gfxSetPrimColor(gfxp, 0x78, 0x78, 0x78, 0xFF);
        gfxDrawClippedTex8b(gfxp, 0, 0, 0, 0, 320, 240, 320, 240, 64, 32, 0, 0, 319, 239, D_802E66D8, D_802F92E0);
        gfxSetPrimColor(gfxp, 0, 0, 0, 0x64);
        gfxDrawSprite(gfxp, 0x4C, 0x4B, 0xB, 0x30);
        gfxDrawSprite(gfxp, 0x4C, 0x7B, 0xB, 0x30);
        gfxDrawSprite(gfxp, 0x4C, 0xAB, 0xB, 0x30);
        SEL(1);
        ROW(0x47);
        SEL(2);
        ROW(0x77);
        SEL(3);
        ROW(0xA7);
        gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
        D(0x7E, 0x3E, 2);
        D(0x7D, 0x6F, 3);
        D(0x7B, 0x9F, 4);
        D(0x5D, 0x22, 0);
        D(0x43, 0x24, 1);
        D(0xEA, 0x24, 1);
        switch (D_8021E19E.row) {
        case 3:
            HI(3);
            n = textWidth(D_8021B0D0[D_8021E19E.c], 0xF);
            T(n, 0xB4, D_8021B0D0[D_8021E19E.c]);
        case 2:
            HI(2);
            n = textWidth(D_8021B0F0[D_8021E19E.b], 0xF);
            if (D_8021E19E.a == 0) {
                T(n, 0x84, D_8021B0F0[D_8021E19E.b]);
            }
            n = textWidth(D_8021B0F8[D_8021E19E.b], 0xF);
            if (D_8021E19E.a == 1) {
                T(n, 0x84, D_8021B0F8[D_8021E19E.b]);
            }
            n = textWidth(D_8021B100[D_8021E19E.b], 0xF);
            if (D_8021E19E.a >= 2 && D_8021E19E.a <= 3) {
                T(n, 0x84, D_8021B100[D_8021E19E.b]);
            }
        case 1:
            HI(1);
            n = textWidth(D_8021B0E0[D_8021E19E.a], 0xF);
            T(n, 0x54, D_8021B0E0[D_8021E19E.a]);
            break;
        }
        gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, D_8021E19E.alpha);
        if ((D_8021E19E.row != 1 || D_8021E19E.d != 0) && (D_8021E1A0[0] != 2 || D_8021E1A0[1] < 2) && (D_8021E1A0[0] != 3 || D_8021E1A0[6] != 0)) {
            gfxDrawSprite(gfxp, 0x37, (s16)(D_8021E1A0[0] * 48 + 0x25), 3, 8);
            gfxDrawSprite(gfxp, 0xF9, (s16)(D_8021E1A0[0] * 48 + 0x25), 3, 9);
        }
        break;
    }
}
