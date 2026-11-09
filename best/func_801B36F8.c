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

s16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s8 *, s32, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern M2C_UNK D_8011F33C;
extern void *D_801C7AB0;
extern s8 D_802330B0;
extern s8 D_802330B1;
extern void *D_802330B4;
extern s16 D_802330B8;
extern s16 D_802330BA;
extern s16 D_802330BC;
extern s16 D_802330BE;
extern s16 D_80233EC0;
extern M2C_UNK D_8031445C;

void func_801B36F8(void *arg0) {
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s1;
    s32 var_v1;
    void *temp_a0;
    void *temp_a0_2;

    D_802330B0 = 0;
    D_802330B1 = 1;
    D_802330B4 = (M2C_FIELD(arg0, s8 *, 4) * 8) + &D_8031445C;
    temp_v0 = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, &D_802330B0, 0, 0, ((f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f) + 400.0f, (f32) M2C_FIELD(arg0, u8 *, 1), ((f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f) + 400.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    D_80233EC0 = temp_v0;
    D_802330B8 = M2C_FIELD(D_801C7AB0, u8 *, 2) + (temp_v0 + 0xFFFF);
    D_802330BA = temp_v0 + 1;
    D_802330BC = 0xFFFF;
    D_802330BE = 0xFFFF;
    temp_v0_2 = (temp_v0 & 0xFFFF) * 0x64;
    *(&D_8011F334 + temp_v0_2) = *(&D_8011F308 + temp_v0_2);
    *(&D_8011F338 + temp_v0_2) = *(&D_8011F30C + temp_v0_2);
    *(&D_8011F33C + temp_v0_2) = *(&D_8011F310 + temp_v0_2);
    var_s1 = 1;
    if ((M2C_FIELD(D_801C7AB0, u8 *, 2) - 1) > 1) {
        var_v1 = 1 & 0xFFFF;
        __repair_rows: {
            temp_s0 = var_v1 * 0x10;
            *(&D_802330B0 + temp_s0) = 0;
            *(&D_802330B1 + temp_s0) = 1;
            temp_a0 = (var_v1 * 5) + arg0;
            *(&D_802330B4 + temp_s0) = (M2C_FIELD(temp_a0, s8 *, 4) * 8) + &D_8031445C;
            temp_v0_3 = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, temp_s0 + &D_802330B0, 0, 0, ((f32) M2C_FIELD(temp_a0, s8 *, 2) * 400.0f) + 400.0f, (f32) M2C_FIELD(temp_a0, u8 *, 1), ((f32) M2C_FIELD(temp_a0, s8 *, 3) * 400.0f) + 400.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            *(&D_802330B8 + temp_s0) = var_s1 + (temp_v0 + 0xFFFF);
            *(&D_802330BA + temp_s0) = var_s1 + (temp_v0 + 1);
            *(&D_802330BC + temp_s0) = 0xFFFF;
            *(&D_802330BE + temp_s0) = 0xFFFF;
            temp_v1 = (temp_v0_3 & 0xFFFF) * 0x64;
            *(&D_8011F334 + temp_v1) = *(&D_8011F308 + temp_v1);
            *(&D_8011F338 + temp_v1) = *(&D_8011F30C + temp_v1);
            *(&D_8011F33C + temp_v1) = *(&D_8011F310 + temp_v1);
            var_s1 += 1;
            var_v1 = var_s1 & 0xFFFF;
        }
if ((var_s1 & 0xFFFF) < (M2C_FIELD(D_801C7AB0, u8 *, 2) - 1)) goto __repair_rows;
    }
    temp_v1_2 = var_s1 & 0xFFFF;
    temp_s0_2 = temp_v1_2 * 0x10;
    *(&D_802330B0 + temp_s0_2) = 0;
    *(&D_802330B1 + temp_s0_2) = 1;
    temp_a0_2 = (temp_v1_2 * 5) + arg0;
    *(&D_802330B4 + temp_s0_2) = (M2C_FIELD(temp_a0_2, s8 *, 4) * 8) + &D_8031445C;
    temp_v0_4 = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, temp_s0_2 + &D_802330B0, 0, 0, ((f32) M2C_FIELD(temp_a0_2, s8 *, 2) * 400.0f) + 400.0f, (f32) M2C_FIELD(temp_a0_2, u8 *, 1), ((f32) M2C_FIELD(temp_a0_2, s8 *, 3) * 400.0f) + 400.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    *(&D_802330B8 + temp_s0_2) = M2C_FIELD(D_801C7AB0, u8 *, 2) + (temp_v0 + 0xFFFE);
    *(&D_802330BA + temp_s0_2) = temp_v0;
    *(&D_802330BC + temp_s0_2) = 0xFFFF;
    *(&D_802330BE + temp_s0_2) = 0xFFFF;
    temp_v1_3 = (temp_v0_4 & 0xFFFF) * 0x64;
    *(&D_8011F334 + temp_v1_3) = *(&D_8011F308 + temp_v1_3);
    *(&D_8011F338 + temp_v1_3) = *(&D_8011F30C + temp_v1_3);
    *(&D_8011F33C + temp_v1_3) = *(&D_8011F310 + temp_v1_3);
}
