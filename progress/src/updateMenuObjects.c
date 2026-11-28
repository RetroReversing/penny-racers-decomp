typedef struct {
    u8 pad0[4];
    u16 flags;
    u8 pad6[5];
    u8 layer;
    u8 padC[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad24[0x40];
} Sprite;
extern Sprite D_8011F2F0[];
extern u8 D_801C6B28;
extern u8 D_801C6B29;
extern u8 D_801C6B2A;
extern u8 D_801C6B2B;
extern u8 D_801C6B2C;
extern u16 D_801C6B2E;
extern u16 D_801C7ABA;
extern u16 boardCursorObj;
extern s8 cursorY;
extern s8 cursorX;
extern u8 D_803156C4[];
extern u8 D_801B50B0[];
extern u8 D_801B5F90[];
void func_801B3CB0();
void func_801B3E18();
void func_801B41D8();
void func_801B42C8();
void stepHudSlotAnim();
void drawRaceStatusPanel();
void initCursorObjects();
void updateBoardCamera();
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);

/* Spawns the menu's sprite objects the first time it runs, then moves the cursor sprite to follow the menu cursor. */ void updateMenuObjects(u16 arg0)
{
    updateBoardCamera(arg0);
    if (D_801C6B28 == 0) {
        D_801C6B2E = objCreate(0, 0, 1, 0, 0x52, 0xFF, D_803156C4, 0, 0,
                                   0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
        D_8011F2F0[D_801C6B2E].flags |= 8;
        D_801C6B28 = 1;
    }
    if (D_801C6B29 == 0) {
        initCursorObjects();
        boardCursorObj = objCreate(0, 0, 3, 0, 0x54, 0xF0, 0, func_801B3E18, func_801B3CB0,
                                   cursorX * 400.0f * 0.5f, 0.0f, cursorY * 400.0f * 0.5f,
                                   0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
        D_8011F2F0[boardCursorObj].flags |= 0x20;
        D_8011F2F0[boardCursorObj].layer = 0xC;
        D_801C6B29 = 1;
    }
    if (D_801C6B2A == 0) {
        D_8011F2F0[objCreate(0, 0, 3, 0, 0x41, 0xFF, 0, func_801B41D8, func_801B42C8,
                                 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)].flags |= 0x20;
        D_801C6B2A = 1;
    }
    if (D_801C6B2B == 0) {
        D_8011F2F0[objCreate(0, 0, 3, 0, 0x71, 0, 0, stepHudSlotAnim, drawRaceStatusPanel,
                                 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)].flags |= 0x20;
        D_801C6B2B = 1;
    }
    if (D_801C6B2C == 0) {
        D_801C7ABA = objCreate(0, 0x50, 3, 0, 0xA2, 0xFF, 0, D_801B50B0, D_801B5F90,
                                   0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        D_8011F2F0[D_801C7ABA].flags |= 0x20;
        D_801C6B2C = 1;
    }
    D_8011F2F0[boardCursorObj].x = cursorX * 400.0f * 0.5f;
    D_8011F2F0[boardCursorObj].y = 0.0f;
    D_8011F2F0[boardCursorObj].z = cursorY * 400.0f * 0.5f;
}
