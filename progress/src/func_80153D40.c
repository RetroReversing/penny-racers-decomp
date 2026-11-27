f32 __sinf(f32);
s32 liftCopyFlags(s32);
extern u8 sPrimColorG[];
typedef struct { u16 f0; u8 pad[98]; } Slot_8011F32E;
extern Slot_8011F32E playerSlots[];
extern u8 racerTimers[];
extern u8 racerAnimFrames[];
extern f64 D_80183810;
extern f64 D_80183818;

#define F32(base, off) (*(f32 *)((u8 *)(base) + (off)))

void func_80153D40(s32 arg0) {
    u16 idx;
    s32 off;
s32 __repair_phase_off;
    f32 v;

    idx = arg0;
    liftCopyFlags(idx);
    if (playerSlots[idx].f0 == 0) {
        F32(racerAnimFrames, idx * 0x64) = F32(sPrimColorG, idx * 0x64);
        playerSlots[idx].f0 = 1;
    }
    off = ((u16) arg0) * 0x64;
    v = F32(racerTimers, off) + 2.0f;
    F32(racerTimers, off) = v;
    if (v > 360.0f) {
        F32(racerTimers, off) = v - 360.0f;
    }
    __repair_phase_off = ((u16) arg0) * 0x64;
    F32(sPrimColorG, __repair_phase_off) = __sinf((f32) (((f64) F32(racerTimers, __repair_phase_off) * D_80183810) / D_80183818)) * 8.0f + F32(racerAnimFrames, __repair_phase_off);
}
