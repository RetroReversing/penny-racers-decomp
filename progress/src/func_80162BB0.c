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
typedef struct { u8 pad0[2]; u16 flags[4]; u8 padA; u8 mat; u8 alpha; u8 padD[0xB]; f32 x; f32 y; f32 z; f32 rx; f32 ry; f32 rz; f32 sx; f32 sy; f32 sz; u16 model; u8 pad3E[0x12]; Gfx ***list; u8 pad54[4]; void (*draw)(Gfx **, u16); u8 pad5C[8]; } Obj;
extern Obj D_8011F2F0[];
typedef struct { s16 ob[3]; u16 flag; s16 tc[2]; u8 cn[4]; } Vtx;
typedef struct { u32 pad0; f32 x[8]; f32 y[8]; f32 z[8]; f32 a[8]; f32 b[8]; f32 c[8]; } Anim;
typedef struct { u8 pad0[4]; u16 type; u8 pad6[0x22A]; u16 colour; } Info;
typedef struct { u8 pad0[4]; Info *info; u8 pad8[0xC]; s16 frame; } Eff;
typedef struct { u8 pad0[0xC]; u8 slot; u8 padD[0x53]; Eff *eff; } Ob3;
extern Anim D_8018A460[][3];
extern Vtx D_8018BC40[][3][16];
extern f32 D_80182E40[];
extern Mtx D_80190CB8[];
extern s32 D_80046834;
extern u8 lastMaterial;
s32 nextRandom(void);
void func_80033280(f32 *, f32, f32, f32, f32);
void func_8003DE90(f32 *, f32 *, f32 *);
void func_8003DF6C(f32 *, f32, f32, f32, f32 *, f32 *, f32 *);
void func_80033834(Mtx *, f32, f32, f32);

void func_80162BB0(Gfx **gfxp, u16 id) {
    Ob3 *obj;
    Eff *eff;
    Anim *anim;
    Vtx *vtx;
    Vtx *v;
    s32 i;
    s32 j;
    s32 k;
    f32 mfX[4][4];
    f32 mfY[4][4];
    f32 mfZ[4][4];
    f32 x;
    f32 y;
    f32 z;

    obj = (Ob3 *)&D_8011F2F0[id];
    eff = obj->eff;
    if (eff->frame != 300) {
        anim = &D_8018A460[eff->info->type][obj->slot];
        v = (vtx = D_8018BC40[eff->info->type][obj->slot]);
        for (i = 0; i < 8; i++) {
            func_80033280(&mfX[0][0], anim->a[i], 1.0f, 0.0f, 0.0f);
            func_80033280(&mfY[0][0], anim->b[i], 0.0f, 1.0f, 0.0f);
            func_80033280(&mfZ[0][0], anim->c[i], 0.0f, 0.0f, 1.0f);
            func_8003DE90(&mfY[0][0], &mfX[0][0], &mfX[0][0]);
            func_8003DE90(&mfX[0][0], &mfZ[0][0], &mfZ[0][0]);
            for (j = 0; j < 2; j++) {
                k = (i + eff->frame) & 7;
                func_8003DF6C(&mfZ[0][0], D_80182E40[i * 2 + j], 0.0f, 0.0f, &x, &y, &z);
                vtx->ob[0] = x + anim->x[i];
                vtx->ob[1] = y + anim->y[i];
                vtx->ob[2] = z + anim->z[i];
                switch (eff->info->colour) {
                case 0:
                    vtx->cn[0] = 0xFF;
                    vtx->cn[1] = 200 - k * 20;
                    vtx->cn[2] = 0;
                    break;
                case 1:
                    vtx->cn[0] = 0xFF;
                    vtx->cn[1] = 0;
                    vtx->cn[2] = 200 - k * 20;
                    break;
                case 2:
                    vtx->cn[0] = 0;
                    vtx->cn[1] = 200 - k * 20;
                    vtx->cn[2] = 0xFF;
                    break;
                case 3:
                    vtx->cn[0] = 200 - k * 20;
                    vtx->cn[1] = 0;
                    vtx->cn[2] = 0xFF;
                    break;
                case 4:
                    vtx->cn[0] = 200 - k * 20;
                    vtx->cn[1] = 0xFF;
                    vtx->cn[2] = 0;
                    break;
                case 5:
                    vtx->cn[0] = 0;
                    vtx->cn[1] = 0xFF;
                    vtx->cn[2] = 200 - k * 20;
                    break;
                case 6:
                    vtx->cn[0] = 0xFF;
                    vtx->cn[1] = 0xFF;
                    vtx->cn[2] = 200 - k * 20;
                    break;
                case 7:
                    vtx->cn[0] = 0xFF;
                    vtx->cn[1] = 200 - k * 20;
                    vtx->cn[2] = 0xFF;
                    break;
                case 8:
                    vtx->cn[0] = 200 - k * 20;
                    vtx->cn[1] = 0xFF;
                    vtx->cn[2] = 0xFF;
                    break;
                case 9:
                    vtx->cn[0] = 200 - k * 20;
                    vtx->cn[1] = 200 - k * 20;
                    vtx->cn[2] = 0xFF;
                    break;
                case 10:
                    vtx->cn[0] = 200 - k * 20;
                    vtx->cn[1] = 0xFF;
                    vtx->cn[2] = 200 - k * 20;
                    break;
                case 11:
                    vtx->cn[0] = 0xFF;
                    vtx->cn[1] = 200 - k * 20;
                    vtx->cn[2] = 200 - k * 20;
                    break;
                case 12:
                    vtx->cn[0] = 200 - k * 20;
                    vtx->cn[1] = 200 - k * 20;
                    vtx->cn[2] = 200 - k * 20;
                    break;
                case 13 ... 255:
                    vtx->cn[0] = nextRandom();
                    vtx->cn[1] = nextRandom();
                    vtx->cn[2] = nextRandom();
                    break;
                }
                vtx->cn[3] = i * 30;
                vtx++;
            }
        }
        func_80033834(&D_80190CB8[D_80046834], 0.0f, 0.0f, 0.0f);
        gSPMatrix((*gfxp)++, &((Mtx *)((u32)D_80190CB8 + 0x80000000))[D_80046834], 2);
        gDPPipeSync((*gfxp)++);
        gDma((*gfxp)++, 0xBA001402, 0);
        gDma((*gfxp)++, 0xB6000000, 0x000F3205);
        gDma((*gfxp)++, 0xB7000000, 0x204);
        gDma((*gfxp)++, 0xFCFFFFFF, 0xFFFE793C);
        gDma((*gfxp)++, 0xB900031D, 0x00504240);
        gDma((*gfxp)++, 0x040040FF, v);
        gDma((*gfxp)++, 0xB1020400, 0x00020604);
        gDma((*gfxp)++, 0xB1060804, 0x00060A08);
        gDma((*gfxp)++, 0xB10A0C08, 0x000A0E0C);
        gDma((*gfxp)++, 0xB10E100C, 0x000E1210);
        gDma((*gfxp)++, 0xB1121410, 0x1614);
        gDma((*gfxp)++, 0xB1161814, 0x00161A18);
        gDma((*gfxp)++, 0xB11A1C18, 0x001A1E1C);
        lastMaterial = 0xFF;
    }
}
