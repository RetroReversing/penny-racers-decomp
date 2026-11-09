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

u16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, void *, s32, M2C_UNK *, f32, s32, f32, s32, s32, s32, f32, f32, f32); /* extern */
M2C_UNK func_8014B854(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_8019F1C0(s32);                         /* extern */
M2C_UNK func_8019F7C0(s32);                         /* extern */
extern M2C_UNK D_8011F2F4;
extern M2C_UNK D_8011F2FB;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F32F;
extern s16 D_801C5EA4;
extern s8 D_801C6B20;
extern u8 D_801C6B22;
extern u8 D_801C6B23;
extern u8 D_801C6B27;
extern s8 D_801C6B29;
extern M2C_UNK D_801C6BB0;
extern M2C_UNK D_801C6BB4;
extern s8 D_801C6BB9;
extern M2C_UNK D_801C6BE0;
extern M2C_UNK D_801C7062;
extern s8 D_801C7068;
extern u16 D_801C7074;
extern u16 D_801C7078;
extern M2C_UNK D_801C7080;
extern M2C_UNK D_801C7081;
extern M2C_UNK D_801C7082;
extern M2C_UNK D_801C7083;
extern M2C_UNK D_801C7084;
extern u8 D_801C7469;
extern u16 D_801C746A;
extern M2C_UNK D_801C7470;
extern void *D_801C7AB0;
extern u8 D_801C7AB6;
extern M2C_UNK D_801C7AD8;
extern u16 D_801C7D18;
extern M2C_UNK D_801C7D30;
extern M2C_UNK D_801C7D31;
extern M2C_UNK D_801C7D34;
extern M2C_UNK D_801E9990;
extern M2C_UNK D_801E9994;
extern M2C_UNK D_8031445C;
extern M2C_UNK func_801B4070;

s32 func_80194024(s32 arg0) {
    M2C_UNK var_a0;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s8 temp_a0_2;
    s8 temp_v1_2;
    s8 var_v0_3;
    u16 *temp_a1;
    u16 temp_v0_2;
    u16 temp_v1_4;
    u16 var_a1;
    u8 temp_s1;

    temp_s1 = *(&D_8011F32F + (D_801C7074 * 0x64));
    temp_s0 = arg0 & 0xFFFF;
    func_8019F1C0(temp_s0);
    func_8019F7C0(temp_s0);
    temp_v1 = D_801C7D18 * 0x64;
    *(&D_8011F308 + temp_v1) = (f32) D_801C7068 * 400.0f * 0.5f;
    *(&D_8011F30C + temp_v1) = 0;
    *(&D_8011F310 + temp_v1) = (f32) D_801C6BB9 * 400.0f * 0.5f;
    temp_a0 = temp_s0 * 0x70;
    if (*(&D_801E9990 + temp_a0) == 1) {
        var_v0_2 = arg0 & 0xFFFF;
        if (*(&D_801E9994 + temp_a0) == 0) {
            M2C_FIELD(&D_801C7062, s8 *, 0) = (s8) D_801C7068;
            M2C_FIELD(&D_801C7062, s8 *, 1) = (s8) D_801C6BB9;
            M2C_FIELD(&D_801C7062, s16 *, 4) = (s16) (D_801C7068 + (D_801C6BB9 * 0x18));
            M2C_FIELD(&D_801C6BB4, u16 *, 2) = func_800DE41C(0, 0, 3, 0, 0x53, 0xFF, NULL, 0, &func_801B4070, (f32) M2C_FIELD(&D_801C7062, s8 *, 0) * 400.0f * 0.5f, 0, (f32) M2C_FIELD(&D_801C7062, s8 *, 1) * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
            temp_v0 = M2C_FIELD(&D_801C6BB4, u16 *, 2) * 0x64;
            *(&D_8011F2F4 + temp_v0) = *(&D_8011F2F4 + temp_v0) | 0x20;
            *(&D_8011F2FB + temp_v0) = 0xC;
            D_801C7AB6 += 4;
            temp_a0_2 = M2C_FIELD(&D_801C6BB0, u8 *, 0) + D_801C6B22;
            D_801C7068 = temp_a0_2;
            temp_v1_2 = M2C_FIELD(&D_801C6BB0, u8 *, 1) + D_801C6B23;
            D_801C6BB9 = temp_v1_2;
            D_801C7078 = temp_a0_2 + (temp_v1_2 * 0x18);
            if (((D_801C7469 == 0) | (D_801C7469 == 2)) != 0) {
                D_801C6B20 = 5;
                var_v0_3 = 0x33;
                if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                    goto block_7;
                }
            } else if (((D_801C7469 == 1) | (D_801C7469 == 3)) != 0) {
                D_801C6B20 = 0;
                var_v0_3 = 0x2E;
                if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
block_7:
                    D_801C6B20 = var_v0_3;
                }
            }
            *(&D_801C7D30 + (D_801C7078 * 0x10)) = 0;
            *(&D_801C7D31 + (D_801C7078 * 0x10)) = 1;
            temp_a0_3 = D_801C7078 * 0x10;
            *(&D_801C7D34 + temp_a0_3) = (D_801C6B20 * 8) + &D_8031445C;
            temp_v0_2 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, temp_a0_3 + &D_801C7D30, 0, NULL, (f32) D_801C7068 * 400.0f * 0.5f, 0, (f32) D_801C6BB9 * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
            temp_a0_4 = (temp_v0_2 & 0xFFFF) * 0x64;
            *(&D_8011F2F4 + temp_a0_4) = *(&D_8011F2F4 + temp_a0_4) | 8;
            var_a1 = D_801C7078;
            *(&D_801C6BE0 + (var_a1 * 2)) = temp_v0_2;
            *(&D_801C7AD8 + var_a1) = M2C_FIELD(D_801C7AB0, u8 *, 2);
            *(&D_801C7080 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = D_801C7469;
            *(&D_801C7081 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = 0;
            *(&D_801C7082 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = (u8) D_801C7068;
            *(&D_801C7083 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = (u8) D_801C6BB9;
            *(&D_801C7084 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = (u8) D_801C6B20;
            D_801C6B27 = M2C_FIELD(D_801C7AB0, u8 *, 2);
            M2C_FIELD(D_801C7AB0, u8 *, 2) = 2U;
            D_801C7AB6 += 1;
            *(&D_8011F308 + temp_a0_4) = (f32) D_801C7068 * 400.0f * 0.5f;
            *(&D_8011F30C + temp_a0_4) = 0;
            *(&D_8011F310 + temp_a0_4) = (f32) D_801C6BB9 * 400.0f * 0.5f;
            temp_v0_3 = D_801C7D18 * 0x64;
            *(&D_8011F308 + temp_v0_3) = -10000.0f;
            *(&D_8011F30C + temp_v0_3) = -10000.0f;
            *(&D_8011F310 + temp_v0_3) = -10000.0f;
            D_801C6B29 = 0;
            var_s1 = 0xB;
            D_801C5EA4 = 0;
            var_a0 = 0x40;
            goto block_17;
        }
        goto block_10;
    }
    var_v0_2 = arg0 & 0xFFFF;
block_10:
    temp_v1_3 = var_v0_2 * 0x70;
    var_v0 = temp_s1 & 0xFF;
    if (*(&D_801E9990 + temp_v1_3) == 0) {
        var_v0 = temp_s1 & 0xFF;
        if (*(&D_801E9994 + temp_v1_3) == 1) {
            *(&D_8011F2FD + (D_801C746A * 0x64)) = 1;
            var_a0_2 = 0;
            var_v0_4 = 0 & 0xFF;
            __repair_rows: {
                temp_a1 = (var_v0_4 * 2) + &D_801C7470;
                temp_v1_4 = *temp_a1;
                if (temp_v1_4 != 0xFFFF) {
                    *(&D_8011F2FD + (temp_v1_4 * 0x64)) = 2;
                    *temp_a1 = 0xFFFF;
                }
                var_a0_2 += 1;
                var_v0_4 = var_a0_2 & 0xFF;
            }
if ((u32) (var_a0_2 & 0xFF) < 4U) goto __repair_rows;
            var_a1 = (u16) &D_801C6BB4;
            *(&D_8011F2FD + (*(&D_801C6BE0 + (M2C_FIELD((u16) &D_801C6BB4, u16 *, 0) * 2)) * 0x64)) = 1;
            *(&D_801C6BE0 + (M2C_FIELD((u16) &D_801C6BB4, u16 *, 0) * 2)) = 0xFFFF;
            *(&D_801C7AD8 + D_801C7078) = 0xFF;
            M2C_FIELD(D_801C7AB0, u8 *, 2) = 0U;
            D_801C7AB6 = 0;
            *(&D_801C7080 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = 4;
            *(&D_801C7081 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = 0;
            *(&D_801C7082 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = -1;
            *(&D_801C7083 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = -1;
            *(&D_801C7084 + (M2C_FIELD(D_801C7AB0, u8 *, 2) * 5)) = -1;
            D_801C7068 = (s8) M2C_FIELD((u16) &D_801C6BB4, u8 *, -4);
            D_801C6BB9 = (s8) M2C_FIELD((u16) &D_801C6BB4, u8 *, -3);
            D_801C7469 = 4;
            var_s1 = 1;
            var_a0 = 0x3F;
block_17:
            func_8014B854(var_a0, (M2C_UNK *) var_a1);
            var_v0 = var_s1 & 0xFF;
        }
    }
    return var_v0;
}
