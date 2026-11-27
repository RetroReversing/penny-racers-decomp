extern u8 D_8011F2F4[];
extern u16 creditsCursor;
extern u8 D_8006FAF0[];
s32 func_800DE38C();
s32 func_800DE2E0();
void initRowTable(s32 arg0);
s32 objCreate();
void func_80138B1C();
void func_8021FAA4();
void func_80220824();
void func_8022F300();
void drawCreditsScreen();

void func_8022F0E0(void)
{
    u16 idx;
    s32 off;

    func_800DE38C();
    func_800DE2E0();
    creditsCursor = 2;
    initRowTable(1);
    idx = objCreate(0, 0, 3, 0, 0, 0xFF, 0, 0, func_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    off = idx * 100;
    *(u16 *)(D_8011F2F4 + off) = *(u16 *)(D_8011F2F4 + off) | 0x20;
    *(u16 *)(D_8011F2F4 + off + 2) = *(u16 *)(D_8011F2F4 + off + 2) | 0x20;
    *(u16 *)(D_8011F2F4 + off + 4) = *(u16 *)(D_8011F2F4 + off + 4) | 0x20;
    objCreate(0, 0, 3, 0, 2, 0xFF, 0, 0, func_8021FAA4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 4, 0xFF, 0, 0, func_80220824, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 200, 0, 0, func_8022F300, drawCreditsScreen, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    *(u16 *)(D_8006FAF0 + 0x20) = 1;
}
