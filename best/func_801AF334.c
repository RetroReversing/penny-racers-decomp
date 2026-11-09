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

u16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, void *, s32, M2C_UNK *, f32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
M2C_UNK func_801BB1F0(s32);                         /* extern */
M2C_UNK func_801BFA1C(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_8011F2F4;
extern M2C_UNK D_8011F2FB;
extern M2C_UNK D_801C5E9C;
extern M2C_UNK D_801C5E9D;
extern u8 D_801C5E9E;
extern M2C_UNK D_801C6BB0;
extern M2C_UNK D_801C6BB4;
extern M2C_UNK D_801C6BE0;
extern M2C_UNK D_801C7062;
extern M2C_UNK *D_801C706C;
extern M2C_UNK D_801C7080;
extern M2C_UNK D_801C7081;
extern M2C_UNK D_801C7082;
extern M2C_UNK D_801C7083;
extern M2C_UNK D_801C7084;
extern u8 D_801C7469;
extern u16 D_801C746A;
extern M2C_UNK *D_801C7AB0;
extern u8 D_801C7AB6;
extern M2C_UNK D_801C7AD8;
extern M2C_UNK D_801C7D30;
extern M2C_UNK D_801C7D31;
extern M2C_UNK D_801C7D34;
extern M2C_UNK D_8031445C;
extern M2C_UNK func_801B3F08;
extern M2C_UNK func_801B4070;

void func_801AF334(void) {
    s32 temp_a0_2;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s2;
    s8 var_s1;
    u16 temp_v0_3;
    u8 temp_a0;
    u8 temp_a1;

    D_801C7AB0 = &D_801C5E9C;
    D_801C706C = &D_801C7080;
    D_801C7469 = M2C_FIELD(&D_801C7080, u8 *, 0);
    M2C_FIELD(&D_801C6BB0, u8 *, 0) = (u8) M2C_FIELD(&D_801C7080, u8 *, 2);
    M2C_FIELD(&D_801C6BB0, u8 *, 1) = (u8) M2C_FIELD(&D_801C7080, u8 *, 3);
    M2C_FIELD(&D_801C6BB0, u8 *, 2) = (u8) M2C_FIELD(&D_801C7080, u8 *, 4);
    M2C_FIELD(&D_801C6BB0, s16 *, 4) = (s16) ((s8) M2C_FIELD(&D_801C7080, u8 *, 2) + ((s8) M2C_FIELD(&D_801C7080, u8 *, 3) * 0x18));
    D_801C746A = func_800DE41C(0, 0, 3, 0, 0x5B, 0x64, NULL, 0, &func_801B3F08, (f32) (s8) M2C_FIELD(&D_801C6BB0, u8 *, 0) * 400.0f * 0.5f, (f32) M2C_FIELD(&D_801C7080, u8 *, 1) * 0.5f, (f32) (s8) M2C_FIELD(&D_801C6BB0, u8 *, 1) * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
    temp_v0 = D_801C746A * 0x64;
    *(&D_8011F2F4 + temp_v0) = *(&D_8011F2F4 + temp_v0) | 0x20;
    *(&D_8011F2FB + temp_v0) = 0xC;
    temp_a1 = *(&D_801C7082 + ((M2C_FIELD(&D_801C5E9C, u8 *, 2) - 1) * 5));
    M2C_FIELD(&D_801C7062, u8 *, 0) = temp_a1;
    temp_a0 = *(&D_801C7083 + ((M2C_FIELD(&D_801C5E9C, u8 *, 2) - 1) * 5));
    M2C_FIELD(&D_801C7062, u8 *, 1) = temp_a0;
    M2C_FIELD(&D_801C7062, u8 *, 2) = (u8) *(&D_801C7084 + ((M2C_FIELD(&D_801C5E9C, u8 *, 2) - 1) * 5));
    M2C_FIELD(&D_801C7062, s16 *, 4) = (s16) ((s8) temp_a1 + ((s8) temp_a0 * 0x18));
    M2C_FIELD(&D_801C6BB4, u16 *, 2) = func_800DE41C(0, 0, 3, 0, 0x5B, 0x64, NULL, 0, &func_801B4070, (f32) (s8) M2C_FIELD(&D_801C7062, u8 *, 0) * 400.0f * 0.5f, (f32) *(&D_801C7081 + ((M2C_FIELD(&D_801C5E9C, u8 *, 2) - 1) * 5)) * 0.5f, (f32) (s8) M2C_FIELD(&D_801C7062, u8 *, 1) * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
    temp_v0_2 = M2C_FIELD(&D_801C6BB4, u16 *, 2) * 0x64;
    *(&D_8011F2F4 + temp_v0_2) = *(&D_8011F2F4 + temp_v0_2) | 0x20;
    *(&D_8011F2FB + temp_v0_2) = 0xC;
    D_801C7AB6 = M2C_FIELD(&D_801C5E9C, u8 *, 2);
    var_s1 = 0;
    if (M2C_FIELD(&D_801C5E9C, u8 *, 2) != 0) {
        var_s2 = 0 & 0xFF;
        do {
            temp_a1_2 = var_s2 * 5;
            temp_s0 = ((s8) *(&D_801C7082 + temp_a1_2) + (*(&D_801C7083 + temp_a1_2) * 0x18)) & 0xFFFF;
            temp_a0_2 = temp_s0 * 0x10;
            *(&D_801C7D30 + temp_a0_2) = 0;
            *(&D_801C7D31 + temp_a0_2) = 1;
            *(&D_801C7D34 + temp_a0_2) = (*(&D_801C7084 + temp_a1_2) * 8) + &D_8031445C;
            temp_v0_3 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, temp_a0_2 + &D_801C7D30, 0, NULL, (f32) *(&D_801C7082 + temp_a1_2) * 400.0f * 0.5f, (f32) *(&D_801C7081 + temp_a1_2) * 0.5f, (f32) *(&D_801C7083 + temp_a1_2) * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
            temp_v1 = (temp_v0_3 & 0xFFFF) * 0x64;
            *(&D_8011F2F4 + temp_v1) = *(&D_8011F2F4 + temp_v1) | 8;
            *(&D_801C6BE0 + (temp_s0 * 2)) = temp_v0_3;
            *(&D_801C7AD8 + temp_s0) = var_s1;
            if (M2C_FIELD(&D_801C5E9D, u8 *, 0) == 5) {
                var_a0 = var_s2;
                if (var_s2 == (M2C_FIELD(&D_801C5E9D, u8 *, 1) - 1)) {
                    goto block_8;
                }
                goto block_9;
            }
            var_a0 = var_s1 & 0xFF;
            if (!(var_s1 & 0xFF)) {
                func_801BFA1C(0, 0);
                var_s1 += 1;
            } else if (var_a0 == (D_801C5E9E - 1)) {
block_8:
                func_801BFA1C(var_a0, 1);
                var_s1 += 1;
            } else {
block_9:
                func_801BB1F0(var_s1 & 0xFF);
                var_s1 += 1;
            }
            var_s2 = var_s1 & 0xFF;
        } while ((u32) (var_s1 & 0xFF) < (u8) D_801C5E9E);
    }
}
