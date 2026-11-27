extern u8 D_8011F2F4[];
extern u16 creditsCursor;
extern u8 D_8006FAF0[];
s32 initModelTransforms();
s32 initObjList();
void initRowTable(s32 arg0);
s32 objCreate();
void func_80138B1C();
void appendRowBoardDisplayList();
void appendViewCameraDL();
void func_8022F300();
void drawCreditsScreen();

/* Resets the scene and spawns the credits screen's objects, starting with the title object. */ void initCreditsScreen(void)
{
    u16 titleObj;
    s32 titleOff;

    initModelTransforms();
    initObjList();
    creditsCursor = 2;
    initRowTable(1);
    titleObj = objCreate(0, 0, 3, 0, 0, 0xFF, 0, 0, func_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    titleOff = titleObj * 100;
    *(u16 *)(D_8011F2F4 + titleOff) = *(u16 *)(D_8011F2F4 + titleOff) | 0x20;
    *(u16 *)(D_8011F2F4 + titleOff + 2) = *(u16 *)(D_8011F2F4 + titleOff + 2) | 0x20;
    *(u16 *)(D_8011F2F4 + titleOff + 4) = *(u16 *)(D_8011F2F4 + titleOff + 4) | 0x20;
    objCreate(0, 0, 3, 0, 2, 0xFF, 0, 0, appendRowBoardDisplayList, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 4, 0xFF, 0, 0, appendViewCameraDL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 200, 0, 0, func_8022F300, drawCreditsScreen, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    *(u16 *)(D_8006FAF0 + 0x20) = 1;
}
