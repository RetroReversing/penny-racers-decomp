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

M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern f64 D_8004A388;

s32 func_8002CD38(s32 arg0, f32 arg1) {
    f64 temp_ft0;
    s32 var_v1;

    if (arg1 == 0.0f) {
        func_800346B0("EX", "n_sndplayer.c", 0x113);
    }
    temp_ft0 = (f64) ((f32) arg0 / arg1);
    if (D_8004A388 < temp_ft0) {
        var_v1 = 0x7FFFFFFF;
    } else {
        var_v1 = (s32) temp_ft0;
    }
    return var_v1;
}
