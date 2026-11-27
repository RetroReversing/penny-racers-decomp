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
extern u8 D_8011F2F0[];
typedef struct { u8 kind; u8 pad1[0xB]; u8 colour; u8 padD[0xB]; f32 x; f32 y; u8 pad20[0x20]; u16 state; u8 pad42[0x22]; } Ob4;
extern Gfx *D_800DE0E4;
extern u8 D_80190CB2;
extern u8 D_801D4390[];
extern u8 D_801CF4C8[];
extern u8 spawnScript[];
extern u16 *D_8021D334[];
extern u16 *D_80203080[];
extern u8 D_8021CA80[][3];
extern u8 D_8021C994[];
extern u16 D_8018D140[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimColor(Gfx **, u8, u8, u8, s32);
void gfxDrawText(Gfx **, u16, u16, u16, u8 *, u16 *, u8, u8 *, s32, s32, s32, s32);

void func_8021A334(Gfx **gfxp, u16 id) {
    Ob4 *obj;
    u8 r;
    u8 g;
    u8 b;
    s32 chr;

    gDma(D_800DE0E4++, 0xED000000, 0x005003C0);
    r = 0;
    g = 0xFF;
    b = 0;
    obj = &((Ob4 *)D_8011F2F0)[id];
    gfxSetup2DState(gfxp);
    switch (obj->state) {
    case 0:
        obj->state = 2;
        if (D_80190CB2 != 0) {
            obj->state = 1;
        }
        break;
    case 1:
        gfxSetPrimColor(gfxp, 0, 0, 0, 0xAA);
        gfxDrawText(gfxp, (u32)(obj->x + 2.0f), (u32)(obj->y + 2.0f), 0xA, D_801D4390, D_8021D334[spawnScript[obj->kind * 2]], 0, D_801CF4C8, 10, 14, 160, 252);
        gfxSetPrimColor(gfxp, D_8021CA80[obj->colour][0], D_8021CA80[obj->colour][1], D_8021CA80[obj->colour][2], 0xFF);
        gfxDrawText(gfxp, (u32)obj->x, (u32)obj->y, 0xA, D_801D4390, D_8021D334[spawnScript[obj->kind * 2]], 0, D_801CF4C8, 10, 14, 160, 252);
        break;
    case 2:
        chr = D_8021C994[obj->kind] + 0x13;
        switch (D_8021C994[obj->kind]) {
        case 0xEF:
            r = 0xFF;
            g = 0x80;
            b = 0;
            chr = 0xB;
            break;
        case 0xEE:
            chr = 0xE5;
            break;
        case 0xED:
            chr = 0xE6;
            break;
        case 0xEC:
            chr = 0xE7;
            break;
        case 0xEB:
            chr = 0xE8;
            break;
        case 0xEA:
            chr = 0xE9;
            break;
        case 0xE9:
            chr = 0xEA;
            break;
        case 0xE8:
            chr = 0xEB;
            break;
        case 0xE7:
            chr = 0xEC;
            break;
        }
        gfxSetPrimColor(gfxp, 0, 0, 0, 0xAA);
        gfxDrawText(gfxp, (u32)(obj->x + 2.0f), (u32)(obj->y + 2.0f), 0xA, D_801D4390, D_80203080[chr], 0, D_801CF4C8, 10, 14, 160, 252);
        if (D_8021C994[obj->kind] < 0xE0) {
            r = 0xFF;
            g = 0xFF;
            b = 0xFF;
            if (D_8018D140[D_8021C994[obj->kind]] == 0) {
                r = 0x80;
                g = 0x80;
                b = 0x80;
            }
        }
        gfxSetPrimColor(gfxp, r, g, b, 0xFF);
        gfxDrawText(gfxp, (u32)obj->x, (u32)obj->y, 0xA, D_801D4390, D_80203080[chr], 0, D_801CF4C8, 10, 14, 160, 252);
        break;
    }
}
