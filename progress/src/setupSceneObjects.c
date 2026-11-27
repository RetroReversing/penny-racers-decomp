s16 objCreate();
void spawnSceneFadeObjects(void);
void createNoticeScreenObj(void);
void setScreenTransition();
void func_802153C4(s32, f32, f32, s32, s32, s32);
extern u8 D_801D5A90[];
extern u8 D_801D6670[];
extern u8 D_801DF62C[];
extern u8 D_801DFDEC[];
extern s16 D_801E9D5E;
void func_80138B1C(void);

/* Creates the scene's background, fade, notice and transition objects, then sets up the screen transition and scene fade. */
void setupSceneObjects(void)
{
    D_801E9D5E = objCreate(0, 0, 3, 0, 0x40, 0xFF, 0, NULL, &func_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x80, 0xFF, 0, D_801DF62C, D_801DFDEC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    createNoticeScreenObj();
    setScreenTransition(0, 0x3C, 0xFF, 0xFF, 0xFF);
    spawnSceneFadeObjects();
    func_802153C4(0x41, 0.0f, 0.0f, 0, 0, 0xA0);
    objCreate(0, 0xFF, 3, 0, 0x7F, 0, 0, D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0xFF, 3, 0, 0x7F, 0, 0, D_801D6670, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
