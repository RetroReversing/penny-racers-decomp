f32 __sinf(f32);
void liftCopyFlags(s32);
extern u8 D_8011F320[];
extern u8 D_8011F324[];
extern u8 D_8011F334[];
extern f64 D_801837E0;
extern f64 D_801837E8;
extern f64 D_801837F0;
extern f64 D_801837F8;
extern f64 D_80183800;

void func_801525C4(s32 arg0)
{
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    f32 temp_fv0;
    f64 temp_fs0;
    f64 temp_fv1;

    temp_s0 = arg0 & 0xFFFF;
    liftCopyFlags(temp_s0);
    temp_v0 = temp_s0 * 100;
    temp_fv0 = (f32) (*(f32 *) (D_8011F334 + temp_v0) + D_801837E0);
    *(f32 *) (D_8011F334 + temp_v0) = temp_fv0;
    if (D_801837E8 <= (f64) temp_fv0)
    {
        *(f32 *) (D_8011F334 + temp_v0) = (f32) (D_801837E8 - (f64) temp_fv0);
    }
    temp_s0_2 = (arg0 & 0xFFFF) * 100;
    temp_fv0 = __sinf(*(f32 *) (D_8011F334 + temp_s0_2));
    temp_fv1 = (f64) temp_fv0;
    temp_fs0 = D_801837F0;
    *(f32 *) (D_8011F320 + temp_s0_2) = (f32) (temp_fv1 * temp_fs0 + D_801837F8);
    temp_fv0 = __sinf(*(f32 *) (D_8011F334 + temp_s0_2));
    *(f32 *) (D_8011F324 + temp_s0_2) = (f32) ((f64) temp_fv0 * temp_fs0 + D_80183800);
}
