extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];

void func_801B3E18(s32 arg0) {
    s32 off;

    off = (arg0 & 0xFFFF) * 100;
    if (D_8011F2F0[off] < 0x1E) {
        D_8011F2FC[(unsigned short)off] = D_8011F2FC[(unsigned short)off] - 7;
    } else {
        off = (arg0 & 0xFFFF) * 100;
        if ((u8)(D_8011F2F0[off] - 0x1E) < 0x1E) {
            D_8011F2FC[(unsigned short)off] = D_8011F2FC[(unsigned short)off] + 7;
        }
    }
    off = (arg0 & 0xFFFF) * 100;
    D_8011F2F0[off] = D_8011F2F0[off] + 1;
    if (D_8011F2F0[off] == 0x3C) {
        D_8011F2F0[off] = 0;
    }
}
