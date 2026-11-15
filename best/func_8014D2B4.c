extern u8 D_8011F314[];
extern u8 D_8011F31C[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183760;
extern f64 D_80183768;

void func_8014D2B4(s32 arg0) {
    f32 temp_fs0;
    f32 temp_fv0;
    s32 temp_s0;
    s32 temp_v1;
    s32 off;

    temp_s0 = arg0 & 0xFFFF;
    func_8013AE60(temp_s0);
    off = temp_s0 * 0x64;
    if (*(u16 *)(D_8011F32E + off) == 0) {
        *(f32 *)(D_8011F338 + off) = *(f32 *)(D_8011F314 + off);
        *(u16 *)(D_8011F32E + off) = 1;
    }
    off = (arg0 & 0xFFFF) * 0x64;
    *(f32 *)(D_8011F334 + off) = *(f32 *)(D_8011F334 + off) + 1.0f;
    temp_fv0 = *(f32 *)(D_8011F334 + off);
    if (temp_fv0 > 360.0f) {
        *(f32 *)(D_8011F334 + off) = temp_fv0 - 360.0f;
    }
    off = (arg0 & 0xFFFF) * 0x64;
    temp_fs0 = (f32)(((f64)*(f32 *)(D_8011F334 + off) * D_80183760) / D_80183768);
    *(f32 *)(D_8011F314 + off) = (__sinf(temp_fs0) * 20.0f) - *(f32 *)(D_8011F338 + off);
    *(f32 *)(D_8011F31C + off) = __cosf(temp_fs0) * 30.0f;
}
