f32 __sinf(f32);
void func_8013AE60(s32);
extern f32 D_8011F320;
extern f32 D_8011F324;
extern f32 D_8011F334;
extern f64 D_80183798;
extern f64 D_801837A0;
extern f64 D_801837A8;
extern f64 D_801837B0;
extern f64 D_801837B8;

void func_80150FF8(u32 arg0) {
    f32 temp_fv0;
    f64 temp_fs0;
    f64 temp_fv1;
    u32 temp_s0;
    u32 temp_v0;

    temp_s0 = arg0 & 0xFFFF;
    func_8013AE60(temp_s0);
    temp_v0 = temp_s0 * 0x64;
    temp_fv0 = (f32) ((f64) *(f32 *) ((u8 *) &D_8011F334 + temp_v0) + D_80183798);
    *(f32 *) ((u8 *) &D_8011F334 + temp_v0) = temp_fv0;
    temp_fv1 = (f64) temp_fv0;
    if (D_801837A0 <= temp_fv1) {
        *(f32 *) ((u8 *) &D_8011F334 + temp_v0) = (f32) (D_801837A0 - temp_fv1);
    }
    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_fs0 = D_801837A8;
    *(f32 *) ((u8 *) &D_8011F320 + temp_v0) = (f32) (((f64) __sinf(*(f32 *) ((u8 *) &D_8011F334 + temp_v0)) * temp_fs0) + D_801837B0);
    *(f32 *) ((u8 *) &D_8011F324 + temp_v0) = (f32) (((f64) __sinf(*(f32 *) ((u8 *) &D_8011F334 + temp_v0)) * temp_fs0) + D_801837B8);
}
