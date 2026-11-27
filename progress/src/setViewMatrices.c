typedef struct { u32 w0; u32 w1; } Gwords;
typedef union { Gwords words; long long force; } Gfx;
#define _S(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))
#define gDma(pkt, w0v, w1v) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (w0v); _g->words.w1 = (u32)(w1v); }
#define gSPMatrix(pkt, m, p) gDma(pkt, _S(0x01, 24, 8) | _S(p, 16, 8) | _S(64, 0, 16), m)
#define gSPPerspNormalize(pkt, s) gDma(pkt, _S(0xbc, 24, 8) | _S(0, 8, 16) | _S(0x0e, 0, 8), s)

typedef struct { s32 m[16]; } Mtx;
typedef struct { Mtx proj[12]; Mtx view[1]; } Dyn;
typedef struct { f32 ex; f32 ey; f32 ez; f32 ax; f32 ay; f32 az; f32 ux; f32 uy; f32 uz; } Camera;
typedef struct { s16 active; u8 pad2[2]; s16 view; u8 pad6[6]; s16 width; s16 height; u8 pad10[0x18]; } Player;
typedef struct { u8 pad0[0x2108]; Player player[4]; } Root;
extern Root sRowBoard;
extern Camera D_80221080[];
extern Dyn *D_8011F060;
extern u8 viewIndex;
extern s16 D_800DD2CC;
extern s16 D_800DD2CE;
void guPerspective(Mtx *, u16 *, f32, f32, f32, f32, f32);
void guLookAt(Mtx *, f32, f32, f32, f32, f32, f32, f32, f32, f32);

/* Sets the perspective projection and the look-at view matrix for the current viewport, emitting their display list commands. */
void setViewMatrices(Gfx **gfxp) {
    u16 perspNorm;
    s32 viewSlot;

    viewSlot = sRowBoard.player[viewIndex].view;
    if (viewIndex == 0) {
        guPerspective(&D_8011F060->proj[viewSlot], &perspNorm, 100.0f, (f32)D_800DD2CC / (f32)D_800DD2CE, 10.0f, 5000.0f, 1.0f);
    } else {
        guPerspective(&D_8011F060->proj[viewSlot], &perspNorm, 80.0f, (f32)sRowBoard.player[viewIndex].width / (f32)sRowBoard.player[viewIndex].height, 10.0f, 5000.0f, 1.0f);
    }
    gSPPerspNormalize((*gfxp)++, perspNorm);
    gSPMatrix((*gfxp)++, &D_8011F060->proj[viewSlot], 3);
    guLookAt(&D_8011F060->view[viewSlot], D_80221080[viewSlot].ex, D_80221080[viewSlot].ey, D_80221080[viewSlot].ez, D_80221080[viewSlot].ax, D_80221080[viewSlot].ay, D_80221080[viewSlot].az, D_80221080[viewSlot].ux, D_80221080[viewSlot].uy, D_80221080[viewSlot].uz);
    gSPMatrix((*gfxp)++, &D_8011F060->view[viewSlot], 1);
}
