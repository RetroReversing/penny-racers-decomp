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

M2C_UNK func_8003DE60(M2C_UNK *, u16);              /* extern */
u16 func_8014A030(u16, s16, M2C_UNK);               /* extern */
extern M2C_UNK D_80168D54;
extern M2C_UNK D_80183740;
extern u8 D_80189B34;
extern u16 D_80189C94;
extern u8 D_8018A43C;
extern M2C_UNK D_8018A44A;
extern M2C_UNK D_8018D3A0;
extern s32 D_8018D3B8;
extern u8 D_8018D678;
extern s16 D_8021E18C;
extern M2C_UNK D_8021E1A2;
extern M2C_UNK D_8021E1A6;
extern M2C_UNK D_8022A770;
extern u16 D_8022A776;
extern s8 D_8022AD06;

s32 func_8014B108(void) {
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    void *temp_v1;

    var_s0 = 0;
    if (D_80189B34 == 2) {
        var_v0 = 0 & 0xFFFF;
        if (M2C_FIELD(&D_8021E1A2, s16 *, 0) == 0) {
            func_8003DE60(&D_80183740, D_8022A776);
            if (D_8022AD06 < 4) {
                *(&D_8018A44A + (M2C_FIELD(&D_8021E1A2, s16 *, 4) * 2)) = func_8014A030(*(&D_8018A44A + (M2C_FIELD(&D_8021E1A2, s16 *, 4) * 2)), M2C_FIELD(&D_8021E1A2, s16 *, -0x16), 1);
            }
            var_v0 = 0 & 0xFFFF;
            if (M2C_FIELD(&D_8021E1A6, s16 *, 0) == 2) {
                if (M2C_FIELD(&D_8022A770, s8 *, 0x596) == 1) {
                    D_80189C94 = func_8014A030(D_80189C94, M2C_FIELD(&D_8021E1A6, s16 *, -0x1A), 1);
                }
                if (M2C_FIELD(&D_8022A770, u16 *, 0x230) == 0xA) {
                    D_8018A43C = 1;
                }
                if (((D_80189C94 & 0x1FF) == 0x1FF) && (D_8018A43C != 0)) {
                    var_s0 = 0x800;
                }
                if (M2C_FIELD(&D_8022A770, s8 *, 0x596) < 4) {
                    var_a0 = 1;
                    var_v0_2 = 1 * 4;
                    do {
                        if (M2C_FIELD((&D_8022A770 + (var_v0_2 + var_a0)), u8 *, 0x566) == 0x63) {
                            var_s0 |= 1;
                        }
                        var_a0 += 1;
                        var_v0_2 = var_a0 * 4;
                    } while (var_a0 < 4);
                    if (D_8021E18C == 2) {
                        var_a0_2 = 1;
                        var_v0_3 = 1 * 4;
                        __repair_rows: {
                            temp_v1 = &D_8022A770 + (var_v0_3 + var_a0_2);
                            if ((M2C_FIELD(temp_v1, u8 *, 0x562) == 0) && (M2C_FIELD(temp_v1, u8 *, 0x563) == 0) && ((u8) M2C_FIELD(temp_v1, u8 *, 0x564) < 0x2AU)) {
                                var_s0 |= 2;
                            }
                            var_a0_2 += 1;
                            var_v0_3 = var_a0_2 * 4;
                        }
if (var_a0_2 < 4) goto __repair_rows;
                    }
                    if (M2C_FIELD(&D_8022A770, s32 *, 0x538) == 0x2000E) {
                        var_s0 |= 8;
                    }
                    if (!(M2C_FIELD(&D_8022A770, u16 *, 6) & 0x10) && (D_8021E18C == 5)) {
                        var_s0 |= 0x10;
                    }
                    if ((M2C_FIELD(&D_8022A770, u16 *, 6) & 0x40) && (D_8021E18C == 4)) {
                        var_s0 |= 0x40;
                    }
                    if ((u8) D_8018D678 >= 0x1EU) {
                        var_s0 |= 0x100;
                    }
                    if ((D_8018D3B8 & 0x3FFFF) == 0x3FFFF) {
                        var_s0 |= 0x200;
                    }
                    var_a1 = 0;
                    var_a0_3 = 0;
                    var_v1 = 0 * 4;
                    do {
                        temp_v1_2 = *(var_v1 + &D_80168D54);
                        if ((*(var_v1 + &D_8018D3A0) & temp_v1_2) != temp_v1_2) {
                            var_a1 = 1;
                        }
                        var_a0_3 += 1;
                        var_v1 = var_a0_3 * 4;
                    } while (var_a0_3 < 7);
                    if (var_a1 == 0) {
                        var_s0 |= 0x400;
                    }
                }
                var_v0 = var_s0 & 0xFFFF;
                if (M2C_FIELD(&D_8022A770, s8 *, 0x596) == 1) {
                    if (D_8021E18C == 7) {
                        var_s0 |= 4;
                    }
                    if (D_8021E18C == 1) {
                        var_s0 |= 0x80;
                    }
                    var_v0 = var_s0 & 0xFFFF;
                    if (!(M2C_FIELD(&D_8022A770, u16 *, 6) & 4)) {
                        if (D_8021E18C == 6) {
                            var_s0 |= 0x20;
                        }
                        goto block_52;
                    }
                }
            }
        }
    } else {
block_52:
        var_v0 = var_s0 & 0xFFFF;
    }
    return var_v0;
}
