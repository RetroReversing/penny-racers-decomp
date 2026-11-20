extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];

void func_801B3E18(u16 arg0) {
    s32 off;
    s32 __repair_off_1;

    off = (arg0 & 0xFFFF) * 100;
    if (D_8011F2F0[off] < 0x1E) {
        D_8011F2FC[(unsigned short)off] = D_8011F2FC[(unsigned short)off] - 7;
    } else {
        off = (arg0 & 0xFFFF) * 100;
        if ((u8)(D_8011F2F0[off] - 0x1E) < 0x1E) {
            D_8011F2FC[(unsigned short)off] = D_8011F2FC[(unsigned short)off] + 7;
        }
    }
    __repair_off_1 = (arg0 & 0xFFFF) * 100;
    D_8011F2F0[(arg0 & 0xFFFF) * 100] = D_8011F2F0[__repair_off_1] + 1;
    if (D_8011F2F0[__repair_off_1] == 0x3C) {
        D_8011F2F0[__repair_off_1] = 0;
    }
}
