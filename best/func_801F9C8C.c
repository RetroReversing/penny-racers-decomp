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

f32 func_801F9AC0(f32);                             /* extern */
extern f64 D_801FB2E8;

f32 func_801F9C8C(f32 arg0, f32 arg1) {
    if (arg1 == 0.0f) {
        if (arg0 > 0.0f) {
            return 1.5707964f;
        }
        if (arg0 < 0.0f) {
            return 4.712389f;
        }
        goto block_6;
    }
block_6:
    if (arg1 < 0.0f) {
        return func_801F9AC0(arg0 / arg1) + 3.1415927f;
    }
    if (arg1 > 0.0f) {
        if (arg0 >= 0.0f) {
            return func_801F9AC0(arg0 / arg1);
        }
        return (f32) ((f64) func_801F9AC0(arg0 / arg1) + D_801FB2E8);
    }
    return 0.0f;
}
