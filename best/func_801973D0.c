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

u16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, s32, M2C_UNK, s32, f32, f32, f32); /* extern */
extern M2C_UNK D_8011F2F4;
extern s8 D_801C6B30;
extern s8 D_801C6B31;
extern s8 D_801C6B32;
extern s8 D_801C6B33;
extern u16 D_801C7072;
extern u16 D_801C7076;
extern u16 D_801C7D22;
extern u16 D_801CA13A;
extern M2C_UNK D_803147B4;
extern M2C_UNK func_801976F8;
extern M2C_UNK func_801979CC;
extern M2C_UNK func_80197CA0;
extern M2C_UNK func_80197F78;
extern M2C_UNK func_8019917C;
extern M2C_UNK func_801993D4;
extern M2C_UNK func_8019961C;
extern M2C_UNK func_80199864;

void func_801973D0(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    D_801CA13A = func_800DE41C(0, 0, 1, 0, 0x54, 0, &D_803147B4, &func_801976F8, &func_8019917C, -10000.0f, 10000.0f, -10000.0f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
    D_801C7072 = func_800DE41C(0, 0, 1, 0, 0x54, 0, &D_803147B4, &func_801979CC, &func_801993D4, -10000.0f, 10000.0f, -10000.0f, 0, 0x42B40000, 0, 0.5f, 0.5f, 0.5f);
    D_801C7D22 = func_800DE41C(0, 0, 1, 0, 0x54, 0, &D_803147B4, &func_80197CA0, &func_8019961C, -10000.0f, 10000.0f, -10000.0f, 0, 0x43340000, 0, 0.5f, 0.5f, 0.5f);
    D_801C7076 = func_800DE41C(0, 0, 1, 0, 0x54, 0, &D_803147B4, &func_80197F78, &func_80199864, -10000.0f, 10000.0f, -10000.0f, 0, 0x43870000, 0, 0.5f, 0.5f, 0.5f);
    temp_v0 = D_801CA13A * 0x64;
    *(&D_8011F2F4 + temp_v0) = *(&D_8011F2F4 + temp_v0) | 8;
    temp_v0_2 = D_801C7072 * 0x64;
    *(&D_8011F2F4 + temp_v0_2) = *(&D_8011F2F4 + temp_v0_2) | 8;
    temp_v0_3 = D_801C7D22 * 0x64;
    *(&D_8011F2F4 + temp_v0_3) = *(&D_8011F2F4 + temp_v0_3) | 8;
    temp_v0_4 = D_801C7076 * 0x64;
    *(&D_8011F2F4 + temp_v0_4) = *(&D_8011F2F4 + temp_v0_4) | 8;
    D_801C6B33 = 0;
    D_801C6B32 = 0;
    D_801C6B31 = 0;
    D_801C6B30 = 0;
}
