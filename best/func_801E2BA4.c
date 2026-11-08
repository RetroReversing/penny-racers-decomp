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

s32 func_8003DE60();
extern char D_801E95A8[];
extern char D_801F18E0[];

s32 func_801E2BA4(void) {
    s32 var_s0;
    u32 var_v1;

    var_s0 = 0;
    var_v1 = 4;
    do {
        var_s0 += *(D_801F18E0 + var_v1);
        var_v1 += 1;
    } while (var_v1 < 0x400U);
    func_8003DE60(&D_801E95A8, var_s0);
    return var_s0;
}
