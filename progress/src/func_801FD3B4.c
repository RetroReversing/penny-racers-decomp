s16 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void interpolateObjPositions(void);
void func_8013ADA8(void);
void func_801FA338(s32);
void func_8022F780(u16);
void func_8022FE50(s32, s32, s32, s32);
void func_80231130(void);
void func_802312F8(s32);
void initSceneBackdrop(void);
void createNoticeScreenObj(void);
void createStageObjects(void);
extern s32 D_8006FAF0;
extern s32 D_80159230;
extern s16 D_8018A438;
extern s32 D_802038D0;
extern s32 D_802038D4;
extern s32 D_80203AB0;
extern s8 D_8022AFE9;
extern s32 func_8012AD9C;
extern s32 drawPlayerStatusBars;

void func_801FD3B4(void) {
    s32 var_s0;
    func_801FA338(0);
    D_80203AB0 = 0;
    D_802038D0 = 0;
    D_802038D4 = 0;
    initSceneBackdrop();
    var_s0 = 0;
    createNoticeScreenObj();
    createStageObjects();
    func_8022F780(*(u16 *)((s8 *)&D_8006FAF0 + 0x20));
    interpolateObjPositions();
    func_80231130();
    func_802312F8(0);
    do {
        func_8022FE50(var_s0 & 0xFF, var_s0 & 0xFF, var_s0 & 0xFF, 1);
        var_s0 += 1;
    } while (!(var_s0 & 0xFFFF));
    D_8022AFE9 = 0;
    objCreate(0, 0, 3, 0, 0x20, 1, 0, &func_8012AD9C, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8013ADA8();
    D_8018A438 = objCreate(0, 0, 3, 0, 0xA1, 0xFF, 0, &D_80159230, &drawPlayerStatusBars, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
