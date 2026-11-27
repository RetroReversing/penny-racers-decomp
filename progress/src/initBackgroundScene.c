typedef struct {
    s16 x;
    s16 y;
    s16 z;
    u16 flag;
    s16 s;
    s16 t;
    u8 r;
    u8 g;
    u8 b;
    u8 a;
} Vtx;
typedef struct {
    u8 state;
    u8 pad1;
    u16 max;
    u16 timer;
    u8 f6;
    u8 f7;
    u8 f8;
    u8 alpha;
} Fade;
typedef struct {
    Fade *fade;
    u8 pad[0x60];
} FadeSlot;
typedef struct {
    u8 pad0[0x2128];
    s16 left;
    s16 top;
    s16 right;
    s16 bottom;
} Game;
typedef struct {
    u8 pad0[0x20];
    s16 unk20;
} Audio;
extern Vtx D_80187D00[2][224];
extern u8 D_3B7C00[];
extern u8 D_3E4880[];
extern u8 D_802D6890[];
extern f32 D_802210C8[];
extern Audio D_8006FAF0;
extern Game sRowBoard;
extern FadeSlot D_8011F350[];
extern u16 D_8018BC3C;
extern u16 D_80301BE0;
void dmaRomToRam(void *, void *, s32);
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_801DDA5C(void);
void func_80231A0C(void);
void func_801D5A90();
void func_8015A9CC();
void drawBackgroundGrid();
void updateSaveDataSync();

/* Scene setup: loads background data, fills the two-buffered background vertex grid and fade state, and spawns the scene's objects. */ void initBackgroundScene(void)
{
    s32 col;
    s32 row;
    s32 buf;
    s32 vtxIdx;

    dmaRomToRam(D_3B7C00, D_802D6890, D_3E4880 - D_3B7C00);
    D_80301BE0 = 0xFFFF;
    func_80231A0C();
    D_802210C8[0] = 170.0f;
    D_802210C8[1] = -100.0f;
    D_802210C8[2] = 40.0f;
    D_802210C8[3] = 120.0f;
    D_802210C8[4] = -97.0f;
    D_802210C8[5] = 0.0f;
    D_802210C8[6] = 0.0f;
    D_802210C8[7] = 1.0f;
    D_802210C8[8] = 0.0f;
    D_8006FAF0.unk20 = 1;
    objCreate(0, 0xFF, 3, 0, 0x7F, 0, 0, func_801D5A90, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    D_8011F350[D_8018BC3C].fade->state = 1;
    D_8011F350[D_8018BC3C].fade->max = 0x50;
    D_8011F350[D_8018BC3C].fade->f6 = 0;
    D_8011F350[D_8018BC3C].fade->f7 = 0;
    D_8011F350[D_8018BC3C].fade->f8 = 0;
    sRowBoard.left = 0x10;
    sRowBoard.top = 0x20;
    sRowBoard.right = 0x130;
    sRowBoard.bottom = 0xD0;
    for (row = 0; row < 14; row++) {
        for (col = 0; col < 16; col++) {
            vtxIdx = col + row * 16;
            if (col == 0 || col == 15 || row == 0 || row == 13) {
                for (buf = 0; buf < 2; buf++) {
                    D_80187D00[buf][vtxIdx].x = col * 160;
                    D_80187D00[buf][vtxIdx].y = -row * 150;
                    D_80187D00[buf][vtxIdx].z = 0;
                    D_80187D00[buf][vtxIdx].flag = 0;
                    D_80187D00[buf][vtxIdx].s = 0;
                    D_80187D00[buf][vtxIdx].t = 0;
                    D_80187D00[buf][vtxIdx].r = 0;
                    D_80187D00[buf][vtxIdx].g = 0;
                    D_80187D00[buf][vtxIdx].b = 0x7F;
                    D_80187D00[buf][vtxIdx].a = 0xFF;
                }
            } else {
                for (buf = 0; buf < 2; buf++) {
                    D_80187D00[buf][vtxIdx].x = col * 160;
                    D_80187D00[buf][vtxIdx].y = -row * 150;
                    D_80187D00[buf][vtxIdx].z = 0;
                    D_80187D00[buf][vtxIdx].flag = 0;
                    D_80187D00[buf][vtxIdx].s = (col - 1) * 1280;
                    D_80187D00[buf][vtxIdx].t = (row - 1) * 704;
                    D_80187D00[buf][vtxIdx].r = 0;
                    D_80187D00[buf][vtxIdx].g = 0;
                    D_80187D00[buf][vtxIdx].b = 0x7F;
                    D_80187D00[buf][vtxIdx].a = 0xFF;
                }
            }
        }
    }
    objCreate(0, 0, 3, 0, 0x71, 0xFF, 0, func_8015A9CC, drawBackgroundGrid, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.1f, 0.1f);
    objCreate(0, 0, 3, 0, 0xC0, 0xFF, 0, updateSaveDataSync, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.1f, 0.1f);
    func_801DDA5C();
}
