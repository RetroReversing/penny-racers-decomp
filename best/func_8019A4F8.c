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

extern s8 D_801C6BB9;
extern s8 D_801C7068;

s32 func_8019A4F8(void) {
    s32 var_v0;

    if (D_801C7068 == 0) {
        if (D_801C6BB9 == 0) {
            var_v0 = 0xA;
        } else {
            var_v0 = (-(D_801C6BB9 != 0x17) & 0xB) | 9;
        }
    } else if (D_801C7068 == 0x17) {
        if (D_801C6BB9 == 0) {
            var_v0 = 6;
        } else {
            var_v0 = (-(D_801C6BB9 != 0x17) & 7) | 5;
        }
    } else if (D_801C6BB9 == 0) {
        var_v0 = 0xE;
    } else {
        var_v0 = (-(D_801C6BB9 != 0x17) & 0xF) | 0xD;
    }
    return var_v0 & 0xFF;
}
