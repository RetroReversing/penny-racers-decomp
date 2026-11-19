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

extern u8 D_801C6BB9;
extern char D_801C6BE0[];
extern u8 D_801C7068;
extern char D_801C7081[];
extern char D_801C7084[];
extern void *D_801C7AB0;
extern char D_801C7AD8[];

u8 func_80190D40(s8 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_t3;
    s32 var_t4;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_15;
    s32 var_v0_16;
    s32 var_v0_17;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_9;
    s8 var_a1;
    u32 var_v0_14;
    u32 var_v0_18;
    u32 var_v0_6;
    u32 var_v0_7;
    u32 var_v0_8;
    u32 var_v1_8;
    u8 var_a0;
    u8 var_a2;
    u8 var_a2_2;
    u8 var_a3;
    u8 var_t0;
    u8 var_t1;
    u8 var_t1_2;
    u8 var_t2;
    u8 var_v0;

    var_a1 = arg0;
    var_t3 = 0;
    var_t4 = 0;
    var_t1 = 0;
    var_a2 = 0;
    var_t2 = 0;
    var_a0 = 0;
    if (M2C_FIELD(D_801C7AB0, u8 *, 0) != 3) {
        var_a1 -= 0x2E;
    }
    if (((u32) (var_a1 & 0xFF) < 5U) || ((u32) ((var_a1 - 0x16) & 0xFF) < 0xAU)) {
        var_a0 = D_801C7068 - 1;
        var_a2 = D_801C6BB9;
        var_t2 = D_801C7068 + 1;
        var_t1 = var_a2;
        goto block_27;
    }
    if (((u32) ((var_a1 - 5) & 0xFF) < 5U) || ((u32) ((var_a1 - 0x20) & 0xFF) < 0xAU)) {
        var_a0 = D_801C7068;
        var_a2 = D_801C6BB9 - 1;
        var_t2 = var_a0;
        var_t1 = D_801C6BB9 + 1;
        goto block_27;
    }
    if ((u32) ((var_a1 - 0xA) & 0xFF) < 3U) {
        var_a0 = D_801C7068 - 1;
        goto block_12;
    }
    if ((u32) ((var_a1 - 0xD) & 0xFF) < 3U) {
        var_a0 = D_801C7068 + 1;
block_12:
        var_a2 = D_801C6BB9;
        var_t2 = D_801C7068;
        var_t1 = var_a2 + 1;
        goto block_27;
    }
    if ((u32) ((var_a1 - 0x10) & 0xFF) < 3U) {
        var_a0 = D_801C7068 - 1;
        goto block_17;
    }
    if ((u32) ((var_a1 - 0x13) & 0xFF) < 3U) {
        var_a0 = D_801C7068 + 1;
block_17:
        var_a2 = D_801C6BB9;
        var_t2 = D_801C7068;
        var_t1 = var_a2 - 1;
        goto block_27;
    }
    switch (var_a1) {                               /* irregular */
    case 42:
        var_a0 = 0x18;
        var_a2 = 0x18;
        var_t2 = D_801C7068;
        var_t1 = D_801C6BB9 + 1;
block_27:
        var_v0_6 = var_a0 & 0xFF;
        break;
    case 43:
        var_a0 = D_801C7068;
        var_a2 = D_801C6BB9 - 1;
block_26:
        var_t2 = 0x18;
        var_t1 = 0x18;
        goto block_27;
    case 44:
        var_a0 = 0x18;
        var_a2 = 0x18;
        var_t1 = D_801C6BB9;
        var_t2 = D_801C7068 + 1;
        goto block_27;
    default:
        var_v0_6 = 0 & 0xFF;
        if (var_a1 == 0x2D) {
            var_a0 = D_801C7068 - 1;
            var_a2 = D_801C6BB9;
            goto block_26;
        }
        break;
    }
    if ((((var_v0_6 >= 0x18U) | ((u32) (s8) var_a2 >> 0x1F)) == 0) && ((s8) var_a2 < 0x18) && (temp_a0 = ((s8) var_a2 * 0x18) + (s8) var_a0, var_v0_7 = var_t2 & 0xFF, (*(D_801C6BE0 + (temp_a0 * 2)) != 0xFFFF))) {
        var_t0 = *(D_801C7AD8 + temp_a0);
    } else {
        var_t0 = M2C_FIELD(D_801C7AB0, u8 *, 2);
        var_v0_7 = var_t2 & 0xFF;
    }
    if ((((var_v0_7 >= 0x18U) | ((u32) (s8) var_t1 >> 0x1F)) == 0) && ((s8) var_t1 < 0x18) && (temp_a0_2 = ((s8) var_t1 * 0x18) + (s8) var_t2, (*(D_801C6BE0 + (temp_a0_2 * 2)) != 0xFFFF))) {
        var_t1_2 = *(D_801C7AD8 + temp_a0_2);
    } else {
        var_t1_2 = M2C_FIELD(D_801C7AB0, u8 *, 2);
    }
    temp_v1 = var_t0 & 0xFF;
    if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 3) {
        var_a2_2 = *(D_801C7084 + (temp_v1 * 5));
        var_a3 = *(D_801C7084 + ((var_t1_2 & 0xFF) * 5));
    } else {
        var_a2_2 = *(D_801C7084 + (temp_v1 * 5)) - 0x2E;
        var_a3 = *(D_801C7084 + ((var_t1_2 & 0xFF) * 5)) - 0x2E;
    }
    temp_v1_2 = var_t0 & 0xFF;
    var_v0_8 = var_a1 & 0xFF;
    if ((temp_v1_2 != M2C_FIELD(D_801C7AB0, u8 *, 2)) || (var_v0_8 = var_a1 & 0xFF, ((var_t1_2 & 0xFF) != temp_v1_2))) {
        if ((var_v0_8 < 5U) || ((u32) ((var_a1 - 0x16) & 0xFF) < 0xAU)) {
            if (((var_t0 & 0xFF) != M2C_FIELD(D_801C7AB0, u8 *, 2)) && (((u32) (var_a2_2 & 0xFF) < 5U) || ((u32) ((var_a2_2 - 0xD) & 0xFF) < 3U) || ((u32) ((var_a2_2 - 0x13) & 0xFF) < 3U) || ((((u32) ((var_a2_2 - 0x16) & 0xFF) < 0xAU) | ((s8) var_a2_2 == 0x2C)) != 0))) {
                var_t4 = 1;
            }
            if ((var_t1_2 & 0xFF) != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                if (((u32) (var_a3 & 0xFF) >= 5U) && ((u32) ((var_a3 - 0xA) & 0xFF) >= 3U) && ((u32) ((var_a3 - 0x10) & 0xFF) >= 3U)) {
                    var_v1_2 = (u32) ((var_a3 - 0x16) & 0xFF) < 0xAU;
                    var_v0_9 = (s8) var_a3 ^ 0x2D;
                    goto block_107;
                }
                goto block_108;
            }
        } else if (((u32) ((var_a1 - 5) & 0xFF) < 5U) || ((u32) ((var_a1 - 0x20) & 0xFF) < 0xAU)) {
            if (((var_t0 & 0xFF) != M2C_FIELD(D_801C7AB0, u8 *, 2)) && (((u32) ((var_a2_2 - 5) & 0xFF) < 5U) || ((u32) ((var_a2_2 - 0xA) & 0xFF) < 6U) || ((((u32) ((var_a2_2 - 0x20) & 0xFF) < 0xAU) | ((s8) var_a2_2 == 0x2A)) != 0))) {
                var_t4 = 1;
            }
            if ((var_t1_2 & 0xFF) != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                if (((u32) ((var_a3 - 5) & 0xFF) >= 5U) && ((u32) ((var_a3 - 0x10) & 0xFF) >= 6U)) {
                    var_v1_2 = (u32) ((var_a3 - 0x20) & 0xFF) < 0xAU;
                    var_v0_9 = (s8) var_a3 ^ 0x2B;
                    goto block_107;
                }
                goto block_108;
            }
        } else {
            temp_v1_3 = var_t0 & 0xFF;
            if ((u32) ((var_a1 - 0xA) & 0xFF) < 3U) {
                if ((temp_v1_3 != M2C_FIELD(D_801C7AB0, u8 *, 2)) && (((u32) (var_a2_2 & 0xFF) < 5U) || ((u32) ((var_a2_2 - 0xD) & 0xFF) < 3U) || ((u32) ((var_a2_2 - 0x13) & 0xFF) < 3U) || ((((u32) ((var_a2_2 - 0x16) & 0xFF) < 0xAU) | ((s8) var_a2_2 == 0x2C)) != 0))) {
                    var_t4 = 1;
                }
                if ((var_t1_2 & 0xFF) != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                    if (((u32) ((var_a3 - 5) & 0xFF) >= 5U) && ((u32) ((var_a3 - 0x10) & 0xFF) >= 6U)) {
                        var_v1_2 = (u32) ((var_a3 - 0x20) & 0xFF) < 0xAU;
                        var_v0_9 = (s8) var_a3 ^ 0x2B;
                        goto block_107;
                    }
                    goto block_108;
                }
            } else if ((u32) ((var_a1 - 0xD) & 0xFF) < 3U) {
                if ((temp_v1_3 != M2C_FIELD(D_801C7AB0, u8 *, 2)) && (((u32) (var_a2_2 & 0xFF) < 5U) || ((u32) ((var_a2_2 - 0xA) & 0xFF) < 3U) || ((u32) ((var_a2_2 - 0x10) & 0xFF) < 3U) || ((((u32) ((var_a2_2 - 0x16) & 0xFF) < 0xAU) | ((s8) var_a2_2 == 0x2D)) != 0))) {
                    var_t4 = 1;
                }
                if ((var_t1_2 & 0xFF) != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                    if (((u32) ((var_a3 - 5) & 0xFF) >= 5U) && ((u32) ((var_a3 - 0x10) & 0xFF) >= 6U)) {
                        var_v1_2 = (u32) ((var_a3 - 0x20) & 0xFF) < 0xAU;
                        var_v0_9 = (s8) var_a3 ^ 0x2B;
                        goto block_107;
                    }
                    goto block_108;
                }
            } else {
                temp_v1_4 = var_t0 & 0xFF;
                if ((u32) ((var_a1 - 0x10) & 0xFF) < 3U) {
                    if (temp_v1_4 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        if (((u32) (var_a2_2 & 0xFF) >= 5U) && ((u32) ((var_a2_2 - 0xD) & 0xFF) >= 3U) && ((u32) ((var_a2_2 - 0x13) & 0xFF) >= 3U)) {
                            var_v1_3 = (u32) ((var_a2_2 - 0x16) & 0xFF) < 0xAU;
                            var_v0_10 = (s8) var_a2_2 ^ 0x2C;
                            goto block_101;
                        }
                        goto block_102;
                    }
                    goto block_103;
                }
                if ((u32) ((var_a1 - 0x13) & 0xFF) < 3U) {
                    if (temp_v1_4 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        if (((u32) (var_a2_2 & 0xFF) >= 5U) && ((u32) ((var_a2_2 - 0xA) & 0xFF) >= 3U) && ((u32) ((var_a2_2 - 0x10) & 0xFF) >= 3U)) {
                            var_v1_3 = (u32) ((var_a2_2 - 0x16) & 0xFF) < 0xAU;
                            var_v0_10 = (s8) var_a2_2 ^ 0x2D;
block_101:
                            if ((var_v1_3 | (var_v0_10 == 0)) != 0) {
                                goto block_102;
                            }
                        } else {
block_102:
                            var_t4 = 1;
                        }
                    }
block_103:
                    if ((var_t1_2 & 0xFF) != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        if (((u32) ((var_a3 - 5) & 0xFF) >= 5U) && ((u32) ((var_a3 - 0xA) & 0xFF) >= 6U)) {
                            var_v1_2 = (u32) ((var_a3 - 0x20) & 0xFF) < 0xAU;
                            var_v0_9 = (s8) var_a3 ^ 0x2A;
block_107:
                            if ((var_v1_2 | (var_v0_9 == 0)) != 0) {
                                goto block_108;
                            }
                        } else {
block_108:
                            var_t3 = 1;
                        }
                    }
                }
            }
        }
        if ((var_t0 & 0xFF) != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
            if ((var_t1_2 & 0xFF) == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                var_v0_11 = var_t4 & 0xFF;
                if (((u32) (var_a1 & 0xFF) < 5U) || (var_v0_11 = var_t4 & 0xFF, (((u32) ((var_a1 - 0xA) & 0xFF) < 3U) != 0)) || (var_v0_11 = var_t4 & 0xFF, (((u32) ((var_a1 - 0x10) & 0xFF) < 3U) != 0))) {
                    if (var_v0_11 != 0) {
                        var_v0_5 = var_t0 & 0xFF;
                        if ((u32) ((var_a2_2 - 0x1B) & 0xFF) >= 5U) {
                            var_v1 = var_t0 & 0xFF;
                            goto block_364;
                        }
                        goto block_360;
                    }
                    goto block_366;
                }
                if ((u32) ((var_a1 - 5) & 0xFF) < 5U) {
                    if (var_t4 & 0xFF) {
                        var_v0_5 = var_t0 & 0xFF;
                        if ((u32) ((var_a2_2 - 0x25) & 0xFF) >= 5U) {
                            var_v1 = var_t0 & 0xFF;
                            goto block_364;
                        }
                        goto block_360;
                    }
                    goto block_366;
                }
                var_v0_12 = var_t4 & 0xFF;
                if (((u32) ((var_a1 - 0xD) & 0xFF) < 3U) || (var_v0_12 = var_t4 & 0xFF, (((u32) ((var_a1 - 0x12) & 0xFF) < 4U) != 0))) {
                    if (var_v0_12 != 0) {
                        var_v0_5 = var_t0 & 0xFF;
                        if ((u32) ((var_a2_2 - 0x16) & 0xFF) >= 5U) {
                            var_v1 = var_t0 & 0xFF;
                            goto block_364;
                        }
                        goto block_360;
                    }
                    goto block_366;
                }
                if ((u32) ((var_a1 - 0x16) & 0xFF) < 5U) {
                    if ((var_t4 & 0xFF) && (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) != 0)) {
                        var_v1 = var_t0 & 0xFF;
                        if ((u32) ((var_a2_2 - 0x1B) & 0xFF) < 5U) {
                            var_v0_2 = var_v1 * 4;
                            goto block_365;
                        }
                        goto block_174;
                    }
                    goto block_366;
                }
                if ((u32) ((var_a1 - 0x1B) & 0xFF) < 5U) {
                    if ((var_t4 & 0xFF) && (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) != 0x78)) {
                        var_v1 = var_t0 & 0xFF;
                        if ((u32) ((var_a2_2 - 0x1B) & 0xFF) < 5U) {
                            var_v0_4 = *(D_801C7081 + (var_v1 * 5)) == 0;
                            goto block_339;
                        }
                        var_v0_2 = var_v1 * 4;
                        goto block_365;
                    }
                    goto block_366;
                }
                if ((u32) ((var_a1 - 0x20) & 0xFF) < 5U) {
                    if ((var_t4 & 0xFF) && (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) != 0)) {
                        var_v1 = var_t0 & 0xFF;
                        if ((u32) ((var_a2_2 - 0x25) & 0xFF) >= 5U) {
block_174:
                            var_v0_3 = var_t0 & 0xFF;
                            goto block_175;
                        }
                        goto block_364;
                    }
                    goto block_366;
                }
                if (((u32) ((var_a1 - 0x25) & 0xFF) < 5U) && (var_t4 & 0xFF) && (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) != 0x78)) {
                    var_v1 = var_t0 & 0xFF;
                    if ((u32) ((var_a2_2 - 0x25) & 0xFF) < 5U) {
                        var_v0_4 = *(D_801C7081 + (var_v1 * 5)) == 0;
                        goto block_339;
                    }
                    var_v0_2 = var_v1 * 4;
                    goto block_365;
                }
                goto block_366;
            }
            if (var_t3 & var_t4) {
                if (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) == *(D_801C7081 + ((var_t1_2 & 0xFF) * 5))) {
                    if (((u32) ((var_a2_2 - 0x1B) & 0xFF) < 5U) && ((u32) ((var_a3 - 0x16) & 0xFF) < 5U)) {
                        var_v0_5 = var_t0 & 0xFF;
                        if ((u32) (var_a1 & 0xFF) >= 5U) {
                            var_v0_5 = var_t0 & 0xFF;
                            if ((u32) ((var_a1 - 0xA) & 0xFF) >= 0xCU) {
                                if (((u32) ((var_a1 - 0x16) & 0xFF) < 5U) || (var_v0 = 0, (((u32) ((var_a1 - 0x1B) & 0xFF) < 5U) != 0))) {
                                    var_v1 = var_t0 & 0xFF;
                                    if (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) != 0x78) {
                                        var_v0_2 = var_v1 * 4;
                                        goto block_365;
                                    }
                                    goto block_294;
                                }
                                /* Duplicate return node #367. Try simplifying control flow for better match */
                                return var_v0;
                            }
                        }
                        goto block_360;
                    }
                    if (((u32) ((var_a2_2 - 0x25) & 0xFF) < 5U) && ((u32) ((var_a3 - 0x20) & 0xFF) < 5U)) {
                        var_v0_5 = var_t0 & 0xFF;
                        if ((u32) ((var_a1 - 5) & 0xFF) >= 0x11U) {
                            if (((u32) ((var_a1 - 0x20) & 0xFF) < 5U) || (var_v0 = 0, (((u32) ((var_a1 - 0x25) & 0xFF) < 5U) != 0))) {
                                var_v1 = var_t0 & 0xFF;
                                if (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) != 0x78) {
                                    var_v0_2 = var_v1 * 4;
                                    goto block_365;
                                }
                                goto block_294;
                            }
                            /* Duplicate return node #367. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        goto block_360;
                    }
                    if (((u32) ((var_a2_2 - 0x1B) & 0xFF) < 5U) && ((u32) ((var_a3 - 0x20) & 0xFF) < 5U)) {
                        var_v0_5 = var_t0 & 0xFF;
                        if ((u32) (var_a1 & 0xFF) >= 0x13U) {
                            if (((u32) ((var_a1 - 0x16) & 0xFF) < 5U) || (var_v0 = 0, (((u32) ((var_a1 - 0x25) & 0xFF) < 5U) != 0))) {
                                var_v1 = var_t0 & 0xFF;
                                if (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) != 0x78) {
                                    var_v0_2 = var_v1 * 4;
                                    goto block_365;
                                }
                                goto block_294;
                            }
                            /* Duplicate return node #367. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        goto block_360;
                    }
                    if (((u32) ((var_a2_2 - 0x16) & 0xFF) < 5U) && ((u32) ((var_a3 - 0x20) & 0xFF) < 5U)) {
                        var_v0_5 = var_t0 & 0xFF;
                        if ((u32) (var_a1 & 0xFF) >= 0xAU) {
                            var_v0_5 = var_t0 & 0xFF;
                            if ((u32) ((var_a1 - 0xD) & 0xFF) >= 3U) {
                                if (((u32) ((var_a1 - 0x1B) & 0xFF) < 5U) || (var_v0 = 0, (((u32) ((var_a1 - 0x25) & 0xFF) < 5U) != 0))) {
                                    var_v1 = var_t0 & 0xFF;
                                    if (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) != 0x78) {
                                        var_v0_2 = var_v1 * 4;
                                        goto block_365;
                                    }
                                    goto block_294;
                                }
                                /* Duplicate return node #367. Try simplifying control flow for better match */
                                return var_v0;
                            }
                        }
                        goto block_360;
                    }
                    if (((u32) ((var_a2_2 - 0x1B) & 0xFF) < 5U) && ((u32) ((var_a3 - 0x25) & 0xFF) < 5U)) {
                        var_v0_5 = var_t0 & 0xFF;
                        if ((u32) (var_a1 & 0xFF) >= 0xAU) {
                            var_v0_5 = var_t0 & 0xFF;
                            if ((u32) ((var_a1 - 0x10) & 0xFF) >= 3U) {
                                if (((u32) ((var_a1 - 0x16) & 0xFF) < 5U) || (var_v0 = 0, (((u32) ((var_a1 - 0x20) & 0xFF) < 5U) != 0))) {
                                    var_v1 = var_t0 & 0xFF;
                                    if (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) != 0x78) {
                                        var_v0_2 = var_v1 * 4;
                                        goto block_365;
                                    }
                                    goto block_294;
                                }
                                /* Duplicate return node #367. Try simplifying control flow for better match */
                                return var_v0;
                            }
                        }
                        goto block_360;
                    }
                    if (((u32) ((var_a2_2 - 0x16) & 0xFF) < 5U) && ((u32) ((var_a3 - 0x25) & 0xFF) < 5U)) {
                        var_v0_5 = var_t0 & 0xFF;
                        if ((u32) (var_a1 & 0xFF) >= 0xAU) {
                            var_v0_5 = var_t0 & 0xFF;
                            if ((u32) ((var_a1 - 0x13) & 0xFF) >= 3U) {
                                if (((u32) ((var_a2_2 - 0x1B) & 0xFF) < 5U) && ((u32) ((var_a3 - 0x20) & 0xFF) < 5U)) {
                                    var_v1 = var_t0 & 0xFF;
                                    if (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) != 0x78) {
                                        var_v0_2 = var_v1 * 4;
                                        goto block_365;
                                    }
                                    goto block_294;
                                }
                                goto block_366;
                            }
                        }
                        goto block_360;
                    }
                    var_v1 = var_t0 & 0xFF;
                    goto block_364;
                }
                var_v1_4 = var_t0 & 0xFF;
                if (*(D_801C7081 + ((var_t0 & 0xFF) * 5)) == 0) {
                    if (*(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) != 0x78) {
                        var_v1_4 = var_t0 & 0xFF;
                        goto block_244;
                    }
                    var_v0_13 = var_a2_2 - 0x1B;
                    if ((u32) (var_a1 & 0xFF) >= 5U) {
                        var_v0_13 = var_a2_2 - 0x1B;
                        if ((u32) ((var_a1 - 0xA) & 0xFF) >= 3U) {
                            var_v0_13 = var_a2_2 - 0x1B;
                            if ((u32) ((var_a1 - 0x10) & 0xFF) >= 3U) {
                                var_v0_13 = var_a2_2 - 0x1B;
                                if ((u32) ((var_a1 - 0x1B) & 0xFF) >= 5U) {
                                    var_v0_13 = var_a2_2 - 0x25;
                                    if ((u32) ((var_a1 - 5) & 0xFF) >= 5U) {
                                        var_v0_13 = var_a2_2 - 0x25;
                                        if ((u32) ((var_a1 - 0x25) & 0xFF) >= 5U) {
                                            var_v0_13 = var_a2_2 - 0x16;
                                            if ((u32) ((var_a1 - 0xD) & 0xFF) >= 3U) {
                                                if ((u32) ((var_a1 - 0x13) & 0xFF) < 3U) {
                                                    var_v0_14 = (var_a2_2 - 0x16) & 0xFF;
                                                    goto block_338;
                                                }
                                                goto block_366;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    goto block_337;
                }
block_244:
                var_v0_15 = var_t0 & 0xFF;
                if (*(D_801C7081 + (var_v1_4 * 5)) == 0x78) {
                    var_v0_15 = var_t0 & 0xFF;
                    if (*(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) == 0) {
                        var_v0_13 = var_a3 - 0x16;
                        if ((u32) (var_a1 & 0xFF) >= 5U) {
                            var_v0_13 = var_a3 - 0x16;
                            if ((u32) ((var_a1 - 0x16) & 0xFF) >= 5U) {
                                var_v0_13 = var_a3 - 0x20;
                                if ((u32) ((var_a1 - 5) & 0xFF) >= 5U) {
                                    var_v0_13 = var_a3 - 0x20;
                                    if ((u32) ((var_a1 - 0xA) & 0xFF) >= 3U) {
                                        var_v0_13 = var_a3 - 0x20;
                                        if ((u32) ((var_a1 - 0xD) & 0xFF) >= 3U) {
                                            var_v0_13 = var_a3 - 0x20;
                                            if ((u32) ((var_a1 - 0x20) & 0xFF) >= 5U) {
                                                var_v0_13 = var_a3 - 0x25;
                                                if ((u32) ((var_a1 - 0x10) & 0xFF) >= 3U) {
                                                    if ((u32) ((var_a1 - 0x13) & 0xFF) < 3U) {
                                                        var_v0_14 = (var_a3 - 0x25) & 0xFF;
                                                        goto block_338;
                                                    }
                                                    goto block_366;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        goto block_337;
                    }
                }
                var_v1_5 = var_t0 & 0xFF;
                if (*(D_801C7081 + (var_v0_15 * 5)) == 0) {
                    if (*(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) != 0x3C) {
                        var_v1_5 = var_t0 & 0xFF;
                        goto block_277;
                    }
                    var_v0_13 = var_a2_2 - 0x1B;
                    if ((u32) (var_a1 & 0xFF) >= 5U) {
                        var_v0_13 = var_a2_2 - 0x1B;
                        if ((u32) ((var_a1 - 0xA) & 0xFF) >= 3U) {
                            var_v0_13 = var_a2_2 - 0x1B;
                            if ((u32) ((var_a1 - 0x10) & 0xFF) >= 3U) {
                                var_v0_13 = var_a2_2 - 0x25;
                                if ((u32) ((var_a1 - 5) & 0xFF) >= 5U) {
                                    var_v0_13 = var_a2_2 - 0x16;
                                    if ((u32) ((var_a1 - 0xD) & 0xFF) >= 3U) {
                                        var_v0_13 = var_a2_2 - 0x16;
                                        if ((u32) ((var_a1 - 0x13) & 0xFF) >= 3U) {
                                            if ((u32) ((var_a1 - 0x16) & 0xFF) < 5U) {
                                                if ((u32) ((var_a2_2 - 0x1B) & 0xFF) >= 5U) {
                                                    var_v0_4 = (u32) ((var_a3 - 0x16) & 0xFF) >= 5U;
                                                    goto block_339;
                                                }
                                                goto block_366;
                                            }
                                            if ((u32) ((var_a1 - 0x1B) & 0xFF) < 5U) {
                                                var_v0 = 0;
                                                if ((u32) ((var_a2_2 - 0x1B) & 0xFF) < 5U) {
                                                    var_v0_13 = var_a3 - 0x16;
                                                    goto block_337;
                                                }
                                                /* Duplicate return node #367. Try simplifying control flow for better match */
                                                return var_v0;
                                            }
                                            if ((u32) ((var_a1 - 0x20) & 0xFF) < 5U) {
                                                if ((u32) ((var_a2_2 - 0x25) & 0xFF) >= 5U) {
                                                    var_v0_4 = (u32) ((var_a3 - 0x20) & 0xFF) >= 5U;
                                                    goto block_339;
                                                }
                                                goto block_366;
                                            }
                                            if ((u32) ((var_a1 - 0x25) & 0xFF) < 5U) {
                                                var_v0 = 0;
                                                if ((u32) ((var_a2_2 - 0x25) & 0xFF) < 5U) {
                                                    var_v0_13 = var_a3 - 0x20;
                                                    goto block_337;
                                                }
                                                /* Duplicate return node #367. Try simplifying control flow for better match */
                                                return var_v0;
                                            }
                                            goto block_366;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    goto block_337;
                }
block_277:
                var_v1_6 = var_t0 & 0xFF;
                if (*(D_801C7081 + (var_v1_5 * 5)) == 0x3C) {
                    if (*(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) != 0x78) {
                        var_v1_6 = var_t0 & 0xFF;
                        goto block_295;
                    }
                    var_v1_7 = var_a2_2 - 0x1B;
                    if (((u32) (var_a1 & 0xFF) >= 5U) && ((u32) ((var_a1 - 0xA) & 0xFF) >= 3U) && ((u32) ((var_a1 - 0x10) & 0xFF) >= 3U)) {
                        var_v1_7 = var_a2_2 - 0x25;
                        if ((u32) ((var_a1 - 5) & 0xFF) >= 5U) {
                            var_v1_7 = var_a2_2 - 0x16;
                            if ((u32) ((var_a1 - 0xD) & 0xFF) >= 3U) {
                                if ((u32) ((var_a1 - 0x13) & 0xFF) >= 3U) {
                                    var_v0_13 = var_a2_2 - 0x1B;
                                    if ((u32) ((var_a1 - 0x16) & 0xFF) >= 5U) {
                                        var_v0 = 0x3C;
                                        if ((u32) ((var_a1 - 0x1B) & 0xFF) >= 5U) {
                                            var_v0_13 = var_a2_2 - 0x25;
                                            if ((u32) ((var_a1 - 0x20) & 0xFF) >= 5U) {
                                                var_v0 = 0;
                                                if ((u32) ((var_a1 - 0x25) & 0xFF) < 5U) {
block_294:
                                                    return 0x3CU;
                                                }
                                                /* Duplicate return node #367. Try simplifying control flow for better match */
                                                return var_v0;
                                            }
                                            goto block_337;
                                        }
                                        /* Duplicate return node #367. Try simplifying control flow for better match */
                                        return var_v0;
                                    }
                                    goto block_337;
                                }
                                var_v1_8 = var_v1_7 & 0xFF;
                                goto block_331;
                            }
                        }
                    }
                    goto block_330;
                }
block_295:
                var_v1_9 = var_t0 & 0xFF;
                if (*(D_801C7081 + (var_v1_6 * 5)) == 0x3C) {
                    if (*(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) != 0) {
                        var_v1_9 = var_t0 & 0xFF;
                        goto block_317;
                    }
                    var_v0_13 = var_a3 - 0x16;
                    if ((u32) (var_a1 & 0xFF) >= 5U) {
                        var_v0_13 = var_a3 - 0x20;
                        if ((u32) ((var_a1 - 5) & 0xFF) >= 5U) {
                            var_v0_13 = var_a3 - 0x20;
                            if ((u32) ((var_a1 - 0xA) & 0xFF) >= 3U) {
                                var_v0_13 = var_a3 - 0x20;
                                if ((u32) ((var_a1 - 0xD) & 0xFF) >= 3U) {
                                    var_v0_13 = var_a3 - 0x25;
                                    if ((u32) ((var_a1 - 0x10) & 0xFF) >= 3U) {
                                        var_v0_13 = var_a3 - 0x25;
                                        if ((u32) ((var_a1 - 0x13) & 0xFF) >= 3U) {
                                            if ((u32) ((var_a1 - 0x16) & 0xFF) < 5U) {
                                                var_v0 = 0;
                                                if ((u32) ((var_a2_2 - 0x1B) & 0xFF) < 5U) {
                                                    var_v0_13 = var_a3 - 0x16;
                                                    goto block_337;
                                                }
                                                /* Duplicate return node #367. Try simplifying control flow for better match */
                                                return var_v0;
                                            }
                                            if ((u32) ((var_a1 - 0x1B) & 0xFF) < 5U) {
                                                if ((u32) ((var_a3 - 0x16) & 0xFF) >= 5U) {
                                                    var_v0_4 = (u32) ((var_a2_2 - 0x1B) & 0xFF) >= 5U;
                                                    goto block_339;
                                                }
                                                goto block_366;
                                            }
                                            if ((u32) ((var_a1 - 0x20) & 0xFF) < 5U) {
                                                var_v0 = 0;
                                                if ((u32) ((var_a2_2 - 0x25) & 0xFF) < 5U) {
                                                    var_v0_13 = var_a3 - 0x20;
                                                    goto block_337;
                                                }
                                                /* Duplicate return node #367. Try simplifying control flow for better match */
                                                return var_v0;
                                            }
                                            if (((u32) ((var_a1 - 0x25) & 0xFF) < 5U) && ((u32) ((var_a3 - 0x20) & 0xFF) >= 5U)) {
                                                var_v0_4 = (u32) ((var_a2_2 - 0x25) & 0xFF) >= 5U;
                                                goto block_339;
                                            }
                                            goto block_366;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    goto block_337;
                }
block_317:
                var_v0 = 0;
                if (*(D_801C7081 + (var_v1_9 * 5)) == 0x78) {
                    var_v0 = 0;
                    if (*(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) == 0x3C) {
                        var_v1_7 = var_a3 - 0x16;
                        if ((u32) (var_a1 & 0xFF) >= 5U) {
                            var_v1_7 = var_a3 - 0x20;
                            if (((u32) ((var_a1 - 5) & 0xFF) >= 5U) && ((u32) ((var_a1 - 0xA) & 0xFF) >= 3U)) {
                                if ((u32) ((var_a1 - 0xD) & 0xFF) >= 3U) {
                                    var_v1_7 = var_a3 - 0x25;
                                    if ((u32) ((var_a1 - 0x10) & 0xFF) >= 3U) {
                                        if ((u32) ((var_a1 - 0x13) & 0xFF) >= 3U) {
                                            var_v0 = 0x3C;
                                            if ((u32) ((var_a1 - 0x16) & 0xFF) >= 5U) {
                                                var_v0_13 = var_a3 - 0x16;
                                                if ((u32) ((var_a1 - 0x1B) & 0xFF) >= 5U) {
                                                    var_v0 = 0x3C;
                                                    if ((u32) ((var_a1 - 0x20) & 0xFF) >= 5U) {
                                                        var_v0_13 = var_a3 - 0x20;
                                                        if ((u32) ((var_a1 - 0x25) & 0xFF) < 5U) {
                                                            goto block_337;
                                                        }
                                                        goto block_366;
                                                    }
                                                    /* Duplicate return node #367. Try simplifying control flow for better match */
                                                    return var_v0;
                                                }
block_337:
                                                var_v0_14 = var_v0_13 & 0xFF;
block_338:
                                                var_v0_4 = var_v0_14 < 5U;
                                                goto block_339;
                                            }
                                            /* Duplicate return node #367. Try simplifying control flow for better match */
                                            return var_v0;
                                        }
                                        goto block_330;
                                    }
                                    goto block_330;
                                }
                                var_v1_8 = var_v1_7 & 0xFF;
                                goto block_331;
                            }
                        }
block_330:
                        var_v1_8 = var_v1_7 & 0xFF;
block_331:
                        var_v0 = 0x3C;
                        if (var_v1_8 < 5U) {
                            return 0x78U;
                        }
                        /* Duplicate return node #367. Try simplifying control flow for better match */
                        return var_v0;
                    }
                }
                /* Duplicate return node #367. Try simplifying control flow for better match */
                return var_v0;
            }
            if (var_t4 & 0xFF) {
                if ((u32) ((var_a2_2 - 0x16) & 0xFF) < 5U) {
                    var_v0 = 0;
                    if ((u32) ((var_a1 - 0x16) & 0xFF) >= 5U) {
                        var_v1 = var_t0 & 0xFF;
                        goto block_364;
                    }
                    /* Duplicate return node #367. Try simplifying control flow for better match */
                    return var_v0;
                }
                if ((u32) ((var_a2_2 - 0x1B) & 0xFF) < 5U) {
                    var_v1 = var_t0 & 0xFF;
                    if ((u32) ((var_a1 - 0x16) & 0xFF) >= 5U) {
                        var_v0_5 = var_t0 & 0xFF;
                        goto block_360;
                    }
                    goto block_364;
                }
                if ((u32) ((var_a2_2 - 0x20) & 0xFF) < 5U) {
                    var_v0 = 0;
                    if ((u32) ((var_a1 - 0x20) & 0xFF) >= 5U) {
                        var_v1 = var_t0 & 0xFF;
                        goto block_364;
                    }
                    /* Duplicate return node #367. Try simplifying control flow for better match */
                    return var_v0;
                }
                if ((u32) ((var_a2_2 - 0x25) & 0xFF) < 5U) {
                    var_v1 = var_t0 & 0xFF;
                    if ((u32) ((var_a1 - 0x20) & 0xFF) >= 5U) {
                        var_v0_5 = var_t0 & 0xFF;
                        goto block_360;
                    }
                    goto block_364;
                }
                var_v1 = var_t0 & 0xFF;
                goto block_364;
            }
            if (var_t3 & 0xFF) {
                var_v0_16 = var_a1 - 0x1B;
                if ((u32) ((var_a3 - 0x16) & 0xFF) >= 5U) {
                    var_v0_17 = var_a1 - 0x1B;
                    if ((u32) ((var_a3 - 0x1B) & 0xFF) >= 5U) {
                        var_v0_16 = var_a1 - 0x25;
                        if ((u32) ((var_a3 - 0x20) & 0xFF) < 5U) {
                            goto block_358;
                        }
                        var_v0_17 = var_a1 - 0x25;
                        if ((u32) ((var_a3 - 0x25) & 0xFF) < 5U) {
                            goto block_362;
                        }
                        goto block_363;
                    }
block_362:
                    var_v0 = 0;
                    if ((u32) (var_v0_17 & 0xFF) >= 5U) {
                        goto block_363;
                    }
                    /* Duplicate return node #367. Try simplifying control flow for better match */
                    return var_v0;
                }
block_358:
                var_v1 = var_t1_2 & 0xFF;
                if ((u32) (var_v0_16 & 0xFF) >= 5U) {
                    var_v0_5 = var_t1_2 & 0xFF;
                    goto block_360;
                }
                goto block_364;
            }
            goto block_366;
        }
        if ((u32) (var_a1 & 0xFF) < 5U) {
            if (var_t3 & 0xFF) {
                var_v0_18 = (var_a3 - 0x16) & 0xFF;
                goto block_115;
            }
            goto block_366;
        }
        if ((u32) ((var_a1 - 5) & 0xFF) < 0xBU) {
            if (var_t3 & 0xFF) {
                var_v0_18 = (var_a3 - 0x20) & 0xFF;
                goto block_115;
            }
            goto block_366;
        }
        if ((u32) ((var_a1 - 0x10) & 0xFF) < 6U) {
            if (var_t3 & 0xFF) {
                var_v0_18 = (var_a3 - 0x25) & 0xFF;
block_115:
                var_v0_5 = var_t1_2 & 0xFF;
                if (var_v0_18 >= 5U) {
                    var_v1 = var_t1_2 & 0xFF;
                    goto block_364;
                }
block_360:
                return (*(D_801C7081 + (var_v0_5 * 5)) + 0x3C) & 0xFF;
            }
            goto block_366;
        }
        if ((u32) ((var_a1 - 0x16) & 0xFF) < 5U) {
            if ((var_t3 & 0xFF) && (*(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) != 0x78)) {
                if ((u32) ((var_a3 - 0x16) & 0xFF) < 5U) {
                    var_v0_4 = *(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) == 0;
                    goto block_339;
                }
                goto block_363;
            }
            goto block_366;
        }
        if ((u32) ((var_a1 - 0x1B) & 0xFF) < 5U) {
            if ((var_t3 & 0xFF) && (*(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) != 0)) {
                var_v1 = var_t1_2 & 0xFF;
                if ((u32) ((var_a3 - 0x16) & 0xFF) >= 5U) {
                    var_v0_3 = var_t1_2 & 0xFF;
                    goto block_175;
                }
                goto block_364;
            }
            goto block_366;
        }
        if ((u32) ((var_a1 - 0x20) & 0xFF) < 5U) {
            if ((var_t3 & 0xFF) && (*(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) != 0x78)) {
                if ((u32) ((var_a3 - 0x20) & 0xFF) < 5U) {
                    var_v0_4 = *(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) == 0;
block_339:
                    return -var_v0_4 & 0x3C;
                }
block_363:
                var_v1 = var_t1_2 & 0xFF;
                goto block_364;
            }
            goto block_366;
        }
        if (((u32) ((var_a1 - 0x25) & 0xFF) < 5U) && (var_t3 & 0xFF) && (*(D_801C7081 + ((var_t1_2 & 0xFF) * 5)) != 0)) {
            var_v1 = var_t1_2 & 0xFF;
            if ((u32) ((var_a3 - 0x20) & 0xFF) >= 5U) {
                var_v0_3 = var_t1_2 & 0xFF;
block_175:
                return (*(D_801C7081 + (var_v0_3 * 5)) - 0x3C) & 0xFF;
            }
block_364:
            var_v0_2 = var_v1 * 4;
block_365:
            return *(D_801C7081 + (var_v0_2 + var_v1));
        }
        goto block_366;
    }
block_366:
    var_v0 = 0;
    return var_v0;
}
