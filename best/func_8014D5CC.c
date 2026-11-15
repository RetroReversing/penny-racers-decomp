f32 __sinf(f32);
void func_8013AE60(s32);
extern f32 D_8011F314;
extern u16 D_8011F32E[];
extern f32 D_8011F334;
extern f32 D_8011F338;
extern f64 D_80183780;
extern f64 D_80183788;

void func_8014D5CC(s32 arg0) {
    f32 temp_fv0;
    s32 off;

    func_8013AE60(arg0 & 0xFFFF);
    off = (arg0 & 0xFFFF) * 100;
    if (*(u16 *)((u8 *)D_8011F32E + off) == 0) {
        *(f32 *)((u8 *)&D_8011F338 + off) = *(f32 *)((u8 *)&D_8011F314 + off);
        *(u16 *)((u8 *)D_8011F32E + off) = 1;
    }
    *(f32 *)((u8 *)&D_8011F334 + off) = *(f32 *)((u8 *)&D_8011F334 + off) + 1.0f;
    temp_fv0 = *(f32 *)((u8 *)&D_8011F334 + off);
    if (temp_fv0 > 360.0f) {
        *(f32 *)((u8 *)&D_8011F334 + off) = temp_fv0 - 360.0f;
    }
    *(f32 *)((u8 *)&D_8011F314 + off) = (__sinf((f32)(((f64)*(f32 *)((u8 *)&D_8011F334 + off) * D_80183780) / D_80183788)) * -20.0f) - *(f32 *)((u8 *)&D_8011F338 + off);
}
