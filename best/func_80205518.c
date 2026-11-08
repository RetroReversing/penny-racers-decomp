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

s32 func_80205518(u16 *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if ((u16) *arg0 <= 0xFFFEU) {
        do {
            var_a1 += 1;
        } while ((u16) *(((var_a1 & 0xFF) * 2) + arg0) <= 0xFFFEU);
    }
    return (s32) (0x140 - (((var_a1 & 0xFF) + 1) * 0xC)) >> 1;
}
