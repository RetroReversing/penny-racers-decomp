extern u8 D_80126FF6;
extern u8 D_8011F2F0[];
extern u8 D_8011F330[];

void func_80132AB0(void **arg0, s32 arg1) {
    if (D_80126FF6 == 0) {
        return;
    }
    if (*(u16 *)(D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) == 0) {
        *(u16 *)(D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
    }
}
