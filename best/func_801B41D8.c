extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];

void func_801B41D8(s32 arg0) {
    s32 idx;
    s32 val;

    idx = (arg0 & 0xFFFF) * 100;
    if (D_8011F2F0[idx] >= 0x1E) {
        if ((u32)(D_8011F2F0[idx] - 0x1E) < 0x1E) {
            val = D_8011F2FC[idx] + 6;
            D_8011F2FC[idx] = val;
        }
    } else {
        val = D_8011F2FC[idx] - 6;
        D_8011F2FC[idx] = val;
    }
    idx = (arg0 & 0xFFFF) * 100;
    D_8011F2F0[idx] = D_8011F2F0[idx] + 1;
    if (D_8011F2F0[idx] == 0x3C) {
        D_8011F2F0[idx] = 0;
    }
}
