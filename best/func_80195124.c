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

M2C_UNK func_8014B854(M2C_UNK, u8 *);               /* extern */
extern u8 D_801C6B20;
extern s8 D_801C6B21;
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern s8 D_801C6B24;
extern u8 D_801C6B25;
extern u8 D_801C6B26;
extern s8 D_801C6BB9;
extern M2C_UNK D_801C6BE2;
extern M2C_UNK D_801C7062;
extern s8 D_801C7068;
extern u8 D_801C7469;
extern void *D_801C7AB0;
extern u8 D_801C7AB8;

void func_80195124(u8 *arg0) {
    u8 var_v0;
    u8 var_v0_2;

    if (D_801C7068 < 0x17) {
        if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
            if ((M2C_FIELD(&D_801C7062, s8 *, 0) != D_801C7068) || ((M2C_FIELD(&D_801C7062, s8 *, 1) != (D_801C6BB9 + 1)) && (M2C_FIELD(&D_801C7062, s8 *, 1) != (D_801C6BB9 - 1))) || (var_v0 = 4, (((D_801C7469 != 1) & (D_801C7469 != 3)) == 0))) {
                if (M2C_FIELD(&D_801C7062, s8 *, 0) == (D_801C7068 + 1)) {
                    if ((M2C_FIELD(&D_801C7062, s8 *, 1) != D_801C6BB9) || (var_v0 = 4, (D_801C7469 == 3))) {
                        goto block_10;
                    }
                    goto block_32;
                }
block_10:
                if ((M2C_FIELD(&D_801C7062, s8 *, 0) != (D_801C7068 - 1)) || (M2C_FIELD(&D_801C7062, s8 *, 1) != D_801C6BB9) || (var_v0 = 4, (((D_801C7469 != 0) & (D_801C7469 != 2)) == 0))) {
                    var_v0 = 4;
                    if (*(&D_801C6BE2 + (((D_801C6BB9 * 0x18) + D_801C7068) * 2)) == 0xFFFF) {
                        var_v0 = 4;
                        if (D_801C6B25 != 1) {
                            if (D_801C6B25 != *arg0) {
                                var_v0_2 = 0xD;
                                if (D_801C6B25 == 0) {
                                    goto block_26;
                                }
                                goto block_24;
                            }
                            goto block_21;
                            goto block_27;
                        }
                    }
                }
                goto block_32;
            }
            goto block_32;
        }
        var_v0 = 4;
        if ((*(&D_801C6BE2 + (((D_801C6BB9 * 0x18) + D_801C7068) * 2)) == 0xFFFF) && (var_v0 = 4, (D_801C6B25 != 1))) {
            if (D_801C6B25 == *arg0) {
block_21:
                D_801C6B20 = 0;
            } else {
                var_v0_2 = 0xD;
                if (D_801C6B25 != 0) {
block_24:
                    if (D_801C6B25 == 2) {
                        var_v0_2 = 0x13;
                        goto block_26;
                    }
                } else {
block_26:
                    D_801C6B20 = var_v0_2;
                }
            }
block_27:
            D_801C6B22 = 1;
            D_801C6B23 = 0;
            D_801C6B21 = 0;
            if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                D_801C6B20 += 0x2E;
                D_801C6B21 = 0x2E;
            }
            D_801C6B24 = 1;
            if (D_801C6B26 != 3) {
                func_8014B854(0x3B, arg0);
                D_801C6B26 = 3;
            }
        } else {
            goto block_32;
        }
    } else {
        var_v0 = D_801C7AB8;
block_32:
        *arg0 = var_v0;
    }
}
