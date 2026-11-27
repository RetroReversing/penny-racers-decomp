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
typedef struct { s16 id; u8 pad2[0xA]; f32 f; u16 name; s16 h; u8 b; u8 c; u8 pad16[0xC]; u8 d; u8 pad23[9]; } Rec;
typedef struct { u8 *str; u8 pad4[8]; } Str;
extern s32 D_80202628;
extern u8 D_801D4FC0[];
extern u8 D_802037AC[], D_802037C4[], D_802037D8[], D_802037EC[], D_802037FC[], D_8020380C[], D_80203820[], D_80203838[], D_8020377C[], D_80203844[], D_8020378C[], D_80203794[], D_8020384C[], D_8020379C[], D_802037A4[], D_80203854[];
extern s16 D_80203ABA;
extern s32 D_80203AB8;
extern u8 D_80203ACA;
extern u16 D_80203ABE;
extern Str D_801D75E0[];
extern Str D_802025E8[];
extern Rec D_801D7DF4[];
void func_801CA140(Gfx **);
void func_801CA468(Gfx **, s32);
void func_801CB74C(Gfx **, s32, u16, s32, u8 *, u8 *);
void func_801CBF48(Gfx **, u16, u16, u16, u8 *, u8, s16);
#define T(x, y, s) func_801CB74C(gfxp, x, y, 8, D_801D4FC0, s)

void func_801FE364(Gfx **gfxp) {
    u16 i;
    u16 j;

    D_80202628++;
    func_801CA140(gfxp);
    func_801CA468(gfxp, 0xFF);
    if (D_80202628 & 0x80) {
        T(0x3C, 0xA, D_802037AC);
    }
    T(0x1E, 0x1E, D_802037C4);
    T(0x1E, 0x28, D_802037D8);
    T(0x1E, 0x32, D_802037EC);
    T(0x1E, 0x3C, D_802037FC);
    T(0x1E, 0x46, D_8020380C);
    T(0x1E, 0x50, D_80203820);
    T(0x1E, 0x64, D_80203838);
    func_801CBF48(gfxp, 0x6E, 0x64, 8, D_801D4FC0, 2, D_80203ABA);
    T(0x8C, 0x64, D_801D75E0[D_80203AB8].str);
    T(0x1E, 0x6E, D_802025E8[D_80203ACA].str);
    T(0x28, 0x8C, D_8020377C);
    T(0x28, 0x96, D_80203844);
    T(0x28, 0xA0, D_8020378C);
    T(0x28, 0xAA, D_80203794);
    T(0x28, 0xB4, D_8020384C);
    T(0x28, 0xBE, D_8020379C);
    T(0x28, 0xC8, D_802037A4);
    for (i = 0; i < 4; i++) {
        j = i + D_80203ABE;
        if (j < 8) {
            func_801CBF48(gfxp, (i + 2) * 48, 0x8C, 8, D_801D4FC0, 5, i + D_80203ABE);
            if (D_801D7DF4[j].id == -1) {
                T((u16)((i + 2) * 48), 0x96, D_80203854);
            } else {
                T((u16)((i + 2) * 48), 0x96, D_801D75E0[D_801D7DF4[j].name].str);
            }
            func_801CBF48(gfxp, (i + 2) * 48, 0xA0, 8, D_801D4FC0, 5, D_801D7DF4[j].h);
            func_801CBF48(gfxp, (i + 2) * 48, 0xAA, 8, D_801D4FC0, 5, D_801D7DF4[j].b);
            func_801CBF48(gfxp, (i + 2) * 48, 0xB4, 8, D_801D4FC0, 5, (s16)D_801D7DF4[j].f);
            func_801CBF48(gfxp, (i + 2) * 48, 0xBE, 8, D_801D4FC0, 5, D_801D7DF4[j].c);
            func_801CBF48(gfxp, (i + 2) * 48, 0xC8, 8, D_801D4FC0, 5, D_801D7DF4[j].d);
        }
    }
}
