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

extern u16 func_800E1850;
extern M2C_UNK func_801153C8;

void func_800DEFF8(void) {
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 var_a0;

    var_a0 = func_800E1850;
    var_v0 = var_a0 & 0xFFFF;
    if ((var_a0 & 0xFFFF) != 0xFFFF) {
        var_v1 = var_v0 * 2;
        do {
            temp_v1 = (((var_v1 + var_v0) * 8) + var_v0) * 4;
            var_v0_2 = var_a0 & 0xFFFF;
            if (*(&func_801153C8 + 0x9F28 + temp_v1) != 0xFF) {
                *(&func_801153C8 + 0x9F2A + temp_v1) = *(&func_801153C8 + 0x9F2A + temp_v1) | 0x10;
                var_v0_2 = var_a0 & 0xFFFF;
            }
            var_a0 = *(&func_801153C8 + 0x9F38 + (var_v0_2 * 0x64));
            var_v0 = var_a0 & 0xFFFF;
            var_v1 = var_v0 * 2;
        } while (var_v0 != 0xFFFF);
    }
}
