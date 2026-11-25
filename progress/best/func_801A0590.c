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

s32 func_801A4040();
s32 func_801A4108();
s32 func_801C3634();
extern u8 D_801C6BB8;
extern u8 D_801C707A;
extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern s8 D_801C746C;
extern void *D_801C7AB0;
extern s8 D_801C7AB7;
extern u8 D_801C7AB9;
extern u8 D_801CA130;
extern u8 D_801CA13D;

s32 func_801A0590(void) {
    u8 sp10;
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_14;
    s32 temp_a0_15;
    s32 temp_a0_16;
    s32 temp_a0_17;
    s32 temp_a0_18;
    s32 temp_a0_19;
    s32 temp_a0_20;
    s32 temp_a0_21;
    s32 temp_a0_22;
    s32 temp_a0_23;
    s32 temp_a0_24;
    s32 temp_a0_25;
    s32 temp_a0_26;
    s32 temp_a0_27;
    s32 temp_a0_28;
    s32 temp_a0_29;
    s32 temp_a0_2;
    s32 temp_a0_30;
    s32 temp_a0_31;
    s32 temp_a0_32;
    s32 temp_a0_33;
    s32 temp_a0_34;
    s32 temp_a0_35;
    s32 temp_a0_36;
    s32 temp_a0_37;
    s32 temp_a0_38;
    s32 temp_a0_39;
    s32 temp_a0_3;
    s32 temp_a0_40;
    s32 temp_a0_41;
    s32 temp_a0_42;
    s32 temp_a0_43;
    s32 temp_a0_44;
    s32 temp_a0_45;
    s32 temp_a0_46;
    s32 temp_a0_47;
    s32 temp_a0_48;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 temp_a1;
    s32 temp_a1_10;
    s32 temp_a1_11;
    s32 temp_a1_12;
    s32 temp_a1_13;
    s32 temp_a1_14;
    s32 temp_a1_15;
    s32 temp_a1_16;
    s32 temp_a1_17;
    s32 temp_a1_18;
    s32 temp_a1_19;
    s32 temp_a1_20;
    s32 temp_a1_21;
    s32 temp_a1_22;
    s32 temp_a1_23;
    s32 temp_a1_24;
    s32 temp_a1_25;
    s32 temp_a1_26;
    s32 temp_a1_27;
    s32 temp_a1_28;
    s32 temp_a1_29;
    s32 temp_a1_2;
    s32 temp_a1_30;
    s32 temp_a1_31;
    s32 temp_a1_32;
    s32 temp_a1_33;
    s32 temp_a1_34;
    s32 temp_a1_35;
    s32 temp_a1_36;
    s32 temp_a1_37;
    s32 temp_a1_38;
    s32 temp_a1_39;
    s32 temp_a1_3;
    s32 temp_a1_40;
    s32 temp_a1_41;
    s32 temp_a1_42;
    s32 temp_a1_43;
    s32 temp_a1_44;
    s32 temp_a1_45;
    s32 temp_a1_46;
    s32 temp_a1_47;
    s32 temp_a1_48;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a1_8;
    s32 temp_a1_9;
    s32 temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_s0_13;
    s32 temp_s0_14;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s1;
    s32 temp_s1_10;
    s32 temp_s1_11;
    s32 temp_s1_12;
    s32 temp_s1_13;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s1_6;
    s32 temp_s1_7;
    s32 temp_s1_8;
    s32 temp_s1_9;
    s32 temp_s2;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_14;
    s32 var_v0_15;
    s32 var_v0_17;
    s32 var_v0_18;
    s32 var_v0_19;
    s32 var_v0_20;
    s32 var_v0_21;
    s32 var_v0_22;
    s32 var_v0_23;
    s32 var_v0_24;
    s32 var_v0_25;
    s32 var_v0_26;
    s32 var_v0_27;
    s32 var_v0_28;
    s32 var_v0_29;
    s32 var_v0_2;
    s32 var_v0_30;
    s32 var_v0_31;
    s32 var_v0_32;
    s32 var_v0_33;
    s32 var_v0_34;
    s32 var_v0_35;
    s32 var_v0_36;
    s32 var_v0_37;
    s32 var_v0_38;
    s32 var_v0_39;
    s32 var_v0_3;
    s32 var_v0_40;
    s32 var_v0_41;
    s32 var_v0_42;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u32 var_v0_16;
    u32 var_v0_7;
    u8 temp_v0;
    u8 var_a0;
    u8 var_a0_2;
    u8 var_a0_3;
    u8 var_a0_4;
    u8 var_a1;
    u8 var_s0;

    D_801C746C = -1;
    D_801C7AB7 = -1;
    temp_v0 = M2C_FIELD(D_801C7AB0, u8 *, 2);
    D_801CA13D = temp_v0;
    D_801C7AB9 = temp_v0;
    D_801C707A = temp_v0;
    D_801C6BB8 = temp_v0;
    sp10 = M2C_FIELD(D_801C7AB0, u8 *, 2);
    var_s4 = 0;
    var_s3 = 0;
    var_s2 = 0;
    var_s1 = 0;
    func_801C3634(D_801CA130, &D_801C6BB8, &D_801C707A);
    if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 3) {
        var_a0 = *(D_801C7084 + (D_801CA130 * 5));
        var_a1 = *(D_801C7084 + (D_801C6BB8 * 5));
        var_s0 = *(D_801C7084 + (D_801C707A * 5));
    } else {
        var_a0 = *(D_801C7084 + (D_801CA130 * 5)) - 0x2E;
        var_a1 = *(D_801C7084 + (D_801C6BB8 * 5)) - 0x2E;
        var_s0 = *(D_801C7084 + (D_801C707A * 5)) - 0x2E;
    }
    if (*(D_801C7081 + (D_801CA130 * 5)) == 0) {
        var_v0_6 = var_a0 - 0x16;
        if (D_801C6BB8 != 0xFF) {
            var_v0_7 = var_a0 & 0xFF;
            if (D_801C707A == 0xFF) {
                var_v0_6 = var_a0 - 0x16;
                goto block_7;
            }
            goto block_8;
        }
block_7:
        var_v0_7 = var_a0 & 0xFF;
        if ((u32) (var_v0_6 & 0xFF) < 0x14U) {
block_8:
            if (var_v0_7 < 5U) {
                temp_s1 = func_801A4040(D_801C6BB8, var_a1);
                var_v0_8 = func_801A4040(D_801C707A);
                var_v1_3 = (temp_s1 & 0xFF) != 0;
                goto block_136;
            }
            if ((u32) ((var_a0 - 5) & 0xFF) < 5U) {
                temp_s1_2 = func_801A4108(D_801C6BB8, var_a1);
                var_v0_8 = func_801A4108(D_801C707A);
                var_v1_3 = (temp_s1_2 & 0xFF) != 0;
                goto block_136;
            }
            if ((u32) ((var_a0 - 0xA) & 0xFF) < 0xCU) {
                temp_s1_3 = func_801A4040(D_801C6BB8, var_a1);
                var_v0_8 = func_801A4108(D_801C707A);
                var_v1_3 = (temp_s1_3 & 0xFF) != 0;
                goto block_136;
            }
            if ((u32) ((var_a0 - 0x16) & 0xFF) < 5U) {
                var_v0_9 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0) && (var_v0_9 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x1B) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0 = D_801C707A * 5;
                        temp_a1 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0) == *(D_801C7082 + temp_a1)) && (*(D_801C7083 + temp_a0) == *(D_801C7083 + temp_a1))) {
                            D_801C7AB9 = sp10;
                            goto block_21;
                        }
                    } else {
block_21:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_9 + D_801C6BB8)) == 0x3C) && ((u32) ((var_a1 - 0x16) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_2 = D_801C707A * 5;
                        temp_a1_2 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_2) == *(D_801C7082 + temp_a1_2)) && (*(D_801C7083 + temp_a0_2) == *(D_801C7083 + temp_a1_2))) {
                            D_801C7AB9 = sp10;
                            goto block_28;
                        }
                    } else {
block_28:
                        var_s2 = 1;
                    }
                }
                temp_s0 = func_801A4040(D_801C6BB8);
                if (temp_s0 & 0xFF & (func_801A4040(D_801C707A) & 0xFF)) {
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 3;
                        }
                        goto block_663;
                    }
                    goto block_669;
                }
                if (temp_s0 & 0xFF) {
                    var_v0 = 2;
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 2;
                        }
                        var_v0_10 = func_801A4040(D_801C7AB9) & 0xFF;
                        goto block_443;
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0x1B) & 0xFF) < 5U) {
                var_v0_11 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0) && (var_v0_11 = D_801C707A * 4, (((u32) ((var_s0 - 0x16) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_3 = D_801C6BB8 * 5;
                        temp_a1_3 = D_801CA13D * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_3) == *(D_801C7082 + temp_a1_3)) && (*(D_801C7083 + temp_a0_3) == *(D_801C7083 + temp_a1_3))) {
                            D_801CA13D = sp10;
                            goto block_46;
                        }
                    } else {
block_46:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_11 + D_801C707A)) == 0x3C) && ((u32) ((var_s0 - 0x1B) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a1_4 = D_801CA13D * 5;
                        temp_a0_4 = D_801C6BB8 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_4) == *(D_801C7082 + temp_a1_4)) && (*(D_801C7083 + temp_a0_4) == *(D_801C7083 + temp_a1_4))) {
                            D_801CA13D = sp10;
                            goto block_53;
                        }
                    } else {
block_53:
                        var_s2 = 1;
                    }
                }
                temp_s0_2 = func_801A4040(D_801C6BB8);
                temp_v0_2 = func_801A4040(D_801C707A);
                if (temp_s0_2 & 0xFF & (temp_v0_2 & 0xFF)) {
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 3;
                        }
                        var_a0_2 = D_801CA13D;
                        goto block_664;
                    }
                    var_a0_3 = D_801CA13D;
                    goto block_670;
                }
                if (temp_v0_2 & 0xFF) {
                    var_v0 = 2;
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 2;
                        }
                        var_v0_10 = func_801A4040(D_801CA13D) & 0xFF;
                        goto block_443;
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0x20) & 0xFF) < 5U) {
                var_v0_12 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0) && (var_v0_12 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x25) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_5 = D_801C707A * 5;
                        temp_a1_5 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_5) == *(D_801C7082 + temp_a1_5)) && (*(D_801C7083 + temp_a0_5) == *(D_801C7083 + temp_a1_5))) {
                            D_801C7AB9 = sp10;
                            goto block_76;
                        }
                    } else {
block_76:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_12 + D_801C6BB8)) == 0x3C) && ((u32) ((var_a1 - 0x20) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_6 = D_801C707A * 5;
                        temp_a1_6 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_6) == *(D_801C7082 + temp_a1_6)) && (*(D_801C7083 + temp_a0_6) == *(D_801C7083 + temp_a1_6))) {
                            D_801C7AB9 = sp10;
                            goto block_83;
                        }
                    } else {
block_83:
                        var_s2 = 1;
                    }
                }
                temp_s0_3 = func_801A4108(D_801C6BB8);
                if (temp_s0_3 & 0xFF & (func_801A4108(D_801C707A) & 0xFF)) {
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 3;
                        }
                        var_v0_2 = func_801A4108(D_801C7AB9) & 0xFF;
                        goto block_665;
                    }
                    var_v0_3 = func_801A4108(D_801C7AB9) & 0xFF;
                    goto block_671;
                }
                if (temp_s0_3 & 0xFF) {
                    var_v0 = 2;
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 2;
                        }
                        var_v0_10 = func_801A4108(D_801C7AB9) & 0xFF;
                        goto block_443;
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0x25) & 0xFF) < 5U) {
                var_v0_13 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0) && (var_v0_13 = D_801C707A * 4, (((u32) ((var_s0 - 0x20) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_7 = D_801C6BB8 * 5;
                        temp_a1_7 = D_801CA13D * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_7) == *(D_801C7082 + temp_a1_7)) && (*(D_801C7083 + temp_a0_7) == *(D_801C7083 + temp_a1_7))) {
                            D_801CA13D = sp10;
                            goto block_106;
                        }
                    } else {
block_106:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_13 + D_801C707A)) == 0x3C) && ((u32) ((var_s0 - 0x25) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_8 = D_801C6BB8 * 5;
                        temp_a1_8 = D_801CA13D * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_8) == *(D_801C7082 + temp_a1_8)) && (*(D_801C7083 + temp_a0_8) == *(D_801C7083 + temp_a1_8))) {
                            D_801CA13D = sp10;
                            goto block_113;
                        }
                    } else {
block_113:
                        var_s2 = 1;
                    }
                }
                temp_s0_3 = func_801A4108(D_801C6BB8);
                temp_v0_3 = func_801A4108(D_801C707A);
                if (temp_s0_3 & 0xFF & (temp_v0_3 & 0xFF)) {
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 3;
                        }
                        var_v0_2 = func_801A4108(D_801CA13D) & 0xFF;
                        goto block_665;
                    }
                    var_v0_3 = func_801A4108(D_801CA13D) & 0xFF;
                    goto block_671;
                }
                if (temp_v0_3 & 0xFF) {
                    var_v0 = 2;
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 2;
                        }
                        var_v0_10 = func_801A4108(D_801CA13D) & 0xFF;
                        goto block_443;
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_694;
            }
            switch ((s8) var_a0) {                  /* switch 1; irregular */
                var_v0_8 = func_801A4108(D_801C707A, var_a1);
block_135:
                var_v1_3 = D_801C6BB8 == M2C_FIELD(D_801C7AB0, u8 *, 2);
block_136:
                var_v0 = 0;
                if (var_v1_3 & (var_v0_8 & 0xFF)) {
                    return 1;
                }
                /* Duplicate return node #695. Try simplifying control flow for better match */
                return var_v0;
                var_v0_14 = func_801A4108(D_801C6BB8, var_a1) & 0xFF;
block_140:
                var_v0 = 0;
                if (var_v0_14 != 0) {
                    var_v0 = 0;
                    if (D_801C707A == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        return 1;
                    }
                }
                /* Duplicate return node #695. Try simplifying control flow for better match */
                return var_v0;
                var_v0_8 = func_801A4040(D_801C707A, var_a1);
                goto block_135;
                var_v0 = 0;
                if ((s8) var_a0 == 0x2D) {
                    var_v0_14 = func_801A4040(D_801C6BB8, var_a1) & 0xFF;
                    goto block_140;
                }
                /* Duplicate return node #695. Try simplifying control flow for better match */
                return var_v0;
            }
        } else {
            goto block_694;
        }
    } else if (*(D_801C7081 + (D_801CA130 * 5)) == 0x3C) {
        var_v0_15 = var_a0 - 0x16;
        if (D_801C6BB8 != 0xFF) {
            var_v0_16 = var_a0 & 0xFF;
            if (D_801C707A == 0xFF) {
                var_v0_15 = var_a0 - 0x16;
                goto block_147;
            }
            goto block_148;
        }
block_147:
        var_v0_16 = var_a0 & 0xFF;
        if ((u32) (var_v0_15 & 0xFF) < 0x14U) {
block_148:
            if (var_v0_16 < 5U) {
                var_v0_17 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0x3C) && (var_v0_17 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x16) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_9 = D_801C707A * 5;
                        temp_a1_9 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_9) == *(D_801C7082 + temp_a1_9)) && (*(D_801C7083 + temp_a0_9) == *(D_801C7083 + temp_a1_9))) {
                            D_801C7AB9 = sp10;
                            goto block_155;
                        }
                    } else {
block_155:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_17 + D_801C6BB8)) == 0) && ((u32) ((var_a1 - 0x1B) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_10 = D_801C707A * 5;
                        temp_a1_10 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_10) == *(D_801C7082 + temp_a1_10)) && (*(D_801C7083 + temp_a0_10) == *(D_801C7083 + temp_a1_10))) {
                            D_801C7AB9 = sp10;
                            goto block_162;
                        }
                    } else {
block_162:
                        var_s2 = 1;
                    }
                }
                var_v0_18 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0x3C) && (var_v0_18 = D_801C707A * 4, (((u32) ((var_s0 - 0x1B) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_11 = D_801C6BB8 * 5;
                        temp_a1_11 = D_801CA13D * 5;
                        var_s3 = 1;
                        if ((*(D_801C7082 + temp_a0_11) == *(D_801C7082 + temp_a1_11)) && (*(D_801C7083 + temp_a0_11) == *(D_801C7083 + temp_a1_11))) {
                            D_801CA13D = sp10;
                            goto block_169;
                        }
                    } else {
block_169:
                        var_s3 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_18 + D_801C707A)) == 0) && ((u32) ((var_s0 - 0x16) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_12 = D_801C6BB8 * 5;
                        temp_a1_12 = D_801CA13D * 5;
                        var_s4 = 1;
                        if ((*(D_801C7082 + temp_a0_12) == *(D_801C7082 + temp_a1_12)) && (*(D_801C7083 + temp_a0_12) == *(D_801C7083 + temp_a1_12))) {
                            D_801CA13D = sp10;
                            goto block_176;
                        }
                    } else {
block_176:
                        var_s4 = 1;
                    }
                }
                temp_s0_5 = func_801A4040(D_801C6BB8);
                if (temp_s0_5 & 0xFF & (func_801A4040(D_801C707A) & 0xFF)) {
                    if (var_s1 & 0xFF & (var_s3 & 0xFF)) {
                        temp_s1_4 = func_801A4040(D_801C7AB9);
                        var_v0_5 = func_801A4040(D_801CA13D);
                        var_v1_2 = temp_s1_4 & 0xFF;
                        goto block_432;
                    }
                    if (var_s1 & 0xFF & (var_s4 & 0xFF)) {
                        temp_s1_5 = func_801A4040(D_801C7AB9);
                        temp_v0_4 = func_801A4040(D_801CA13D);
                        var_v0 = 3;
                        if (!(temp_s1_5 & 0xFF & (temp_v0_4 & 0xFF))) {
                            var_v0 = 2;
                            if (!(temp_s1_5 & 0xFF)) {
                                var_v0_19 = temp_v0_4 & 0xFF;
                                goto block_569;
                            }
                        }
                        /* Duplicate return node #695. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    if (var_s2 & 0xFF & (var_s3 & 0xFF)) {
                        var_s2_2 = func_801A4040(D_801C7AB9);
                        var_s3_2 = func_801A4040(D_801CA13D);
                        goto block_440;
                    }
                    if (!(var_s2 & 0xFF & (var_s4 & 0xFF))) {
                        if (!(var_s1 & 0xFF)) {
                            if (!(var_s2 & 0xFF)) {
                                if (!(var_s3 & 0xFF)) {
                                    if (!(var_s4 & 0xFF)) {
                                        return 3;
                                    }
                                    var_a0_3 = D_801CA13D;
                                    goto block_670;
                                }
                                var_a0_2 = D_801CA13D;
                                goto block_664;
                            }
                            goto block_669;
                        }
                        goto block_663;
                    }
                    temp_s2 = func_801A4040(D_801C7AB9);
                    var_v0_4 = func_801A4040(D_801CA13D);
                    var_v1 = temp_s2 & 0xFF;
                    goto block_450;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 5) & 0xFF) < 5U) {
                var_v0_20 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0x3C) && (var_v0_20 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x20) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_13 = D_801C707A * 5;
                        temp_a1_13 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_13) == *(D_801C7082 + temp_a1_13)) && (*(D_801C7083 + temp_a0_13) == *(D_801C7083 + temp_a1_13))) {
                            D_801C7AB9 = sp10;
                            goto block_207;
                        }
                    } else {
block_207:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_20 + D_801C6BB8)) == 0) && ((u32) ((var_a1 - 0x25) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_14 = D_801C707A * 5;
                        temp_a1_14 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_14) == *(D_801C7082 + temp_a1_14)) && (*(D_801C7083 + temp_a0_14) == *(D_801C7083 + temp_a1_14))) {
                            D_801C7AB9 = sp10;
                            goto block_214;
                        }
                    } else {
block_214:
                        var_s2 = 1;
                    }
                }
                var_v0_21 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0x3C) && (var_v0_21 = D_801C707A * 4, (((u32) ((var_s0 - 0x25) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_15 = D_801C6BB8 * 5;
                        temp_a1_15 = D_801CA13D * 5;
                        var_s3 = 1;
                        if ((*(D_801C7082 + temp_a0_15) == *(D_801C7082 + temp_a1_15)) && (*(D_801C7083 + temp_a0_15) == *(D_801C7083 + temp_a1_15))) {
                            D_801CA13D = sp10;
                            goto block_221;
                        }
                    } else {
block_221:
                        var_s3 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_21 + D_801C707A)) == 0) && ((u32) ((var_s0 - 0x20) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_16 = D_801C6BB8 * 5;
                        temp_a1_16 = D_801CA13D * 5;
                        var_s4 = 1;
                        if ((*(D_801C7082 + temp_a0_16) == *(D_801C7082 + temp_a1_16)) && (*(D_801C7083 + temp_a0_16) == *(D_801C7083 + temp_a1_16))) {
                            D_801CA13D = sp10;
                            goto block_228;
                        }
                    } else {
block_228:
                        var_s4 = 1;
                    }
                }
                temp_s0_6 = func_801A4108(D_801C6BB8);
                if (temp_s0_6 & 0xFF & (func_801A4108(D_801C707A) & 0xFF)) {
                    if (var_s1 & 0xFF & (var_s3 & 0xFF)) {
                        var_v0_22 = func_801A4108(D_801C7AB9);
                        goto block_431;
                    }
                    if (var_s1 & 0xFF & (var_s4 & 0xFF)) {
                        temp_s1_6 = func_801A4108(D_801C7AB9);
                        temp_v0_5 = func_801A4108(D_801CA13D);
                        var_v0 = 3;
                        if (!(temp_s1_6 & 0xFF & (temp_v0_5 & 0xFF))) {
                            var_v0 = 2;
                            if (!(temp_s1_6 & 0xFF)) {
                                var_v0_19 = temp_v0_5 & 0xFF;
                                goto block_569;
                            }
                        }
                        /* Duplicate return node #695. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    if (var_s2 & 0xFF & (var_s3 & 0xFF)) {
                        var_v0_23 = func_801A4108(D_801C7AB9);
                        goto block_439;
                    }
                    if (!(var_s2 & 0xFF & (var_s4 & 0xFF))) {
                        if (!(var_s1 & 0xFF)) {
                            if (!(var_s2 & 0xFF)) {
                                if (!(var_s3 & 0xFF)) {
                                    if (!(var_s4 & 0xFF)) {
                                        return 3;
                                    }
                                    var_v0_3 = func_801A4108(D_801CA13D) & 0xFF;
                                    goto block_671;
                                }
                                var_v0_2 = func_801A4108(D_801CA13D) & 0xFF;
                                goto block_665;
                            }
                            var_v0_3 = func_801A4108(D_801C7AB9) & 0xFF;
                            goto block_671;
                        }
                        var_v0_2 = func_801A4108(D_801C7AB9) & 0xFF;
                        goto block_665;
                    }
                    var_v0_24 = func_801A4108(D_801C7AB9);
                    goto block_449;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0xA) & 0xFF) < 3U) {
                var_v0_25 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0x3C) && (var_v0_25 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x16) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_17 = D_801C707A * 5;
                        temp_a1_17 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_17) == *(D_801C7082 + temp_a1_17)) && (*(D_801C7083 + temp_a0_17) == *(D_801C7083 + temp_a1_17))) {
                            D_801C7AB9 = sp10;
                            goto block_265;
                        }
                    } else {
block_265:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_25 + D_801C6BB8)) == 0) && ((u32) ((var_a1 - 0x1B) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_18 = D_801C707A * 5;
                        temp_a1_18 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_18) == *(D_801C7082 + temp_a1_18)) && (*(D_801C7083 + temp_a0_18) == *(D_801C7083 + temp_a1_18))) {
                            D_801C7AB9 = sp10;
                            goto block_272;
                        }
                    } else {
block_272:
                        var_s2 = 1;
                    }
                }
                var_v0_26 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0x3C) && (var_v0_26 = D_801C707A * 4, (((u32) ((var_s0 - 0x25) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_19 = D_801C6BB8 * 5;
                        temp_a1_19 = D_801CA13D * 5;
                        var_s3 = 1;
                        if ((*(D_801C7082 + temp_a0_19) == *(D_801C7082 + temp_a1_19)) && (*(D_801C7083 + temp_a0_19) == *(D_801C7083 + temp_a1_19))) {
                            D_801CA13D = sp10;
                            goto block_279;
                        }
                    } else {
block_279:
                        var_s3 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_26 + D_801C707A)) == 0) && ((u32) ((var_s0 - 0x20) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_20 = D_801C6BB8 * 5;
                        temp_a1_20 = D_801CA13D * 5;
                        var_s4 = 1;
                        if ((*(D_801C7082 + temp_a0_20) == *(D_801C7082 + temp_a1_20)) && (*(D_801C7083 + temp_a0_20) == *(D_801C7083 + temp_a1_20))) {
                            D_801CA13D = sp10;
                            goto block_286;
                        }
                    } else {
block_286:
                        var_s4 = 1;
                    }
                }
                temp_s0_7 = func_801A4040(D_801C6BB8);
                if (temp_s0_7 & 0xFF & (func_801A4108(D_801C707A) & 0xFF)) {
                    if (!(var_s1 & 0xFF & (var_s3 & 0xFF))) {
                        if (var_s1 & 0xFF & (var_s4 & 0xFF)) {
                            temp_s1_7 = func_801A4040(D_801C7AB9);
                            temp_v0_6 = func_801A4108(D_801CA13D);
                            var_v0 = 3;
                            if (!(temp_s1_7 & 0xFF & (temp_v0_6 & 0xFF))) {
                                var_v0 = 2;
                                if (!(temp_s1_7 & 0xFF)) {
                                    var_v0_19 = temp_v0_6 & 0xFF;
                                    goto block_569;
                                }
                            }
                            /* Duplicate return node #695. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        if (!(var_s2 & 0xFF & (var_s3 & 0xFF))) {
                            if (!(var_s2 & 0xFF & (var_s4 & 0xFF))) {
                                if (!(var_s1 & 0xFF)) {
                                    if (!(var_s2 & 0xFF)) {
                                        if (!(var_s3 & 0xFF)) {
                                            if (!(var_s4 & 0xFF)) {
                                                return 3;
                                            }
                                            var_v0_3 = func_801A4108(D_801CA13D) & 0xFF;
                                            goto block_671;
                                        }
                                        var_v0_2 = func_801A4108(D_801CA13D) & 0xFF;
                                        goto block_665;
                                    }
                                    goto block_669;
                                }
                                goto block_663;
                            }
                            goto block_448;
                        }
                        goto block_438;
                    }
                    goto block_430;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0xD) & 0xFF) < 3U) {
                var_v0_27 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0x3C) && (var_v0_27 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x1B) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &sp10, &D_801C7AB9);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_21 = D_801C707A * 5;
                        temp_a1_21 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_21) == *(D_801C7082 + temp_a1_21)) && (*(D_801C7083 + temp_a0_21) == *(D_801C7083 + temp_a1_21))) {
                            D_801C7AB9 = sp10;
                            goto block_312;
                        }
                    } else {
block_312:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_27 + D_801C6BB8)) == 0) && ((u32) ((var_a1 - 0x16) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &sp10, &D_801C7AB9);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_22 = D_801C707A * 5;
                        temp_a1_22 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_22) == *(D_801C7082 + temp_a1_22)) && (*(D_801C7083 + temp_a0_22) == *(D_801C7083 + temp_a1_22))) {
                            D_801C7AB9 = sp10;
                            goto block_319;
                        }
                    } else {
block_319:
                        var_s2 = 1;
                    }
                }
                var_v0_28 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0x3C) && (var_v0_28 = D_801C707A * 4, (((u32) ((var_s0 - 0x25) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_23 = D_801C6BB8 * 5;
                        temp_a1_23 = D_801CA13D * 5;
                        var_s3 = 1;
                        if ((*(D_801C7082 + temp_a0_23) == *(D_801C7082 + temp_a1_23)) && (*(D_801C7083 + temp_a0_23) == *(D_801C7083 + temp_a1_23))) {
                            D_801CA13D = sp10;
                            goto block_326;
                        }
                    } else {
block_326:
                        var_s3 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_28 + D_801C707A)) == 0) && ((u32) ((var_s0 - 0x20) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_24 = D_801C6BB8 * 5;
                        temp_a1_24 = D_801CA13D * 5;
                        var_s4 = 1;
                        if ((*(D_801C7082 + temp_a0_24) == *(D_801C7082 + temp_a1_24)) && (*(D_801C7083 + temp_a0_24) == *(D_801C7083 + temp_a1_24))) {
                            D_801CA13D = sp10;
                            goto block_333;
                        }
                    } else {
block_333:
                        var_s4 = 1;
                    }
                }
                temp_s0_8 = func_801A4040(D_801C6BB8);
                if (temp_s0_8 & 0xFF & (func_801A4108(D_801C707A) & 0xFF)) {
                    if (!(var_s1 & 0xFF & (var_s3 & 0xFF))) {
                        if (var_s1 & 0xFF & (var_s4 & 0xFF)) {
                            temp_s1_8 = func_801A4040(D_801C7AB9);
                            temp_v0_7 = func_801A4108(D_801CA13D);
                            var_v0 = 3;
                            if (!(temp_s1_8 & 0xFF & (temp_v0_7 & 0xFF))) {
                                var_v0 = 2;
                                if (!(temp_s1_8 & 0xFF)) {
                                    var_v0_19 = temp_v0_7 & 0xFF;
                                    goto block_569;
                                }
                            }
                            /* Duplicate return node #695. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        if (!(var_s2 & 0xFF & (var_s3 & 0xFF))) {
                            if (!(var_s2 & 0xFF & (var_s4 & 0xFF))) {
                                if (!(var_s1 & 0xFF)) {
                                    if (!(var_s2 & 0xFF)) {
                                        if (!(var_s3 & 0xFF)) {
                                            if (!(var_s4 & 0xFF)) {
                                                return 3;
                                            }
                                            var_v0_3 = func_801A4108(D_801CA13D) & 0xFF;
                                            goto block_671;
                                        }
                                        var_v0_2 = func_801A4108(D_801CA13D) & 0xFF;
                                        goto block_665;
                                    }
                                    goto block_669;
                                }
                                goto block_663;
                            }
                            goto block_448;
                        }
                        goto block_438;
                    }
                    goto block_430;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0x10) & 0xFF) < 3U) {
                var_v0_29 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0x3C) && (var_v0_29 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x16) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_25 = D_801C707A * 5;
                        temp_a1_25 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_25) == *(D_801C7082 + temp_a1_25)) && (*(D_801C7083 + temp_a0_25) == *(D_801C7083 + temp_a1_25))) {
                            D_801C7AB9 = sp10;
                            goto block_359;
                        }
                    } else {
block_359:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_29 + D_801C6BB8)) == 0) && ((u32) ((var_a1 - 0x1B) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_26 = D_801C707A * 5;
                        temp_a1_26 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_26) == *(D_801C7082 + temp_a1_26)) && (*(D_801C7083 + temp_a0_26) == *(D_801C7083 + temp_a1_26))) {
                            D_801C7AB9 = sp10;
                            goto block_366;
                        }
                    } else {
block_366:
                        var_s2 = 1;
                    }
                }
                var_v0_30 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0x3C) && (var_v0_30 = D_801C707A * 4, (((u32) ((var_s0 - 0x20) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_27 = D_801C6BB8 * 5;
                        temp_a1_27 = D_801CA13D * 5;
                        var_s3 = 1;
                        if ((*(D_801C7082 + temp_a0_27) == *(D_801C7082 + temp_a1_27)) && (*(D_801C7083 + temp_a0_27) == *(D_801C7083 + temp_a1_27))) {
                            D_801CA13D = sp10;
                            goto block_373;
                        }
                    } else {
block_373:
                        var_s3 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_30 + D_801C707A)) == 0) && ((u32) ((var_s0 - 0x25) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_28 = D_801C6BB8 * 5;
                        temp_a1_28 = D_801CA13D * 5;
                        var_s4 = 1;
                        if ((*(D_801C7082 + temp_a0_28) == *(D_801C7082 + temp_a1_28)) && (*(D_801C7083 + temp_a0_28) == *(D_801C7083 + temp_a1_28))) {
                            D_801CA13D = sp10;
                            goto block_380;
                        }
                    } else {
block_380:
                        var_s4 = 1;
                    }
                }
                temp_s0_9 = func_801A4040(D_801C6BB8);
                if (temp_s0_9 & 0xFF & (func_801A4108(D_801C707A) & 0xFF)) {
                    if (!(var_s1 & 0xFF & (var_s3 & 0xFF))) {
                        if (var_s1 & 0xFF & (var_s4 & 0xFF)) {
                            temp_s1_9 = func_801A4040(D_801C7AB9);
                            temp_v0_8 = func_801A4108(D_801CA13D);
                            var_v0 = 3;
                            if (!(temp_s1_9 & 0xFF & (temp_v0_8 & 0xFF))) {
                                var_v0 = 2;
                                if (!(temp_s1_9 & 0xFF)) {
                                    var_v0_19 = temp_v0_8 & 0xFF;
                                    goto block_569;
                                }
                            }
                            /* Duplicate return node #695. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        if (!(var_s2 & 0xFF & (var_s3 & 0xFF))) {
                            if (!(var_s2 & 0xFF & (var_s4 & 0xFF))) {
                                if (!(var_s1 & 0xFF)) {
                                    if (!(var_s2 & 0xFF)) {
                                        if (!(var_s3 & 0xFF)) {
                                            if (!(var_s4 & 0xFF)) {
                                                return 3;
                                            }
                                            var_v0_3 = func_801A4108(D_801CA13D) & 0xFF;
                                            goto block_671;
                                        }
                                        var_v0_2 = func_801A4108(D_801CA13D) & 0xFF;
                                        goto block_665;
                                    }
                                    goto block_669;
                                }
                                goto block_663;
                            }
                            goto block_448;
                        }
                        goto block_438;
                    }
                    goto block_430;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0x13) & 0xFF) < 3U) {
                var_v0_31 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0x3C) && (var_v0_31 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x1B) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &sp10, &D_801C7AB9);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_29 = D_801C707A * 5;
                        temp_a1_29 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_29) == *(D_801C7082 + temp_a1_29)) && (*(D_801C7083 + temp_a0_29) == *(D_801C7083 + temp_a1_29))) {
                            D_801C7AB9 = sp10;
                            goto block_406;
                        }
                    } else {
block_406:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_31 + D_801C6BB8)) == 0) && ((u32) ((var_a1 - 0x16) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &sp10, &D_801C7AB9);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_30 = D_801C707A * 5;
                        temp_a1_30 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_30) == *(D_801C7082 + temp_a1_30)) && (*(D_801C7083 + temp_a0_30) == *(D_801C7083 + temp_a1_30))) {
                            D_801C7AB9 = sp10;
                            goto block_413;
                        }
                    } else {
block_413:
                        var_s2 = 1;
                    }
                }
                var_v0_32 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0x3C) && (var_v0_32 = D_801C707A * 4, (((u32) ((var_s0 - 0x20) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_31 = D_801C6BB8 * 5;
                        temp_a1_31 = D_801CA13D * 5;
                        var_s3 = 1;
                        if ((*(D_801C7082 + temp_a0_31) == *(D_801C7082 + temp_a1_31)) && (*(D_801C7083 + temp_a0_31) == *(D_801C7083 + temp_a1_31))) {
                            D_801CA13D = sp10;
                            goto block_420;
                        }
                    } else {
block_420:
                        var_s3 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_32 + D_801C707A)) == 0) && ((u32) ((var_s0 - 0x25) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_32 = D_801C6BB8 * 5;
                        temp_a1_32 = D_801CA13D * 5;
                        var_s4 = 1;
                        if ((*(D_801C7082 + temp_a0_32) == *(D_801C7082 + temp_a1_32)) && (*(D_801C7083 + temp_a0_32) == *(D_801C7083 + temp_a1_32))) {
                            D_801CA13D = sp10;
                            goto block_427;
                        }
                    } else {
block_427:
                        var_s4 = 1;
                    }
                }
                temp_s0_10 = func_801A4040(D_801C6BB8);
                if (temp_s0_10 & 0xFF & (func_801A4108(D_801C707A) & 0xFF)) {
                    if (var_s1 & 0xFF & (var_s3 & 0xFF)) {
block_430:
                        var_v0_22 = func_801A4040(D_801C7AB9);
block_431:
                        var_v0_5 = func_801A4108(D_801CA13D);
                        var_v1_2 = var_v0_22 & 0xFF;
block_432:
                        return (-((var_v1_2 != 0) & ((var_v0_5 & 0xFF) != 0)) & 3) | 1;
                    }
                    if (var_s1 & 0xFF & (var_s4 & 0xFF)) {
                        temp_s1_10 = func_801A4040(D_801C7AB9);
                        temp_v0_9 = func_801A4108(D_801CA13D);
                        var_v0 = 3;
                        if (!(temp_s1_10 & 0xFF & (temp_v0_9 & 0xFF))) {
                            var_v0 = 2;
                            if (!(temp_s1_10 & 0xFF)) {
                                var_v0_19 = temp_v0_9 & 0xFF;
                                goto block_569;
                            }
                        }
                        /* Duplicate return node #695. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    if (var_s2 & 0xFF & (var_s3 & 0xFF)) {
block_438:
                        var_v0_23 = func_801A4040(D_801C7AB9);
block_439:
                        var_s2_2 = var_v0_23;
                        var_s3_2 = func_801A4108(D_801CA13D);
block_440:
                        var_v0 = 3;
                        if (!(var_s2_2 & 0xFF & (var_s3_2 & 0xFF))) {
                            var_v0 = 1;
                            if (!(var_s2_2 & 0xFF)) {
                                var_v0_10 = var_s3_2 & 0xFF;
block_443:
                                var_v0 = 0;
                                if (var_v0_10 != 0) {
                                    return 2;
                                }
                                /* Duplicate return node #695. Try simplifying control flow for better match */
                                return var_v0;
                            }
                        }
                        /* Duplicate return node #695. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    if (!(var_s2 & 0xFF & (var_s4 & 0xFF))) {
                        if (!(var_s1 & 0xFF)) {
                            if (!(var_s2 & 0xFF)) {
                                if (!(var_s3 & 0xFF)) {
                                    if (!(var_s4 & 0xFF)) {
                                        return 3;
                                    }
                                    var_v0_3 = func_801A4108(D_801CA13D) & 0xFF;
                                    goto block_671;
                                }
                                var_v0_2 = func_801A4108(D_801CA13D) & 0xFF;
                                goto block_665;
                            }
                            goto block_669;
                        }
                        goto block_663;
                    }
block_448:
                    var_v0_24 = func_801A4040(D_801C7AB9);
block_449:
                    var_v0_4 = func_801A4108(D_801CA13D);
                    var_v1 = var_v0_24 & 0xFF;
block_450:
                    return (-((var_v1 != 0) & ((var_v0_4 & 0xFF) != 0)) & 3) | 2;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0x16) & 0xFF) < 5U) {
                var_v0_33 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0x3C) && (var_v0_33 = D_801C707A * 4, (((u32) ((var_s0 - 0x1B) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_33 = D_801C6BB8 * 5;
                        temp_a1_33 = D_801CA13D * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_33) == *(D_801C7082 + temp_a1_33)) && (*(D_801C7083 + temp_a0_33) == *(D_801C7083 + temp_a1_33))) {
                            D_801CA13D = sp10;
                            goto block_468;
                        }
                    } else {
block_468:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_33 + D_801C707A)) == 0) && ((u32) ((var_s0 - 0x16) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_34 = D_801C6BB8 * 5;
                        temp_a1_34 = D_801CA13D * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_34) == *(D_801C7082 + temp_a1_34)) && (*(D_801C7083 + temp_a0_34) == *(D_801C7083 + temp_a1_34))) {
                            D_801CA13D = sp10;
                            goto block_475;
                        }
                    } else {
block_475:
                        var_s2 = 1;
                    }
                }
                temp_s0_11 = func_801A4040(D_801C6BB8);
                temp_v0_10 = func_801A4040(D_801C707A);
                if (temp_s0_11 & 0xFF & (temp_v0_10 & 0xFF)) {
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 3;
                        }
                        var_a0_3 = D_801CA13D;
                        goto block_670;
                    }
                    var_a0_2 = D_801CA13D;
                    goto block_664;
                }
                if (temp_v0_10 & 0xFF) {
                    var_v0 = 1;
                    if (!(var_s1 & 0xFF)) {
                        var_v0 = 1;
                        if (var_s2 & 0xFF) {
                            var_v0_19 = func_801A4040(D_801CA13D) & 0xFF;
                            goto block_569;
                        }
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0x1B) & 0xFF) < 5U) {
                var_v0_34 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0x3C) && (var_v0_34 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x16) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_35 = D_801C707A * 5;
                        temp_a1_35 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_35) == *(D_801C7082 + temp_a1_35)) && (*(D_801C7083 + temp_a0_35) == *(D_801C7083 + temp_a1_35))) {
                            D_801C7AB9 = sp10;
                            goto block_496;
                        }
                    } else {
block_496:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_34 + D_801C6BB8)) == 0) && ((u32) ((var_a1 - 0x1B) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_36 = D_801C707A * 5;
                        temp_a1_36 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_36) == *(D_801C7082 + temp_a1_36)) && (*(D_801C7083 + temp_a0_36) == *(D_801C7083 + temp_a1_36))) {
                            D_801C7AB9 = sp10;
                            goto block_503;
                        }
                    } else {
block_503:
                        var_s2 = 1;
                    }
                }
                temp_s0_12 = func_801A4040(D_801C6BB8);
                if (temp_s0_12 & 0xFF & (func_801A4040(D_801C707A) & 0xFF)) {
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 3;
                        }
                        goto block_669;
                    }
                    goto block_663;
                }
                if (temp_s0_12 & 0xFF) {
                    var_v0 = 1;
                    if (!(var_s1 & 0xFF)) {
                        var_v0 = 1;
                        if (var_s2 & 0xFF) {
                            var_v0_19 = func_801A4040(D_801C7AB9) & 0xFF;
                            goto block_569;
                        }
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0x20) & 0xFF) < 5U) {
                var_v0_35 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0x3C) && (var_v0_35 = D_801C707A * 4, (((u32) ((var_s0 - 0x25) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_37 = D_801C6BB8 * 5;
                        temp_a1_37 = D_801CA13D * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_37) == *(D_801C7082 + temp_a1_37)) && (*(D_801C7083 + temp_a0_37) == *(D_801C7083 + temp_a1_37))) {
                            D_801CA13D = sp10;
                            goto block_519;
                        }
                    } else {
block_519:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_35 + D_801C707A)) == 0) && ((u32) ((var_s0 - 0x20) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_38 = D_801C6BB8 * 5;
                        temp_a1_38 = D_801CA13D * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_38) == *(D_801C7082 + temp_a1_38)) && (*(D_801C7083 + temp_a0_38) == *(D_801C7083 + temp_a1_38))) {
                            D_801CA13D = sp10;
                            goto block_526;
                        }
                    } else {
block_526:
                        var_s2 = 1;
                    }
                }
                temp_s0_13 = func_801A4108(D_801C6BB8);
                temp_v0_11 = func_801A4108(D_801C707A);
                if (temp_s0_13 & 0xFF & (temp_v0_11 & 0xFF)) {
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 3;
                        }
                        var_v0_3 = func_801A4108(D_801CA13D) & 0xFF;
                        goto block_671;
                    }
                    var_v0_2 = func_801A4108(D_801CA13D) & 0xFF;
                    goto block_665;
                }
                if (temp_v0_11 & 0xFF) {
                    var_v0 = 1;
                    if (!(var_s1 & 0xFF)) {
                        var_v0 = 1;
                        if (var_s2 & 0xFF) {
                            var_a0_4 = D_801CA13D;
                            goto block_568;
                        }
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_694;
            }
            if ((u32) ((var_a0 - 0x25) & 0xFF) < 5U) {
                var_v0_36 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0x3C) && (var_v0_36 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x20) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_39 = D_801C707A * 5;
                        temp_a1_39 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_39) == *(D_801C7082 + temp_a1_39)) && (*(D_801C7083 + temp_a0_39) == *(D_801C7083 + temp_a1_39))) {
                            D_801C7AB9 = sp10;
                            goto block_547;
                        }
                    } else {
block_547:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_36 + D_801C6BB8)) == 0) && ((u32) ((var_a1 - 0x25) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_40 = D_801C707A * 5;
                        temp_a1_40 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_40) == *(D_801C7082 + temp_a1_40)) && (*(D_801C7083 + temp_a0_40) == *(D_801C7083 + temp_a1_40))) {
                            D_801C7AB9 = sp10;
                            goto block_554;
                        }
                    } else {
block_554:
                        var_s2 = 1;
                    }
                }
                temp_s0_14 = func_801A4108(D_801C6BB8);
                if (temp_s0_14 & 0xFF & (func_801A4108(D_801C707A) & 0xFF)) {
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 3;
                        }
                        var_v0_3 = func_801A4108(D_801C7AB9) & 0xFF;
                        goto block_671;
                    }
                    var_v0_2 = func_801A4108(D_801C7AB9) & 0xFF;
                    goto block_665;
                }
                if (temp_s0_14 & 0xFF) {
                    var_v0 = 1;
                    if (!(var_s1 & 0xFF)) {
                        var_v0 = 1;
                        if (var_s2 & 0xFF) {
                            var_a0_4 = D_801C7AB9;
block_568:
                            var_v0_19 = func_801A4108(var_a0_4) & 0xFF;
block_569:
                            var_v0 = 0;
                            if (var_v0_19 != 0) {
                                return 1;
                            }
                            /* Duplicate return node #695. Try simplifying control flow for better match */
                            return var_v0;
                        }
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_694;
            }
            switch ((s8) var_a0) {                  /* switch 2; irregular */
                var_v0_37 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0x3C) && (var_v0_37 = D_801C707A * 4, (((u32) ((var_s0 - 0x25) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_41 = D_801C6BB8 * 5;
                        temp_a1_41 = D_801CA13D * 5;
                        var_s3 = 1;
                        if ((*(D_801C7082 + temp_a0_41) == *(D_801C7082 + temp_a1_41)) && (*(D_801C7083 + temp_a0_41) == *(D_801C7083 + temp_a1_41))) {
                            D_801CA13D = sp10;
                            goto block_578;
                        }
                    } else {
block_578:
                        var_s3 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_37 + D_801C707A)) == 0) && ((u32) ((var_s0 - 0x20) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_42 = D_801C6BB8 * 5;
                        temp_a1_42 = D_801CA13D * 5;
                        var_s4 = 1;
                        if ((*(D_801C7082 + temp_a0_42) == *(D_801C7082 + temp_a1_42)) && (*(D_801C7083 + temp_a0_42) == *(D_801C7083 + temp_a1_42))) {
                            D_801CA13D = sp10;
                            goto block_585;
                        }
                    } else {
block_585:
                        var_s4 = 1;
                    }
                }
                if (func_801A4108(D_801C707A) & 0xFF) {
                    if (!(var_s3 & 0xFF)) {
                        if (!(var_s4 & 0xFF)) {
                            return 3;
                        }
                        var_v0_3 = func_801A4108(D_801CA13D) & 0xFF;
block_671:
                        return (-(var_v0_3 != 0) & 3) | 2;
                    }
                    var_v0_2 = func_801A4108(D_801CA13D) & 0xFF;
block_665:
                    return (-(var_v0_2 != 0) & 3) | 1;
                }
                goto block_694;
                var_v0_38 = D_801C6BB8 * 4;
                if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0x3C) && (var_v0_38 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x20) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_43 = D_801C707A * 5;
                        temp_a1_43 = D_801C7AB9 * 5;
                        var_s1 = 1;
                        if ((*(D_801C7082 + temp_a0_43) == *(D_801C7082 + temp_a1_43)) && (*(D_801C7083 + temp_a0_43) == *(D_801C7083 + temp_a1_43))) {
                            D_801C7AB9 = sp10;
                            goto block_602;
                        }
                    } else {
block_602:
                        var_s1 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_38 + D_801C6BB8)) == 0) && ((u32) ((var_a1 - 0x25) & 0xFF) < 5U)) {
                    func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                    if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_44 = D_801C707A * 5;
                        temp_a1_44 = D_801C7AB9 * 5;
                        var_s2 = 1;
                        if ((*(D_801C7082 + temp_a0_44) == *(D_801C7082 + temp_a1_44)) && (*(D_801C7083 + temp_a0_44) == *(D_801C7083 + temp_a1_44))) {
                            D_801C7AB9 = sp10;
                            goto block_609;
                        }
                    } else {
block_609:
                        var_s2 = 1;
                    }
                }
                if (func_801A4108(D_801C6BB8) & 0xFF) {
                    if (!(var_s1 & 0xFF)) {
                        if (!(var_s2 & 0xFF)) {
                            return 3;
                        }
                        var_v0_3 = func_801A4108(D_801C7AB9) & 0xFF;
                        goto block_671;
                    }
                    var_v0_2 = func_801A4108(D_801C7AB9) & 0xFF;
                    goto block_665;
                }
                goto block_694;
                var_v0_39 = D_801C707A * 4;
                if ((*(D_801C7081 + (D_801C707A * 5)) == 0x3C) && (var_v0_39 = D_801C707A * 4, (((u32) ((var_s0 - 0x1B) & 0xFF) < 5U) != 0))) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_45 = D_801C6BB8 * 5;
                        temp_a1_45 = D_801CA13D * 5;
                        var_s3 = 1;
                        if ((*(D_801C7082 + temp_a0_45) == *(D_801C7082 + temp_a1_45)) && (*(D_801C7083 + temp_a0_45) == *(D_801C7083 + temp_a1_45))) {
                            D_801CA13D = sp10;
                            goto block_626;
                        }
                    } else {
block_626:
                        var_s3 = 1;
                    }
                } else if ((*(D_801C7081 + (var_v0_39 + D_801C707A)) == 0) && ((u32) ((var_s0 - 0x16) & 0xFF) < 5U)) {
                    func_801C3634(D_801C707A, &sp10, &D_801CA13D);
                    if (D_801C6BB8 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                        temp_a0_46 = D_801C6BB8 * 5;
                        temp_a1_46 = D_801CA13D * 5;
                        var_s4 = 1;
                        if ((*(D_801C7082 + temp_a0_46) == *(D_801C7082 + temp_a1_46)) && (*(D_801C7083 + temp_a0_46) == *(D_801C7083 + temp_a1_46))) {
                            D_801CA13D = sp10;
                            goto block_633;
                        }
                    } else {
block_633:
                        var_s4 = 1;
                    }
                }
                if (func_801A4040(D_801C707A) & 0xFF) {
                    if (!(var_s3 & 0xFF)) {
                        if (!(var_s4 & 0xFF)) {
                            return 3;
                        }
                        var_a0_3 = D_801CA13D;
block_670:
                        var_v0_3 = func_801A4040(var_a0_3) & 0xFF;
                        goto block_671;
                    }
                    var_a0_2 = D_801CA13D;
block_664:
                    var_v0_2 = func_801A4040(var_a0_2) & 0xFF;
                    goto block_665;
                }
                goto block_694;
                var_v0 = 0;
                if ((s8) var_a0 == 0x2D) {
                    var_v0_40 = D_801C6BB8 * 4;
                    if ((*(D_801C7081 + (D_801C6BB8 * 5)) == 0x3C) && (var_v0_40 = D_801C6BB8 * 4, (((u32) ((var_a1 - 0x16) & 0xFF) < 5U) != 0))) {
                        func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                        if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                            temp_a0_47 = D_801C707A * 5;
                            temp_a1_47 = D_801C7AB9 * 5;
                            var_s1 = 1;
                            if ((*(D_801C7082 + temp_a0_47) == *(D_801C7082 + temp_a1_47)) && (*(D_801C7083 + temp_a0_47) == *(D_801C7083 + temp_a1_47))) {
                                D_801C7AB9 = sp10;
                                goto block_650;
                            }
                        } else {
block_650:
                            var_s1 = 1;
                        }
                    } else if ((*(D_801C7081 + (var_v0_40 + D_801C6BB8)) == 0) && ((u32) ((var_a1 - 0x1B) & 0xFF) < 5U)) {
                        func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
                        if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                            temp_a0_48 = D_801C707A * 5;
                            temp_a1_48 = D_801C7AB9 * 5;
                            var_s2 = 1;
                            if ((*(D_801C7082 + temp_a0_48) == *(D_801C7082 + temp_a1_48)) && (*(D_801C7083 + temp_a0_48) == *(D_801C7083 + temp_a1_48))) {
                                D_801C7AB9 = sp10;
                                goto block_657;
                            }
                        } else {
block_657:
                            var_s2 = 1;
                        }
                    }
                    var_v0 = 0;
                    if (func_801A4040(D_801C6BB8) & 0xFF) {
                        if (func_801A4040(D_801C707A) & 0xFF) {
                            if (!(var_s1 & 0xFF)) {
                                if (!(var_s2 & 0xFF)) {
                                    return 3;
                                }
block_669:
                                var_a0_3 = D_801C7AB9;
                                goto block_670;
                            }
block_663:
                            var_a0_2 = D_801C7AB9;
                            goto block_664;
                        }
                        goto block_694;
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                }
                /* Duplicate return node #695. Try simplifying control flow for better match */
                return var_v0;
            }
        } else {
            goto block_694;
        }
    } else {
        var_v0 = 0;
        if ((*(D_801C7081 + (D_801CA130 * 5)) == 0x78) && (var_v0 = 0, (D_801C6BB8 != 0xFF))) {
            if (D_801C707A != 0xFF) {
                if ((u32) (var_a0 & 0xFF) < 5U) {
                    temp_s1_11 = func_801A4040(D_801C6BB8, var_a1);
                    var_v0_41 = func_801A4040(D_801C707A);
                    var_v1_4 = (temp_s1_11 & 0xFF) != 0;
                    goto block_688;
                }
                if ((u32) ((var_a0 - 5) & 0xFF) < 5U) {
                    temp_s1_12 = func_801A4108(D_801C6BB8, var_a1);
                    var_v0_41 = func_801A4108(D_801C707A);
                    var_v1_4 = (temp_s1_12 & 0xFF) != 0;
                    goto block_688;
                }
                if ((u32) ((var_a0 - 0xA) & 0xFF) < 0xCU) {
                    temp_s1_13 = func_801A4040(D_801C6BB8, var_a1);
                    var_v0_41 = func_801A4108(D_801C707A);
                    var_v1_4 = (temp_s1_13 & 0xFF) != 0;
                    goto block_688;
                }
                switch ((s8) var_a0) {              /* switch 3; irregular */
                    var_v0_41 = func_801A4108(D_801C707A, var_a1);
block_687:
                    var_v1_4 = D_801C6BB8 == M2C_FIELD(D_801C7AB0, u8 *, 2);
block_688:
                    var_v0 = 0;
                    if (var_v1_4 & (var_v0_41 & 0xFF)) {
                        return 2;
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                    var_v0_42 = func_801A4108(D_801C6BB8, var_a1) & 0xFF;
block_692:
                    var_v0 = 0;
                    if (var_v0_42 != 0) {
                        var_v0 = 2;
                        if (D_801C707A != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                            goto block_694;
                        }
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                    var_v0_41 = func_801A4040(D_801C707A, var_a1);
                    goto block_687;
                    var_v0 = 0;
                    if ((s8) var_a0 == 0x2D) {
                        var_v0_42 = func_801A4040(D_801C6BB8, var_a1) & 0xFF;
                        goto block_692;
                    }
                    /* Duplicate return node #695. Try simplifying control flow for better match */
                    return var_v0;
                }
            } else {
block_694:
                var_v0 = 0;
                /* Duplicate return node #695. Try simplifying control flow for better match */
                return var_v0;
            }
        } else {
            return var_v0;
        }
    }
}
