typedef s32 M2C_UNK;
M2C_UNK nuScCreateScheduler(M2C_UNK, M2C_UNK);
M2C_UNK nuPiInit();
M2C_UNK osCreateThread(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32);
M2C_UNK osSetThreadPri(M2C_UNK *, M2C_UNK);
M2C_UNK osStartThread(M2C_UNK *);
M2C_UNK osViSetSpecialFeatures(M2C_UNK);
extern s32 D_80000300;
extern M2C_UNK D_8004AAB0;
extern M2C_UNK D_8004AC60;
extern M2C_UNK D_80071F70;
extern void (*D_800DA1E0)();
extern M2C_UNK func_80026250;

void func_80026E64(s32 arg0) {
    s32 *p;

    p = &arg0;
    D_800DA1E0 = NULL;
    nuPiInit();
    if (D_80000300 == 1) {
        nuScCreateScheduler(2, 1);
    } else {
        nuScCreateScheduler(0x1E, 1);
    }
    osViSetSpecialFeatures(0x5A);
    osCreateThread(&D_8004AC60, 3, &func_80026250, 0, &D_80071F70, 0xA);
    osStartThread(&D_8004AC60);
    osSetThreadPri(&D_8004AAB0, 0);
    for (;;) {
        if (D_800DA1E0 != NULL) {
            D_800DA1E0();
        }
    }
}
