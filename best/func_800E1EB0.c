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

void func_800E1EB0(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 sp0;
    f32 sp4;
    f32 sp8;

    sp0 = (arg2 * arg6) - (arg5 * arg3);
    sp4 = (arg3 * arg4) - (arg6 * arg1);
    sp8 = (arg1 * arg5) - (arg4 * arg2);
    M2C_FIELD(arg0, f32 *, 0) = sp0;
    M2C_FIELD(arg0, f32 *, 4) = sp4;
    M2C_FIELD(arg0, f32 *, 8) = sp8;
}
