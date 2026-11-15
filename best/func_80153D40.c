f32 __sinf(f32);
s32 func_8013AE60(s32);
extern u8 D_8011F30C[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183810;
extern f64 D_80183818;

#define F32(base, off) (*(f32 *)((u8 *)(base) + (off)))

void func_80153D40(s32 arg0) {
    u16 idx;
    s32 off;
    f32 v;

    idx = arg0;
    func_8013AE60(idx);
    if (*(u16 *)(D_8011F32E + idx * 0x64) == 0) {
        F32(D_8011F338, idx * 0x64) = F32(D_8011F30C, idx * 0x64);
        *(u16 *)(D_8011F32E + idx * 0x64) = 1;
    }
    off = ((u16) arg0) * 0x64;
    v = F32(D_8011F334, off) + 2.0f;
    F32(D_8011F334, off) = v;
    if (v > 360.0f) {
        F32(D_8011F334, off) = v - 360.0f;
    }
    off = ((u16) arg0) * 0x64;
    F32(D_8011F30C, off) = __sinf((f32) (((f64) F32(D_8011F334, off) * D_80183810) / D_80183818)) * 8.0f + F32(D_8011F338, off);
}
