extern void liftCopyFlags(s32);
extern f32 D_8011F31C;
extern f64 D_80183790;

void func_80150DE0(s32 arg0) {
    s32 idx = arg0 & 0xFFFF;
    s32 off;

    liftCopyFlags(idx);
    off = idx * 0x64;
    *(f32 *)((char *)&D_8011F31C + off) = (f32)((f64)*(f32 *)((char *)&D_8011F31C + off) - D_80183790);
}
