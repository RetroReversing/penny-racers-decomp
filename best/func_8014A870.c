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

extern M2C_UNK D_801E9980;
extern M2C_UNK D_801E9984;
extern M2C_UNK D_801E9988;
extern M2C_UNK D_801E998C;
extern M2C_UNK D_801E9990;
extern M2C_UNK D_801E9994;
extern M2C_UNK D_801E99A8;
extern M2C_UNK D_801E99AC;

s32 func_8014A870(u32 arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 temp_v1_4;

    var_a3 = 0;
    if (arg2 < 4) {
        temp_v1 = *(&D_801E9988 + (arg2 * 0x70));
        if (temp_v1 != 1) {
            if (arg0 < temp_v1) {
                var_v0 = arg2 * 8;
                if (!(temp_v1 & arg1)) {
                    goto block_4;
                }
            } else {
                goto block_5;
            }
        } else {
block_4:
            var_a3 = 1;
block_5:
            var_v0 = arg2 * 8;
        }
        temp_v1_2 = *(&D_801E998C + ((var_v0 - arg2) * 0x10));
        if (temp_v1_2 != 1) {
            if (arg0 < temp_v1_2) {
                var_v0_2 = arg2 * 8;
                if (!(temp_v1_2 & arg1)) {
                    goto block_9;
                }
            } else {
                goto block_10;
            }
        } else {
block_9:
            var_a3 |= 2;
block_10:
            var_v0_2 = arg2 * 8;
        }
        temp_v1_3 = *(&D_801E9980 + ((var_v0_2 - arg2) * 0x10));
        if (temp_v1_3 != 1) {
            if (arg0 < temp_v1_3) {
                var_v0_3 = arg2 * 8;
                if (!(temp_v1_3 & arg1)) {
                    goto block_14;
                }
            } else {
                goto block_15;
            }
        } else {
block_14:
            var_a3 |= 8;
block_15:
            var_v0_3 = arg2 * 8;
        }
        temp_v1_4 = *(&D_801E9984 + ((var_v0_3 - arg2) * 0x10));
        if (temp_v1_4 != 1) {
            if (arg0 < temp_v1_4) {
                var_v0_4 = arg2 * 8;
                if (!(temp_v1_4 & arg1)) {
                    goto block_19;
                }
            } else {
                goto block_20;
            }
        } else {
block_19:
            var_a3 |= 4;
block_20:
            var_v0_4 = arg2 * 8;
        }
        if (*(&D_801E9990 + ((var_v0_4 - arg2) * 0x10)) == 1) {
            var_a3 |= 0x10;
        }
        if (*(&D_801E9994 + (arg2 * 0x70)) == 1) {
            var_a3 |= 0x20;
        }
        if (*(&D_801E99A8 + (arg2 * 0x70)) == 1) {
            var_a3 |= 0x40;
        }
        if (*(&D_801E99AC + (arg2 * 0x70)) == 1) {
            var_a3 |= 0x80;
        }
    }
    return var_a3 & 0xFF;
}
