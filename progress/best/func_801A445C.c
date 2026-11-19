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

extern M2C_UNK D_801C5EA8;
extern M2C_UNK D_801C5EB8;
extern M2C_UNK D_801C7081;
extern M2C_UNK D_801C7084;
extern void *D_801C7AB0;

s32 func_801A445C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1_2;
    u32 var_v0_2;
    u8 var_a1;
    u8 var_a3;
    u8 var_v1;

    var_t1 = 0;
    if ((arg1 & 0xFF) == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
        return 0;
    }
    temp_v1 = arg0 & 0xFF;
    if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 3) {
        var_a3 = *(&D_801C7084 + (temp_v1 * 5));
        var_v1 = *(&D_801C7084 + ((arg1 & 0xFF) * 5));
        var_v0_2 = var_v1 & 0xFF;
    } else {
        var_a3 = *(&D_801C7084 + (temp_v1 * 5)) - 0x2E;
        var_v1 = *(&D_801C7084 + ((arg1 & 0xFF) * 5)) - 0x2E;
        var_v0_2 = var_v1 & 0xFF;
    }
    if (var_v0_2 < 5U) {
        if (*(&D_801C7081 + ((arg0 & 0xFF) * 5)) != *(&D_801C7081 + ((arg1 & 0xFF) * 5))) {
            var_v0_3 = arg0 & 0xFF;
            if (*(&D_801C7081 + ((arg0 & 0xFF) * 5)) == 0x3C) {
                var_a0 = (arg1 & 0xFF) * 5;
                var_v0_3 = arg0 & 0xFF;
                if (*(&D_801C7081 + var_a0) == 0x78) {
                    if ((u32) ((var_a3 - 0x16) & 0xFF) < 5U) {
                        *(&D_801C7081 + var_a0) = 0x3C;
                        var_a1 = *(&D_801C5EB8 + (arg2 & 0xFF));
                        goto block_36;
                    }
                    goto block_38;
                }
            }
            var_v0 = 0 & 0xFF;
            if (*(&D_801C7081 + (var_v0_3 * 5)) == 0) {
                var_a0 = (arg1 & 0xFF) * 5;
                var_v0 = 0 & 0xFF;
                if (*(&D_801C7081 + var_a0) == 0x3C) {
                    if ((u32) ((var_a3 - 0x16) & 0xFF) < 5U) {
                        *(&D_801C7081 + var_a0) = 0;
                        var_a1 = *(&D_801C5EB8 + (arg2 & 0xFF));
                        goto block_36;
                    }
                    goto block_38;
                }
            }
        } else {
            var_v0_4 = arg1 & 0xFF;
            if (((u32) (var_a3 & 0xFF) < 5U) || (var_v0_4 = arg1 & 0xFF, (((u32) ((var_a3 - 0xA) & 0xFF) < 3U) != 0)) || (var_v0_4 = arg1 & 0xFF, ((((u32) ((var_a3 - 0x10) & 0xFF) < 3U) | ((s8) var_a3 == 0x2D)) != 0))) {
                var_a0 = var_v0_4 * 5;
                *(&D_801C7081 + var_a0) = 0x3C;
                var_a1 = *(&D_801C5EB8 + (arg2 & 0xFF));
                goto block_36;
            }
            goto block_38;
        }
    } else if ((u32) ((var_v1 - 0x1B) & 0xFF) < 5U) {
        var_a0 = (arg1 & 0xFF) * 5;
        if (*(&D_801C7081 + ((arg0 & 0xFF) * 5)) != *(&D_801C7081 + var_a0)) {
            var_v1_2 = arg0 & 0xFF;
            if (((*(&D_801C7081 + ((arg0 & 0xFF) * 5)) == 0x78) && (var_v1_2 = arg0 & 0xFF, (*(&D_801C7081 + ((arg1 & 0xFF) * 5)) == 0x3C))) || ((var_v0 = 0 & 0xFF, (*(&D_801C7081 + (var_v1_2 * 5)) == 0x3C)) && (var_v0 = 0 & 0xFF, (*(&D_801C7081 + ((arg1 & 0xFF) * 5)) == 0)))) {
                var_v0_5 = arg1 & 0xFF;
                if (((u32) (var_a3 & 0xFF) < 5U) || (var_v0_5 = arg1 & 0xFF, (((u32) ((var_a3 - 0xA) & 0xFF) < 3U) != 0)) || (var_v0_5 = arg1 & 0xFF, ((((u32) ((var_a3 - 0x10) & 0xFF) < 3U) | ((s8) var_a3 == 0x2D)) != 0))) {
                    var_a0 = var_v0_5 * 5;
                    var_v0_6 = arg2 & 0xFF;
                    goto block_35;
                }
                goto block_38;
            }
        } else {
            var_v0 = 0 & 0xFF;
            if ((u32) ((var_a3 - 0x16) & 0xFF) < 5U) {
                var_v0_6 = arg2 & 0xFF;
block_35:
                var_a1 = *(&D_801C5EA8 + var_v0_6);
block_36:
                *(&D_801C7084 + var_a0) = var_a1;
                var_t1 = 1;
                if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                    *(&D_801C7084 + var_a0) = var_a1 + 0x2E;
                }
                goto block_38;
            }
        }
    } else {
block_38:
        var_v0 = var_t1 & 0xFF;
    }
    return var_v0;
}
