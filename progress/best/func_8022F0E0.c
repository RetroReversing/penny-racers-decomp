/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */

extern short D_8006FB10;
s32 func_800DE2E0();
s32 func_800DE38C();
s32 func_800DE41C();
s32 func_8021F6A0();
extern char D_8006FAF0[];
extern char D_8011F2F4[];
extern char D_8011F2F8[];
extern char D_8021FAA4[];
extern char D_80220824[];
extern s16 D_802330A0;
extern s32 func_80138B1C;
extern s32 func_8022F300;
extern s32 func_8022F4B4;

void func_8022F0E0(void) {
    char *__base_D_8011F2F8;
    s32 temp_v1;

    func_800DE38C();
    func_800DE2E0();
    D_802330A0 = 2;
    func_8021F6A0(1);
    temp_v1 = (func_800DE41C(0, 0, 3, 0, 0, 0xFF, 0, NULL, &func_80138B1C, 0, 0, 0, 0, 0, 0) & 0xFFFF) * 0x64;
    *(u16 *)(D_8011F2F4 + (unsigned short)temp_v1) = *(u16 *)(D_8011F2F4 + temp_v1) | 0x20;
    *(u16 *)(D_8011F2F4 + 2 + temp_v1) = *(u16 *)(D_8011F2F4 + 2 + temp_v1) | 0x20;
    __base_D_8011F2F8 = D_8011F2F8;
    *(u16 *)(__base_D_8011F2F8 + (u32)temp_v1) = *(u16 *)(__base_D_8011F2F8 + temp_v1) | 0x20;
    func_800DE41C(0, 0, 3, 0, 2, 0xFF, 0, NULL, &D_8021FAA4, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 4, 0xFF, 0, NULL, &D_80220824, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0xC8, 0, 0, &func_8022F300, &func_8022F4B4, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8006FB10 = 1;
}
