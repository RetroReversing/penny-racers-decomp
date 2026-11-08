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

extern u8 D_80189B34;
extern u8 D_80189CB6;
extern M2C_UNK D_8018A276;
extern M2C_UNK D_8018A277;

s32 func_801485C8(void) {
    s32 var_a0;
    s32 var_v1;
    u8 temp_a1;

    var_a0 = 1;
    if (D_80189B34 == 1) {
        M2C_FIELD(&D_8018A277, u8 *, 0) = (u8) (M2C_FIELD(&D_8018A277, u8 *, 0) | 0x10);
        M2C_FIELD(&D_8018A277, u8 *, 1) = (u8) (M2C_FIELD(&D_8018A277, u8 *, 1) | 0x10);
        M2C_FIELD(&D_8018A277, u8 *, 2) = (u8) (M2C_FIELD(&D_8018A277, u8 *, 2) | 0x10);
    } else {
        do {
            temp_a1 = *(&D_8018A276 + var_a0);
            if ((temp_a1 & 0xF) == D_80189CB6) {
                *(&D_8018A276 + var_a0) = temp_a1 | 0x10;
            }
            var_a0 += 1;
        } while (var_a0 < 4);
        var_a0 = 1;
    }
    var_v1 = 0;
    do {
        var_v1 += (*(&D_8018A276 + var_a0) & 0x10) == 0;
        var_a0 += 1;
    } while (var_a0 < 4);
    return var_v1;
}
