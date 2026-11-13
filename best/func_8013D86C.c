extern u8 D_8011F340[];
extern u8 D_8011F350[];
extern u8 D_8006FAF0[];
void func_8013D86C(s32 arg0) {
    s32 idx = (arg0 & 0xFFFF) * 0x64;
    u8 *rec = *(u8 **)(D_8011F350 + idx);
    if (**(u8 **)(D_8011F340 + idx) != 0) {
        return;
    }
}
