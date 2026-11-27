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
typedef struct { u8 kind; u8 pad1[0x1B]; f32 y; u8 pad20[0x14]; f32 fade; u8 pad38[8]; u16 state; u8 pad42[0x22]; } Ob13;
typedef struct { u16 timer; u8 alpha; } Timer;
typedef struct { u8 pad0[0x6E]; u16 name[14][9]; u8 pad[14]; } Car;
extern Ob13 D_8011F2F0[];
extern Timer D_8021E19C;
extern u16 D_80190CA4;
extern u8 D_802D92A0[], D_802D6898[], D_801D4390[], D_801CF4C8[];
extern u16 *D_80203408[];
extern u8 D_8018BC35[];
extern u16 D_80189C9E[][6];
extern u16 *D_80203080[];
extern Car D_800DA260[];
extern s8 D_80189C9D[];
extern u8 D_80168CEC[][3];
void func_801CA140(Gfx **);
void func_801CA468(Gfx **, s32);
void func_801CA494(Gfx **, s32, s32, s32, s32);
void func_8014A4C8(Gfx **, s32, s32, s32, s32);
void func_801CABF4(Gfx **, s32, u16, s32, u8 *, u16 *, s32, u8 *, s32, s32, s32, s32);
u8 func_801497AC(u8);
u16 func_80146E4C(u16);
#define D(x, y, s, id) func_8014A4C8(gfxp, x, y, s, id)
#define T(x, y, str) func_801CABF4(gfxp, x, y, 0xF, D_802D92A0, str, 0, D_802D6898, 14, 16, 224, 96)

void func_801478F0(Gfx **gfxp, u16 id) {
    Ob13 *obj;
    s32 i;
    s32 j;
    s32 n;
    u16 *str;
    u8 c[3];

    obj = &D_8011F2F0[id];
    func_801CA140(gfxp);
    switch (obj->state) {
    case 0:
        break;
    case 0x10:
    case 0x20:
        func_801CA494(gfxp, 0, 0, 0, D_8021E19C.timer);
        for (i = 0; i < 6; i++) {
            D(0x34, (s16)(i * 22 + 0x39), 0xB, 0x5D);
        }
        func_801CA468(gfxp, D_8021E19C.timer);
        func_801CA494(gfxp, D_80190CA4, D_80190CA4, D_80190CA4, D_8021E19C.timer);
        T(0x5F, 0x26, D_80203408[0]);
        T(0xBA, 0x26, D_80203408[1]);
        for (i = 0; i < 6; i++) {
            n = func_801497AC(D_8018BC35[i]);
            if (n != 0xFF) {
                D(0x2E, (s16)(i * 22 + 0x35), 7, n);
            }
        }
        for (i = 0; i < 6; i++) {
            if (D_8018BC35[i] != 0xFF) {
                for (j = 0; j < 2; j++) {
                    if (D_80189C9E[j][D_8018BC35[i]] & 0xF00) {
                        n = func_80146E4C(D_80189C9E[j][D_8018BC35[i]]);
                        if (n == 10 || n == 10) { n = 10; }
                        str = D_80203080[n];
                    } else {
                        n = D_80189C9E[j][D_8018BC35[i]] & 0x1F;
                        str = D_800DA260[D_8018BC35[i]].name[n];
                    }
                    func_801CABF4(gfxp, (u16)(j * 91 + 0x5F), i * 22 + 0x3B, 0xA, D_801D4390, str, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
                }
            }
        }
        func_801CA494(gfxp, 0xF6, 0x70, 0x33, D_8021E19C.timer);
        T(0x3D, (u32)D_8011F2F0[id].y, D_80203408[2]);
        func_801CA468(gfxp, 0xFF);
        if (D_8011F2F0[id].state == 0x20) {
            i = D_8011F2F0[id].fade;
            if (i > 0xC0) {
                i = 0xC0;
            }
            func_801CA468(gfxp, (u16)i);
            D(0x58, 0x5C, 0xB, 0x4B);
            D(0x58, 0x94, 0xB, 0x4C);
            D(0xE0, 0x5C, 0xB, 0x4D);
            D(0xE0, 0x94, 0xB, 0x4E);
            if (i == 0xC0) {
                func_801CA468(gfxp, D_8021E19C.alpha);
                D(0x5B, D_80189C9D[0] * 20 + 0x66, 0xB, 0x23);
                D(0xD2, D_80189C9D[0] * 20 + 0x66, 0xB, 0x24);
            }
            i = 0xFF;
            n = 0x80;
            if (D_80189C9D[0] != 0) {
                i = 0x80;
                n = 0xFF;
            }
            func_801CA494(gfxp, (u16)i, (u16)i, (u16)i, (u16)(u32)D_8011F2F0[id].fade);
            D(0x71, 0x68, 0xB, 0x27);
            func_801CA494(gfxp, (u16)n, (u16)n, (u16)n, (u16)(u32)D_8011F2F0[id].fade);
            D(0x71, 0x7B, 0xB, 0x26);
            func_801CA468(gfxp, 0xFF);
        }
        break;
    case 0x30:
        i = D_8021E19C.timer;
        if (i > 0xC0) {
            i = 0xC0;
        }
        func_801CA468(gfxp, (u16)i);
        D(0x58, 0x5C, 0xB, 0x59);
        D(0x58, 0x9F, 0xB, 0x5A);
        D(0xE0, 0x5C, 0xB, 0x5B);
        D(0xE0, 0x9F, 0xB, 0x5C);
        c[0] = 0x80;
        c[1] = 0x80;
        c[2] = 0x80;
        c[D_80189C9D[0]] = 0xFF;
        for (i = 0; i < 3; i++) {
            func_801CA494(gfxp, c[i], c[i], c[i], D_8021E19C.timer);
            D(D_80168CEC[i][0], D_80168CEC[i][1], 0xB, D_80168CEC[i][2]);
        }
        if (D_8021E19C.timer == 0xFF) {
            func_801CA468(gfxp, D_8021E19C.alpha);
            D(0x5B, D_80189C9D[0] * 20 + 0x63, 0xB, 0x23);
            D(0xD2, D_80189C9D[0] * 20 + 0x63, 0xB, 0x24);
            func_801CA468(gfxp, 0xFF);
        }
        break;
    }
}
