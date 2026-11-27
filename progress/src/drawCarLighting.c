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
#define gDPLoadTileGeneric(pkt, c, tile, uls, ult, lrs, lrt) \
    gDma(pkt, _S(c, 24, 8) | _S(uls, 12, 12) | _S(ult, 0, 12), _S(tile, 24, 3) | _S(lrs, 12, 12) | _S(lrt, 0, 12))
#define gDPSetTileSize(pkt, tile, uls, ult, lrs, lrt) gDPLoadTileGeneric(pkt, 0xf2, tile, uls, ult, lrs, lrt)
#define gMoveWd(pkt, index, offset, data) gDma(pkt, _S(0xbc, 24, 8) | _S(offset, 8, 16) | _S(index, 0, 8), data)
#define gSPNumLights(pkt, n) gMoveWd(pkt, 2, 0, ((n) + 1) * 32 + 0x80000000)
#define gSPLight(pkt, l, n) gDma(pkt, _S(0x03, 24, 8) | _S((((n) - 1) * 2 + 0x86), 16, 8) | _S(16, 0, 16), l)
#define gSPSetLights1(pkt, name) { gSPNumLights(pkt, 1); gSPLight(pkt, &name.l[0], 1); gSPLight(pkt, &name.a, 2); }
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define gDPLoadBlock(pkt, tile, uls, ult, lrs, dxt) gDma(pkt, _S(0xf3, 24, 8) | _S(uls, 12, 12) | _S(ult, 0, 12), _S(tile, 24, 3) | _S(MIN(lrs, 2047), 12, 12) | _S(dxt, 0, 12))
#define TXL2WORDS(w, bt) ((w) * (bt) / 8 > 1 ? (w) * (bt) / 8 : 1)
#define CALC_DXT(w, bt) (((1 << 11) + TXL2WORDS(w, bt) - 1) / TXL2WORDS(w, bt))
#define gDPLoadTextureBlock16(pkt, timg, fmt, width, height, pal, cms, cmt, masks, maskt, shifts, shiftt) { \
    gDPSetTextureImage(pkt, fmt, 2, 1, timg); \
    gDPSetTile(pkt, fmt, 2, 0, 0, 7, 0, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPLoadSync(pkt); \
    gDPLoadBlock(pkt, 7, 0, 0, (width) * (height) - 1, CALC_DXT(width, 2)); \
    gDPPipeSync(pkt); \
    gDPSetTile(pkt, fmt, 2, ((((width) * 2) + 7) >> 3), 0, 0, pal, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPSetTileSize(pkt, 0, 0, 0, ((width) - 1) << 2, ((height) - 1) << 2); }

typedef struct { u8 *flag; u8 pad[0x60]; } SlotP;
typedef struct { u8 pad0[4]; u16 car; u8 pad6[0x7C6]; u8 kind; } Obj;
typedef struct { Obj *obj; u8 pad[0x60]; } SlotO;
typedef struct { u8 pad0[0x21]; u8 course; } Setup;
typedef struct { u16 type; u8 pad[0x176]; } Car;
typedef struct { u8 c[6]; } Colors;
typedef struct { u8 a[8]; u8 l[16]; } Lights1;
extern SlotP sPathNodes[];
extern SlotO D_8011F350[];
extern Setup D_8006FAF0;
extern Car sCarSlots[];
extern Colors D_80168118[];
extern Lights1 D_8018B478[];
extern u8 D_800E1852;
extern u8 viewIndex;
extern u8 D_80168166;
extern u8 D_80183BE0[][2][0x800];
void setCarLight(Lights1 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);

#define C(k) D_80168118[colorSet].c[k]

/* Lights a car's model for its slot. Light colours come from the colour set
 * for the course; the cab texture is loaded for type 13 sCars. */
void drawCarLighting(Gfx **gfxp, u16 id) {
    Obj *obj;
    u8 colorSet;

    if (*sPathNodes[id].flag == 0) {
        obj = D_8011F350[id].obj;
        colorSet = D_8006FAF0.course;
        switch (obj->kind) {
        case 31:
        case 33:
        case 35:
        case 37:
        case 38:
        case 40:
        case 42:
        case 44:
            setCarLight(&D_8018B478[obj->car], C(0), C(1), C(2), C(3), C(4), C(5), 0, 127, 0);
            break;
        case 30:
        case 32:
        case 34:
        case 36:
        case 39:
        case 41:
        case 43:
        case 45:
            colorSet = 1;
            if (sCarSlots[obj->car].type == 13) {
                colorSet = 12;
            }
            setCarLight(&D_8018B478[obj->car], C(0), C(1), C(2), C(3), C(4), C(5), -73, 73, 73);
            break;
        default:
            colorSet = (sCarSlots[obj->car].type == 13) ? 11 : 10;
            setCarLight(&D_8018B478[obj->car], C(0), C(1), C(2), C(3), C(4), C(5), -73, 73, 73);
            break;
        }
        D_800E1852 = 1;
        gSPSetLights1((*gfxp)++, D_8018B478[obj->car]);
        if (sCarSlots[obj->car].type == 13) {
            gDPLoadTextureBlock16((*gfxp)++, D_80183BE0[viewIndex][D_80168166], 0, 32, 32, 0, 0, 0, 5, 5, 0, 0);
        }
    }
}
