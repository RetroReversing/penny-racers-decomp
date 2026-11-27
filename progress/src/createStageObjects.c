extern void objCreate(s32, s32, s32, s32, s32, s32, s32, void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern u8 func_80148230(void);
extern void debugPrintf(char *);
extern void updateLapTimers(void);
extern void func_80234484(void);
extern void func_802282F0(void);
extern void func_8013DF90(void);
extern void func_801D5A90(void);
extern void updateCarSounds(void);
extern void func_801D69D0(void);
extern void updateAmbientSound(void);
extern void func_8013FDC0(void);
extern void func_8013FDEC(void);
extern void updateRaceStart(void);
extern void updateNearCarSpawner(void);
extern void spawnLiftPlatforms(void);
extern void updateRoadSpawner(void);
extern void func_80141C28(void);
extern void spawnGridCars(void);
extern void updateDragZone(void);
extern char D_80232F54[];
extern char D_80232F70[];
extern char D_80232F88[];
extern char D_80232FA0[];
extern char D_80232FB8[];
extern char D_80232FD0[];
extern char D_80232FE8[];
extern char D_80233000[];
extern char D_80233018[];
extern char D_80233030[];
extern u8 D_8006FAF0[];

/* Creates the always-on stage objects, then the one for the current stage number. */ void createStageObjects(void)
{
    objCreate(0, 0, 3, 0, 0x7F, 0, 0, updateLapTimers, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x80, 0, 0, func_80234484, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x40, 0, 0, func_802282F0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x40, 0, 0, func_8013DF90, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    objCreate(0, 255, 3, 0, 0x7F, 0, 0, func_801D5A90, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    objCreate(0, 255, 3, 0, 0x7F, 0, 0, updateCarSounds, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    objCreate(0, 255, 3, 0, 0x7F, 0, 0, func_801D69D0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x7F, 0, 0, updateAmbientSound, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    debugPrintf(D_80232F54);
    if (func_80148230()) {
        switch (*(u16 *)(D_8006FAF0 + 0x20)) {
        case 1:
            debugPrintf(D_80232F70);
            objCreate(0, 0, 3, 0, 0x7F, 0, 0, func_8013FDC0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 2:
            debugPrintf(D_80232F88);
            objCreate(0, 0, 3, 0, 0x7F, 0, 0, func_8013FDEC, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 3:
            debugPrintf(D_80232FA0);
            objCreate(0, 0, 3, 0, 0x7F, 0, 0, updateRaceStart, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 4:
            debugPrintf(D_80232FB8);
            objCreate(0, 0, 3, 0, 0x7F, 0, 0, updateNearCarSpawner, 0, -610.0f, 0.0f, 350.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 5:
            debugPrintf(D_80232FD0);
            objCreate(0, 0, 3, 0, 0x7F, 0, 0, spawnLiftPlatforms, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 6:
            debugPrintf(D_80232FE8);
            objCreate(0, 0, 3, 0, 0x7F, 0, 0, updateRoadSpawner, 0, -1199.0f, -20.0f, 615.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 7:
            debugPrintf(D_80233000);
            objCreate(0, 0, 3, 0, 0x7F, 0, 0, func_80141C28, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 8:
            debugPrintf(D_80233018);
            objCreate(0, 0, 3, 0, 0x7F, 0, 0, spawnGridCars, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 9:
            debugPrintf(D_80233030);
            objCreate(0, 0, 3, 0, 0x7F, 0, 0, updateDragZone, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        }
    }
}
