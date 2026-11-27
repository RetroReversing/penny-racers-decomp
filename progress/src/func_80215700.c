extern s8 D_41CF00;
extern s8 D_425610;
extern s8 D_80190CB2;
extern s32 D_801C5E9C;
extern u8 D_801C5EA0;
extern s8 D_801CA13C;
extern s8 menuArrowAlpha;
extern s32 D_8030BD90;
extern s32 updateSceneTransition;
extern s32 func_80215CCC;
extern void dmaRomToRam(void *, void *, s32);
extern void func_80143DCC(void);
extern void setScreenTransition(s32, s32, s32, s32, s32);
extern void objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_80215700(void) {
    dmaRomToRam(&D_41CF00, &D_8030BD90, &D_425610 - &D_41CF00);
    func_80143DCC();
    setScreenTransition(1, 0x14, 0, 0, 0);
    D_801CA13C = 1;
    if (D_801C5EA0 == 0) {
        *(s8 *)&D_801C5E9C = 3;
        *((s8 *)&D_801C5E9C + 1) = 5;
        *((s8 *)&D_801C5E9C + 2) = 0;
        *((s8 *)&D_801C5E9C + 3) = 0;
    }
    menuArrowAlpha = 0;
    D_80190CB2 = 0;
    objCreate(0, 0, 3, 0, 0x40, 0, 0, &updateSceneTransition, &func_80215CCC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
