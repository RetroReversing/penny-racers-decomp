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

M2C_UNK func_8014B854(M2C_UNK);                     /* extern */
s32 func_8019A31C();                                /* extern */
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern s8 D_801C6B25;
extern M2C_UNK D_801C6BB0;
extern M2C_UNK D_801C7062;
extern s8 D_801C7469;
extern void *D_801C7AB0;

void func_80192E00(s8 arg0) {
    s8 var_v0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;

    if (!(arg0 & 0xFF)) {
        if (func_8019A31C() & 1) {
            D_801C7469 = 0;
            if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                temp_a1 = &D_801C6BB0 + 2;
                M2C_FIELD(&D_801C6BB0, s8 *, 2) = 5;
                M2C_FIELD(&D_801C7062, u8 *, 0) = (u8) M2C_FIELD(temp_a1, u8 *, -2);
                M2C_FIELD(&D_801C7062, u8 *, 1) = (u8) (M2C_FIELD(temp_a1, u8 *, -1) + 1);
                M2C_FIELD(&D_801C7062, s8 *, 2) = 5;
                if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                    M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x33;
                    M2C_FIELD(&D_801C7062, s8 *, 2) = 0x33;
                }
            } else {
                M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x2B;
                if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                    M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x59;
                }
            }
            D_801C6B23 = -1;
            D_801C6B22 = 0;
            goto block_37;
        }
    } else if ((arg0 & 0xFF) == 1) {
        if (func_8019A31C() & 4) {
            D_801C7469 = 1;
            if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                temp_a1_2 = &D_801C6BB0 + 2;
                M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0;
                M2C_FIELD(&D_801C7062, u8 *, 0) = (u8) (M2C_FIELD(temp_a1_2, u8 *, -2) + 1);
                M2C_FIELD(&D_801C7062, u8 *, 1) = (u8) M2C_FIELD(temp_a1_2, u8 *, -1);
                M2C_FIELD(&D_801C7062, s8 *, 2) = 0;
                var_v0 = -1;
                if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                    M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x2E;
                    M2C_FIELD(&D_801C7062, s8 *, 2) = 0x2E;
                    goto block_18;
                }
            } else {
                M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x2D;
                if (M2C_FIELD(D_801C7AB0, u8 *, 0) != 4) {
                    var_v0 = -1;
                } else {
                    M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x5B;
block_18:
                    var_v0 = -1;
                }
            }
            goto block_36;
        }
    } else if ((arg0 & 0xFF) == 2) {
        if (func_8019A31C() & 2) {
            D_801C7469 = 2;
            if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                temp_a1_3 = &D_801C6BB0 + 2;
                M2C_FIELD(&D_801C6BB0, s8 *, 2) = 5;
                M2C_FIELD(&D_801C7062, u8 *, 0) = (u8) M2C_FIELD(temp_a1_3, u8 *, -2);
                M2C_FIELD(&D_801C7062, u8 *, 1) = (u8) (M2C_FIELD(temp_a1_3, u8 *, -1) - 1);
                M2C_FIELD(&D_801C7062, s8 *, 2) = 5;
                if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                    M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x33;
                    M2C_FIELD(&D_801C7062, s8 *, 2) = 0x33;
                }
            } else {
                M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x2A;
                if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                    M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x58;
                }
            }
            D_801C6B23 = 1;
            D_801C6B22 = 0;
            goto block_37;
        }
    } else if (((arg0 & 0xFF) == 3) && (func_8019A31C() & 8)) {
        D_801C7469 = 3;
        if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
            temp_a1_4 = &D_801C6BB0 + 2;
            M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0;
            M2C_FIELD(&D_801C7062, u8 *, 0) = (u8) (M2C_FIELD(temp_a1_4, u8 *, -2) - 1);
            M2C_FIELD(&D_801C7062, u8 *, 1) = (u8) M2C_FIELD(temp_a1_4, u8 *, -1);
            M2C_FIELD(&D_801C7062, s8 *, 2) = 0;
            var_v0 = 1;
            if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x2E;
                M2C_FIELD(&D_801C7062, s8 *, 2) = 0x2E;
                goto block_35;
            }
        } else {
            M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x2C;
            var_v0 = 1;
            if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                M2C_FIELD(&D_801C6BB0, s8 *, 2) = 0x5A;
block_35:
                var_v0 = 1;
            }
        }
block_36:
        D_801C6B22 = var_v0;
        D_801C6B23 = 0;
block_37:
        D_801C6B25 = arg0;
        func_8014B854(0x3B);
    }
}
