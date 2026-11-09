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

s16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, void *, s32, s32, f32, s32, f32, s32, s32, s32, f32, f32, f32); /* extern */
M2C_UNK func_8014B854(M2C_UNK);                     /* extern */
M2C_UNK func_80192E00(s32);                         /* extern */
s32 func_80199AB0(s32);                             /* extern */
M2C_UNK func_8019F7C0(s32);                         /* extern */
M2C_UNK func_801BFA1C(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_8011F2F4;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F32F;
extern s16 D_801C5EA4;
extern u8 D_801C6B22;
extern u8 D_801C6B23;
extern M2C_UNK D_801C6BB4;
extern u8 D_801C6BB9;
extern M2C_UNK D_801C6BE0;
extern s8 D_801C7068;
extern u16 D_801C7074;
extern s16 D_801C7078;
extern M2C_UNK D_801C7080;
extern M2C_UNK D_801C7081;
extern M2C_UNK D_801C7082;
extern M2C_UNK D_801C7083;
extern M2C_UNK D_801C7084;
extern u8 D_801C7469;
extern u16 D_801C746A;
extern void *D_801C7AB0;
extern u8 D_801C7AB6;
extern s8 D_801C7AB8;
extern M2C_UNK D_801C7AD8;
extern M2C_UNK D_801C7D30;
extern M2C_UNK D_801C7D31;
extern M2C_UNK D_801C7D34;
extern M2C_UNK D_801E9990;
extern M2C_UNK D_801E9994;
extern M2C_UNK D_8031445C;

s32 func_80193A50(s32 arg0) {
    M2C_UNK var_a0;
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_v0;
    s32 var_v0_2;
    s8 var_v0_3;
    u8 temp_v1_2;
    u8 var_s1;

    var_s1 = *(&D_8011F32F + (D_801C7074 * 0x64));
    temp_s0 = arg0 & 0xFFFF;
    func_8019F7C0(temp_s0);
    func_80192E00(func_80199AB0(temp_s0) & 0xFF);
    temp_a0 = temp_s0 * 0x70;
    var_v0_2 = arg0 & 0xFFFF;
    if (*(&D_801E9990 + temp_a0) == 1) {
        var_v0_2 = arg0 & 0xFFFF;
        if (*(&D_801E9994 + temp_a0) == 0) {
            if (D_801C7469 != 4) {
                *(&D_801C7D30 + (M2C_FIELD(&D_801C6BB4, u16 *, 0) * 0x10)) = 0;
                *(&D_801C7D31 + (M2C_FIELD(&D_801C6BB4, u16 *, 0) * 0x10)) = 1;
                *(&D_801C7D34 + (M2C_FIELD(&D_801C6BB4, u16 *, 0) * 0x10)) = (M2C_FIELD(&D_801C6BB4, s8 *, -2) * 8) + &D_8031445C;
                temp_v0 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, (M2C_FIELD(&D_801C6BB4, u16 *, 0) * 0x10) + &D_801C7D30, 0, 0, (f32) M2C_FIELD(&D_801C6BB4, s8 *, -4) * 400.0f * 0.5f, 0, (f32) M2C_FIELD(&D_801C6BB4, s8 *, -3) * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
                temp_v1 = (temp_v0 & 0xFFFF) * 0x64;
                *(&D_8011F2F4 + temp_v1) = *(&D_8011F2F4 + temp_v1) | 8;
                *(&D_801C6BE0 + (M2C_FIELD(&D_801C6BB4, u16 *, 0) * 2)) = temp_v0;
                *(&D_801C7AD8 + M2C_FIELD(&D_801C6BB4, u16 *, 0)) = M2C_FIELD(D_801C7AB0, u8 *, 2);
                *(&D_801C7080 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = D_801C7469;
                *(&D_801C7081 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = 0;
                *(&D_801C7082 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = (u8) M2C_FIELD(&D_801C6BB4, s8 *, -4);
                *(&D_801C7083 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = (u8) M2C_FIELD(&D_801C6BB4, s8 *, -3);
                *(&D_801C7084 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = (u8) M2C_FIELD(&D_801C6BB4, s8 *, -2);
                func_801BFA1C(0, 0);
                M2C_FIELD(D_801C7AB0, u8 *, 2) = 1U;
                D_801C7AB6 += 1;
                D_801C7068 = (u8) M2C_FIELD(&D_801C6BB4, s8 *, -4) + D_801C6B22;
                temp_v1_2 = (u8) M2C_FIELD(&D_801C6BB4, s8 *, -3) + D_801C6B23;
                D_801C6BB9 = temp_v1_2;
                switch (D_801C7469) {               /* irregular */
                case 0:
                    if ((temp_v1_2 << 0x18) > 0) {
                        D_801C6BB9 = temp_v1_2 - 1;
                    } else {
                        D_801C6BB9 += 2;
                    }
                    break;
                case 1:
                    if (D_801C7068 > 0) {
                        var_v0_3 = D_801C7068 - 1;
                    } else {
                        var_v0_3 = (u8) D_801C7068 + 2;
                    }
block_18:
                    D_801C7068 = var_v0_3;
                    break;
                case 2:
                    if ((s8) D_801C6BB9 < 0x17) {
                        D_801C6BB9 = (s8) D_801C6BB9 + 1;
                    } else {
                        D_801C6BB9 -= 2;
                    }
                    break;
                case 3:
                    var_v0_3 = D_801C7068 + 1;
                    if (D_801C7068 >= 0x17) {
                        var_v0_3 = (u8) D_801C7068 - 2;
                    }
                    goto block_18;
                }
                D_801C7AB8 = 4;
                D_801C7078 = (s8) (u8) D_801C7068 + ((s8) D_801C6BB9 * 0x18);
                var_s1 = 9;
                D_801C5EA4 = 0;
                var_a0 = 0x40;
                goto block_23;
            }
            goto block_24;
        }
    }
    temp_v1_3 = var_v0_2 * 0x70;
    var_v0 = var_s1 & 0xFF;
    if (*(&D_801E9990 + temp_v1_3) == 0) {
        var_v0 = var_s1 & 0xFF;
        if (*(&D_801E9994 + temp_v1_3) == 1) {
            M2C_FIELD(D_801C7AB0, u8 *, 2) = 0U;
            D_801C7AB6 = 0;
            *(&D_801C7080 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = 4;
            *(&D_801C7081 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = 0;
            *(&D_801C7082 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = -1;
            *(&D_801C7083 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = -1;
            *(&D_801C7084 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = -1;
            *(&D_8011F2FD + (D_801C746A * 0x64)) = 1;
            D_801C7469 = 4;
            var_s1 = 1;
            var_a0 = 0x3F;
block_23:
            func_8014B854(var_a0);
block_24:
            var_v0 = var_s1 & 0xFF;
        }
    }
    return var_v0;
}
