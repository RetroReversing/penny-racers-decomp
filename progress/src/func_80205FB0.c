extern char D_3E9850[];
extern char D_3EA210[];
extern char D_8030BD90[];
extern s16 D_801D7DE8;
extern s32 D_8021AFDC;
extern s8 D_8021B084;
extern s32 D_8021E140;
extern s32 D_8021E168;
extern s8 D_8021E678;
extern f32 D_8021EEA0;
extern f32 D_8021EEB4;
void dmaRomToRam();
void objCreate();
void createSceneObjects();
void func_80203AD0();
void setScreenTransition();
void func_80214204();
void updateTitleSequence();
void drawNoticeMenu();

void func_80205FB0(void)
{
    D_801D7DE8 = 0;
    dmaRomToRam(D_3E9850, D_8030BD90, D_3EA210 - D_3E9850);
    createSceneObjects();
    func_80203AD0();
    func_80214204();
    if (D_8021AFDC == 2) {
        D_8021EEA0 = 0;
        D_8021EEB4 = 0;
        D_8021E168 = 0x22;
        D_8021E140 = 0;
    } else {
        D_8021EEA0 = -10.0f;
        D_8021EEB4 = 0.4f;
        D_8021E140 = 0;
        D_8021E168 = -0xAA;
        D_8021E678 = 0;
    }
    setScreenTransition(1, 0x3C, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x40, 0, 0, updateTitleSequence, drawNoticeMenu, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8021B084 = 0;
}
