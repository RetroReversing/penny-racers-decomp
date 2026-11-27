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
typedef struct { u8 kind; u8 pad1[0xB]; u8 alpha; u8 padD[0x33]; u16 state; u8 pad42[0x22]; } Rec;

typedef struct {
    u8 pad0[0x53A]; u16 f53A; u8 pad53C[0x55E - 0x53C]; s16 f55E; u8 pad560[3]; Time t[4]; u8 pad577[0x594 - 0x577];
    union { s16 s; u8 b[2]; } f594; u8 f596; u8 pad597[0x774 - 0x597]; f32 f774; u8 pad778[0x879 - 0x778]; u8 f879; u8 pad87A[0x8F0 - 0x87A];
} Car;
extern Rec D_8011F2F0[];
extern Big D_800DB1B8;
extern Car D_8022A770[];
extern u8 D_80126FF6, D_80189CC8;
extern u8 *D_801C7AB0;
extern u8 D_80183BA4[];
extern u8 *D_8017D2B8[], *D_8017D2F8[];
extern u8 D_80220ED8[], D_801D51C8[], D_801D5470[], D_8016ED50[], D_8016EDD8[], D_8016EE00[], D_8016EF48[], D_8016EAC8[], D_8016ED28[], D_80170A40[], D_80170D18[], D_801706A0[], D_80170828[], D_8016F680[], D_80170678[], D_80170850[], D_80170A18[];
void func_801CA140(Gfx **);
void func_801CA468(Gfx **, s32);
void func_801CAF18(Gfx **, u16, u16, u16, u8 *, u8 *, u8, s32, s32, s32, s32);
void func_801CC150(Gfx **, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);
void func_801CCE7C(Gfx **, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);
void func_801CB9EC(Gfx **, u16, u16, u16, u8 *, u8 *, u8, s32, s32, s32, s32, s32, s32, u16);
void func_800DE41C();
void func_80133F54();
void func_801341C0();

void func_80132AB0(Gfx **gfxp, u16 id) {
    s32 i;
    s32 car;
    s32 y;
    s32 n;
    Car *p;

    if (D_80126FF6 == D_800DB1B8.views - 1) {
        y = car = D_8011F2F0[id].kind;
        y *= 108;
        p = &D_8022A770[car];
        if (D_8011F2F0[id].state == 0) {
            for (i = 0; i < 2; i++) {
                D_80183BA4[i] = 1;
            }
            D_8011F2F0[id].state = 1;
        }
        gDma((*gfxp)++, 0x06000000, D_80220ED8);
        func_801CA140(gfxp);
        func_801CA468(gfxp, D_8011F2F0[id].alpha);
        if (D_80189CC8 != 3 || D_801C7AB0[1] != 6) {
            if (D_80183BA4[car] < p->f594.s && D_80183BA4[car] < 4U && p->f879 != 5) {
                func_800DE41C(0, D_8011F2F0[id].kind, 3, 0, 0x81, D_80183BA4[car], 0, func_80133F54, func_801341C0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                D_80183BA4[car] = p->f594.b[1];
            }
        }
        n = D_80183BA4[car];
        if (n != 4) {
            func_801CAF18(gfxp, 0x28, y + 0x10, 0xA, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
            func_801CAF18(gfxp, 0x40, y + 0x10, 0xB, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
            func_801CC150(gfxp, 0x5C, y + 0x12, 0, 0, 0x20, 8, 0x20, 8, 0x20, 8, 0, 0, 319, 239, D_8016ED50, D_8016EDD8);
            func_801CB9EC(gfxp, 0x77, y + 0x12, 8, D_8016EE00, D_8016EF48, 0, 1, 0, 8, 8, 0x50, 8, n);
            func_801CB9EC(gfxp, 0x18, y + 0x10, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, p->t[n].a);
            func_801CB9EC(gfxp, 0x30, y + 0x10, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, p->t[n].b);
            func_801CB9EC(gfxp, 0x48, y + 0x10, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, p->t[n].d);
        if (D_80183BA4[car] != 4) {
            if (D_800DB1B8.views == 1) {
                if (D_8017D2B8[p->f53A] != 0 && p->f55E != 0) {
                    if (D_80189CC8 != 0) {
                    if (D_80189CC8 != 3) {
                        do { } while (0);
func_801CC150(gfxp, 0x19, 0xC7, 0, 0, 0x30, 0x19, 0x30, 0x19, 0x30, 0x19, 0, 0, 319, 239, D_8016EAC8, D_8016ED28);
                        func_801CCE7C(gfxp, 0x21, 0xBD, 0, 0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0, 0, 319, 239, D_8017D2B8[p->f53A], D_8017D2F8[p->f53A]);
                        if (p->f55E != -1) {
                            func_801CB9EC(gfxp, 0x37, 0xD4, 8, D_8016EE00, D_8016EF48, 0, 2, 1, 8, 8, 0x50, 8, p->f55E);
                        }
                    }
                    }
                }
            } else {
                if (D_8017D2B8[p->f53A] != 0 && p->f55E != 0) {
                    func_801CC150(gfxp, 0x19, y + 0x5B, 0, 0, 0x30, 0x19, 0x30, 0x19, 0x30, 0x19, 0, 0, 319, 239, D_8016EAC8, D_8016ED28);
                    func_801CCE7C(gfxp, 0x21, y + 0x51, 0, 0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0, 0, 319, 239, D_8017D2B8[p->f53A], D_8017D2F8[p->f53A]);
                    if (p->f55E != -1) {
                        func_801CB9EC(gfxp, 0x37, y + 0x68, 8, D_8016EE00, D_8016EF48, 0, 2, 1, 8, 8, 0x50, 8, p->f55E);
                    }
                }
            }
        }
        }
        if (D_80189CC8 == 0 || (D_80189CC8 == 3 && D_800DB1B8.views == 1)) {
            func_801CC150(gfxp, 0xF8, 0x12, 0, 0, 0x30, 0x1E, 0x30, 0x1E, 0x30, 0x1E, 0, 0, 319, 239, D_80170A40, D_80170D18);
        } else if (car == 1 && D_80189CC8 != 3) {
            func_801CC150(gfxp, 0xD8, 0xD2, 0, 0, 0x40, 0xC, 0x40, 0xC, 0x40, 0xC, 0, 0, 319, 239, D_801706A0, D_80170828);
            func_801CB9EC(gfxp, 0x10B, 0xBE, 0x1B, D_8016F680, D_80170678, 0, 1, 0, 0x1A, 0x1E, 0x110, 0x1E, (s8)p->f596);
        } else {
            func_801CC150(gfxp, 0xD8, y + 0x12, 0, 0, 0x40, 0xC, 0x40, 0xC, 0x40, 0xC, 0, 0, 319, 239, D_801706A0, D_80170828);
            func_801CB9EC(gfxp, 0x10B, y + 0x14, 0x1B, D_8016F680, D_80170678, 0, 1, 0, 0x1A, 0x1E, 0x110, 0x1E, (s8)p->f596);
        }
        if (D_800DB1B8.views == 1) {
            func_801CC150(gfxp, 0xEC, 0xD2, 0, 0, 0x40, 0xE, 0x40, 0xE, 0x40, 0xE, 0, 0, 319, 239, D_80170850, D_80170A18);
            func_801CB9EC(gfxp, 0xEF, 0xD3, 9, D_801D51C8, D_801D5470, 0, 3, 1, 8, 0xC, 0x70, 0xC, (u32)p->f774);
        } else if (D_80189CC8 == 3) {
            func_801CC150(gfxp, 0xEC, y + 0x66, 0, 0, 0x40, 0xE, 0x40, 0xE, 0x40, 0xE, 0, 0, 319, 239, D_80170850, D_80170A18);
            func_801CB9EC(gfxp, 0xEF, y + 0x67, 9, D_801D51C8, D_801D5470, 0, 3, 1, 8, 0xC, 0x70, 0xC, (u32)p->f774);
        }
    }
}
