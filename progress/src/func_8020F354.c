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
typedef struct { u8 pad0[0x3E]; u16 model; u16 state; u8 pad42[0x22]; } Ob11;
typedef struct { u8 cur; u8 digits[2]; u8 slot; u8 col[8]; u8 side; u8 flags; } Entry;
extern Ob11 D_8011F2F0[];
extern Entry D_8021EEA4;
extern s16 D_8021E1A6;
extern struct { s8 t[8][34]; } D_8021E22F[];
extern u16 D_80187BF0[];
extern u16 D_8021F270[][14][8];
extern u8 D_8021B3E0[], D_8021B3E8[], D_8021B3F0[];
extern u16 *D_80203080[];
extern u8 D_801D4390[], D_801CF4C8[];
extern u8 D_8021F260[];
extern u8 D_80168C60[];
void func_801CA140(Gfx **);
void func_801CA468(Gfx **, s32);
void func_801CA494(Gfx **, s32, s32, s32, s32);
void func_8014A4C8(Gfx **, s32, s32, s32, s32);
void func_801CABF4(Gfx **, s32, u16, s32, u8 *, u16 *, s32, u8 *, s32, s32, s32, s32);
void func_8014A2D0(Gfx **, s32, s32, s32, s32, s32);
#define D(x, y, s, id) func_8014A4C8(gfxp, x, y, s, id)

void func_8020F354(Gfx **gfxp, u16 id) {
    Ob11 *obj;
    s32 i;
    s32 j;
    s32 v;
    s16 y;
    u16 *src;
    u8 r1, g1, b1;
    u8 r2, g2, b2;

    obj = &D_8011F2F0[id];
    switch (obj->state) {
    case 0:
        obj->state = 16;
        break;
    case 16:
        func_801CA140(gfxp);
        func_801CA494(gfxp, 0, 0, 0, 0xFF);
        D(1, 0x12, 0xB, 0x33);
        D(1, 0x7A, 0xB, 0x34);
        D(0x49, 0xCB, 0xB, 0x35);
        func_801CA468(gfxp, 0xFF);
        D(0x16, 0x13, 6, 0);
        D(0x1A, 0x26, 0xB, D_8021EEA4.slot + 0x47);
        D(0x17, 0x88, 6, 0x1B);
        D(0x18, 0x9A, 6, 0x1D);
        D(0x6F, 0x9A, 6, 0x1E);
        D(0x55, 0x9E, 6, 0x21);
        D(0x21, 0x9F, 6, 3);
        D(0x18, 0xB0, 6, 0x1F);
        D(0x6F, 0xB0, 6, 0x20);
        D(0x55, 0xB4, 6, 0x21);
        D(0x20, 0xB5, 6, 0x1A);
        for (i = 0; i < 13; i++) {
            D((s16)(i * 8 + 4), 0x7C, 6, 0x19);
        }
        D(0x16, 0x71, 0xB, D_8021E1A6 + 0x43);
        for (i = 0; i < 8; i++) {
            y = i * 23 + 0x12;
            D(0x78, y, 6, 4);
            D(0xCE, y, 6, 5);
            D(0x120, y, 6, 6);
            j = 0x80;
            if (D_8021EEA4.cur == i) {
                j = obj->model == 0x10 ? 0xFF : 0x80;
            }
            func_801CA494(gfxp, (u16)j, (u16)j, (u16)j, 0xFF);
            y = i * 23 + 0x13;
            D(0x8F, y, 6, D_8021B3E0[i]);
            func_801CA468(gfxp, 0xFF);
            D(0x7B, y, 6, D_8021B3E8[i]);
            v = (D_8021E22F + D_8021EEA4.slot)->t[i][D_8021EEA4.col[i] + 2];
            if (i == 0) {
                for (j = 0; j < 8; j++) {
                    D_80187BF0[j] = D_8021F270[D_8021EEA4.slot][v][j];
                }
            } else {
                j = 0x87;
                if (v != 0x5A) {
                    j = D_8021B3F0[i] + v;
                }
                src = D_80203080[j];
                j = 0;
                do {
                    D_80187BF0[j] = src[j];
                } while (src[j++] != 0xFFFF);
            }
            D_80187BF0[8] = 0xFFFF;
            func_801CABF4(gfxp, 0xD5, i * 23 + 0x16, 0xA, D_801D4390, D_80187BF0, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        }
        r1 = 0x80;
        g1 = 0x80;
        b1 = 0x80;
        r2 = 0x80;
        g2 = 0x80;
        b2 = 0x80;
        if (obj->model == 0x20) {
            if (D_8021EEA4.side == 0) {
                r1 = D_8021F260[0];
                g1 = D_8021F260[1];
                b1 = D_8021F260[2];
            } else {
                r2 = D_8021F260[0];
                g2 = D_8021F260[1];
                b2 = D_8021F260[2];
            }
        }
        func_801CA494(gfxp, r1, g1, b1, 0xFF);
        D(0x55, 0xCD, 6, 0x17);
        func_801CA494(gfxp, r2, g2, b2, 0xFF);
        D(0xA3, 0xCD, 6, 0x18);
        func_801CA468(gfxp, 0xFF);
        if (obj->model == 0x10) {
            func_801CA494(gfxp, D_8021F260[0], D_8021F260[1], D_8021F260[2], 0xFF);
            if ((D_8021EEA4.flags >> 6) & 1) {
                D(0x124, D_8021EEA4.cur * 23 + 0x13, 6, 2);
            }
            if ((D_8021EEA4.flags >> 6) & 2) {
                D(0xCB, D_8021EEA4.cur * 23 + 0x13, 6, 1);
            }
            func_801CA468(gfxp, 0xFF);
        }
        if (D_8021E1A6 != 3) {
            func_8014A2D0(gfxp, 0x56, 0x86, D_80168C60[D_8021E1A6], 2, 0);
        } else {
            D(0x5E, 0x8C, 6, 0x22);
        }
        func_8014A2D0(gfxp, 0x5C, 0xA0, D_8021EEA4.digits[0], 2, 1);
        func_8014A2D0(gfxp, 0x5C, 0xB6, D_8021EEA4.digits[1], 2, 1);
        break;
    }
}
