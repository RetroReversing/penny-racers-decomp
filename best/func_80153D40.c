extern u8 D_8011F30C[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183810;
extern f64 D_80183818;
f32 __sinf(f32);
void func_8013AE60(s32);

void func_80153D40(s32 arg0) {
    s32 idx;
    s32 i;
    f32 f;

    idx = arg0 & 0xFFFF;
    func_8013AE60(idx);
    if (*(u16 *) (D_8011F32E + idx * 100) == 0) {
        *(f32 *) (D_8011F338 + (arg0 & 0xFFFF) * 100) = *(f32 *) (D_8011F30C + (arg0 & 0xFFFF) * 100);
        *(u16 *) (D_8011F32E + (arg0 & 0xFFFF) * 100) = 1;
    }
    i = (arg0 & 0xFFFF) * 100;
    f = *(f32 *) (D_8011F334 + i) + 2.0f;
    *(f32 *) (D_8011F334 + i) = f;
    if (f > 360.0f) {
        *(f32 *) (D_8011F334 + i) = f - 360.0f;
    }
    i = (arg0 & 0xFFFF) * 100;
    *(f32 *) (D_8011F30C + i) = __sinf((f32) ((*(f32 *) (D_8011F334 + i) * D_80183810) / D_80183818)) * 8.0f + *(f32 *) (D_8011F338 + i);
}
