extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];

void func_801B41D8(u16 arg0) {
    if (D_8011F2F0[(u16)(arg0 * 100)] < 0x1E) {
        D_8011F2FC[arg0 * 100] = D_8011F2FC[arg0 * 100] - 6;
    } else if ((u8)(D_8011F2F0[arg0 * 100] - 0x1E) < 0x1E) {
        D_8011F2FC[arg0] = D_8011F2FC[arg0] + 6;
    }
    D_8011F2F0[(u16)(arg0 * 100)] = D_8011F2F0[arg0 * 100] + 1;
    if (D_8011F2F0[arg0 * 100] == 0x3C) {
        D_8011F2F0[arg0 * 100] = 0;
    }
}
