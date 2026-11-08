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

extern M2C_UNK D_80168D20;
extern M2C_UNK D_80168D28;
extern M2C_UNK D_80168D30;
extern u8 D_80189B34;
extern s16 D_8021E1A2;

s32 func_801497AC(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    u8 var_a1;

    var_a1 = 0xFF;
    if ((arg0 & 0xFF) != 0xFF) {
        temp_a0 = arg0 & 7;
        if (D_80189B34 == 2) {
            temp_v0 = temp_a0 & 0xFF;
            if (D_8021E1A2 == 1) {
                var_a1 = *(&D_80168D28 + temp_v0);
            } else {
                var_a1 = *(&D_80168D20 + temp_v0);
            }
        } else {
            var_a1 = *(&D_80168D30 + (temp_a0 & 0xFF));
        }
    }
    return var_a1 & 0xFF;
}
