extern u8 D_8011F2F4[];
extern u16 D_802330A0;
extern u8 D_8006FAF0[];
s32 func_800DE38C();
s32 func_800DE2E0();
void func_8021F6A0(s32 arg0);
s32 func_800DE41C();
void func_80138B1C();
void func_8021FAA4();
void func_80220824();
void func_8022F300();
void func_8022F4B4();

void func_8022F0E0(void)
{
    u16 idx;
    s32 off;

    func_800DE38C();
    func_800DE2E0();
    D_802330A0 = 2;
    func_8021F6A0(1);
    idx = func_800DE41C(0, 0, 3, 0, 0, 0xFF, 0, 0, func_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    off = idx * 100;
    *(u16 *)(D_8011F2F4 + off) = *(u16 *)(D_8011F2F4 + off) | 0x20;
    *(u16 *)(D_8011F2F4 + off + 2) = *(u16 *)(D_8011F2F4 + off + 2) | 0x20;
    *(u16 *)(D_8011F2F4 + off + 4) = *(u16 *)(D_8011F2F4 + off + 4) | 0x20;
    func_800DE41C(0, 0, 3, 0, 2, 0xFF, 0, 0, func_8021FAA4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 4, 0xFF, 0, 0, func_80220824, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 200, 0, 0, func_8022F300, func_8022F4B4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    *(u16 *)(D_8006FAF0 + 0x20) = 1;
}
