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

extern M2C_UNK D_801E97A0;

void func_801E2E00(s32 arg0, s32 *arg1) {
    s32 var_a2;
    u32 var_v1;

    var_a2 = 0;
    var_v1 = 0;
    do {
        var_a2 += *(((arg0 & 0xFFFF) * 0x30) + var_v1 + &D_801E97A0);
        var_v1 += 1;
    } while (var_v1 < 0x2CU);
    *arg1 = var_a2;
}
