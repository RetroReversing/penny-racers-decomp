extern u8 D_3EA210[];
extern u8 D_3EACF0[];
extern u8 D_8030BD90[];
void dmaRomToRam(s32 arg0, s32 arg1, s32 arg2);
void createSceneObjects(void);
void func_80203D58(void);
void setScreenTransition(s32, s32, s32, s32, s32);
void objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void updateMenuScreen(void);
void drawMenuScreen(void);
void func_80206770(void) {
    dmaRomToRam((s32)D_3EA210, (s32)D_8030BD90, D_3EACF0 - D_3EA210);
    createSceneObjects();
    func_80203D58();
    setScreenTransition(1, 6, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x40, 0, 0, updateMenuScreen, drawMenuScreen, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
