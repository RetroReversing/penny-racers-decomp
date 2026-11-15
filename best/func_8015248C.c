f32 __sinf(f32);
void func_8013AE60(s32);
extern f32 D_8011F320;
extern f32 D_8011F324;
extern f32 D_8011F334;
extern f64 D_801837C0;
extern f64 D_801837C8;
extern f64 D_801837D0;
extern f64 D_801837D8;

void func_8015248C(s32 arg0) {
    s32 i;
    s32 off;
    f32 v;

    i = arg0 & 0xFFFF;
    func_8013AE60(i);
    off = i * 100;
    v = (f32)((f64) *(f32 *)((u8 *)&D_8011F334 + off) + D_801837C0);
    *(f32 *)((u8 *)&D_8011F334 + off) = v;
    if (D_801837C8 <= (f64)v) {
        *(f32 *)((u8 *)&D_8011F334 + off) = (f32)(D_801837C8 - (f64)v);
    }
    off = (arg0 & 0xFFFF) * 100;
    *(f32 *)((u8 *)&D_8011F320 + off) = (f32)(((f64)__sinf(*(f32 *)((u8 *)&D_8011F334 + off))) * D_801837D0 + D_801837D8);
    *(f32 *)((u8 *)&D_8011F324 + off) = (f32)(((f64)__sinf(*(f32 *)((u8 *)&D_8011F334 + off))) * D_801837D0 + D_801837D8);
}
