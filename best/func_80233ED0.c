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

M2C_UNK func_8003DE60(M2C_UNK *, s32);              /* extern */
M2C_UNK func_80230EFC(void *);                      /* extern */
extern M2C_UNK D_8006FB14;
extern M2C_UNK D_8011F32E;
extern s8 D_80167E62;
extern M2C_UNK D_8022A770;
extern M2C_UNK D_80236ED4;
extern M2C_UNK D_80236F10;
extern M2C_UNK D_80236F20;
extern s8 D_80236F50;
extern M2C_UNK D_80237058;
extern M2C_UNK D_80237600;
extern M2C_UNK D_8023760E;
extern s8 D_8023761C;
extern M2C_UNK D_80237632;
extern M2C_UNK D_80237694;

void func_80233ED0(s32 arg0) {
    M2C_UNK *var_a0_2;
    s16 *temp_a0_2;
    s16 *temp_a0_4;
    s16 *temp_a1;
    s16 *temp_a1_2;
    s16 temp_a0;
    s16 temp_a0_3;
    s16 temp_v0;
    s16 temp_v0_5;
    s16 temp_v1_2;
    s32 temp_a0_5;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_11;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_5;
    u16 temp_a1_3;
    u16 temp_a1_4;
    u16 temp_v1;
    u16 var_v0_4;
    u32 var_a0;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v1_10;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_v1 = *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    if (temp_v1 != 0) {
        var_s1 = 0;
        if (temp_v1 != 1) {
            return;
        }
        var_a0 = 0 & 0xFFFF;
        do {
            temp_s0 = (var_a0 * 0x8F0) + &D_8022A770;
            if ((M2C_FIELD(temp_s0, u16 *, 2) != 0xFFFF) & (var_a0 < 6U)) {
                temp_v0 = *((var_a0 * 2) + &D_80237058);
                if (temp_v0 != 0) {
                    if (temp_v0 != 1) {
                        var_s1 += 1;
                    } else {
                        temp_a1 = ((var_s1 & 0xFFFF) * 2) + &D_8023760E;
                        temp_v1_2 = M2C_FIELD(temp_s0, s16 *, 0x594);
                        if (*temp_a1 < temp_v1_2) {
                            *temp_a1 = temp_v1_2;
                        }
                        temp_a1_2 = ((var_s1 & 0xFFFF) * 2) + &D_8023760E;
                        temp_a0 = *temp_a1_2;
                        if (temp_a0 < 0xA) {
                            temp_v1_3 = temp_s0 + (temp_a0 * 5);
                            M2C_FIELD(temp_v1_3, u8 *, 0x565) = (u8) (M2C_FIELD(temp_v1_3, u8 *, 0x565) + 1);
                            temp_v1_4 = temp_s0 + (*temp_a1_2 * 5);
                            if ((u8) M2C_FIELD(temp_v1_4, u8 *, 0x565) >= 0x3CU) {
                                M2C_FIELD(temp_v1_4, u8 *, 0x565) = 0U;
                                M2C_FIELD((temp_s0 + (*temp_a1_2 * 5)), s8 *, 0x566) = 0;
                                temp_v1_5 = temp_s0 + (*temp_a1_2 * 5);
                                M2C_FIELD(temp_v1_5, u8 *, 0x564) = (u8) (M2C_FIELD(temp_v1_5, u8 *, 0x564) + 1);
                                temp_v1_6 = temp_s0 + (*temp_a1_2 * 5);
                                var_v0 = var_s1 & 0xFFFF;
                                if ((u8) M2C_FIELD(temp_v1_6, u8 *, 0x564) >= 0x3CU) {
                                    M2C_FIELD(temp_v1_6, u8 *, 0x564) = 0U;
                                    temp_v1_7 = temp_s0 + (*temp_a1_2 * 5);
                                    M2C_FIELD(temp_v1_7, u8 *, 0x563) = (u8) (M2C_FIELD(temp_v1_7, u8 *, 0x563) + 1);
                                    temp_v1_8 = temp_s0 + (*temp_a1_2 * 5);
                                    var_v0 = var_s1 & 0xFFFF;
                                    if ((u8) M2C_FIELD(temp_v1_8, u8 *, 0x563) >= 0x3CU) {
                                        M2C_FIELD(temp_v1_8, u8 *, 0x563) = 0U;
                                        temp_v1_9 = temp_s0 + (*temp_a1_2 * 5);
                                        M2C_FIELD(temp_v1_9, u8 *, 0x562) = (u8) (M2C_FIELD(temp_v1_9, u8 *, 0x562) + 1);
                                        goto block_24;
                                    }
                                }
                            } else {
                                temp_v0_2 = temp_s0 + (*(((var_s1 & 0xFFFF) * 2) + &D_8023760E) * 5);
                                M2C_FIELD(temp_v0_2, u8 *, 0x566) = (u8) *(&D_80236ED4 + M2C_FIELD(temp_v0_2, u8 *, 0x565));
block_24:
                                var_v0 = var_s1 & 0xFFFF;
                            }
                            temp_a0_2 = (var_v0 * 2) + &D_8023760E;
                            temp_v1_10 = temp_s0 + (*temp_a0_2 * 5);
                            var_v0_2 = var_s1 & 0xFFFF;
                            if (M2C_FIELD(temp_v1_10, u8 *, 0x562) != 0) {
                                M2C_FIELD(temp_v1_10, s8 *, 0x565) = 0x3B;
                                M2C_FIELD((temp_s0 + (*temp_a0_2 * 5)), s8 *, 0x566) = 0x63;
                                M2C_FIELD((temp_s0 + (*temp_a0_2 * 5)), s8 *, 0x563) = 0x3B;
                                M2C_FIELD((temp_s0 + (*temp_a0_2 * 5)), s8 *, 0x564) = 0x3B;
                                M2C_FIELD((temp_s0 + (*temp_a0_2 * 5)), s8 *, 0x562) = 1;
                                var_v0_2 = var_s1 & 0xFFFF;
                            }
                            temp_v0_3 = var_v0_2 * 2;
                            temp_a0_3 = *(temp_v0_3 + &D_8023760E);
                            if (*(temp_v0_3 + &D_80237600) != temp_a0_3) {
                                var_v0_3 = var_s1 & 0xFFFF;
                                if (temp_a0_3 < 5) {
                                    temp_a1_3 = M2C_FIELD(temp_s0, u16 *, 6);
                                    var_v0_4 = temp_a1_3 & 0xFFF7;
                                    if (!(temp_a1_3 & 8) && (var_v0_4 = temp_a1_3 & 0xFFF7, ((temp_a0_3 < 2) == 0))) {
                                        temp_a1_4 = temp_a1_3 | 0x40;
                                        M2C_FIELD(temp_s0, u16 *, 6) = temp_a1_4;
                                        var_a0_2 = &D_80236F10;
                                        var_a1 = temp_a1_4 & 0x48;
                                    } else {
                                        M2C_FIELD(temp_s0, u16 *, 6) = var_v0_4;
                                        var_a0_2 = &D_80236F20;
                                        var_a1 = temp_a1_3 & 0x40;
                                    }
                                    func_8003DE60(var_a0_2, var_a1);
                                    var_a0_3 = var_s1 & 0xFFFF;
                                    if (*(((var_s1 & 0xFFFF) * 2) + &D_8023760E) >= 2) {
                                        func_80230EFC(temp_s0);
                                        var_a0_3 = var_s1 & 0xFFFF;
                                    }
                                    temp_a0_4 = (var_a0_3 * 2) + &D_80237600;
                                    M2C_FIELD(temp_s0, u8 *, 0x566) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x566) + M2C_FIELD((temp_s0 + (*temp_a0_4 * 5)), u8 *, 0x566));
                                    M2C_FIELD(temp_s0, u8 *, 0x564) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x564) + M2C_FIELD((temp_s0 + (*temp_a0_4 * 5)), u8 *, 0x564));
                                    M2C_FIELD(temp_s0, u8 *, 0x563) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x563) + M2C_FIELD((temp_s0 + (*temp_a0_4 * 5)), u8 *, 0x563));
                                    M2C_FIELD(temp_s0, u8 *, 0x562) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x562) + M2C_FIELD((temp_s0 + (*temp_a0_4 * 5)), u8 *, 0x562));
loop_37:
                                    if ((u8) M2C_FIELD(temp_s0, u8 *, 0x566) >= 0x64U) {
                                        M2C_FIELD(temp_s0, u8 *, 0x566) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x566) - 0x64);
                                        M2C_FIELD(temp_s0, u8 *, 0x564) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x564) + 1);
                                        goto loop_37;
                                    }
loop_40:
                                    if ((u8) M2C_FIELD(temp_s0, u8 *, 0x564) >= 0x3CU) {
                                        M2C_FIELD(temp_s0, u8 *, 0x564) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x564) - 0x3C);
                                        M2C_FIELD(temp_s0, u8 *, 0x563) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x563) + 1);
                                        goto loop_40;
                                    }
loop_43:
                                    if ((u8) M2C_FIELD(temp_s0, u8 *, 0x563) >= 0x3CU) {
                                        M2C_FIELD(temp_s0, u8 *, 0x563) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x563) - 0x3C);
                                        M2C_FIELD(temp_s0, u8 *, 0x562) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x562) + 1);
                                        goto loop_43;
                                    }
                                    goto block_44;
                                }
                            } else {
                                goto block_44;
                            }
                        } else {
block_44:
                            var_v0_3 = var_s1 & 0xFFFF;
                        }
                        temp_v0_4 = var_v0_3 * 2;
                        *(temp_v0_4 + &D_80237600) = *(temp_v0_4 + &D_8023760E);
                        goto block_46;
                    }
                } else {
                    temp_v0_5 = M2C_FIELD(temp_s0, s16 *, 0x594);
                    if (temp_v0_5 != 0) {
                        var_v0_5 = (var_s1 & 0xFFFF) * 2;
                        *(var_v0_5 + &D_8023760E) = temp_v0_5;
                        goto block_15;
                    }
                    if (M2C_FIELD(&D_8006FB14, u8 *, 4) == 1) {
                        var_v0_5 = (var_s1 & 0xFFFF) * 2;
                        *(var_v0_5 + &D_8023760E) = 1;
block_15:
                        *(var_v0_5 + &D_80237058) = 1;
                    }
                    goto block_46;
                }
            } else {
block_46:
                var_s1 += 1;
            }
            var_a0 = var_s1 & 0xFFFF;
        } while ((u32) (var_s1 & 0xFFFF) < 7U);
        return;
    }
    var_s1_2 = 0;
    __repair_rows: {
        temp_a0_5 = var_s1_2 & 0xFFFF;
        temp_v1_11 = temp_a0_5 * 2;
        *(temp_v1_11 + &D_80237058) = 0;
        *(temp_v1_11 + &D_8023760E) = 0;
        *(temp_v1_11 + &D_80237600) = 0;
        *(&D_80237694 + temp_a0_5) = 0;
        var_s1_2 += 1;
        *(temp_v1_11 + &D_80237632) = 0;
    }
if ((u32) (var_s1_2 & 0xFFFF) < 7U) goto __repair_rows;
    D_80236F50 = 0;
    D_8023761C = 0;
    D_80167E62 = 0;
    *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
}
