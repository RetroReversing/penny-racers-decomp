void nuPiInit(void);
void nuScCreateScheduler(s32, s32);
void osViSetSpecialFeatures(u32);
void osCreateThread(void *, s32, void *, void *, void *, s32);
void osStartThread(void *);
void osSetThreadPri(void *, s32);
extern s32 D_80000300;
extern s32 D_8004AAB0;
extern s32 D_8004AC60;
extern s32 D_80071F70;
extern void (*D_800DA1E0)(void);
extern void bootGame(void);

void func_80026E64(s32 arg0) {
    D_800DA1E0 = 0;
    nuPiInit();
    if (D_80000300 == 1) {
        nuScCreateScheduler(2, 1);
    } else {
        nuScCreateScheduler(0x1E, 1);
    }
    osViSetSpecialFeatures(0x5A);
    osCreateThread(&D_8004AC60, 3, &bootGame, 0, &D_80071F70, 0xA);
    osStartThread(&D_8004AC60);
    osSetThreadPri(&D_8004AAB0, 0);
    while (1) {
        if (D_800DA1E0 != 0) {
            D_800DA1E0();
        }
    }
}
