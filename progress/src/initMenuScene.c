extern char D_3ED8F0[];
extern char D_400E00[];
extern char D_8030BD90[];
extern char carouselSelected[];
extern s32 D_8021AFDC;
extern s8 D_8021B068;
extern s8 D_8021B084;
extern s32 D_8021B300;
extern s32 D_8021B304;
extern s16 D_8021E110;
extern s8 D_8021F260[];
void dmaRomToRam();
s16 objCreate();
void createSceneObjects();
void setScreenTransition();
void func_8020E788();
void func_8020E7AC();
void func_8020CAF4();
void func_8020D1AC();
void func_8020C994();
void func_8020C9DC();

/* Loads the menu code from ROM, builds the scene objects and resets the menu state, then spawns the menu and its overlay objects. */ void initMenuScene(void)
{
    s32 slot;

    dmaRomToRam(D_3ED8F0, D_8030BD90, D_400E00 - D_3ED8F0);
    createSceneObjects();
    D_8021B304 = 0;
    D_8021B300 = 0;
    func_8020E7AC();
    func_8020E788();
    slot = 0;
    do {
        *(s32 *)(carouselSelected + (slot & 0xFF) * 4) = 0;
        slot++;
    } while (((u32)(slot & 0xFF)) < 4U);
    if (D_8021AFDC == 0x18) {
        D_8021B068 = 0;
    }
    setScreenTransition(1, 6, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x40, 0, 0, func_8020CAF4, func_8020D1AC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8021E110 = objCreate(0, 0, 3, 0, 0x41, 0, 0, func_8020C994, func_8020C9DC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8021F260[0] = 0;
    D_8021F260[1] = 0;
    D_8021F260[2] = 0;
    D_8021F260[4] = 0;
    D_8021B084 = 0;
}
