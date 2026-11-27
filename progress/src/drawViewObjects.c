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

typedef struct { f32 x; f32 y; f32 z; f32 a; f32 b; f32 c; } View;
typedef struct { View view; u8 pad[12]; } Camera;
typedef struct { s16 active; u8 pad2[2]; s16 view; u8 pad6[0x22]; } Player;
typedef struct { u8 pad0[0x2108]; Player player[4]; } Root;
typedef struct { u8 pad0[1]; u8 type; u16 flags[4]; u8 padA[3]; u8 hidden; u8 padE[0x56]; } Obj;
typedef struct { u8 a[8]; u8 l[16]; } Lights1;
extern Root sRowBoard;
extern Camera D_80221080[];
extern u16 D_800E1850;
extern s32 D_8011F060;
extern u8 viewIndex;
extern u8 D_8011F2E8;
extern u8 lastMaterial;
extern u8 D_800E1852;
extern u16 drawOrderList[];
extern Obj D_8011F2F0[];
extern Gfx *D_800DE0E4;
extern Lights1 D_801F9950;
void func_800DF428(Gfx **, u16, u8, f32, f32, f32, f32, f32, f32);
void drawModelObject(Gfx **, u16, u8, f32, f32, f32, f32, f32, f32);
void drawObject(Gfx **, u16, u8);
void sortViewObjects(f32, f32, f32);
#define gMoveWd(pkt, index, offset, data) gDma(pkt, _S(0xbc, 24, 8) | _S(offset, 8, 16) | _S(index, 0, 8), data)
#define gSPNumLights(pkt, n) gMoveWd(pkt, 2, 0, ((n) + 1) * 32 + 0x80000000)
#define gSPLight(pkt, l, n) gDma(pkt, _S(0x03, 24, 8) | _S((((n) - 1) * 2 + 0x86), 16, 8) | _S(16, 0, 16), l)
#define gSPSetLights1(pkt, name) { gSPNumLights(pkt, 1); gSPLight(pkt, &name.l[0], 1); gSPLight(pkt, &name.a, 2); }

// Draws the scene's object list for the active player's camera: sets up the view, then dispatches each visible object by type.
void drawViewObjects(Gfx **gfxPtr, u8 transformSlot, s32 arg2, u8 viewIdx, u8 playerSlot) {
    s32 activePlayers[4];
    s32 numActive;
    s32 p;
    u16 listIdx;
    Camera *cam;
    Camera *nextCam;
    Camera *prevCam;
    s32 view;

    numActive = 0;
    for (p = 0; p < 4; p++) {
        if (sRowBoard.player[p].active != 0) {
            activePlayers[numActive++] = p;
        }
    }
    view = sRowBoard.player[activePlayers[playerSlot]].view;
    cam = &D_80221080[view];
    nextCam = &D_80221080[view + 1];
    prevCam = &D_80221080[view - 1];
    if (D_800E1850 != 0xFFFF) {
        D_8011F060 = arg2;
        viewIndex = viewIdx;
        D_8011F2E8 = playerSlot;
        lastMaterial = 0xFF;
        sortViewObjects(cam->view.x, cam->view.y, cam->view.z);
        for (listIdx = 0; drawOrderList[listIdx] != 0xFFFF; listIdx++) {
            if (D_8011F2F0[drawOrderList[listIdx]].hidden == 0) {
                if (D_800E1852 == 1) {
                    D_800E1852 = 0;
                    gSPSetLights1(D_800DE0E4++, D_801F9950);
                }
                switch (D_8011F2F0[drawOrderList[listIdx]].type) {
                case 1:
                    if (D_8011F2F0[drawOrderList[listIdx]].flags[viewIndex] & 0x100) {
                        func_800DF428(gfxPtr, drawOrderList[listIdx], transformSlot, prevCam->view.x, prevCam->view.y, prevCam->view.z, prevCam->view.a, prevCam->view.b, prevCam->view.c);
                    } else if (D_8011F2F0[drawOrderList[listIdx]].flags[viewIndex] & 0x200) {
                        func_800DF428(gfxPtr, drawOrderList[listIdx], transformSlot, nextCam->view.x, nextCam->view.y, nextCam->view.z, nextCam->view.a, nextCam->view.b, nextCam->view.c);
                    } else {
                        func_800DF428(gfxPtr, drawOrderList[listIdx], transformSlot, cam->view.x, cam->view.y, cam->view.z, cam->view.a, cam->view.b, cam->view.c);
                    }
                    break;
                case 2:
                    drawModelObject(gfxPtr, drawOrderList[listIdx], transformSlot, cam->view.x, cam->view.y, cam->view.z, cam->view.a, cam->view.b, cam->view.c);
                    break;
                case 3:
                    drawObject(gfxPtr, drawOrderList[listIdx], transformSlot);
                    break;
                }
            }
        }
    }
}
