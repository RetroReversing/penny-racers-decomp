extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 D_8011F2FD[];
extern u8 D_8011F334[];
extern u8 D_8022AFE9[];

void func_80133F54(u16 arg0) {
    u16 limit;
    if (D_8022AFE9[D_8011F2F0[arg0 * 0x64] * 0x8F0] == 5) {
        D_8011F2FD[arg0 * 0x64] = 2;
        return;
    }
    if (D_8011F2FC[arg0 * 0x64] == 3) {
        limit = 0x9E;
    } else {
        limit = 0x166;
    }
    if ((u16)(u32)*(f32 *)(D_8011F334 + arg0 * 0x64) < limit) {
        *(f32 *)(D_8011F334 + arg0 * 0x64) = (f32)(u16)((u32)*(f32 *)(D_8011F334 + arg0 * 0x64) + 1);
    } else {
        D_8011F2FD[arg0 * 0x64] = 2;
    }
}
