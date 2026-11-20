extern u8 D_8011F314[];
extern u8 D_8011F31C[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183760;
extern f64 D_80183768;

void func_8014D2B4(s32 arg0) {
    u8 *__base_D_8011F32E;
    f32 temp_fs0;
    f32 temp_fv0;
    s32 temp_s0;
    s32 temp_v1;
    s32 off;
    s32 __repair_off_1;
s32 __repair_phase_off;

    temp_s0 = (u16)arg0;
    func_8013AE60(temp_s0);
    off = temp_s0 * 0x64;
    __base_D_8011F32E = D_8011F32E;
    if (*(u16 *)(D_8011F32E + off) == 0) {
        *(f32 *)(D_8011F338 + off) = *(f32 *)(D_8011F314 + off);
        *(u16 *)(__base_D_8011F32E + off) = 1;
    }
    __repair_phase_off = (arg0 & 0xFFFF) * 0x64;
    *(f32 *)(D_8011F334 + __repair_phase_off) = *(f32 *)(D_8011F334 + __repair_phase_off) + 1.0f;
    temp_fv0 = *(f32 *)(D_8011F334 + __repair_phase_off);
    if (temp_fv0 > 360.0f) {
        *(f32 *)(D_8011F334 + __repair_phase_off) = temp_fv0 - 360.0f;
    }
    __repair_off_1 = (arg0 & 0xFFFF) * 0x64;
    temp_fs0 = (f32)(((f64)*(f32 *)(D_8011F334 + __repair_off_1) * D_80183760) / D_80183768);
    *(f32 *)(D_8011F314 + __repair_off_1) = (__sinf() * 20.0f) - *(f32 *)(D_8011F338 + __repair_off_1);
    *(f32 *)(D_8011F31C + __repair_off_1) = __cosf(temp_fs0) * 30.0f;
}
