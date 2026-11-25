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

extern signed char D_801C6BB1;
extern signed char D_801C6BB0;
extern signed char D_801C7062;
extern signed char D_801C7063;
s32 func_801C2FFC();
extern char D_8011F2FD[];
extern u8 D_801C6BB9;
extern char D_801C6BE0[];
extern u8 D_801C7068;
extern char D_801C7080[];
extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 D_801C7469;
extern char D_801C7470[];
extern u8 *D_801C7AB0;
extern u8 D_801C7AB6;
extern char D_801C7AD8[];

u8 func_8019A5A0(void) {
    u8 sp[256];
    s32 sp10;
    s32 sp890;
    u8 spC78;
    s8 spC79;
    u8 spC87;
    s32 *spC8C;
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_18;
    s32 temp_a0_19;
    s32 temp_a0_20;
    s32 temp_a0_27;
    s32 temp_a0_28;
    s32 temp_a0_29;
    s32 temp_a0_2;
    s32 temp_a0_36;
    s32 temp_a0_38;
    s32 temp_a0_39;
    s32 temp_a0_40;
    s32 temp_a0_41;
    s32 temp_a0_42;
    s32 temp_a0_43;
    s32 temp_a0_44;
    s32 temp_a0_45;
    s32 temp_a0_47;
    s32 temp_a0_9;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_s0_13;
    s32 temp_s0_14;
    s32 temp_s0_15;
    s32 temp_s0_16;
    s32 temp_s0_17;
    s32 temp_s0_18;
    s32 temp_s0_19;
    s32 temp_s0_20;
    s32 temp_s0_21;
    s32 temp_s0_22;
    s32 temp_s0_23;
    s32 temp_s0_24;
    s32 temp_s0_25;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_t0;
    s32 temp_v0_10;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_15;
    s32 temp_v0_18;
    s32 temp_v0_20;
    s32 temp_v0_21;
    s32 temp_v0_23;
    s32 temp_v0_24;
    s32 temp_v0_26;
    s32 temp_v0_28;
    s32 temp_v0_29;
    s32 temp_v0_2;
    s32 temp_v0_31;
    s32 temp_v0_32;
    s32 temp_v0_34;
    s32 temp_v0_35;
    s32 temp_v0_37;
    s32 temp_v0_3;
    s32 temp_v0_40;
    s32 temp_v0_42;
    s32 temp_v0_43;
    s32 temp_v0_45;
    s32 temp_v0_46;
    s32 temp_v0_48;
    s32 temp_v0_4;
    s32 temp_v0_51;
    s32 temp_v0_53;
    s32 temp_v0_56;
    s32 temp_v0_57;
    s32 temp_v0_58;
    s32 temp_v0_5;
    s32 temp_v0_60;
    s32 temp_v0_61;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_10;
    s32 temp_v1_11;
    s32 temp_v1_12;
    s32 temp_v1_13;
    s32 temp_v1_14;
    s32 temp_v1_15;
    s32 temp_v1_17;
    s32 temp_v1_18;
    s32 temp_v1_19;
    s32 temp_v1_20;
    s32 temp_v1_21;
    s32 temp_v1_22;
    s32 temp_v1_24;
    s32 temp_v1_25;
    s32 temp_v1_26;
    s32 temp_v1_27;
    s32 temp_v1_28;
    s32 temp_v1_29;
    s32 temp_v1_30;
    s32 temp_v1_32;
    s32 temp_v1_33;
    s32 temp_v1_35;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 var_a1;
    s32 var_a1_11;
    s32 var_a1_12;
    s32 var_a1_13;
    s32 var_a1_14;
    s32 var_a1_15;
    s32 var_a1_16;
    s32 var_a1_17;
    s32 var_a1_18;
    s32 var_a1_19;
    s32 var_a1_20;
    s32 var_a1_21;
    s32 var_a1_22;
    s32 var_a1_24;
    s32 var_a1_25;
    s32 var_a1_26;
    s32 var_a1_27;
    s32 var_a1_28;
    s32 var_a1_29;
    s32 var_a1_2;
    s32 var_a1_30;
    s32 var_a1_31;
    s32 var_a1_32;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a1_7;
    s32 var_a1_8;
    s32 var_a1_9;
    s32 var_a2_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_4;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_14;
    s32 var_v0_15;
    s32 var_v0_16;
    s32 var_v0_17;
    s32 var_v0_19;
    s32 var_v0_20;
    s32 var_v0_21;
    s32 var_v0_22;
    s32 var_v0_23;
    s32 var_v0_24;
    s32 var_v0_25;
    s32 var_v0_26;
    s32 var_v0_27;
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
    s32 var_v0_40;
    s32 var_v0_41;
    s32 var_v0_42;
    s32 var_v0_43;
    s32 var_v0_44;
    s32 var_v0_45;
    s32 var_v0_48;
    s32 var_v0_49;
    s32 var_v0_50;
    s32 var_v0_51;
    s32 var_v0_52;
    s32 var_v0_53;
    s32 var_v0_54;
    s32 var_v0_55;
    s32 var_v0_56;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 var_s1_5;
    s8 var_s4_2;
    u16 *temp_a2;
    u16 temp_a0_48;
    u16 temp_v1_31;
    u32 temp_v0_17;
    u32 temp_v0_39;
    u32 temp_v0_62;
    u32 var_v0_18;
    u32 var_v0_28;
    u32 var_v0_29;
    u32 var_v0_46;
    u32 var_v0_47;
    u32 var_v1_4;
    u8 *temp_a1;
    u8 temp_s3;
    u8 temp_s5;
    u8 temp_v0_16;
    u8 temp_v0_27;
    u8 temp_v0_38;
    u8 temp_v0_50;
    u8 temp_v0_54;
    u8 temp_v0_55;
    u8 temp_v1_16;
    u8 temp_v1_23;
    u8 temp_v1_2;
    u8 temp_v1_9;
    u8 var_a1_10;
    u8 var_a1_23;
    u8 var_a2;
    u8 var_a2_2;
    u8 var_s1_3;
    u8 var_s2;
    u8 var_s3;
    u8 var_s4;
    u8 var_s6;
    u8 var_v0_3;
    u8 var_v0_4;
    u8 var_v0_8;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_15;
    void *temp_a0_16;
    void *temp_a0_17;
    void *temp_a0_21;
    void *temp_a0_22;
    void *temp_a0_23;
    void *temp_a0_24;
    void *temp_a0_25;
    void *temp_a0_26;
    void *temp_a0_30;
    void *temp_a0_31;
    void *temp_a0_32;
    void *temp_a0_33;
    void *temp_a0_34;
    void *temp_a0_35;
    void *temp_a0_37;
    void *temp_a0_3;
    void *temp_a0_46;
    void *temp_a0_49;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_v0;
    void *temp_v0_11;
    void *temp_v0_14;
    void *temp_v0_19;
    void *temp_v0_22;
    void *temp_v0_25;
    void *temp_v0_30;
    void *temp_v0_33;
    void *temp_v0_36;
    void *temp_v0_41;
    void *temp_v0_44;
    void *temp_v0_47;
    void *temp_v0_49;
    void *temp_v0_52;
    void *temp_v0_59;
    void *temp_v0_63;
    void *temp_v0_8;
    void *temp_v1_34;

    var_s2 = M2C_FIELD(D_801C7AB0, u8 *, 2);
    var_s4 = 0;
    spC87 = 0;
    var_s1 = 0;
    var_v0 = 0 & 0xFFFF;
    do {
        *(&sp10 + var_v0) = 0xFF;
        var_s1 += 1;
        var_v0 = var_s1 & 0xFFFF;
    } while ((u32) (var_s1 & 0xFFFF) < 0x240U);
    var_s1_2 = 0;
    do {
        var_a1 = 0;
        var_v0_2 = 0 & 0xFF;
loop_4:
        *(s32 *)((var_v0_2 * 2) + (((var_s1_2 & 0xFFFF) * 8) + &sp10 + 0x240)) = 0xFFFF;
        var_a1 += 1;
        var_v0_2 = var_a1 & 0xFF;
        if ((u32) (var_a1 & 0xFF) < 4U) {
            goto loop_4;
        }
        temp_v0 = ((var_s1_2 & 0xFFFF) * 5) + &sp10;
        M2C_FIELD(temp_v0, s8 *, 0x880) = 4;
        M2C_FIELD(temp_v0, s8 *, 0x881) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x882) = -1;
        M2C_FIELD(temp_v0, s8 *, 0x883) = -1;
        M2C_FIELD(temp_v0, s8 *, 0x884) = -1;
        var_s1_2 += 1;
    } while ((u32) (var_s1_2 & 0xFFFF) < 0xC8U);
    var_s3 = *(D_801C7AD8 + ((D_801C6BB1 * 0x18) + D_801C6BB0));
    if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 3) {
        var_a2 = *(D_801C7084 + ((var_s3 & 0xFF) * 5));
    } else {
        var_a2 = *(D_801C7084 + ((var_s3 & 0xFF) * 5)) - 0x2E;
    }
    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
        switch (D_801C7469) {                       /* switch 1; irregular */
            if ((u32) ((var_a2 - 5) & 0xFF) < 5U) {
                temp_v0_2 = (var_s3 & 0xFF) * 5;
                spC78 = *(D_801C7082 + temp_v0_2);
                var_v0_3 = *(D_801C7083 + temp_v0_2) - 1;
                goto block_37;
            }
            goto block_445;
            var_v1 = var_s3 & 0xFF;
            if ((u32) (var_a2 & 0xFF) < 5U) {
                var_v1_2 = (var_s3 & 0xFF) * 5;
                var_v0_4 = *(D_801C7082 + var_v1_2) - 1;
                goto block_36;
            }
            goto block_446;
            if ((u32) ((var_a2 - 5) & 0xFF) < 5U) {
                temp_v0_3 = (var_s3 & 0xFF) * 5;
                spC78 = *(D_801C7082 + temp_v0_3);
                var_v0_3 = *(D_801C7083 + temp_v0_3) + 1;
                goto block_37;
            }
            goto block_445;
            var_v1 = var_s3 & 0xFF;
            if ((u32) (var_a2 & 0xFF) < 5U) {
                var_v0_5 = var_s3 & 0xFF;
                goto block_35;
            }
            goto block_446;
        }
    } else if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 6) {
        switch (D_801C7469) {                       /* switch 2; irregular */
            var_v1 = var_s3 & 0xFF;
            if ((s8) var_a2 == 0x2B) {
                temp_v0_4 = var_v1 * 5;
                spC78 = *(D_801C7082 + temp_v0_4);
                var_v0_3 = *(D_801C7083 + temp_v0_4) - 1;
block_37:
                spC79 = (s8) var_v0_3;
                goto block_38;
            }
            goto block_446;
            var_v1 = var_s3 & 0xFF;
            if ((s8) var_a2 == 0x2D) {
                var_v1_2 = (var_s3 & 0xFF) * 5;
                var_v0_4 = *(D_801C7082 + var_v1_2) - 1;
block_36:
                spC78 = var_v0_4;
                var_v0_3 = *(D_801C7083 + var_v1_2);
                goto block_37;
            }
            goto block_446;
            var_v1 = var_s3 & 0xFF;
            if ((s8) var_a2 == 0x2A) {
                temp_v0_5 = var_v1 * 5;
                spC78 = *(D_801C7082 + temp_v0_5);
                var_v0_3 = *(D_801C7083 + temp_v0_5) + 1;
                goto block_37;
            }
            goto block_446;
            var_v1 = var_s3 & 0xFF;
            if ((s8) var_a2 == 0x2C) {
                var_v0_5 = var_s3 & 0xFF;
block_35:
                var_v1_2 = var_v0_5 * 5;
                var_v0_4 = *(D_801C7082 + var_v1_2) + 1;
                goto block_36;
            }
            goto block_446;
        }
    } else {
block_38:
        temp_a1 = D_801C7AB0;
        var_s1_3 = 0;
        if ((M2C_FIELD(D_801C7AB0, u8 *, 2) - 1) > 0) {
            spC8C = &sp890;
loop_40:
            temp_s5 = *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8);
            if (M2C_FIELD(temp_a1, u8 *, 0) == 3) {
                var_s6 = *(D_801C7084 + ((temp_s5 & 0xFF) * 5));
                var_v0_6 = var_s3 & 0xFF;
            } else {
                var_s6 = *(D_801C7084 + ((temp_s5 & 0xFF) * 5)) - 0x2E;
                var_v0_6 = var_s3 & 0xFF;
            }
            var_v0_7 = var_s3 & 0xFF;
            if (((*(D_801C7081 + (var_v0_6 * 5)) == 0) && (var_v0_7 = var_s3 & 0xFF, (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0x78))) || ((var_v0_7 = var_s3 & 0xFF, (*(D_801C7081 + (var_v0_7 * 5)) == 0x78)) && (var_v0_7 = var_s3 & 0xFF, (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0)))) {
                temp_v1 = var_v0_7 * 5;
                D_801C7068 = *(D_801C7082 + temp_v1);
                var_v0_8 = *(D_801C7083 + temp_v1);
                goto block_447;
            }
            temp_a0 = var_v0_7 * 5;
            if (*(D_801C7080 + temp_a0) == 0) {
                temp_a1_2 = (temp_s5 & 0xFF) * 5;
                if ((*(D_801C7082 + temp_a0) == *(D_801C7082 + temp_a1_2)) && (*(D_801C7083 + temp_a0) == (*(D_801C7083 + temp_a1_2) + 1))) {
                    var_v0_9 = var_s3 & 0xFF;
                    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 6) {
                        temp_a0_2 = var_v0_9 * 5;
                        var_v0_9 = var_s3 & 0xFF;
                        if (*(D_801C7082 + temp_a0_2) == D_801C7062) {
                            var_v0_9 = var_s3 & 0xFF;
                            if ((*(D_801C7083 + temp_a0_2) - 1) == D_801C7063) {
                                var_v0_9 = var_s3 & 0xFF;
                                if ((s8) var_s6 != 0x2A) {
                                    var_s2 = var_s1_3;
                                    goto block_94;
                                }
                                temp_v1_2 = *(D_801C7081 + (var_v0_9 * 5));
                                if (temp_v1_2 != *(D_801C7081 + ((temp_s5 & 0xFF) * 5))) {
                                    if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) != 0) {
                                        if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x3C) {
                                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) != 0) {
                                                if ((*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0x78) && ((u32) ((var_a2 - 0x20) & 0xFF) >= 5U)) {
                                                    var_s2 = var_s1_3;
                                                }
                                            } else {
                                                goto block_87;
                                            }
                                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                                            goto block_87;
                                        }
                                    } else if ((u32) ((var_a2 - 0x20) & 0xFF) >= 5U) {
                                        var_s2 = var_s1_3;
                                    }
                                    goto block_88;
                                }
                                temp_v0_6 = var_a2 - 5;
                                if (temp_v1_2 == 0x78) {
                                    temp_s0 = var_s3 & 0xFF;
                                    if (((u32) (temp_v0_6 & 0xFF) < 5U) || ((u32) ((var_a2 - 0x10) & 0xFF) < 6U)) {
                                        func_801C2FFC(temp_s0, temp_s5 & 0xFF, &spC78, &spC79);
                                        temp_a0_3 = ((var_s4 & 0xFF) * 5) + &sp10;
                                        temp_v1_3 = temp_s0 * 5;
                                        M2C_FIELD(temp_a0_3, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_3);
                                        M2C_FIELD(temp_a0_3, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_3);
                                        M2C_FIELD(temp_a0_3, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_3);
                                        M2C_FIELD(temp_a0_3, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_3);
                                        M2C_FIELD(temp_a0_3, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_3);
                                        var_a1_2 = 0;
                                        var_v0_10 = 0 & 0xFF;
                                        do {
                                            temp_v0_7 = var_v0_10 * 2;
                                            *(s32 *)(temp_v0_7 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_7 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                            var_a1_2 += 1;
                                            var_v0_10 = var_a1_2 & 0xFF;
                                        } while ((u32) (var_a1_2 & 0xFF) < 4U);
                                        temp_v0_8 = spC8C + ((var_s4 & 0xFF) * 5);
                                        *(&sp10 + ((M2C_FIELD(temp_v0_8, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_8, s8 *, 2))) = var_s4;
                                        var_s4_2 = var_s4 + 1;
                                        temp_s0_2 = temp_s5 & 0xFF;
                                        func_801C2FFC(temp_s0_2, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                        temp_a0_4 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                        temp_v1_4 = temp_s0_2 * 5;
                                        M2C_FIELD(temp_a0_4, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_4);
                                        M2C_FIELD(temp_a0_4, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_4);
                                        M2C_FIELD(temp_a0_4, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_4);
                                        M2C_FIELD(temp_a0_4, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_4);
                                        M2C_FIELD(temp_a0_4, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_4);
                                        var_a1_3 = 0;
                                        var_v0_11 = 0 & 0xFF;
                                        do {
                                            temp_v0_9 = var_v0_11 * 2;
                                            *(s32 *)(temp_v0_9 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_9 + ((temp_s5 * 8) + D_801C7470));
                                            var_a1_3 += 1;
                                            var_v0_11 = var_a1_3 & 0xFF;
                                        } while ((u32) (var_a1_3 & 0xFF) < 4U);
                                        var_v1_3 = var_s4_2 & 0xFF;
                                        goto block_349;
                                    }
block_87:
                                    var_s2 = var_s1_3;
                                    goto block_88;
                                }
                                temp_s0_3 = var_s3 & 0xFF;
                                if ((u32) (temp_v0_6 & 0xFF) >= 5U) {
                                    if ((u32) ((var_a2 - 0x10) & 0xFF) >= 6U) {
                                        var_s2 = var_s1_3;
                                        if ((u32) ((var_a2 - 0x25) & 0xFF) < 5U) {
                                            goto block_70;
                                        }
block_88:
                                        var_v0_9 = var_s3 & 0xFF;
                                        if ((var_s2 & 0xFF) == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                                            temp_s0_4 = var_s3 & 0xFF;
                                            func_801C2FFC(temp_s0_4, temp_s5 & 0xFF, &spC78, &spC79);
                                            temp_a0_5 = ((var_s4 & 0xFF) * 5) + &sp10;
                                            temp_v1_5 = temp_s0_4 * 5;
                                            M2C_FIELD(temp_a0_5, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_5);
                                            M2C_FIELD(temp_a0_5, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_5);
                                            M2C_FIELD(temp_a0_5, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_5);
                                            M2C_FIELD(temp_a0_5, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_5);
                                            M2C_FIELD(temp_a0_5, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_5);
                                            var_a1_4 = 0;
                                            var_v0_12 = 0 & 0xFF;
                                            do {
                                                temp_v0_10 = var_v0_12 * 2;
                                                *(s32 *)(temp_v0_10 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_10 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                                var_a1_4 += 1;
                                                var_v0_12 = var_a1_4 & 0xFF;
                                            } while ((u32) (var_a1_4 & 0xFF) < 4U);
                                            temp_v0_11 = spC8C + ((var_s4 & 0xFF) * 5);
                                            *(&sp10 + ((M2C_FIELD(temp_v0_11, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_11, s8 *, 2))) = var_s4;
                                            var_s4_2 = var_s4 + 1;
                                            temp_s0_5 = temp_s5 & 0xFF;
                                            func_801C2FFC(temp_s0_5, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                            temp_a0_6 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                            temp_v1_6 = temp_s0_5 * 5;
                                            M2C_FIELD(temp_a0_6, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_6);
                                            M2C_FIELD(temp_a0_6, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_6);
                                            M2C_FIELD(temp_a0_6, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_6);
                                            M2C_FIELD(temp_a0_6, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_6);
                                            M2C_FIELD(temp_a0_6, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_6);
                                            var_a1_5 = 0;
                                            var_v0_13 = 0 & 0xFF;
                                            do {
                                                temp_v0_12 = var_v0_13 * 2;
                                                *(s32 *)(temp_v0_12 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_12 + ((temp_s5 * 8) + D_801C7470));
                                                var_a1_5 += 1;
                                                var_v0_13 = var_a1_5 & 0xFF;
                                            } while ((u32) (var_a1_5 & 0xFF) < 4U);
                                            var_v1_3 = var_s4_2 & 0xFF;
                                            goto block_349;
                                        }
                                        goto block_94;
                                    }
                                    goto block_71;
                                }
block_70:
block_71:
                                func_801C2FFC(temp_s0_3, temp_s5 & 0xFF, &spC78, &spC79);
                                temp_a0_7 = ((var_s4 & 0xFF) * 5) + &sp10;
                                temp_v1_7 = temp_s0_3 * 5;
                                M2C_FIELD(temp_a0_7, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_7);
                                M2C_FIELD(temp_a0_7, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_7);
                                M2C_FIELD(temp_a0_7, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_7);
                                M2C_FIELD(temp_a0_7, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_7);
                                M2C_FIELD(temp_a0_7, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_7);
                                var_a1_6 = 0;
                                var_v0_14 = 0 & 0xFF;
                                do {
                                    temp_v0_13 = var_v0_14 * 2;
                                    *(s32 *)(temp_v0_13 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_13 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                    var_a1_6 += 1;
                                    var_v0_14 = var_a1_6 & 0xFF;
                                } while ((u32) (var_a1_6 & 0xFF) < 4U);
                                temp_v0_14 = spC8C + ((var_s4 & 0xFF) * 5);
                                *(&sp10 + ((M2C_FIELD(temp_v0_14, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_14, s8 *, 2))) = var_s4;
                                var_s4_2 = var_s4 + 1;
                                temp_s0_6 = temp_s5 & 0xFF;
                                func_801C2FFC(temp_s0_6, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                temp_a0_8 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                temp_v1_8 = temp_s0_6 * 5;
                                M2C_FIELD(temp_a0_8, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_8);
                                M2C_FIELD(temp_a0_8, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_8);
                                M2C_FIELD(temp_a0_8, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_8);
                                M2C_FIELD(temp_a0_8, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_8);
                                M2C_FIELD(temp_a0_8, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_8);
                                var_a1_7 = 0;
                                var_v0_15 = 0 & 0xFF;
                                do {
                                    temp_v0_15 = var_v0_15 * 2;
                                    *(s32 *)(temp_v0_15 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_15 + ((temp_s5 * 8) + D_801C7470));
                                    var_a1_7 += 1;
                                    var_v0_15 = var_a1_7 & 0xFF;
                                } while ((u32) (var_a1_7 & 0xFF) < 4U);
                                var_v1_3 = var_s4_2 & 0xFF;
                                goto block_349;
                            }
                        }
                    }
block_94:
                    temp_a0_9 = var_v0_9 * 5;
                    if (*(D_801C7081 + temp_a0_9) == *(D_801C7081 + ((temp_s5 & 0xFF) * 5))) {
                        temp_v0_16 = *(D_801C7081 + temp_a0_9);
                        if (((temp_v0_16 == 0) | (temp_v0_16 == 0x3C)) != 0) {
                            var_v0_16 = var_s6 - 0x25;
                            if ((u32) ((var_a2 - 0x20) & 0xFF) >= 5U) {
                                var_v0_17 = var_s6 - 5;
                                if (((u32) ((var_a2 - 5) & 0xFF) < 5U) || (var_v0_17 = var_s6 - 5, (((u32) ((var_a2 - 0x10) & 0xFF) < 6U) != 0)) || (var_v0_17 = var_s6 - 5, ((((u32) ((var_a2 - 0x25) & 0xFF) < 5U) | ((s8) var_a2 == 0x2B)) != 0))) {
                                    if ((u32) (var_v0_17 & 0xFF) >= 0xBU) {
                                        var_v0_18 = (var_s6 - 0x20) & 0xFF;
                                        goto block_395;
                                    }
                                } else {
                                    goto block_397;
                                }
                            } else {
                                goto block_394;
                            }
                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                            var_v0_19 = var_s6 - 5;
                            if ((u32) ((var_a2 - 5) & 0xFF) >= 5U) {
                                if (!(((u32) ((var_a2 - 0x10) & 0xFF) >= 6U) & ((s8) var_a2 != 0x2B))) {
                                    var_v0_19 = var_s6 - 5;
                                    goto block_106;
                                }
                                goto block_397;
                            }
block_106:
                            var_v0_20 = (u32) (var_v0_19 & 0xFF) < 0xBU;
                            goto block_396;
                        }
                    } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) != 0) {
                        if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x3C) {
                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0) {
                                var_v0_16 = var_s6 - 0x25;
                                if ((u32) ((var_a2 - 5) & 0xFF) >= 5U) {
                                    var_v0_16 = var_s6 - 0x25;
                                    if ((u32) ((var_a2 - 0x10) & 0xFF) >= 6U) {
                                        if ((((u32) ((var_a2 - 0x25) & 0xFF) < 5U) | ((s8) var_a2 == 0x2B)) != 0) {
                                            var_v0_18 = (var_s6 - 0x25) & 0xFF;
                                            goto block_395;
                                        }
                                        goto block_397;
                                    }
                                }
                                goto block_394;
                            }
                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0x78) {
                                if ((u32) ((var_a2 - 0x20) & 0xFF) < 5U) {
                                    var_v0_20 = (u32) ((var_s6 - 5) & 0xFF) < 0xBU;
                                    goto block_396;
                                }
                                goto block_397;
                            }
                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                            var_v0_16 = var_s6 - 0x25;
                            if ((u32) ((var_a2 - 5) & 0xFF) >= 5U) {
                                if (!(((u32) ((var_a2 - 0x10) & 0xFF) >= 6U) & ((s8) var_a2 != 0x2B))) {
                                    var_v0_16 = var_s6 - 0x25;
                                    goto block_394;
                                }
                                goto block_397;
                            }
                            goto block_394;
                        }
                    } else if ((u32) ((var_a2 - 0x20) & 0xFF) < 5U) {
                        if ((u32) ((var_s6 - 5) & 0xFF) >= 0xBU) {
                            var_v0_18 = (var_s6 - 0x20) & 0xFF;
                            goto block_395;
                        }
                    } else {
                        goto block_397;
                    }
                    goto block_398;
                }
                goto block_397;
            }
            temp_a1_3 = (var_s3 & 0xFF) * 5;
            if (*(D_801C7080 + temp_a1_3) == 1) {
                temp_a0_10 = (temp_s5 & 0xFF) * 5;
                if ((*(D_801C7082 + temp_a1_3) == (*(D_801C7082 + temp_a0_10) + 1)) && (*(D_801C7083 + temp_a1_3) == *(D_801C7083 + temp_a0_10))) {
                    var_v0_21 = var_s3 & 0xFF;
                    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 6) {
                        temp_a0_11 = var_v0_21 * 5;
                        var_v0_21 = var_s3 & 0xFF;
                        if ((*(D_801C7082 + temp_a0_11) - 1) == D_801C7062) {
                            var_v0_21 = var_s3 & 0xFF;
                            if (*(D_801C7083 + temp_a0_11) == D_801C7063) {
                                var_v0_21 = var_s3 & 0xFF;
                                if ((s8) var_s6 != 0x2C) {
                                    var_s2 = var_s1_3;
                                    goto block_175;
                                }
                                temp_v1_9 = *(D_801C7081 + (var_v0_21 * 5));
                                if (temp_v1_9 != *(D_801C7081 + ((temp_s5 & 0xFF) * 5))) {
                                    if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) != 0) {
                                        if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x3C) {
                                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) != 0) {
                                                if ((*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0x78) && ((u32) ((var_a2 - 0x16) & 0xFF) >= 5U)) {
                                                    var_s2 = var_s1_3;
                                                }
                                            } else {
                                                goto block_168;
                                            }
                                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                                            goto block_168;
                                        }
                                    } else if ((u32) ((var_a2 - 0x16) & 0xFF) >= 5U) {
                                        var_s2 = var_s1_3;
                                    }
                                    goto block_169;
                                }
                                temp_v0_17 = var_a2 & 0xFF;
                                if (temp_v1_9 == 0x78) {
                                    temp_s0_7 = var_s3 & 0xFF;
                                    if ((temp_v0_17 < 5U) || ((u32) ((var_a2 - 0xA) & 0xFF) < 3U) || ((u32) ((var_a2 - 0x10) & 0xFF) < 3U)) {
                                        func_801C2FFC(temp_s0_7, temp_s5 & 0xFF, &spC78, &spC79);
                                        temp_a0_12 = ((var_s4 & 0xFF) * 5) + &sp10;
                                        temp_v1_10 = temp_s0_7 * 5;
                                        M2C_FIELD(temp_a0_12, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_10);
                                        M2C_FIELD(temp_a0_12, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_10);
                                        M2C_FIELD(temp_a0_12, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_10);
                                        M2C_FIELD(temp_a0_12, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_10);
                                        M2C_FIELD(temp_a0_12, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_10);
                                        var_a1_8 = 0;
                                        var_v0_22 = 0 & 0xFF;
                                        do {
                                            temp_v0_18 = var_v0_22 * 2;
                                            *(s32 *)(temp_v0_18 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_18 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                            var_a1_8 += 1;
                                            var_v0_22 = var_a1_8 & 0xFF;
                                        } while ((u32) (var_a1_8 & 0xFF) < 4U);
                                        temp_v0_19 = spC8C + ((var_s4 & 0xFF) * 5);
                                        *(&sp10 + ((M2C_FIELD(temp_v0_19, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_19, s8 *, 2))) = var_s4;
                                        var_s4_2 = var_s4 + 1;
                                        temp_s0_8 = temp_s5 & 0xFF;
                                        func_801C2FFC(temp_s0_8, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                        temp_a0_13 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                        temp_v1_11 = temp_s0_8 * 5;
                                        M2C_FIELD(temp_a0_13, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_11);
                                        M2C_FIELD(temp_a0_13, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_11);
                                        M2C_FIELD(temp_a0_13, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_11);
                                        M2C_FIELD(temp_a0_13, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_11);
                                        M2C_FIELD(temp_a0_13, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_11);
                                        var_a1_9 = 0;
                                        var_v0_23 = 0 & 0xFF;
                                        do {
                                            temp_v0_20 = var_v0_23 * 2;
                                            *(s32 *)(temp_v0_20 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_20 + ((temp_s5 * 8) + D_801C7470));
                                            var_a1_9 += 1;
                                            var_v0_23 = var_a1_9 & 0xFF;
                                        } while ((u32) (var_a1_9 & 0xFF) < 4U);
                                        var_v1_3 = var_s4_2 & 0xFF;
                                        goto block_349;
                                    }
block_168:
                                    var_s2 = var_s1_3;
                                    goto block_169;
                                }
                                temp_s0_9 = var_s3 & 0xFF;
                                if (temp_v0_17 >= 5U) {
                                    if ((u32) ((var_a2 - 0xA) & 0xFF) >= 3U) {
                                        var_a1_10 = temp_s5 & 0xFF;
                                        if ((u32) ((var_a2 - 0x10) & 0xFF) >= 3U) {
                                            var_s2 = var_s1_3;
                                            if ((u32) ((var_a2 - 0x1B) & 0xFF) < 5U) {
                                                goto block_150;
                                            }
block_169:
                                            var_v0_21 = var_s3 & 0xFF;
                                            if ((var_s2 & 0xFF) == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                                                temp_s0_10 = var_s3 & 0xFF;
                                                func_801C2FFC(temp_s0_10, temp_s5 & 0xFF, &spC78, &spC79);
                                                temp_a0_14 = ((var_s4 & 0xFF) * 5) + &sp10;
                                                temp_v1_12 = temp_s0_10 * 5;
                                                M2C_FIELD(temp_a0_14, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_12);
                                                M2C_FIELD(temp_a0_14, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_12);
                                                M2C_FIELD(temp_a0_14, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_12);
                                                M2C_FIELD(temp_a0_14, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_12);
                                                M2C_FIELD(temp_a0_14, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_12);
                                                var_a1_11 = 0;
                                                var_v0_24 = 0 & 0xFF;
                                                do {
                                                    temp_v0_21 = var_v0_24 * 2;
                                                    *(s32 *)(temp_v0_21 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_21 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                                    var_a1_11 += 1;
                                                    var_v0_24 = var_a1_11 & 0xFF;
                                                } while ((u32) (var_a1_11 & 0xFF) < 4U);
                                                temp_v0_22 = spC8C + ((var_s4 & 0xFF) * 5);
                                                *(&sp10 + ((M2C_FIELD(temp_v0_22, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_22, s8 *, 2))) = var_s4;
                                                var_s4_2 = var_s4 + 1;
                                                temp_s0_11 = temp_s5 & 0xFF;
                                                func_801C2FFC(temp_s0_11, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                                temp_v1_13 = temp_s0_11 * 5;
                                                temp_a0_15 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                                M2C_FIELD(temp_a0_15, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_13);
                                                M2C_FIELD(temp_a0_15, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_13);
                                                M2C_FIELD(temp_a0_15, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_13);
                                                M2C_FIELD(temp_a0_15, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_13);
                                                M2C_FIELD(temp_a0_15, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_13);
                                                var_a1_12 = 0;
                                                var_v0_25 = 0 & 0xFF;
                                                do {
                                                    temp_v0_23 = var_v0_25 * 2;
                                                    *(s32 *)(temp_v0_23 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_23 + ((temp_s5 * 8) + D_801C7470));
                                                    var_a1_12 += 1;
                                                    var_v0_25 = var_a1_12 & 0xFF;
                                                } while ((u32) (var_a1_12 & 0xFF) < 4U);
                                                var_v1_3 = var_s4_2 & 0xFF;
                                                goto block_349;
                                            }
                                            goto block_175;
                                        }
                                        goto block_152;
                                    }
                                    goto block_151;
                                }
block_150:
block_151:
                                var_a1_10 = temp_s5 & 0xFF;
block_152:
                                func_801C2FFC(temp_s0_9, var_a1_10, &spC78, &spC79);
                                temp_a0_16 = ((var_s4 & 0xFF) * 5) + &sp10;
                                temp_v1_14 = temp_s0_9 * 5;
                                M2C_FIELD(temp_a0_16, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_14);
                                M2C_FIELD(temp_a0_16, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_14);
                                M2C_FIELD(temp_a0_16, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_14);
                                M2C_FIELD(temp_a0_16, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_14);
                                M2C_FIELD(temp_a0_16, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_14);
                                var_a1_13 = 0;
                                var_v0_26 = 0 & 0xFF;
                                do {
                                    temp_v0_24 = var_v0_26 * 2;
                                    *(s32 *)(temp_v0_24 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_24 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                    var_a1_13 += 1;
                                    var_v0_26 = var_a1_13 & 0xFF;
                                } while ((u32) (var_a1_13 & 0xFF) < 4U);
                                temp_v0_25 = spC8C + ((var_s4 & 0xFF) * 5);
                                *(&sp10 + ((M2C_FIELD(temp_v0_25, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_25, s8 *, 2))) = var_s4;
                                var_s4_2 = var_s4 + 1;
                                temp_s0_12 = temp_s5 & 0xFF;
                                func_801C2FFC(temp_s0_12, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                temp_a0_17 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                temp_v1_15 = temp_s0_12 * 5;
                                M2C_FIELD(temp_a0_17, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_15);
                                M2C_FIELD(temp_a0_17, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_15);
                                M2C_FIELD(temp_a0_17, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_15);
                                M2C_FIELD(temp_a0_17, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_15);
                                M2C_FIELD(temp_a0_17, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_15);
                                var_a1_14 = 0;
                                var_v0_27 = 0 & 0xFF;
                                do {
                                    temp_v0_26 = var_v0_27 * 2;
                                    *(s32 *)(temp_v0_26 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_26 + ((temp_s5 * 8) + D_801C7470));
                                    var_a1_14 += 1;
                                    var_v0_27 = var_a1_14 & 0xFF;
                                } while ((u32) (var_a1_14 & 0xFF) < 4U);
                                var_v1_3 = var_s4_2 & 0xFF;
                                goto block_349;
                            }
                        }
                    }
block_175:
                    temp_a0_18 = var_v0_21 * 5;
                    if (*(D_801C7081 + temp_a0_18) == *(D_801C7081 + ((temp_s5 & 0xFF) * 5))) {
                        temp_v0_27 = *(D_801C7081 + temp_a0_18);
                        if (((temp_v0_27 == 0) | (temp_v0_27 == 0x3C)) != 0) {
                            var_v0_16 = var_s6 - 0x1B;
                            if ((u32) ((var_a2 - 0x16) & 0xFF) >= 5U) {
                                var_v0_28 = var_s6 & 0xFF;
                                if (((u32) (var_a2 & 0xFF) < 5U) || (var_v0_28 = var_s6 & 0xFF, (((u32) ((var_a2 - 0xA) & 0xFF) < 3U) != 0)) || (var_v0_28 = var_s6 & 0xFF, (((u32) ((var_a2 - 0x10) & 0xFF) < 3U) != 0)) || (var_v0_28 = var_s6 & 0xFF, ((((u32) ((var_a2 - 0x1B) & 0xFF) < 5U) | ((s8) var_a2 == 0x2D)) != 0))) {
                                    if ((var_v0_28 >= 5U) && ((u32) ((var_s6 - 0xD) & 0xFF) >= 3U)) {
                                        var_v0_16 = var_s6 - 0x16;
                                        if ((u32) ((var_s6 - 0x13) & 0xFF) >= 3U) {
                                            goto block_394;
                                        }
                                    }
                                } else {
                                    goto block_397;
                                }
                            } else {
                                goto block_394;
                            }
                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                            var_v0_29 = var_s6 & 0xFF;
                            if ((u32) (var_a2 & 0xFF) >= 5U) {
                                var_v0_29 = var_s6 & 0xFF;
                                if ((u32) ((var_a2 - 0xA) & 0xFF) >= 3U) {
                                    if (!(((u32) ((var_a2 - 0x10) & 0xFF) >= 3U) & ((s8) var_a2 != 0x2D))) {
                                        var_v0_29 = var_s6 & 0xFF;
                                        goto block_191;
                                    }
                                    goto block_397;
                                }
                            }
block_191:
                            if ((var_v0_29 >= 5U) && ((u32) ((var_s6 - 0xD) & 0xFF) >= 3U)) {
                                var_v0_20 = (u32) ((var_s6 - 0x13) & 0xFF) < 3U;
                                goto block_396;
                            }
                        }
                    } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) != 0) {
                        if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x3C) {
                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0) {
                                var_v0_16 = var_s6 - 0x1B;
                                if ((u32) (var_a2 & 0xFF) >= 5U) {
                                    var_v0_16 = var_s6 - 0x1B;
                                    if ((u32) ((var_a2 - 0xA) & 0xFF) >= 3U) {
                                        var_v0_16 = var_s6 - 0x1B;
                                        if ((u32) ((var_a2 - 0x10) & 0xFF) >= 3U) {
                                            if ((((u32) ((var_a2 - 0x1B) & 0xFF) < 5U) | ((s8) var_a2 == 0x2D)) != 0) {
                                                var_v0_18 = (var_s6 - 0x1B) & 0xFF;
                                                goto block_395;
                                            }
                                            goto block_397;
                                        }
                                    }
                                }
                                goto block_394;
                            }
                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0x78) {
                                if ((u32) ((var_a2 - 0x16) & 0xFF) < 5U) {
                                    if (((u32) (var_s6 & 0xFF) >= 5U) && ((u32) ((var_s6 - 0xD) & 0xFF) >= 3U)) {
                                        var_v0_20 = (u32) ((var_s6 - 0x13) & 0xFF) < 3U;
                                        goto block_396;
                                    }
                                } else {
                                    goto block_397;
                                }
                            }
                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                            var_v0_16 = var_s6 - 0x1B;
                            if ((u32) (var_a2 & 0xFF) >= 5U) {
                                var_v0_16 = var_s6 - 0x1B;
                                if ((u32) ((var_a2 - 0xA) & 0xFF) >= 3U) {
                                    if (!(((u32) ((var_a2 - 0x10) & 0xFF) >= 3U) & ((s8) var_a2 != 0x2D))) {
                                        var_v0_16 = var_s6 - 0x1B;
                                        goto block_394;
                                    }
                                    goto block_397;
                                }
                            }
                            goto block_394;
                        }
                    } else if ((u32) ((var_a2 - 0x16) & 0xFF) < 5U) {
                        if (((u32) (var_s6 & 0xFF) >= 5U) && ((u32) ((var_s6 - 0xD) & 0xFF) >= 3U)) {
                            var_v0_20 = (u32) ((var_s6 - 0x13) & 0xFF) < 8U;
                            goto block_396;
                        }
                    } else {
                        goto block_397;
                    }
                    goto block_398;
                }
                goto block_397;
            }
            temp_a1_4 = (var_s3 & 0xFF) * 5;
            if (*(D_801C7080 + temp_a1_4) == 2) {
                temp_a0_19 = (temp_s5 & 0xFF) * 5;
                if ((*(D_801C7082 + temp_a1_4) == *(D_801C7082 + temp_a0_19)) && (*(D_801C7083 + temp_a1_4) == (*(D_801C7083 + temp_a0_19) - 1))) {
                    var_v0_30 = var_s3 & 0xFF;
                    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 6) {
                        temp_a0_20 = var_v0_30 * 5;
                        var_v0_30 = var_s3 & 0xFF;
                        if (*(D_801C7082 + temp_a0_20) == D_801C7062) {
                            var_v0_30 = var_s3 & 0xFF;
                            if ((*(D_801C7083 + temp_a0_20) + 1) == D_801C7063) {
                                var_v0_30 = var_s3 & 0xFF;
                                if ((s8) var_s6 != 0x2B) {
                                    var_s2 = var_s1_3;
                                    goto block_264;
                                }
                                temp_v1_16 = *(D_801C7081 + (var_v0_30 * 5));
                                if (temp_v1_16 != *(D_801C7081 + ((temp_s5 & 0xFF) * 5))) {
                                    if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) != 0) {
                                        if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x3C) {
                                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) != 0) {
                                                if ((*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0x78) && ((u32) ((var_a2 - 0x25) & 0xFF) >= 5U)) {
                                                    var_s2 = var_s1_3;
                                                }
                                            } else {
                                                goto block_257;
                                            }
                                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                                            goto block_257;
                                        }
                                    } else if ((u32) ((var_a2 - 0x25) & 0xFF) >= 5U) {
                                        var_s2 = var_s1_3;
                                    }
                                    goto block_258;
                                }
                                temp_v0_28 = var_a2 - 5;
                                if (temp_v1_16 == 0x78) {
                                    temp_s0_13 = var_s3 & 0xFF;
                                    if (((u32) (temp_v0_28 & 0xFF) < 5U) || ((u32) ((var_a2 - 0xA) & 0xFF) < 6U)) {
                                        func_801C2FFC(temp_s0_13, temp_s5 & 0xFF, &spC78, &spC79);
                                        temp_a0_21 = ((var_s4 & 0xFF) * 5) + &sp10;
                                        temp_v1_17 = temp_s0_13 * 5;
                                        M2C_FIELD(temp_a0_21, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_17);
                                        M2C_FIELD(temp_a0_21, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_17);
                                        M2C_FIELD(temp_a0_21, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_17);
                                        M2C_FIELD(temp_a0_21, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_17);
                                        M2C_FIELD(temp_a0_21, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_17);
                                        var_a1_15 = 0;
                                        var_v0_31 = 0 & 0xFF;
                                        do {
                                            temp_v0_29 = var_v0_31 * 2;
                                            *(s32 *)(temp_v0_29 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_29 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                            var_a1_15 += 1;
                                            var_v0_31 = var_a1_15 & 0xFF;
                                        } while ((u32) (var_a1_15 & 0xFF) < 4U);
                                        temp_v0_30 = spC8C + ((var_s4 & 0xFF) * 5);
                                        *(&sp10 + ((M2C_FIELD(temp_v0_30, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_30, s8 *, 2))) = var_s4;
                                        var_s4_2 = var_s4 + 1;
                                        temp_s0_14 = temp_s5 & 0xFF;
                                        func_801C2FFC(temp_s0_14, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                        temp_a0_22 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                        temp_v1_18 = temp_s0_14 * 5;
                                        M2C_FIELD(temp_a0_22, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_18);
                                        M2C_FIELD(temp_a0_22, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_18);
                                        M2C_FIELD(temp_a0_22, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_18);
                                        M2C_FIELD(temp_a0_22, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_18);
                                        M2C_FIELD(temp_a0_22, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_18);
                                        var_a1_16 = 0;
                                        var_v0_32 = 0 & 0xFF;
                                        do {
                                            temp_v0_31 = var_v0_32 * 2;
                                            *(s32 *)(temp_v0_31 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_31 + ((temp_s5 * 8) + D_801C7470));
                                            var_a1_16 += 1;
                                            var_v0_32 = var_a1_16 & 0xFF;
                                        } while ((u32) (var_a1_16 & 0xFF) < 4U);
                                        var_v1_3 = var_s4_2 & 0xFF;
                                        goto block_349;
                                    }
block_257:
                                    var_s2 = var_s1_3;
                                    goto block_258;
                                }
                                temp_s0_15 = var_s3 & 0xFF;
                                if ((u32) (temp_v0_28 & 0xFF) >= 5U) {
                                    if ((u32) ((var_a2 - 0xA) & 0xFF) >= 6U) {
                                        var_s2 = var_s1_3;
                                        if ((u32) ((var_a2 - 0x20) & 0xFF) < 5U) {
                                            goto block_240;
                                        }
block_258:
                                        var_v0_30 = var_s3 & 0xFF;
                                        if ((var_s2 & 0xFF) == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                                            temp_s0_16 = var_s3 & 0xFF;
                                            func_801C2FFC(temp_s0_16, temp_s5 & 0xFF, &spC78, &spC79);
                                            temp_a0_23 = ((var_s4 & 0xFF) * 5) + &sp10;
                                            temp_v1_19 = temp_s0_16 * 5;
                                            M2C_FIELD(temp_a0_23, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_19);
                                            M2C_FIELD(temp_a0_23, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_19);
                                            M2C_FIELD(temp_a0_23, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_19);
                                            M2C_FIELD(temp_a0_23, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_19);
                                            M2C_FIELD(temp_a0_23, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_19);
                                            var_a1_17 = 0;
                                            var_v0_33 = 0 & 0xFF;
                                            do {
                                                temp_v0_32 = var_v0_33 * 2;
                                                *(s32 *)(temp_v0_32 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_32 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                                var_a1_17 += 1;
                                                var_v0_33 = var_a1_17 & 0xFF;
                                            } while ((u32) (var_a1_17 & 0xFF) < 4U);
                                            temp_v0_33 = spC8C + ((var_s4 & 0xFF) * 5);
                                            *(&sp10 + ((M2C_FIELD(temp_v0_33, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_33, s8 *, 2))) = var_s4;
                                            var_s4_2 = var_s4 + 1;
                                            temp_s0_17 = temp_s5 & 0xFF;
                                            func_801C2FFC(temp_s0_17, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                            temp_a0_24 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                            temp_v1_20 = temp_s0_17 * 5;
                                            M2C_FIELD(temp_a0_24, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_20);
                                            M2C_FIELD(temp_a0_24, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_20);
                                            M2C_FIELD(temp_a0_24, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_20);
                                            M2C_FIELD(temp_a0_24, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_20);
                                            M2C_FIELD(temp_a0_24, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_20);
                                            var_a1_18 = 0;
                                            var_v0_34 = 0 & 0xFF;
                                            do {
                                                temp_v0_34 = var_v0_34 * 2;
                                                *(s32 *)(temp_v0_34 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_34 + ((temp_s5 * 8) + D_801C7470));
                                                var_a1_18 += 1;
                                                var_v0_34 = var_a1_18 & 0xFF;
                                            } while ((u32) (var_a1_18 & 0xFF) < 4U);
                                            var_v1_3 = var_s4_2 & 0xFF;
                                            goto block_349;
                                        }
                                        goto block_264;
                                    }
                                    goto block_241;
                                }
block_240:
block_241:
                                func_801C2FFC(temp_s0_15, temp_s5 & 0xFF, &spC78, &spC79);
                                temp_a0_25 = ((var_s4 & 0xFF) * 5) + &sp10;
                                temp_v1_21 = temp_s0_15 * 5;
                                M2C_FIELD(temp_a0_25, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_21);
                                M2C_FIELD(temp_a0_25, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_21);
                                M2C_FIELD(temp_a0_25, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_21);
                                M2C_FIELD(temp_a0_25, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_21);
                                M2C_FIELD(temp_a0_25, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_21);
                                var_a1_19 = 0;
                                var_v0_35 = 0 & 0xFF;
                                do {
                                    temp_v0_35 = var_v0_35 * 2;
                                    *(s32 *)(temp_v0_35 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_35 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                    var_a1_19 += 1;
                                    var_v0_35 = var_a1_19 & 0xFF;
                                } while ((u32) (var_a1_19 & 0xFF) < 4U);
                                temp_v0_36 = spC8C + ((var_s4 & 0xFF) * 5);
                                *(&sp10 + ((M2C_FIELD(temp_v0_36, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_36, s8 *, 2))) = var_s4;
                                var_s4_2 = var_s4 + 1;
                                temp_s0_18 = temp_s5 & 0xFF;
                                func_801C2FFC(temp_s0_18, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                temp_a0_26 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                temp_v1_22 = temp_s0_18 * 5;
                                M2C_FIELD(temp_a0_26, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_22);
                                M2C_FIELD(temp_a0_26, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_22);
                                M2C_FIELD(temp_a0_26, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_22);
                                M2C_FIELD(temp_a0_26, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_22);
                                M2C_FIELD(temp_a0_26, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_22);
                                var_a1_20 = 0;
                                var_v0_36 = 0 & 0xFF;
                                do {
                                    temp_v0_37 = var_v0_36 * 2;
                                    *(s32 *)(temp_v0_37 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_37 + ((temp_s5 * 8) + D_801C7470));
                                    var_a1_20 += 1;
                                    var_v0_36 = var_a1_20 & 0xFF;
                                } while ((u32) (var_a1_20 & 0xFF) < 4U);
                                var_v1_3 = var_s4_2 & 0xFF;
                                goto block_349;
                            }
                        }
                    }
block_264:
                    temp_a0_27 = var_v0_30 * 5;
                    if (*(D_801C7081 + temp_a0_27) == *(D_801C7081 + ((temp_s5 & 0xFF) * 5))) {
                        temp_v0_38 = *(D_801C7081 + temp_a0_27);
                        if (((temp_v0_38 == 0) | (temp_v0_38 == 0x3C)) != 0) {
                            var_v0_16 = var_s6 - 0x20;
                            if ((u32) ((var_a2 - 0x25) & 0xFF) >= 5U) {
                                var_v0_37 = var_s6 - 5;
                                if (((u32) ((var_a2 - 5) & 0xFF) < 5U) || (var_v0_37 = var_s6 - 5, (((u32) ((var_a2 - 0xA) & 0xFF) < 6U) != 0)) || (var_v0_37 = var_s6 - 5, ((((u32) ((var_a2 - 0x20) & 0xFF) < 5U) | ((s8) var_a2 == 0x2A)) != 0))) {
                                    if (((u32) (var_v0_37 & 0xFF) >= 5U) && ((u32) ((var_s6 - 0x10) & 0xFF) >= 6U)) {
                                        var_v0_18 = (var_s6 - 0x25) & 0xFF;
                                        goto block_395;
                                    }
                                } else {
                                    goto block_397;
                                }
                            } else {
                                goto block_394;
                            }
                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                            var_v0_38 = var_s6 - 5;
                            if ((u32) ((var_a2 - 5) & 0xFF) >= 5U) {
                                if (!(((u32) ((var_a2 - 0xA) & 0xFF) >= 6U) & ((s8) var_a2 != 0x2A))) {
                                    var_v0_38 = var_s6 - 5;
                                    goto block_277;
                                }
                                goto block_397;
                            }
block_277:
                            if ((u32) (var_v0_38 & 0xFF) >= 5U) {
                                var_v0_20 = (u32) ((var_s6 - 0x10) & 0xFF) < 6U;
                                goto block_396;
                            }
                        }
                    } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) != 0) {
                        if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x3C) {
                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0) {
                                var_v0_16 = var_s6 - 0x20;
                                if ((u32) ((var_a2 - 5) & 0xFF) >= 5U) {
                                    var_v0_16 = var_s6 - 0x20;
                                    if ((u32) ((var_a2 - 0xA) & 0xFF) >= 6U) {
                                        if ((((u32) ((var_a2 - 0x20) & 0xFF) < 5U) | ((s8) var_a2 == 0x2A)) != 0) {
                                            var_v0_18 = (var_s6 - 0x20) & 0xFF;
                                            goto block_395;
                                        }
                                        goto block_397;
                                    }
                                }
                                goto block_394;
                            }
                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0x78) {
                                if ((u32) ((var_a2 - 0x25) & 0xFF) < 5U) {
                                    if ((u32) ((var_s6 - 5) & 0xFF) >= 5U) {
                                        var_v0_20 = (u32) ((var_s6 - 0x10) & 0xFF) < 6U;
                                        goto block_396;
                                    }
                                } else {
                                    goto block_397;
                                }
                            }
                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                            var_v0_16 = var_s6 - 0x20;
                            if ((u32) ((var_a2 - 5) & 0xFF) >= 5U) {
                                if (!(((u32) ((var_a2 - 0xA) & 0xFF) >= 6U) & ((s8) var_a2 != 0x2A))) {
                                    var_v0_16 = var_s6 - 0x20;
                                    goto block_394;
                                }
                                goto block_397;
                            }
                            goto block_394;
                        }
                    } else if ((u32) ((var_a2 - 0x25) & 0xFF) < 5U) {
                        if (((u32) ((var_s6 - 5) & 0xFF) >= 5U) && ((u32) ((var_s6 - 0x10) & 0xFF) >= 6U)) {
                            var_v0_18 = (var_s6 - 0x25) & 0xFF;
                            goto block_395;
                        }
                    } else {
                        goto block_397;
                    }
                    goto block_398;
                }
                goto block_397;
            }
            temp_a1_5 = (var_s3 & 0xFF) * 5;
            if (*(D_801C7080 + temp_a1_5) == 3) {
                temp_a0_28 = (temp_s5 & 0xFF) * 5;
                if ((*(D_801C7082 + temp_a1_5) == (*(D_801C7082 + temp_a0_28) - 1)) && (*(D_801C7083 + temp_a1_5) == *(D_801C7083 + temp_a0_28))) {
                    var_v0_39 = var_s3 & 0xFF;
                    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 6) {
                        temp_a0_29 = var_v0_39 * 5;
                        var_v0_39 = var_s3 & 0xFF;
                        if ((*(D_801C7082 + temp_a0_29) + 1) == D_801C7062) {
                            var_v0_39 = var_s3 & 0xFF;
                            if (*(D_801C7083 + temp_a0_29) == D_801C7063) {
                                var_v0_39 = var_s3 & 0xFF;
                                if ((s8) var_s6 != 0x2D) {
                                    var_s2 = var_s1_3;
                                    goto block_350;
                                }
                                temp_v1_23 = *(D_801C7081 + (var_v0_39 * 5));
                                if (temp_v1_23 != *(D_801C7081 + ((temp_s5 & 0xFF) * 5))) {
                                    if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) != 0) {
                                        if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x3C) {
                                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) != 0) {
                                                if ((*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0x78) && ((u32) ((var_a2 - 0x1B) & 0xFF) >= 5U)) {
                                                    var_s2 = var_s1_3;
                                                }
                                            } else {
                                                goto block_342;
                                            }
                                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                                            goto block_342;
                                        }
                                    } else if ((u32) ((var_a2 - 0x1B) & 0xFF) >= 5U) {
                                        var_s2 = var_s1_3;
                                    }
                                    goto block_343;
                                }
                                temp_v0_39 = var_a2 & 0xFF;
                                if (temp_v1_23 == 0x78) {
                                    temp_s0_19 = var_s3 & 0xFF;
                                    if ((temp_v0_39 < 5U) || ((u32) ((var_a2 - 0xD) & 0xFF) < 3U) || ((u32) ((var_a2 - 0x13) & 0xFF) < 3U)) {
                                        func_801C2FFC(temp_s0_19, temp_s5 & 0xFF, &spC78, &spC79);
                                        temp_a0_30 = ((var_s4 & 0xFF) * 5) + &sp10;
                                        temp_v1_24 = temp_s0_19 * 5;
                                        M2C_FIELD(temp_a0_30, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_24);
                                        M2C_FIELD(temp_a0_30, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_24);
                                        M2C_FIELD(temp_a0_30, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_24);
                                        M2C_FIELD(temp_a0_30, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_24);
                                        M2C_FIELD(temp_a0_30, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_24);
                                        var_a1_21 = 0;
                                        var_v0_40 = 0 & 0xFF;
                                        do {
                                            temp_v0_40 = var_v0_40 * 2;
                                            *(s32 *)(temp_v0_40 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_40 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                            var_a1_21 += 1;
                                            var_v0_40 = var_a1_21 & 0xFF;
                                        } while ((u32) (var_a1_21 & 0xFF) < 4U);
                                        temp_v0_41 = spC8C + ((var_s4 & 0xFF) * 5);
                                        *(&sp10 + ((M2C_FIELD(temp_v0_41, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_41, s8 *, 2))) = var_s4;
                                        var_s4_2 = var_s4 + 1;
                                        temp_s0_20 = temp_s5 & 0xFF;
                                        func_801C2FFC(temp_s0_20, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                        temp_a0_31 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                        temp_v1_25 = temp_s0_20 * 5;
                                        M2C_FIELD(temp_a0_31, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_25);
                                        M2C_FIELD(temp_a0_31, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_25);
                                        M2C_FIELD(temp_a0_31, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_25);
                                        M2C_FIELD(temp_a0_31, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_25);
                                        M2C_FIELD(temp_a0_31, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_25);
                                        var_a1_22 = 0;
                                        var_v0_41 = 0 & 0xFF;
                                        do {
                                            temp_v0_42 = var_v0_41 * 2;
                                            *(s32 *)(temp_v0_42 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_42 + ((temp_s5 * 8) + D_801C7470));
                                            var_a1_22 += 1;
                                            var_v0_41 = var_a1_22 & 0xFF;
                                        } while ((u32) (var_a1_22 & 0xFF) < 4U);
                                        var_v1_3 = var_s4_2 & 0xFF;
                                        goto block_349;
                                    }
block_342:
                                    var_s2 = var_s1_3;
                                    goto block_343;
                                }
                                temp_s0_21 = var_s3 & 0xFF;
                                if (temp_v0_39 >= 5U) {
                                    if ((u32) ((var_a2 - 0xD) & 0xFF) >= 3U) {
                                        var_a1_23 = temp_s5 & 0xFF;
                                        if ((u32) ((var_a2 - 0x13) & 0xFF) >= 3U) {
                                            var_s2 = var_s1_3;
                                            if ((u32) ((var_a2 - 0x16) & 0xFF) < 5U) {
                                                goto block_324;
                                            }
block_343:
                                            var_v0_39 = var_s3 & 0xFF;
                                            if ((var_s2 & 0xFF) == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                                                temp_s0_22 = var_s3 & 0xFF;
                                                func_801C2FFC(temp_s0_22, temp_s5 & 0xFF, &spC78, &spC79);
                                                temp_a0_32 = ((var_s4 & 0xFF) * 5) + &sp10;
                                                temp_v1_26 = temp_s0_22 * 5;
                                                M2C_FIELD(temp_a0_32, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_26);
                                                M2C_FIELD(temp_a0_32, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_26);
                                                M2C_FIELD(temp_a0_32, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_26);
                                                M2C_FIELD(temp_a0_32, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_26);
                                                M2C_FIELD(temp_a0_32, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_26);
                                                var_a1_24 = 0;
                                                var_v0_42 = 0 & 0xFF;
                                                do {
                                                    temp_v0_43 = var_v0_42 * 2;
                                                    *(s32 *)(temp_v0_43 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_43 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                                    var_a1_24 += 1;
                                                    var_v0_42 = var_a1_24 & 0xFF;
                                                } while ((u32) (var_a1_24 & 0xFF) < 4U);
                                                temp_v0_44 = spC8C + ((var_s4 & 0xFF) * 5);
                                                *(&sp10 + ((M2C_FIELD(temp_v0_44, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_44, s8 *, 2))) = var_s4;
                                                var_s4_2 = var_s4 + 1;
                                                temp_s0_23 = temp_s5 & 0xFF;
                                                func_801C2FFC(temp_s0_23, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                                temp_a0_33 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                                temp_v1_27 = temp_s0_23 * 5;
                                                M2C_FIELD(temp_a0_33, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_27);
                                                M2C_FIELD(temp_a0_33, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_27);
                                                M2C_FIELD(temp_a0_33, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_27);
                                                M2C_FIELD(temp_a0_33, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_27);
                                                M2C_FIELD(temp_a0_33, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_27);
                                                var_a1_25 = 0;
                                                var_v0_43 = 0 & 0xFF;
                                                do {
                                                    temp_v0_45 = var_v0_43 * 2;
                                                    *(s32 *)(temp_v0_45 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_45 + ((temp_s5 * 8) + D_801C7470));
                                                    var_a1_25 += 1;
                                                    var_v0_43 = var_a1_25 & 0xFF;
                                                } while ((u32) (var_a1_25 & 0xFF) < 4U);
                                                var_v1_3 = var_s4_2 & 0xFF;
                                                goto block_349;
                                            }
                                            goto block_350;
                                        }
                                        goto block_326;
                                    }
                                    goto block_325;
                                }
block_324:
block_325:
                                var_a1_23 = temp_s5 & 0xFF;
block_326:
                                func_801C2FFC(temp_s0_21, var_a1_23, &spC78, &spC79);
                                temp_a0_34 = ((var_s4 & 0xFF) * 5) + &sp10;
                                temp_v1_28 = temp_s0_21 * 5;
                                M2C_FIELD(temp_a0_34, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_28);
                                M2C_FIELD(temp_a0_34, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_28);
                                M2C_FIELD(temp_a0_34, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_28);
                                M2C_FIELD(temp_a0_34, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_28);
                                M2C_FIELD(temp_a0_34, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_28);
                                var_a1_26 = 0;
                                var_v0_44 = 0 & 0xFF;
                                do {
                                    temp_v0_46 = var_v0_44 * 2;
                                    *(s32 *)(temp_v0_46 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_46 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                                    var_a1_26 += 1;
                                    var_v0_44 = var_a1_26 & 0xFF;
                                } while ((u32) (var_a1_26 & 0xFF) < 4U);
                                temp_v0_47 = spC8C + ((var_s4 & 0xFF) * 5);
                                *(&sp10 + ((M2C_FIELD(temp_v0_47, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_47, s8 *, 2))) = var_s4;
                                var_s4_2 = var_s4 + 1;
                                temp_s0_24 = temp_s5 & 0xFF;
                                func_801C2FFC(temp_s0_24, *(s32 *)((spC79 * 0x18) + (s8) spC78 + D_801C7AD8), &spC78, &spC79);
                                temp_a0_35 = ((var_s4_2 & 0xFF) * 5) + &sp10;
                                temp_v1_29 = temp_s0_24 * 5;
                                M2C_FIELD(temp_a0_35, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_29);
                                M2C_FIELD(temp_a0_35, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_29);
                                M2C_FIELD(temp_a0_35, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_29);
                                M2C_FIELD(temp_a0_35, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_29);
                                M2C_FIELD(temp_a0_35, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_29);
                                var_a1_27 = 0;
                                var_v0_45 = 0 & 0xFF;
                                do {
                                    temp_v0_48 = var_v0_45 * 2;
                                    *(s32 *)(temp_v0_48 + (((var_s4_2 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_48 + ((temp_s5 * 8) + D_801C7470));
                                    var_a1_27 += 1;
                                    var_v0_45 = var_a1_27 & 0xFF;
                                } while ((u32) (var_a1_27 & 0xFF) < 4U);
                                var_v1_3 = var_s4_2 & 0xFF;
block_349:
                                temp_v0_49 = spC8C + (var_v1_3 * 5);
                                *(&sp10 + ((M2C_FIELD(temp_v0_49, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_49, s8 *, 2))) = var_s4_2;
                                var_s4 = var_s4_2 + 1;
                                spC87 = 1;
                                goto block_405;
                            }
                        }
                    }
block_350:
                    temp_a0_36 = var_v0_39 * 5;
                    if (*(D_801C7081 + temp_a0_36) == *(D_801C7081 + ((temp_s5 & 0xFF) * 5))) {
                        temp_v0_50 = *(D_801C7081 + temp_a0_36);
                        if (((temp_v0_50 == 0) | (temp_v0_50 == 0x3C)) != 0) {
                            var_v0_16 = var_s6 - 0x16;
                            if ((u32) ((var_a2 - 0x1B) & 0xFF) >= 5U) {
                                var_v0_46 = var_s6 & 0xFF;
                                if (((u32) (var_a2 & 0xFF) < 5U) || (var_v0_46 = var_s6 & 0xFF, (((u32) ((var_a2 - 0xD) & 0xFF) < 3U) != 0)) || (var_v0_46 = var_s6 & 0xFF, (((u32) ((var_a2 - 0x13) & 0xFF) < 3U) != 0)) || (var_v0_46 = var_s6 & 0xFF, ((((u32) ((var_a2 - 0x16) & 0xFF) < 5U) | ((s8) var_a2 == 0x2C)) != 0))) {
                                    if ((var_v0_46 >= 5U) && ((u32) ((var_s6 - 0xA) & 0xFF) >= 3U) && ((u32) ((var_s6 - 0x10) & 0xFF) >= 3U)) {
                                        var_v0_18 = (var_s6 - 0x1B) & 0xFF;
                                        goto block_395;
                                    }
                                } else {
                                    goto block_397;
                                }
                            } else {
                                goto block_394;
                            }
                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                            var_v0_47 = var_s6 & 0xFF;
                            if ((u32) (var_a2 & 0xFF) >= 5U) {
                                var_v0_47 = var_s6 & 0xFF;
                                if ((u32) ((var_a2 - 0xD) & 0xFF) >= 3U) {
                                    if (!(((u32) ((var_a2 - 0x13) & 0xFF) >= 3U) & ((s8) var_a2 != 0x2C))) {
                                        var_v0_47 = var_s6 & 0xFF;
                                        goto block_366;
                                    }
                                    goto block_397;
                                }
                            }
block_366:
                            if ((var_v0_47 >= 5U) && ((u32) ((var_s6 - 0xA) & 0xFF) >= 3U)) {
                                var_v0_20 = (u32) ((var_s6 - 0x10) & 0xFF) < 3U;
                                goto block_396;
                            }
                        }
                    } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) != 0) {
                        if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x3C) {
                            if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0) {
                                var_v0_16 = var_s6 - 0x16;
                                if (((u32) (var_a2 & 0xFF) >= 5U) && (var_v0_16 = var_s6 - 0x16, (((u32) ((var_a2 - 0xD) & 0xFF) < 3U) == 0)) && (var_v0_16 = var_s6 - 0x16, (((u32) ((var_a2 - 0x13) & 0xFF) < 3U) == 0)) && (var_v0_16 = var_s6 - 0x16, ((((u32) ((var_a2 - 0x16) & 0xFF) < 5U) | ((s8) var_a2 == 0x2C)) == 0))) {
                                    var_s2 = var_s1_3;
                                } else {
                                    goto block_394;
                                }
                            } else if (*(D_801C7081 + ((temp_s5 & 0xFF) * 5)) == 0x78) {
                                if ((u32) ((var_a2 - 0x1B) & 0xFF) < 5U) {
                                    if (((u32) (var_s6 & 0xFF) >= 5U) && ((u32) ((var_s6 - 0xA) & 0xFF) >= 3U)) {
                                        var_v0_20 = (u32) ((var_s6 - 0x10) & 0xFF) < 3U;
                                        goto block_396;
                                    }
                                } else {
                                    goto block_397;
                                }
                            }
                        } else if (*(D_801C7081 + ((var_s3 & 0xFF) * 5)) == 0x78) {
                            var_v0_16 = var_s6 - 0x16;
                            if ((u32) (var_a2 & 0xFF) >= 5U) {
                                var_v0_16 = var_s6 - 0x16;
                                if ((u32) ((var_a2 - 0xD) & 0xFF) >= 3U) {
                                    if (!(((u32) ((var_a2 - 0x13) & 0xFF) >= 3U) & ((s8) var_a2 != 0x2C))) {
                                        var_v0_16 = var_s6 - 0x16;
                                        goto block_394;
                                    }
                                    goto block_397;
                                }
                            }
block_394:
                            var_v0_18 = var_v0_16 & 0xFF;
                            goto block_395;
                        }
                    } else if ((u32) ((var_a2 - 0x1B) & 0xFF) < 5U) {
                        if (((u32) (var_s6 & 0xFF) >= 5U) && ((u32) ((var_s6 - 0xA) & 0xFF) >= 3U) && ((u32) ((var_s6 - 0x10) & 0xFF) >= 3U)) {
                            var_v0_18 = (var_s6 - 0x1B) & 0xFF;
block_395:
                            var_v0_20 = var_v0_18 < 5U;
block_396:
                            if (var_v0_20 == 0) {
                                goto block_397;
                            }
                        }
                    } else {
                        goto block_397;
                    }
                    goto block_398;
                }
block_397:
                var_s2 = var_s1_3;
                goto block_398;
            }
block_398:
            temp_s0_25 = var_s3 & 0xFF;
            if ((var_s2 & 0xFF) == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                func_801C2FFC(temp_s0_25, temp_s5 & 0xFF, &spC78, &spC79);
                temp_a0_37 = ((var_s4 & 0xFF) * 5) + &sp10;
                temp_v1_30 = temp_s0_25 * 5;
                M2C_FIELD(temp_a0_37, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v1_30);
                M2C_FIELD(temp_a0_37, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v1_30);
                M2C_FIELD(temp_a0_37, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v1_30);
                M2C_FIELD(temp_a0_37, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v1_30);
                M2C_FIELD(temp_a0_37, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v1_30);
                var_a1_28 = 0;
                var_v0_48 = 0 & 0xFF;
                do {
                    temp_v0_51 = var_v0_48 * 2;
                    *(s32 *)(temp_v0_51 + (((var_s4 & 0xFF) * 8) + &sp10 + 0x240)) = *(s32 *)(temp_v0_51 + (((var_s3 & 0xFF) * 8) + D_801C7470));
                    var_a1_28 += 1;
                    var_v0_48 = var_a1_28 & 0xFF;
                } while ((u32) (var_a1_28 & 0xFF) < 4U);
                temp_v0_52 = spC8C + ((var_s4 & 0xFF) * 5);
                *(&sp10 + ((M2C_FIELD(temp_v0_52, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_52, s8 *, 2))) = var_s4;
                var_s4 += 1;
                var_s3 = temp_s5;
                var_a2 = var_s6;
                if (((M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) && (temp_a0_38 = (var_s3 & 0xFF) * 5, (*(D_801C7082 + temp_a0_38) == D_801C7062)) && (*(D_801C7083 + temp_a0_38) == D_801C7063)) || (var_s1_3 += 1, (((var_s1_3 & 0xFFFF) < (M2C_FIELD(D_801C7AB0, u8 *, 2) - 1)) == 0))) {
                    goto block_405;
                }
                goto loop_40;
            }
block_445:
            var_v1 = var_s3 & 0xFF;
            goto block_446;
        }
block_405:
        temp_s3 = *(D_801C7AD8 + ((D_801C7063 * 0x18) + D_801C7062));
        if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 3) {
            var_a2_2 = *(D_801C7084 + ((temp_s3 & 0xFF) * 5));
        } else {
            var_a2_2 = *(D_801C7084 + ((temp_s3 & 0xFF) * 5)) - 0x2E;
        }
        temp_v0_53 = temp_s3 & 0xFF;
        if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
            temp_a0_39 = temp_v0_53 * 5;
            temp_v0_54 = *(D_801C7080 + temp_a0_39);
            if (((temp_v0_54 == 0) | (temp_v0_54 == 2)) != 0) {
                if ((u32) ((var_a2_2 - 5) & 0xFF) >= 5U) {
                    D_801C7068 = *(D_801C7082 + temp_a0_39);
                    var_v0_8 = *(D_801C7083 + temp_a0_39);
                    goto block_447;
                }
                goto block_415;
            }
            temp_a0_40 = (temp_s3 & 0xFF) * 5;
            temp_v0_55 = *(D_801C7080 + temp_a0_40);
            if ((((temp_v0_55 == 1) | (temp_v0_55 == 3)) != 0) && ((u32) (var_a2_2 & 0xFF) >= 5U)) {
                D_801C7068 = *(D_801C7082 + temp_a0_40);
                var_v0_8 = *(D_801C7083 + temp_a0_40);
                goto block_447;
            }
block_415:
            switch (D_801C7469) {                   /* switch 3; irregular */
                var_v1 = temp_s3 & 0xFF;
                if (D_801C6BB0 == D_801C7062) {
                    var_v1 = temp_s3 & 0xFF;
                    if (D_801C6BB1 != (D_801C7063 - 1)) {
                        goto block_446;
                    }
block_431:
                    temp_a0_41 = (temp_s3 & 0xFF) * 5;
                    if (*(D_801C7081 + temp_a0_41) != *(D_801C7081 + ((*(D_801C7AD8 + ((D_801C6BB1 * 0x18) + D_801C6BB0)) & 0xFF) * 5))) {
                        D_801C7068 = *(D_801C7082 + temp_a0_41);
                        var_v0_8 = *(D_801C7083 + temp_a0_41);
                        goto block_447;
                    }
                    goto block_448;
                }
block_446:
                temp_v0_56 = var_v1 * 5;
                D_801C7068 = *(D_801C7082 + temp_v0_56);
                var_v0_8 = *(D_801C7083 + temp_v0_56);
                goto block_447;
                var_v0_49 = D_801C7062 - 1;
block_429:
                var_v1 = temp_s3 & 0xFF;
                if (D_801C6BB0 == var_v0_49) {
                    var_v1 = temp_s3 & 0xFF;
                    if (D_801C6BB1 == D_801C7063) {
                        goto block_431;
                    }
                }
                goto block_446;
                var_v1 = temp_s3 & 0xFF;
                if (D_801C6BB0 == D_801C7062) {
                    var_v1 = temp_s3 & 0xFF;
                    if (D_801C6BB1 != (D_801C7063 + 1)) {
                        goto block_446;
                    }
                    goto block_431;
                }
                goto block_446;
                var_v0_49 = D_801C7062 + 1;
                goto block_429;
            }
        } else {
            temp_a0_42 = temp_v0_53 * 5;
            if (*(D_801C7080 + temp_a0_42) == 0) {
                if ((s8) var_a2_2 != 0x2A) {
                    D_801C7068 = *(D_801C7082 + temp_a0_42);
                    var_v0_8 = *(D_801C7083 + temp_a0_42);
                    goto block_447;
                }
                goto block_448;
            }
            temp_a0_43 = (temp_s3 & 0xFF) * 5;
            if (*(D_801C7080 + temp_a0_43) == 1) {
                if ((s8) var_a2_2 != 0x2C) {
                    D_801C7068 = *(D_801C7082 + temp_a0_43);
                    var_v0_8 = *(D_801C7083 + temp_a0_43);
                    goto block_447;
                }
                goto block_448;
            }
            temp_a0_44 = (temp_s3 & 0xFF) * 5;
            if (*(D_801C7080 + temp_a0_44) == 2) {
                if ((s8) var_a2_2 != 0x2B) {
                    D_801C7068 = *(D_801C7082 + temp_a0_44);
                    var_v0_8 = *(D_801C7083 + temp_a0_44);
                    goto block_447;
                }
                goto block_448;
            }
            temp_a0_45 = (temp_s3 & 0xFF) * 5;
            if ((*(D_801C7080 + temp_a0_45) == 3) && ((s8) var_a2_2 != 0x2D)) {
                D_801C7068 = *(D_801C7082 + temp_a0_45);
                var_v0_8 = *(D_801C7083 + temp_a0_45);
block_447:
                D_801C6BB9 = var_v0_8;
                return 0U;
            }
block_448:
            var_s1_4 = 0;
            if (spC87 == 0) {
                temp_a0_46 = ((var_s4 & 0xFF) * 5) + &sp10;
                temp_v0_57 = (temp_s3 & 0xFF) * 5;
                M2C_FIELD(temp_a0_46, u8 *, 0x880) = (u8) *(D_801C7080 + temp_v0_57);
                M2C_FIELD(temp_a0_46, u8 *, 0x881) = (u8) *(D_801C7081 + temp_v0_57);
                M2C_FIELD(temp_a0_46, u8 *, 0x882) = (u8) *(D_801C7082 + temp_v0_57);
                M2C_FIELD(temp_a0_46, u8 *, 0x883) = (u8) *(D_801C7083 + temp_v0_57);
                M2C_FIELD(temp_a0_46, u8 *, 0x884) = (u8) *(D_801C7084 + temp_v0_57);
                var_a1_29 = 0;
                var_v0_50 = 0 & 0xFF;
                do {
                    temp_v0_58 = var_v0_50 * 2;
                    *(s32 *)(temp_v0_58 + (sp + ((var_s4 & 0xFF) * 8) + 0x250)) = *(s32 *)(temp_v0_58 + (((temp_s3 & 0xFF) * 8) + D_801C7470));
                    var_a1_29 += 1;
                    var_v0_50 = var_a1_29 & 0xFF;
                } while ((u32) (var_a1_29 & 0xFF) < 4U);
                temp_v0_59 = &sp890 + ((var_s4 & 0xFF) * 5);
                *(&sp10 + ((M2C_FIELD(temp_v0_59, s8 *, 3) * 0x18) + M2C_FIELD(temp_v0_59, s8 *, 2))) = var_s4;
                var_s4 += 1;
                var_s1_4 = 0;
            }
            do {
                var_a1_30 = 0;
                var_v0_51 = 0 & 0xFF;
loop_454:
                temp_a3 = var_s1_4 + (var_v0_51 * 0x18);
                temp_a0_47 = temp_a3 & 0xFFFF;
                temp_a2 = (temp_a0_47 * 2) + D_801C6BE0;
                temp_v1_31 = *temp_a2;
                if (temp_v1_31 != 0xFFFF) {
                    var_v0_52 = temp_a3 & 0xFFFF;
                    if (*(&sp10 + temp_a0_47) == 0xFF) {
                        *(D_8011F2FD + (temp_v1_31 * 0x64)) = 2;
                        *temp_a2 = 0xFFFF;
                        D_801C7AB6 -= 1;
                        var_a2_3 = 0;
                        temp_t0 = temp_a3 & 0xFFFF;
                        do {
                            temp_v1_32 = (var_a2_3 & 0xFF) * 2;
                            temp_a0_48 = *(u16 *)(temp_v1_32 + ((*(D_801C7AD8 + temp_t0) * 8) + D_801C7470));
                            if (temp_a0_48 != 0xFFFF) {
                                *(D_8011F2FD + (temp_a0_48 * 0x64)) = 2;
                                *(s32 *)(temp_v1_32 + ((*(D_801C7AD8 + temp_t0) * 8) + D_801C7470)) = 0xFFFF;
                                D_801C7AB6 -= 1;
                            }
                            var_a2_3 += 1;
                        } while ((u32) (var_a2_3 & 0xFF) < 4U);
                        goto block_460;
                    }
                } else {
block_460:
                    var_v0_52 = temp_a3 & 0xFFFF;
                }
                *(D_801C7AD8 + var_v0_52) = 0xFF;
                var_a1_30 += 1;
                var_v0_51 = var_a1_30 & 0xFF;
                if ((u32) (var_a1_30 & 0xFF) < 0x18U) {
                    goto loop_454;
                }
                var_s1_4 += 1;
            } while ((u32) (var_s1_4 & 0xFFFF) < 0x18U);
            var_s1_5 = 0;
            if (var_s4 & 0xFF) {
                var_v0_53 = 0 & 0xFFFF;
                do {
                    temp_v1_33 = var_v0_53 * 5;
                    temp_a0_49 = temp_v1_33 + D_801C7080;
                    temp_v1_34 = &sp890 + temp_v1_33;
                    M2C_FIELD(temp_a0_49, u8 *, 0) = (u8) M2C_FIELD(temp_v1_34, u8 *, 0);
                    M2C_FIELD(temp_a0_49, u8 *, 1) = (u8) M2C_FIELD(temp_v1_34, u8 *, 1);
                    M2C_FIELD(temp_a0_49, u8 *, 2) = (u8) M2C_FIELD(temp_v1_34, u8 *, 2);
                    M2C_FIELD(temp_a0_49, u8 *, 3) = (u8) M2C_FIELD(temp_v1_34, u8 *, 3);
                    M2C_FIELD(temp_a0_49, u8 *, 4) = (u8) M2C_FIELD(temp_v1_34, u8 *, 4);
                    var_a1_31 = 0;
                    temp_v0_60 = (var_s1_5 & 0xFFFF) * 8;
                    var_v0_54 = 0 & 0xFF;
loop_466:
                    temp_v0_61 = var_v0_54 * 2;
                    *(s32 *)(temp_v0_61 + (temp_v0_60 + D_801C7470)) = *(s32 *)(temp_v0_61 + (temp_v0_60 + &sp10 + 0x240));
                    var_a1_31 += 1;
                    var_v0_54 = var_a1_31 & 0xFF;
                    if ((u32) (var_a1_31 & 0xFF) < 4U) {
                        goto loop_466;
                    }
                    temp_v1_35 = (var_s1_5 & 0xFFFF) * 5;
                    *(D_801C7AD8 + (((s8) *(D_801C7082 + temp_v1_35) + (*(D_801C7083 + temp_v1_35) * 0x18)) & 0xFFFF)) = var_s1_5;
                    var_s1_5 += 1;
                    var_v0_53 = var_s1_5 & 0xFFFF;
                } while ((u32) (var_s1_5 & 0xFFFF) < (u32) (var_s4 & 0xFF));
            }
            temp_v0_62 = var_s1_5 & 0xFFFF;
            var_v1_4 = temp_v0_62;
            var_v0_55 = var_v1_4 * 4;
            if (temp_v0_62 < 0xC8U) {
                do {
                    temp_v0_63 = var_v0_55 + var_v1_4 + D_801C7080;
                    M2C_FIELD(temp_v0_63, s8 *, 0) = 4;
                    M2C_FIELD(temp_v0_63, s8 *, 1) = 0;
                    M2C_FIELD(temp_v0_63, s8 *, 2) = -1;
                    M2C_FIELD(temp_v0_63, s8 *, 3) = -1;
                    M2C_FIELD(temp_v0_63, s8 *, 4) = -1;
                    var_a1_32 = 0;
                    var_v0_56 = 0 & 0xFF;
loop_471:
                    *(s32 *)((var_v0_56 * 2) + (((var_s1_5 & 0xFFFF) * 8) + D_801C7470)) = 0xFFFF;
                    var_a1_32 += 1;
                    var_v0_56 = var_a1_32 & 0xFF;
                    if ((u32) (var_a1_32 & 0xFF) < 4U) {
                        goto loop_471;
                    }
                    var_s1_5 += 1;
                    var_v1_4 = var_s1_5 & 0xFFFF;
                    var_v0_55 = var_v1_4 * 4;
                } while (var_v1_4 < 0xC8U);
            }
            M2C_FIELD(D_801C7AB0, u8 *, 2) = var_s4;
            return M2C_FIELD(D_801C7AB0, u8 *, 2);
        }
    }
}
