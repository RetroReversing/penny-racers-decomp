f32 __sinf(f32);
s32 liftCopyFlags(s32);
extern f32 D_8011F320;
extern f32 D_8011F324;
extern f32 racerTimers;
extern const f64 D_801837C0;
extern const f64 D_801837C8;
extern const f64 D_801837D0;
extern const f64 D_801837D8;

void func_8015248C(u16 arg0) {
    s32 off;
s32 __repair_phase_off;
    f32 v;
    liftCopyFlags(arg0 & 0xFFFF);
    off = ((u16)arg0) * 0x64;
    v = (f32)((f64)*(f32 *)((u8 *)&racerTimers + off) + D_801837C0);
    *(f32 *)((u8 *)&racerTimers + off) = v;
    if (D_801837C8 <= (f64)v) {
        *(f32 *)((u8 *)&racerTimers + off) = (f32)(D_801837C8 - (f64)v);
    } else {
    }
    __repair_phase_off = (arg0 & 0xFFFF) * 0x64;
    *(f32 *)((u8 *)&D_8011F320 + __repair_phase_off) = (f32)(((f64)__sinf(*(f32 *)((u8 *)&racerTimers + __repair_phase_off)) * D_801837D0) + D_801837D8);
    *(f32 *)((u8 *)&D_8011F324 + __repair_phase_off) = (f32)(((f64)__sinf(*(f32 *)((u8 *)&racerTimers + __repair_phase_off)) * D_801837D0) + D_801837D8);
}
