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

s16 func_8002C1D0(void *);                          /* extern */
extern M2C_UNK D_8006FB38;
extern M2C_UNK D_8006FCB4;
extern M2C_UNK D_8006FCB8;
extern M2C_UNK D_8006FCBA;

void func_80028100(s32 arg0, u16 arg1) {
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 var_v0;

    temp_s0 = arg0 * 0x184;
    temp_v0 = func_8002C1D0(temp_s0 + &D_8006FB38);
    if (arg1 != 0) {
        *(&D_8006FCB8 + temp_s0) = arg1;
        *(&D_8006FCBA + temp_s0) = (s16) ((u32) temp_v0 / arg1);
        var_v0 = arg0 * 2;
    } else {
        *(&D_8006FCBA + temp_s0) = temp_v0;
        *(&D_8006FCB8 + temp_s0) = 0;
        var_v0 = arg0 * 2;
    }
    temp_v0_2 = (((var_v0 + arg0) << 5) + arg0) * 4;
    *(&D_8006FCB4 + temp_v0_2) = *(&D_8006FCB4 + temp_v0_2) | 1;
}
