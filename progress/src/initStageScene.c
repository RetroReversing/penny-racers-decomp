void objCreate(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void interpolateObjPositions();
void func_8013ADA8(void);
void func_801FA338(s32);
void initRowTable(s32);
void func_8022F780(u16);
void func_8022FE50(s32, s32, s32, s32);
void assignCarSlots(u8);
void func_802312F8(s32);
void initSceneBackdrop();
void createStageObjects();
void func_80232360(s32, s32);
extern u16 D_8006FAF0[];
extern s8 D_8006FB14[];
extern s16 sRowBoard[];
extern u8 D_8012FFF0[];
extern s8 D_8021E144;
extern u16 D_8021E18C;
extern u8 D_8021EEB2;

/* Sets up the stage scene: backdrop, stage objects, row board, car slots, and the per-slot and scene objects. */ void initStageScene(void)
{
    u16 slot;
    func_801FA338(0);
    initSceneBackdrop();
    *(u16 *)((u8 *)D_8006FAF0 + 0x20) = (u16) (D_8021E18C + 1);
    createStageObjects();
    D_8021E144 = 1;
    func_8022F780(*(u16 *)((u8 *)D_8006FAF0 + 0x20));
    D_8021E144 = 0;
    interpolateObjPositions();
    func_802312F8(0);
    assignCarSlots(D_8021EEB2);
    slot = 0;
    do {
        func_8022FE50(slot & 0xFF, slot & 0xFF, slot & 0xFF, 1);
        slot += 1;
    } while (slot < 6);
    initRowTable(1);
    *(s8 *)((u8 *)D_8006FB14 + 4) = 1;
    objCreate(0, 0, 3, 0, 0x80, 1, 0, D_8012FFF0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sRowBoard[0x2114 / 2] = 0xA0;
    sRowBoard[0x2116 / 2] = 0x78;
    sRowBoard[0x2110 / 2] = 0xA0;
    sRowBoard[0x2112 / 2] = 0x3C;
    sRowBoard[0x2128 / 2] = 0xA0;
    sRowBoard[0x212A / 2] = 0x3C;
    sRowBoard[0x212C / 2] = 0x140;
    sRowBoard[0x212E / 2] = 0xB4;
    func_8013ADA8();
    func_80232360(0, 1);
    func_80232360(1, 1);
    func_80232360(2, 0);
    func_80232360(3, 1);
    func_80232360(4, 1);
    func_80232360(5, 2);
}
