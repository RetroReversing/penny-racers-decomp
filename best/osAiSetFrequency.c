/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern s32 D_800470B8;
extern f64 D_8004A980;

s32 osAiSetFrequency(s32 arg0) {
    f32 temp_fv1;
    f64 var_fv1;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    u32 var_a2;

    var_fv1 = (f64) arg0;
    if (arg0 < 0) {
        var_fv1 += D_8004A980;
    }
    temp_fv1 = ((f32) D_800470B8 / (f32) var_fv1) + 0.5f;
    if (temp_fv1 >= 2.1474836e9f) {
        var_a2 = (s32) (temp_fv1 - 2.1474836e9f) | 0x80000000;
        var_v0_2 = var_a2 < 0x84U;
    } else {
        var_a2 = (u32) (s32) temp_fv1;
        var_v0_2 = var_a2 < 0x84U;
    }
    var_v0 = -1;
    if (var_v0_2 == 0) {
        var_a3 = var_a2 / 66;
        if ((u32) (var_a3 & 0xFF) >= 0x11U) {
            var_a3 = 0x10;
        }
        *(s32 *)0xA4500010 = var_a2 - 1;
        *(s32 *)0xA4500014 = (var_a3 & 0xFF) - 1;
        *(s32 *)0xA4500008 = 1;
        var_v0 = (s32) D_800470B8 / (s32) var_a2;
    }
    return var_v0;
}
