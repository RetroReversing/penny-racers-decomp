typedef struct { unsigned int w0, w1; } GfxW;
typedef union { GfxW words; long long force; } Gfx;
typedef union { long m[4][4]; long long force; } Mtx;
typedef struct { u8 car; u8 pad[0x63]; } Entry;
typedef struct { f32 unk0; u8 pad[0x8EC]; } CarF;
typedef struct { u8 unk0; u8 pad[0x8EF]; } CarB;
extern s32 D_80046834;
extern Entry D_8011F2FC[];
extern CarF D_8022AEB8[];
extern CarB D_8022AEE8[];
extern Mtx D_8018D460[][4];
extern u8 D_80167ED8[];
f32 waveTableLookup(s32);
void guTranslate(Mtx *, f32, f32, f32);
void guRotate(Mtx *, f32, f32, f32, f32);
void guMtxCatL(Mtx *, Mtx *, Mtx *);

#define GCMD(pkt, a, b) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (a); _g->words.w1 = (unsigned int)(b); }

void func_801306B4(Gfx **gfx, u16 arg1)
{
    Mtx mtx;
    s32 i = D_8011F2FC[arg1].car;
    f32 angle;

    angle = 102.0f - (waveTableLookup(D_8022AEE8[i].unk0 * 10) * 100.0f + D_8022AEB8[i].unk0) * 0.019f;
    guTranslate(&mtx, 472.0f, -318.0f, -637.0f);
    guRotate(&D_8018D460[D_80046834][i], angle, 0.0f, 0.0f, 1.0f);
    guMtxCatL(&D_8018D460[D_80046834][i], &mtx, &D_8018D460[D_80046834][i]);

    GCMD((*gfx)++, 0xE7000000, 0);
    GCMD((*gfx)++, 0x01020040, (u32)&D_8018D460[D_80046834][i] - 0x80000000);
    GCMD((*gfx)++, 0xB6000000, 0xF3205);
    GCMD((*gfx)++, 0xB7000000, 0x204);
    GCMD((*gfx)++, 0xFCFFFFFF, 0xFFFE793C);
    GCMD((*gfx)++, 0xB900031D, 0x552048);
    GCMD((*gfx)++, 0xBA000E02, 0x8000);
    GCMD((*gfx)++, 0xB9000002, 0);
    GCMD((*gfx)++, 0xFA000000, -1);
    GCMD((*gfx)++, 0x04000C2F, D_80167ED8);
    GCMD((*gfx)++, 0xBF000000, 0x204);
}
