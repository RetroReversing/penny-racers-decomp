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

u8 func_8019862C();
u8 func_8019881C();
u8 func_80198B9C();
u8 func_8019904C();
extern char D_8011F2FC[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F32E[];
extern u8 D_801C6B33;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7074;
extern u8 D_801C7ABD;

void func_80197F78(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u16 temp_v1_4;

    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    *(D_8011F308 + temp_v1) = (f32) (D_801C7068 + 1) * 400.0f * 0.5f;
    *(D_8011F30C + temp_v1) = 0;
    *(D_8011F310 + temp_v1) = (f32) D_801C6BB9 * 400.0f * 0.5f;
    temp_v1_2 = D_801C7074 * 0x64;
    if (((u32) (*(D_8011F32E + temp_v1_2) - 7) < 2U) || (*(D_8011F32E + temp_v1_2) == 6)) {
        D_801C6B33 = func_8019881C();
    } else {
        temp_v1_3 = D_801C7074 * 0x64;
        if (((u32) (*(D_8011F32E + temp_v1_3) - 9) < 2U) || (*(D_8011F32E + temp_v1_3) == 0xD)) {
            D_801C6B33 = func_80198B9C();
        } else if ((u32) (*(D_8011F32E + (D_801C7074 * 0x64)) - 0xB) < 2U) {
            D_801C6B33 = func_8019862C();
        } else if ((u32) (*(D_8011F32E + (D_801C7074 * 0x64)) - 0xF) < 2U) {
            D_801C6B33 = func_8019904C(arg0 & 0xFFFF);
        } else {
            temp_v1_4 = *(D_8011F32E + (D_801C7074 * 0x64));
            if (((u32) (temp_v1_4 - 0x11) >= 2U) && ((u32) (temp_v1_4 - 0x13) >= 2U) && (D_801C7068 < 0x17)) {
                D_801C6B33 = 1;
            } else {
                D_801C6B33 = 0;
            }
        }
    }
    if (D_801C6B33 != 0) {
        *(D_8011F2FC + ((arg0 & 0xFFFF) * 0x64)) = D_801C7ABD;
        return;
    }
    *(D_8011F2FC + ((arg0 & 0xFFFF) * 0x64)) = 0;
}
