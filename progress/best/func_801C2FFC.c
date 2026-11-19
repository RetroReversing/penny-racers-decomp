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

extern char D_801C7080[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 *D_801C7AB0;

void func_801C2FFC(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_v0_3;
    u8 var_t0;
    u8 var_v0_6;
    u8 var_v0_7;

    if (*D_801C7AB0 == 3) {
        var_t0 = *(D_801C7084 + ((arg1 & 0xFF) * 5));
        var_v0 = arg0 & 0xFF;
    } else {
        var_t0 = *(D_801C7084 + ((arg1 & 0xFF) * 5)) - 0x2E;
        var_v0 = arg0 & 0xFF;
    }
    if (*(D_801C7080 + (var_v0 * 5)) != 0) {
        if (*(D_801C7080 + ((arg0 & 0xFF) * 5)) != 1) {
            if (*(D_801C7080 + ((arg0 & 0xFF) * 5)) != 2) {
                var_v0_2 = arg1 & 0xFF;
                if (*(D_801C7080 + ((arg0 & 0xFF) * 5)) == 3) {
                    var_v0_2 = arg1 & 0xFF;
                    if (((u32) (var_t0 & 0xFF) >= 5U) && (var_v0_2 = arg1 & 0xFF, (((u32) ((var_t0 - 0x16) & 0xFF) < 0xAU) == 0))) {
                        if ((u32) ((var_t0 - 0xA) & 0xFF) < 3U) {
                            var_v1 = (arg1 & 0xFF) * 5;
                            var_v0_3 = 2;
                            goto block_45;
                        }
                        if ((u32) ((var_t0 - 0x10) & 0xFF) < 3U) {
                            goto block_41;
                        }
                        var_v0_2 = arg1 & 0xFF;
                        if ((s8) var_t0 == 0x2D) {
                            goto block_44;
                        }
                    } else {
                        goto block_44;
                    }
                }
            } else {
                var_v0_4 = arg1 & 0xFF;
                if (((u32) ((var_t0 - 5) & 0xFF) < 5U) || (var_v0_4 = arg1 & 0xFF, (((u32) ((var_t0 - 0x20) & 0xFF) < 0xAU) != 0))) {
                    var_v1 = var_v0_4 * 5;
                    var_v0_3 = 2;
                    goto block_45;
                }
                if ((u32) ((var_t0 - 0x10) & 0xFF) < 3U) {
                    var_v1 = (arg1 & 0xFF) * 5;
                    var_v0_3 = 1;
                    goto block_45;
                }
                var_v0_2 = arg1 & 0xFF;
                if ((u32) ((var_t0 - 0x13) & 0xFF) >= 3U) {
                    var_v0_2 = arg1 & 0xFF;
                    if ((s8) var_t0 == 0x2B) {
                        var_v1 = var_v0_2 * 5;
                        var_v0_3 = 2;
                        goto block_45;
                    }
                } else {
                    goto block_44;
                }
            }
        } else {
            var_v0_5 = arg1 & 0xFF;
            if (((u32) (var_t0 & 0xFF) < 5U) || (var_v0_5 = arg1 & 0xFF, (((u32) ((var_t0 - 0x16) & 0xFF) < 0xAU) != 0))) {
                var_v1 = var_v0_5 * 5;
                var_v0_3 = 1;
                goto block_45;
            }
            if ((u32) ((var_t0 - 0xD) & 0xFF) < 3U) {
                var_v1 = (arg1 & 0xFF) * 5;
                var_v0_3 = 2;
                goto block_45;
            }
            var_v1_2 = arg1 & 0xFF;
            if ((u32) ((var_t0 - 0x13) & 0xFF) >= 3U) {
                var_v0_2 = arg1 & 0xFF;
                if ((s8) var_t0 == 0x2C) {
                    var_v1 = var_v0_2 * 5;
                    var_v0_3 = 1;
                    goto block_45;
                }
            } else {
                goto block_42;
            }
        }
    } else if (((u32) ((var_t0 - 5) & 0xFF) >= 5U) && ((u32) ((var_t0 - 0x20) & 0xFF) >= 0xAU)) {
        if ((u32) ((var_t0 - 0xA) & 0xFF) < 3U) {
            var_v1 = (arg1 & 0xFF) * 5;
            var_v0_3 = 1;
            goto block_45;
        }
        var_v0_2 = arg1 & 0xFF;
        if ((u32) ((var_t0 - 0xD) & 0xFF) >= 3U) {
            var_v0_2 = arg1 & 0xFF;
            if ((s8) var_t0 == 0x2A) {
                var_v1_2 = arg1 & 0xFF;
                goto block_42;
            }
        } else {
block_44:
            var_v1 = var_v0_2 * 5;
            var_v0_3 = 3;
block_45:
            *(D_801C7080 + var_v1) = var_v0_3;
            var_v0_2 = arg1 & 0xFF;
        }
    } else {
block_41:
        var_v1_2 = arg1 & 0xFF;
block_42:
        *(D_801C7080 + (var_v1_2 * 5)) = 0;
        var_v0_2 = arg1 & 0xFF;
    }
    temp_v1 = var_v0_2 * 5;
    if (*(D_801C7080 + temp_v1) != 0) {
        var_a0 = (arg1 & 0xFF) * 5;
        if (*(D_801C7080 + var_a0) != 1) {
            temp_a0 = (arg1 & 0xFF) * 5;
            if (*(D_801C7080 + temp_a0) != 2) {
                var_a0 = (arg1 & 0xFF) * 5;
                if (*(D_801C7080 + var_a0) == 3) {
                    var_v0_6 = *(D_801C7082 + var_a0) + 1;
                    goto block_60;
                }
            } else {
                *arg2 = *(D_801C7082 + temp_a0);
                var_v0_7 = *(D_801C7083 + temp_a0) + 1;
                goto block_61;
            }
        } else {
            var_v0_6 = *(D_801C7082 + var_a0) - 1;
block_60:
            *arg2 = var_v0_6;
            var_v0_7 = *(D_801C7083 + var_a0);
            goto block_61;
        }
    } else {
        *arg2 = *(D_801C7082 + temp_v1);
        var_v0_7 = *(D_801C7083 + temp_v1) - 1;
block_61:
        *arg3 = var_v0_7;
    }
}
