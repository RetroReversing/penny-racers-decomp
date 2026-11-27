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
typedef struct { u8 pad0[2]; u16 flags[4]; u8 padA; u8 mat; u8 alpha; u8 padD[0xB]; f32 x; f32 y; f32 z; f32 rx; f32 ry; f32 rz; f32 sx; f32 sy; f32 sz; u16 model; u8 pad3E[0x12]; Gfx ***list; u8 pad54[4]; void (*draw)(Gfx **, u16); u8 pad5C[8]; } Obj;
typedef struct { u8 pad0[8]; Mtx t[2]; Mtx r[2][4]; Mtx s[2]; } Model;
extern Obj D_8011F2F0[];
extern Model modelTransforms[];
extern u8 viewIndex;
extern u8 lastMaterial;
extern Gfx *materialDlTable[];
extern Gfx *materialDl11;
extern Gfx *materialDl12;
extern Gfx *materialDl5;
extern Gfx *materialDl8;
void func_800335C0(Mtx *, f32, f32, f32);
void func_80033834(Mtx *, f32, f32, f32);
void buildRotationMatrix(Mtx *, f32, f32, f32);
void computeFacingAngles(s32, f32, f32, f32, f32, f32, f32, f32 *, f32 *);
#define gSPDisplayList(pkt, dl) gDma(pkt, _S(0x06, 24, 8), dl)
#define gSPMatrix(pkt, m, p) gDma(pkt, _S(0x01, 24, 8) | _S(p, 16, 8) | _S(64, 0, 16), m)
#define K0(x) ((u32)(x) - 0x80000000)
#define gDPSetPrimColor(pkt, m, l, r, g, b, a) gDma(pkt, _S(0xfa, 24, 8) | _S(m, 8, 8) | _S(l, 0, 8), (_S(r, 24, 8) | _S(g, 16, 8) | _S(b, 8, 8) | _S(a, 0, 8)))
#define MATERIAL(v, dl) if (lastMaterial != (v)) { gSPDisplayList((*gfxp)++, dl); } lastMaterial = (v); break;

/* Draws one type-2 scene object: applies its scale, translation and facing rotation matrices, sets its material, then runs its draw callback and display list. */ void drawModelObject(Gfx **gfxp, u16 objIndex, u8 transformSlot, f32 viewX, f32 viewY, f32 viewZ) {
    Obj *obj;
    Model *model;
    u8 scaled;

    obj = &D_8011F2F0[objIndex];
    model = &modelTransforms[obj->model];
    if (!(obj->flags[viewIndex] & 8)) {
        if (obj->sx != 1.0 || obj->sy != 1.0 || obj->sz != 1.0) {
            func_800335C0(&model->s[transformSlot], obj->sx, obj->sy, obj->sz);
            scaled = 1;
        } else {
            scaled = 0;
        }
        func_80033834(&model->t[transformSlot], obj->x, obj->y, obj->z);
        if (obj->flags[viewIndex] & 0x40) {
            computeFacingAngles(1, viewX, viewY, viewZ, obj->x, obj->y, obj->z, &obj->rx, &obj->ry);
        } else if (obj->flags[viewIndex] & 0x80) {
            computeFacingAngles(0, viewX, viewY, viewZ, obj->x, obj->y, obj->z, &obj->rx, &obj->ry);
        }
        gSPMatrix((*gfxp)++, K0(&model->t[transformSlot]), 2);
        buildRotationMatrix(&model->r[transformSlot][viewIndex], obj->rx, obj->ry, obj->rz);
        gSPMatrix((*gfxp)++, K0(&model->r[transformSlot][viewIndex]), 0);
        if (scaled) {
            gSPMatrix((*gfxp)++, K0(&model->s[transformSlot]), 0);
        }
        if (obj->mat != 0) {
            if (obj->alpha == 0xFF) {
                gSPDisplayList((*gfxp)++, materialDlTable[obj->mat]);
                lastMaterial = obj->mat;
            } else {
                switch (obj->mat) {
                case 1:
                case 9:
                    MATERIAL(11, materialDl11)
                case 2:
                case 10:
                    MATERIAL(12, materialDl12)
                case 3:
                case 4:
                    MATERIAL(5, materialDl5)
                case 6:
                case 7:
                    MATERIAL(8, materialDl8)
                default:
                    if (lastMaterial != obj->mat) {
                        gSPDisplayList((*gfxp)++, materialDlTable[obj->mat]);
                    }
                    lastMaterial = obj->mat;
                    break;
                }
            }
            gDPSetPrimColor((*gfxp)++, 0, 0, 0xFF, 0xFF, 0xFF, obj->alpha);
        }
        if (!(obj->flags[viewIndex] & 4) && obj->draw != 0) {
            obj->draw(gfxp, objIndex);
        }
        if (!(obj->flags[viewIndex] & 1) && obj->list[1] != 0) {
            gSPDisplayList((*gfxp)++, *obj->list[1]);
        }
    }
}
