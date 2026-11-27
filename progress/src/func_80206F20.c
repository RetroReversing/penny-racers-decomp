extern u8 D_3EACF0[];
extern u8 D_3ED8F0[];
extern u8 D_8030BD90[];
extern s8 D_8021B068;
extern s16 D_8021E18C;
extern s8 D_8021F260[];

void dmaRomToRam(void *, void *, s32);
void objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void createSceneObjects(void);
void func_80203B04(void);
void func_80203B34(void);
void setScreenTransition(s32, s32, s32, s32, s32);
void func_80207DC8(void);
extern char updateMenuSelection[];
extern char func_80207440[];

void func_80206F20(void) {
    dmaRomToRam(D_3EACF0, D_8030BD90, D_3ED8F0 - D_3EACF0);
    createSceneObjects();
    func_80203B04();
    func_80203B34();
    D_8021B068 = 0;
    D_8021E18C = 0;
    setScreenTransition(1, 6, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x40, 0, 0, updateMenuSelection, func_80207440, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8021F260[0] = 0;
    D_8021F260[1] = 0;
    D_8021F260[2] = 0;
    D_8021F260[4] = 0;
    func_80207DC8();
}
