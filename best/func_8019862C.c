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
extern M2C_UNK D_801C6BE2;
extern M2C_UNK D_801C7062;
extern s8 D_801C7068;
extern u8 D_801C7469;
extern void *D_801C7AB0;

s32 func_8019862C(void) {
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;

    var_a2 = 0;
    if ((D_801C7068 < 0x17) && (*(&D_801C6BE2 + (((D_801C6BB9 * 0x18) + D_801C7068) * 2)) == 0xFFFF)) {
        if (M2C_FIELD(D_801C7AB0, u8 *, 1) != 5) {
            var_a2 = 1;
        } else {
            if ((M2C_FIELD(&D_801C7062, s8 *, 0) == D_801C7068) && ((M2C_FIELD(&D_801C7062, s8 *, 1) == (D_801C6BB9 + 1)) || (M2C_FIELD(&D_801C7062, s8 *, 1) == (D_801C6BB9 - 1)))) {
                var_v1 = D_801C7469 == 1;
                var_v0 = D_801C7469 ^ 3;
                goto block_9;
            }
            if (M2C_FIELD(&D_801C7062, s8 *, 0) == (D_801C7068 + 1)) {
                if (M2C_FIELD(&D_801C7062, s8 *, 1) == D_801C6BB9) {
                    if (D_801C7469 == 3) {
                        var_a2 = 1;
                    }
                } else {
                    goto block_16;
                }
            } else {
block_16:
                if (M2C_FIELD(&D_801C7062, s8 *, 0) != (D_801C7068 - 1)) {
                    var_a2 = 1;
                } else if (M2C_FIELD(&D_801C7062, s8 *, 1) != D_801C6BB9) {
                    var_a2 = 1;
                } else {
                    var_v1 = D_801C7469 == 0;
                    var_v0 = D_801C7469 ^ 2;
block_9:
                    if ((var_v1 | (var_v0 == 0)) != 0) {
                        var_a2 = 1;
                    }
                }
            }
        }
    }
    return var_a2 & 0xFF;
}
