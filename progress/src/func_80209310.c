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
typedef struct { u8 kind; u8 pad1[0x3F]; u16 state; u8 pad42[0x22]; } Ob8;
typedef struct { s16 x; s16 y; s16 id; } Pos3;
typedef struct { u16 x; u16 y; } Pos2;
extern Ob8 D_8011F2F0[];
extern s16 D_8021E1A2[];
extern u16 D_8021AFE6;
extern Pos3 D_8021B110[];
extern s32 D_8021B128;
extern u8 D_8021B014[];
extern Pos2 D_8021B1A4[];
extern u8 D_8021E19E;
extern s32 D_8021B1A0;
extern s16 D_8021E18C;
extern s32 D_8021B12C[];
void func_80209B90(u16);
void gfxSetup2DState(Gfx **);
void gfxSetPrimColor(Gfx **, s32, s32, s32, s32);
void gfxDrawSprite(Gfx **, s32, s32, s32, s32);
u8 func_80148230(void);

void func_80209310(Gfx **gfxp, u16 id) {
    s32 i;
    s32 xo;
    s32 yo;
    s32 ty;

    func_80209B90(id);
    switch (D_8011F2F0[id].state) {
    case 2:
        do { } while (0);
        gfxSetup2DState(gfxp);
        gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
        if (D_8021E1A2[0] != 0) {
            gfxDrawSprite(gfxp, D_8021B110[D_8011F2F0[id].kind].x, (s16)(D_8021B110[D_8011F2F0[id].kind].y + D_8021AFE6), 0xB, D_8021B110[D_8011F2F0[id].kind].id);
        }
        if (D_8021E1A2[0] == 0) {
            xo = 0x55;
            yo = 0x2A;
            if (D_8021B128 == 1) {
                xo = 7;
            }
        } else {
            xo = 0;
            yo = 0;
        }
        for (i = 0; i <= D_8021E1A2[0]; i++) {
            if (D_8021B014[i] == 1) {
                gfxDrawSprite(gfxp, (s16)(D_8021B1A4[i].x + xo), (s16)(D_8021B1A4[i].y + yo + D_8021AFE6), 0xB, 0x56);
            }
        }
        if (D_8021B128 == 1 && D_8011F2F0[id].kind == D_8021E1A2[0]) {
            if (D_8011F2F0[id].kind == 0) {
                xo = 0x34;
                yo = 0x14;
            } else {
                xo = 0;
                yo = 0;
            }
            gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xC8);
            if (func_80148230() == 0) {
                gfxDrawSprite(gfxp, 0x8C, 0x68, 0xB, 0x59);
                gfxDrawSprite(gfxp, 0x8C, 0xAB, 0xB, 0x5A);
                gfxDrawSprite(gfxp, 0x114, 0x68, 0xB, 0x5B);
                gfxDrawSprite(gfxp, 0x114, 0xAB, 0xB, 0x5C);
            } else {
                gfxDrawSprite(gfxp, xo + 0x58, yo + 0x59, 0xB, 0x4B);
                gfxDrawSprite(gfxp, xo + 0x58, yo + 0x91, 0xB, 0x4C);
                gfxDrawSprite(gfxp, xo + 0xE0, yo + 0x59, 0xB, 0x4D);
                gfxDrawSprite(gfxp, xo + 0xE0, yo + 0x91, 0xB, 0x4E);
            }
            gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, D_8021E19E);
            if (D_8021B1A0 > 0) {
                gfxDrawSprite(gfxp, xo + 0x5B, yo + 0x62, 0xB, 0x23);
                gfxDrawSprite(gfxp, xo + 0xD2, yo + 0x62, 0xB, 0x24);
                gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
                gfxDrawSprite(gfxp, xo + 0x71, yo + 0x65, 0xB, 0x26);
            } else if (func_80148230() == 0 && D_8021E18C < 9) {
                ty = yo + 0x58;
                gfxDrawSprite(gfxp, xo + 0x5B, (s16)(D_8021B12C[0] * 20 + ty), 0xB, 0x23);
                gfxDrawSprite(gfxp, xo + 0xD2, (s16)(D_8021B12C[0] * 20 + ty), 0xB, 0x24);
                if (D_8021B12C[0] == 0) {
                    gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
                    gfxDrawSprite(gfxp, 0xA4, 0x6F, 0xB, 0x25);
                    gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF);
                    gfxDrawSprite(gfxp, 0xA4, 0x83, 0xB, 0x26);
                    gfxDrawSprite(gfxp, 0xA4, 0x97, 0xB, 9);
                } else if (D_8021B12C[0] == 1) {
                    gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF);
                    gfxDrawSprite(gfxp, 0xA4, 0x97, 0xB, 9);
                    gfxDrawSprite(gfxp, 0xA4, 0x6F, 0xB, 0x25);
                    gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
                    gfxDrawSprite(gfxp, 0xA4, 0x83, 0xB, 0x26);
                } else if (D_8021B12C[0] == 2) {
                    gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF);
                    gfxDrawSprite(gfxp, 0xA4, 0x6F, 0xB, 0x25);
                    gfxDrawSprite(gfxp, 0xA4, 0x83, 0xB, 0x26);
                    gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
                    gfxDrawSprite(gfxp, 0xA4, 0x97, 0xB, 9);
                }
            } else {
                gfxDrawSprite(gfxp, xo + 0x5B, (s16)(D_8021B12C[0] * 20 + (ty = yo + 0x62)), 0xB, 0x23);
                gfxDrawSprite(gfxp, xo + 0xD2, (s16)(D_8021B12C[0] * 20 + ty), 0xB, 0x24);
                if (D_8021B12C[0] == 0) {
                    gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
                    gfxDrawSprite(gfxp, xo + 0x71, yo + 0x65, 0xB, 0x25);
                    gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF);
                    gfxDrawSprite(gfxp, xo + 0x71, yo + 0x7A, 0xB, 0x26);
                } else {
                    gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF);
                    gfxDrawSprite(gfxp, xo + 0x71, yo + 0x65, 0xB, 0x25);
                    gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
                    gfxDrawSprite(gfxp, xo + 0x71, yo + 0x7A, 0xB, 0x26);
                }
            }
        }
        break;
    case 0:
    default:
        D_8011F2F0[id].state++;
        break;
    }
}
