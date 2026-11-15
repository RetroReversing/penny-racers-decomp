f32 __sinf(f32);
s32 func_8013AE60(s32);
extern u8 D_8011F30C[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183810;
extern f64 D_80183818;

void func_80153D40(s32 arg0) {
    s32 off;
    s32 idx;
    f32 v;

    idx = arg0 & 0xFFFF;
    func_8013AE60(idx);
    off = (arg0 & 0xFFFF) * 0x64;
    if (*(u16 *)(D_8011F32E + off) == 0) {
        *(f32 *)(D_8011F338 + off) = *(f32 *)(D_8011F30C + off);
        *(u16 *)(D_8011F32E + off) = 1;
    }
    v = *(f32 *)(D_8011F334 + off) + 2.0f;
    *(f32 *)(D_8011F334 + off) = v;
    if (v > 360.0f) {
        *(f32 *)(D_8011F334 + off) = v - 360.0f;
    }
    off = (arg0 & 0xFFFF) * 0x64;
    *(f32 *)(D_8011F30C + off) = __sinf((f32) ((f64) *(f32 *)(D_8011F334 + off) * D_80183810 / D_80183818)) * 8.0f + *(f32 *)(D_8011F338 + off);
}
