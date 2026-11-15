extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 D_8011F334[];
extern u8 D_8022A776[];

void func_80135108(s32 arg0)
{
    if (*(u16 *)(D_8022A776 + D_8011F2F0[(arg0 & 0xFFFF) * 100] * 0x8F0) & 2) {
        *(f32 *)(D_8011F334 + (arg0 & 0xFFFF) * 100) = (f32)(u16)((u32)*(f32 *)(D_8011F334 + (arg0 & 0xFFFF) * 100) + 1);
        if ((u16)(u32)*(f32 *)(D_8011F334 + (arg0 & 0xFFFF) * 100) < 0x10) {
            D_8011F2FC[(arg0 & 0xFFFF) * 100] = 0;
            return;
        }
        if ((u16)(u32)*(f32 *)(D_8011F334 + (arg0 & 0xFFFF) * 100) >= 0x21) {
            *(s32 *)(D_8011F334 + (arg0 & 0xFFFF) * 100) = 0;
        }
        D_8011F2FC[(arg0 & 0xFFFF) * 100] = 1;
        return;
    }
    D_8011F2FC[(arg0 & 0xFFFF) * 100] = 0;
    *(s32 *)(D_8011F334 + (arg0 & 0xFFFF) * 100) = 0;
}
