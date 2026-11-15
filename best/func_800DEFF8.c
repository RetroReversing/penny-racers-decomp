extern u8 D_8011F2F0[];
extern u8 D_8011F2F2[];
extern u8 D_8011F300[];
extern u16 func_800E1850;

void func_800DEFF8(void) {
    u16 idx;
    s32 off;

    idx = func_800E1850;
    if (idx != 0xFFFF) {
        do {
            off = idx * 0x64;
            if (D_8011F2F0[off] != 0xFF) {
                *(u16 *)(D_8011F2F2 + off) |= 0x10;
            }
            idx = *(u16 *)(D_8011F300 + off);
        } while (idx != 0xFFFF);
    }
}
