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

u8 func_80032230(void *arg0) {
    u8 *temp_v0;
    u8 *temp_v1_2;
    u8 temp_v1;
    u8 var_a0;

    temp_v0 = M2C_FIELD(arg0, u8 **, 8);
    M2C_FIELD(arg0, u8 **, 8) = (u8 *) (temp_v0 + 1);
    var_a0 = *temp_v0;
    if (var_a0 & 0x80) {
        var_a0 &= 0x7F;
        do {
            temp_v1_2 = M2C_FIELD(arg0, u8 **, 8);
            M2C_FIELD(arg0, u8 **, 8) = (u8 *) (temp_v1_2 + 1);
            temp_v1 = *temp_v1_2;
            var_a0 = (var_a0 << 7) + (temp_v1 & 0x7F);
        } while (temp_v1 & 0x80);
    }
    return var_a0;
}
