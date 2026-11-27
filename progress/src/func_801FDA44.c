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

typedef struct { u8 f0; u8 f1; u8 pad2[4]; s16 f6; u8 f8; u8 f9; u8 fA; u8 fB; u8 fC; u8 fD; u8 fE; u8 padF[0x0D]; } Rec;
extern s32 D_80202624;
extern s32 D_80203AA8;
extern u16 D_80203AB6;
extern u16 D_80203ACE;
extern u8 D_80203AAD;
extern s32 D_80203AC4;
extern s16 D_802038DE;
extern s16 D_802038E4;
extern Rec D_802038E8[];
extern u8 D_801D4FC0[];
typedef struct { u8 *p; } Name; extern Name D_80202580[];
extern u8 D_80203744[], D_80203760[], D_8020376C[], D_80203774[], D_8020377C[], D_80203784[], D_8020378C[], D_80203794[], D_8020379C[], D_802037A4[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, s32);
void func_801CB74C();
void func_801CBF48();
#define W(w0v, w1v) gDma((*gfxp)++, w0v, w1v)
#define gDPSetFillColor(pkt, c) gDma(pkt, _S(0xf7, 24, 8), c)
#define gDPFillRectangle(pkt, ulx, uly, lrx, lry) gDma(pkt, _S(0xf6, 24, 8) | _S(lrx, 14, 10) | _S(lry, 2, 10), _S(ulx, 14, 10) | _S(uly, 2, 10))
#define GPACK(r, g, b, a) ((((r) << 8) & 0xf800) | (((g) << 3) & 0x7c0) | (((b) >> 2) & 0x3e) | ((a) & 0x1))

void func_801FDA44(Gfx **gfxp) {
    u16 i;
    u16 row;
    u16 y;
    u16 x;
    u32 t;
    u32 g0;
    u32 b0;
    u32 r1;
    u32 g1;
    u32 b1;

    D_80202624++;
    gDPPipeSync((*gfxp)++);
    W(0xBA001402, 0x300000);
    gDPSetFillColor((*gfxp)++, 0x00210021);
    switch (D_80203AA8) {
    case 0:
        gDPFillRectangle((*gfxp)++, 40, 56, 255, 95);
        break;
    case 1:
        gDPFillRectangle((*gfxp)++, 40, 104, 271, 191);
        break;
    }
    gDPSetFillColor((*gfxp)++, 0x80218021);
    for (i = 0; i < 5; i++) {
        row = D_80203AB6 + i;
        if (row < 16) {
            if (D_802038E8[row].fC != 0) {
                W(_S(0xf6, 24, 8) | _S(i * 40 + 111, 14, 10) | 0x27C, _S(i * 40 + 88, 14, 10) | 0x260);
            }
            if (D_802038E8[row].fB != 0) {
                W(_S(0xf6, 24, 8) | _S(i * 40 + 111, 14, 10) | 0xB5C, _S(i * 40 + 88, 14, 10) | 0x280);
            }
            if (D_802038E8[row].fA != 0) {
                W(_S(0xf6, 24, 8) | _S(i * 40 + 111, 14, 10) | 0x2BC, _S(i * 40 + 88, 14, 10) | 0x2A0);
            }
            if (D_802038E8[row].fD != 0) {
                W(_S(0xf6, 24, 8) | _S(i * 40 + 111, 14, 10) | 0x2DC, _S(i * 40 + 88, 14, 10) | 0x2C0);
            }
            if (D_802038E8[row].fE != 0) {
                W(_S(0xf6, 24, 8) | _S(i * 40 + 111, 14, 10) | 0x2FC, _S(i * 40 + 88, 14, 10) | 0x2E0);
            }
        }
    }
    gDPPipeSync((*gfxp)++);
    t = D_80202624 * 2;
    g0 = t + 0x20;
    b0 = t + 0x40;
    r1 = t + 0x60;
    g1 = t - 0x80;
    b1 = t - 0x60;
    gDPSetFillColor((*gfxp)++, (GPACK(t & 0x7F, g0 & 0x7F, b0 & 0x7F, 1) << 16) | GPACK(r1 & 0x7F, g1 & 0x7F, b1 & 0x7F, 1));
    gDPFillRectangle((*gfxp)++, 88, (D_80203AAD + 19) * 8, 111, D_80203AAD * 8 + 159);
    gDPPipeSync((*gfxp)++);
    gfxSetup2DState(gfxp);
    gfxSetPrimAlpha(gfxp, 0xFF);
    if (D_80202624 & 0x10) {
        func_801CB74C(gfxp, 0x38, 0x28, 8, D_801D4FC0, D_80203744);
    }
    func_801CB74C(gfxp, 0x28, 0x38, 8, D_801D4FC0, D_80203760);
    for (i = 0; i < 5; i++) {
        row = i + D_80203ACE;
        if (row < 26) {
            y = (i + 7) * 8;
            func_801CBF48(gfxp, 0x88, y, 8, D_801D4FC0, 2, (s16)row);
            func_801CB74C(gfxp, 0xA0, y, 8, D_801D4FC0, D_80202580[row].p);
        }
    }
    func_801CB74C(gfxp, 0x28, 0x68, 8, D_801D4FC0, D_80203760);
    if (D_80203AC4 != -1) {
        func_801CBF48(gfxp, 0x88, 0x68, 8, D_801D4FC0, 2, (s16)D_80203AC4);
        func_801CB74C(gfxp, 0xA0, 0x68, 8, D_801D4FC0, D_80202580[D_80203AC4].p);
    }
    func_801CB74C(gfxp, 0x28, 0x78, 8, D_801D4FC0, D_8020376C);
    func_801CBF48(gfxp, 0x70, 0x78, 8, D_801D4FC0, 5, D_802038DE);
    func_801CB74C(gfxp, 0x28, 0x80, 8, D_801D4FC0, D_80203774);
    func_801CBF48(gfxp, 0x70, 0x80, 8, D_801D4FC0, 5, D_802038E4);
    func_801CB74C(gfxp, 0x28, 0x90, 8, D_801D4FC0, D_8020377C);
    func_801CB74C(gfxp, 0x28, 0x98, 8, D_801D4FC0, D_80203784);
    func_801CB74C(gfxp, 0x28, 0xA0, 8, D_801D4FC0, D_8020378C);
    func_801CB74C(gfxp, 0x28, 0xA8, 8, D_801D4FC0, D_80203794);
    func_801CB74C(gfxp, 0x28, 0xB0, 8, D_801D4FC0, D_8020379C);
    func_801CB74C(gfxp, 0x28, 0xB8, 8, D_801D4FC0, D_802037A4);
    for (i = 0; i < 5; i++) {
        row = i + D_80203AB6;
        if (row < 16) {
            x = i * 40 + 0x48;
            func_801CBF48(gfxp, x, 0x90, 8, D_801D4FC0, 5, (s16)row);
            func_801CBF48(gfxp, x, 0x98, 8, D_801D4FC0, 5, D_802038E8[row].f6);
            func_801CBF48(gfxp, x, 0xA0, 8, D_801D4FC0, 5, D_802038E8[row].f1);
            func_801CBF48(gfxp, x, 0xA8, 8, D_801D4FC0, 5, D_802038E8[row].f0);
            func_801CBF48(gfxp, x, 0xB0, 8, D_801D4FC0, 5, D_802038E8[row].f8);
            func_801CBF48(gfxp, x, 0xB8, 8, D_801D4FC0, 5, D_802038E8[row].f9);
        }
    }
}
