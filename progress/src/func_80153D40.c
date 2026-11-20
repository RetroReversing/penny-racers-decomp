f32 __sinf(f32);
s32 func_8013AE60(s32);
extern u8 D_8011F30C[];
typedef struct { u16 f0; u8 pad[98]; } Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183810;
extern f64 D_80183818;

#define F32(base, off) (*(f32 *)((u8 *)(base) + (off)))

void func_80153D40(s32 arg0) {
    u16 idx;
    s32 off;
s32 __repair_phase_off;
    f32 v;

    idx = arg0;
    func_8013AE60(idx);
    if (D_8011F32E[idx].f0 == 0) {
        F32(D_8011F338, idx * 0x64) = F32(D_8011F30C, idx * 0x64);
        D_8011F32E[idx].f0 = 1;
    }
    off = ((u16) arg0) * 0x64;
    v = F32(D_8011F334, off) + 2.0f;
    F32(D_8011F334, off) = v;
    if (v > 360.0f) {
        F32(D_8011F334, off) = v - 360.0f;
    }
    __repair_phase_off = ((u16) arg0) * 0x64;
    F32(D_8011F30C, __repair_phase_off) = __sinf((f32) (((f64) F32(D_8011F334, __repair_phase_off) * D_80183810) / D_80183818)) * 8.0f + F32(D_8011F338, __repair_phase_off);
}
