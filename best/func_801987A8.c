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

u32 func_8019A31C();                                /* extern */
extern s8 D_801C7068;

s32 func_801987A8(void) {
    s32 var_v1;

    var_v1 = 0;
    if (D_801C7068 != 0) {
        var_v1 = (func_8019A31C() >> 2) & 1;
    }
    return var_v1 & 0xFF;
}
