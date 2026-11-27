typedef struct {
    u8 pad0[4];
    u16 flags;
    u16 flags2;
    u16 flags3;
    u8 padA[0x5A];
} Sprite;
typedef struct {
    u8 a;
    u8 b;
    u8 c;
} Mode;
typedef struct {
    u8 f0;
    u8 f1;
    u8 pad2[0x1B];
    u8 f1D;
    u8 pad1E[7];
    u8 f25;
} State;
typedef struct {
    s32 w[13];
} Part;
extern Sprite D_8011F2F0[];
extern u8 D_3B7C00[], D_3E4880[], D_802D6890[], D_40A890[], D_412160[], D_8030BD90[];
extern f32 D_80220E40;
extern u8 D_8021F260[];
extern Mode D_80189B34;
extern s32 D_8021B664;
extern s32 D_8021B668;
extern u16 D_80189CC6[];
extern u8 D_80190CAA;
extern u8 D_8018D678;
extern u16 D_8018A27C;
extern u16 D_8018A43A;
extern s16 carClassIndex;
extern u16 D_8018A44A[];
extern u8 D_80183630[], D_80183644[];
extern State D_80189C9A;
extern u16 D_80189C9E[], D_80189CAA[];
extern s32 D_8018A3B8[][8], randomMasks[][8];
extern Part D_8018F5D0[][8];
extern Part D_80238EC0[];
extern u16 D_80190CB4;
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void spawnSceneFadeObjects();
void dmaRomToRam(void *, void *, s32);
void func_8021FCA4();
u8 func_80148230();
void func_8014998C();
u16 computeUnlockFlags();
u16 func_8014BB30(s32);
void debugPrintf();
void func_801D5A90(), func_80138B1C(), gfxSetViewViewport(), func_8022026C(), func_80149A80(), func_80144808(), func_80145A6C(), func_8013DD2C();

/* Sets up the race scene: spawns the base objects, clears race state and the per-slot tables, and loads the race data. */ void initRaceScene(void)
{
    s32 i;
    s32 j;
    u16 slot;

    spawnSceneFadeObjects();
    objCreate(0, 0xFF, 3, 0, 0x7F, 0, 0, func_801D5A90, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    dmaRomToRam(D_3B7C00, D_802D6890, D_3E4880 - D_3B7C00);
    dmaRomToRam(D_40A890, D_8030BD90, D_412160 - D_40A890);
    slot = objCreate(0, 0, 3, 0, 0x40, 0xFF, 0, 0, func_80138B1C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    D_8011F2F0[slot].flags |= 0x20;
    D_8011F2F0[slot].flags2 |= 0x20;
    D_8011F2F0[slot].flags3 |= 0x20;
    func_8021FCA4();
    objCreate(0, 0, 3, 0, 0x42, 0xFF, 0, 0, gfxSetViewViewport, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    D_80220E40 = 10.0f;
    objCreate(0, 0, 3, 0, 0x44, 0xFF, 0, 0, func_8022026C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    objCreate(0, 0, 3, 0, 0x40, 1, 0, func_80149A80, 0, 0.0f, 0.0f, 0.0f, 0.0f, 30.0f, 50.0f, 0.0f, 0.0f, 0.0f);
    D_8021F260[0] = 0;
    D_8021F260[1] = 0;
    D_8021F260[2] = 0;
    D_8021F260[4] = 0;
    D_80189B34.b = 0;
    if (D_8021B668 == 0) {
        D_80189B34.b = 1;
    }
    D_80189B34.c &= 0x7F;
    if (D_8021B664 == 0) {
        D_80189B34.c |= 0x80;
    }
    D_80189CC6[0] = (D_80189CC6[0] | 0x3000) & 0xBCFF;
    D_80189B34.c &= 0xBF;
    D_80189B34.a = func_80148230();
    D_80190CAA = 0;
    D_8018D678++;
    if (D_8018D678 >= 0x1F) {
        D_8018D678 = 0;
    }
    func_8014998C();
    D_8018A27C = computeUnlockFlags();
    D_8018A43A = func_8014BB30(0);
    D_8018A27C &= ~D_8018A43A;
    debugPrintf(D_80183630, D_8018A44A[carClassIndex]);
    debugPrintf(D_80183644, D_8018A27C, D_8018A43A);
    D_80189C9A.f1D = 0;
    D_80189C9A.f25 = 0;
    D_80189C9A.f1 = 0;
    D_80189C9A.f0 = 0;
    for (i = 0; i < 6; i++) {
        D_80189C9E[i] = 0x2FFF;
        D_80189CAA[i] = 0x2FFF;
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 8; j++) {
            D_8018A3B8[i][j] = randomMasks[i][j];
        }
    }
    for (j = 0; j < 14; j++) {
        for (i = 0; i < 8; i++) {
            D_8018F5D0[j][i] = D_80238EC0[i];
        }
    }
    D_80190CB4 = objCreate(0, 0, 3, 0, 0x4F, 0xFF, 0, func_80144808, func_80145A6C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    objCreate(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, func_8013DD2C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}
