extern u8 D_8011F314[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183770;
extern f64 D_80183778;
void func_8013AE60(s32);
f32 __sinf(f32);

#define F32(base, off) (*(f32 *)((u8 *)(base) + (off)))

void func_8014D458(s32 arg0) {
    u16 idx;
    s32 off;
    f32 fv;

    idx = arg0;
    func_8013AE60(idx);
    off = idx * 0x64;
    if (*(u16 *)(D_8011F32E + off) == 0) {
        F32(D_8011F338, off) = F32(D_8011F314, off);
        *(u16 *)(D_8011F32E + off) = 1;
    }
    off = ((u16) arg0) * 0x64;
    F32(D_8011F334, off) = F32(D_8011F334, off) + 1.0f;
    fv = F32(D_8011F334, off);
    if (fv > 360.0f) {
        F32(D_8011F334, off) = fv - 360.0f;
    }
    off = ((u16) arg0) * 0x64;
    F32(D_8011F314, off) = (__sinf((f32) (((f64) F32(D_8011F334, off) * D_80183770) / D_80183778)) * 20.0f) - F32(D_8011F338, off);
}
