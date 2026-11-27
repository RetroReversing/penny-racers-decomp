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
typedef struct { u8 pad0[0xA]; u16 x; u16 y; } Panel;
typedef struct { u8 kind; u8 pad1[0xB]; u8 alpha; u8 padD[0xB]; f32 x; f32 y; f32 z; u8 pad24[0x3C]; Panel *panel; } Ob15;
typedef struct { u8 pad[0x2108]; s16 views; } Big;
typedef struct { u8 pad0[2]; u16 obj; u8 pad4[0x875]; u8 mode; u8 pad87A[0x8F0 - 0x87A]; } Player;
typedef struct { s32 v; u8 pad[0x8EC]; } PS32;
typedef struct { s16 v; u8 pad[0x8EE]; } PS16;
typedef struct { u8 pad[0x20]; u16 course; } Race;
extern Ob15 D_8011F2F0[];
extern Big D_800DB1B8;
extern u8 D_80126FF6;
extern Player D_8022A770[];
extern PS32 D_8022AD0C[];
extern PS16 D_8022AD04[];
extern Race D_8006FAF0;
extern u8 D_80220ED8[];
extern u8 D_8018BC33, D_80189CC8;
extern u16 D_80189C96;
extern u8 *D_80182DC8[], *D_80182DF0[];
extern u8 D_8016EFF0[], D_8016F658[], D_80175278[], D_8016EE00[];
extern u8 *D_80167E40[], *D_80167E50[];
extern u8 D_8018D398[];
extern u16 D_80167F08[], D_80167F1C[];
extern f32 D_80167F30[];
void func_801CA140(Gfx **);
void func_801CA468(Gfx **, s32);
void func_801CC150(Gfx **, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u8 *, u8 *);
void func_801CB9EC(Gfx **, u16, u16, s32, u8 *, u8 *, s32, s32, s32, s32, s32, s32, s32, u16);

#define DOTS(base) \
    for (i = 5; i >= 0; i--) { \
        q = &D_8022A770[i]; \
        if (q->obj != 0xFFFF) { \
            switch (D_8006FAF0.course) { \
            case 1: \
                py = D_8011F2F0[q->obj].x * D_80167F30[D_8006FAF0.course]; \
                px = -D_8011F2F0[q->obj].z * D_80167F30[D_8006FAF0.course]; \
                break; \
            case 2: \
            case 3: \
                py = -D_8011F2F0[q->obj].x * D_80167F30[D_8006FAF0.course]; \
                px = D_8011F2F0[q->obj].z * D_80167F30[D_8006FAF0.course]; \
                break; \
            case 7: \
            case 8: \
                py = D_8011F2F0[q->obj].x * D_80167F30[D_8006FAF0.course]; \
                px = -D_8011F2F0[q->obj].z; \
                px *= D_80167F30[D_8006FAF0.course]; \
                break; \
            case 4: \
            case 5: \
            case 6: \
            case 9: \
                px = D_8011F2F0[q->obj].x * D_80167F30[D_8006FAF0.course]; \
                py = D_8011F2F0[q->obj].z * D_80167F30[D_8006FAF0.course]; \
                break; \
            } \
            func_801CB9EC(gfxp, (u32)px + (u16)(D_80167F08[D_8006FAF0.course] + 0x108), (u32)py + (u16)(D_80167F1C[D_8006FAF0.course] + base), 8, D_80175278, D_80167E40[D_8018D398[i]], 0, 1, 0, 8, 8, 0x10, 8, 0); \
        } \
    }

void func_80132004(Gfx **gfxp, u16 id) {
    Player *player;
    Player *q;
    s32 i;
    s32 t;
    s32 t2;
    f32 px;
    f32 py;

    if (D_80126FF6 == D_800DB1B8.views - 1) {
        player = &D_8022A770[D_8011F2F0[id].kind];
        gDma((*gfxp)++, 0x06000000, D_80220ED8);
        func_801CA140(gfxp);
        func_801CA468(gfxp, D_8011F2F0[id].alpha);
        if (D_800DB1B8.views == 1 && player->mode != D_800DB1B8.views) {
            if (D_8018BC33 == 0) {
                func_801CC150(gfxp, 0xEC, 0x9E, 0, 0, 64, 51, 64, 51, 64, 51, 0, 0, 319, 239, D_8016EFF0, D_8016F658);
            } else if (D_80182DC8[D_8006FAF0.course] != 0) {
                func_801CC150(gfxp, 0xEC, 0x91, 0, 0, 64, 64, 64, 64, 64, 64, 0, 0, 319, 239, D_80182DC8[D_8006FAF0.course], D_80182DF0[D_8006FAF0.course]);
                DOTS(0xAD);
            }
        }
        if (D_800DB1B8.views == 2 && D_80189CC8 != 3) {
            if (D_80182DC8[D_8006FAF0.course] != 0) {
                func_801CC150(gfxp, 0xEC, 0x58, 0, 0, 64, 64, 64, 64, 64, 64, 0, 0, 319, 239, D_80182DC8[D_8006FAF0.course], D_80182DF0[D_8006FAF0.course]);
                DOTS(0x74);
            }
        }
        if (D_80189CC8 == 3) {
            py = D_8011F2F0[D_80189C96].panel->y - 2;
            for (i = 0; i < D_800DB1B8.views; i++) {
                t = D_8022AD0C[i].v;
                if (t < 100) {
                    t = 0;
                } else {
                    t -= D_8022AD04[i].v * 100;
                }
                px = D_8011F2F0[D_80189C96].panel->x + (t2 = t - 4);
                func_801CB9EC(gfxp, (u32)px, (u32)py, 8, D_8016EE00, D_80167E50[D_8018D398[i]], 0, 1, 0, 8, 8, 0x50, 8, i + 1);
            }
        }
    }
}
