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

u16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, s32, M2C_UNK *, s32, f32, s32, s32, s32, s32, f32, f32, f32); /* extern */
extern M2C_UNK D_8011F2F2;
extern M2C_UNK D_8011F2FA;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_801B7678;
extern M2C_UNK D_801C6BB0;
extern u8 D_801C6BB9;
extern s8 D_801C7060;
extern u8 D_801C7068;
extern s8 D_801C7070;
extern u16 D_801C7072;
extern u16 D_801C7076;
extern s8 D_801C707B;
extern s8 D_801C7468;
extern s8 D_801C7AB4;
extern s8 D_801C7AB5;
extern s8 D_801C7AB8;
extern M2C_UNK D_801C7AC0;
extern u16 D_801C7D18;
extern M2C_UNK D_801C7D1A;
extern u16 D_801C7D22;
extern u16 D_801C7D24;
extern s8 D_801CA138;
extern u16 D_801CA13A;
extern M2C_UNK D_8031445C;

void func_801AF8CC(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;

    D_801C7AB8 = 4;
    D_801C707B = 0;
    D_801C7060 = 0;
    D_801C7068 = M2C_FIELD(&D_801C6BB0, u8 *, 0);
    D_801C6BB9 = M2C_FIELD(&D_801C6BB0, u8 *, 1);
    D_801C7AB5 = 0;
    D_801C7070 = 0;
    D_801C7468 = 0;
    D_801CA138 = 0;
    temp_v1 = D_801C7D18 * 0x64;
    *(&D_8011F308 + temp_v1) = (f32) (s8) M2C_FIELD(&D_801C6BB0, u8 *, 0) * 400.0f * 0.5f;
    *(&D_8011F30C + temp_v1) = 0;
    *(&D_8011F310 + temp_v1) = (f32) (s8) M2C_FIELD(&D_801C6BB0, u8 *, 1) * 400.0f * 0.5f;
    *(&D_8011F2FA + temp_v1) = 0x5C;
    *(&D_8011F2FA + (D_801CA13A * 0x64)) = 0x5C;
    *(&D_8011F2FA + (D_801C7072 * 0x64)) = 0x5C;
    *(&D_8011F2FA + (D_801C7D22 * 0x64)) = 0x5C;
    *(&D_8011F2FA + (D_801C7076 * 0x64)) = 0x5C;
    D_801C7AB4 = 0;
    M2C_FIELD(&D_801C7AC0, s8 *, 0) = 0;
    M2C_FIELD(&D_801C7AC0, s8 *, 1) = 1;
    M2C_FIELD(&D_801C7AC0, M2C_UNK **, 4) = &D_8031445C;
    D_801C7D24 = func_800DE41C(0, 0, 2, 0, 0x7A, 0xFF, &D_801C7AC0, 0, &D_801B7678, 0, 10000.0f, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_v0 = D_801C7D24 * 0x64;
    *(&D_8011F2F2 + temp_v0) = *(&D_8011F2F2 + temp_v0) | 8;
    var_v1 = 0;
    var_v0 = 0 & 0xFF;
    __repair_rows: {
        *((var_v0 * 2) + &D_801C7D1A) = 0xFFFF;
        var_v1 += 1;
        var_v0 = var_v1 & 0xFF;
    }
if ((u32) (var_v1 & 0xFF) < 4U) goto __repair_rows;
}
