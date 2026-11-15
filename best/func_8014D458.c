extern u8 D_8011F314[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183770;
extern f64 D_80183778;
f32 __sinf(f32);
void func_8013AE60(s32);

void func_8014D458(s32 arg0) {
    s32 off;
    f32 t;

    func_8013AE60(arg0 & 0xFFFF);
    off = (arg0 & 0xFFFF) * 100;
    if (*(u16 *)(D_8011F32E + off) == 0) {
        *(f32 *)(D_8011F338 + off) = *(f32 *)(D_8011F314 + off);
        *(u16 *)(D_8011F32E + off) = 1;
    }
    off = (arg0 & 0xFFFF) * 100;
    *(f32 *)(D_8011F334 + off) = *(f32 *)(D_8011F334 + off) + 1.0f;
    t = *(f32 *)(D_8011F334 + off);
    if (t > 360.0f) {
        *(f32 *)(D_8011F334 + off) = t - 360.0f;
    }
    off = (arg0 & 0xFFFF) * 100;
    *(f32 *)(D_8011F314 + off) =
        (__sinf((f32)(((f64)*(f32 *)(D_8011F334 + off) * D_80183770) / D_80183778)) * 20.0f) -
        *(f32 *)(D_8011F338 + off);
}
