f32 __sinf(f32);
void func_8013AE60(s32);
extern u16 D_8011F32E;
extern f32 D_8011F308;
extern f32 D_8011F334;
extern f32 D_8016D8D0;
extern f64 D_80183868;
extern f64 D_80183870;
extern f64 D_80183878;

void func_80157E30(s32 arg0) {
    f32 temp_fv0;
    s32 temp_s0;
    s32 __repair_temp_s0_1;
    s32 temp_v1;

    do { func_8013AE60(arg0 & 0xFFFF); } while (0);
    temp_s0 = arg0 & 0xFFFF;
    temp_v1 = temp_s0 * 0x64;
    if (*(u16 *) ((u8 *) &D_8011F32E + temp_v1) == 0) {
        *(f32 *) ((u8 *) &D_8011F334 + temp_v1) = *(f32 *) ((u8 *) &D_8011F308 + temp_v1);
        *(u16 *) ((u8 *) &D_8011F32E + temp_v1) = 1;
    }
    temp_fv0 = (f32) ((f64) D_8016D8D0 + D_80183868);
    D_8016D8D0 = temp_fv0;
    if (temp_fv0 > 360.0f) {
        D_8016D8D0 = temp_fv0 - 360.0f;
    }
    __repair_temp_s0_1 = (s32) ((u16) arg0) * 0x64;
    *(f32 *) ((u8 *) &D_8011F308 + __repair_temp_s0_1) = (__sinf((f32) (((f64) D_8016D8D0 * D_80183870) / D_80183878)) * 100.0f) + *(f32 *) ((u8 *) &D_8011F334 + __repair_temp_s0_1);
}
