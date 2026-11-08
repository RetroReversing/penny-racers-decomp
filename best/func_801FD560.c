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

M2C_UNK func_8002C410(M2C_UNK *);                   /* extern */
M2C_UNK func_800DE2E0();                            /* extern */
M2C_UNK func_800DE38C();                            /* extern */
s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_8021F6A0(M2C_UNK);                     /* extern */
extern M2C_UNK D_8006FB38;
extern M2C_UNK D_8011F2F4;
extern M2C_UNK D_8011F2F8;
extern M2C_UNK D_801D7DF4;
extern M2C_UNK D_801D7DFC;
extern M2C_UNK D_801D7E00;
extern M2C_UNK D_801D7E04;
extern M2C_UNK D_801D7E06;
extern M2C_UNK D_801D7E08;
extern M2C_UNK D_801D7E09;
extern M2C_UNK D_801D7E16;
extern M2C_UNK D_802038DC;
extern M2C_UNK D_802038E8;
extern M2C_UNK D_802038E9;
extern M2C_UNK D_802038EC;
extern M2C_UNK D_802038F0;
extern M2C_UNK D_802038F1;
extern M2C_UNK D_802038F2;
extern M2C_UNK D_802038F3;
extern M2C_UNK D_802038F4;
extern M2C_UNK D_802038F5;
extern M2C_UNK D_802038F6;
extern M2C_UNK D_802038F7;
extern M2C_UNK D_802038F8;
extern M2C_UNK D_802038FC;
extern M2C_UNK D_80203900;
extern M2C_UNK D_80203901;
extern s32 D_80203AA8;
extern s8 D_80203AAD;
extern s32 D_80203AB4;
extern s32 D_80203AB8;
extern s32 D_80203AC0;
extern s32 D_80203AC4;
extern s8 D_80203ACA;
extern s32 D_80203ACC;
extern M2C_UNK D_8021FAA4;
extern M2C_UNK D_80220A50;
extern M2C_UNK func_80138B1C;
extern M2C_UNK func_801FD9F8;
extern M2C_UNK func_801FE908;
extern M2C_UNK func_801FF978;

void func_801FD560(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v1;

    func_800DE38C();
    func_800DE2E0();
    temp_v1 = (func_800DE41C(0, 0, 3, 0, 0, 0xFF, 0, NULL, &func_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0) & 0xFFFF) * 0x64;
    *(&D_8011F2F4 + temp_v1) = *(&D_8011F2F4 + temp_v1) | 0x20;
    *(&D_8011F2F4 + 2 + temp_v1) = *(&D_8011F2F4 + 2 + temp_v1) | 0x20;
    *(&D_8011F2F8 + temp_v1) = *(&D_8011F2F8 + temp_v1) | 0x20;
    func_800DE41C(0, 0, 3, 0, 2, 0xFF, 0, NULL, &D_8021FAA4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 4, 0xFF, 0, NULL, &D_80220A50, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0xC8, 0, 0, NULL, &func_801FD9F8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0, 0, 0, &func_801FE908, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0, 0, 0, &func_801FF978, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8021F6A0(1);
    func_8002C410(&D_8006FB38);
    D_80203ACC = 0;
    D_80203AC4 = -1;
    D_80203AB8 = 0;
    D_80203ACA = 0;
    D_80203AC0 = 0;
    D_80203AA8 = 0;
    D_80203AAD = 0;
    M2C_FIELD(&D_802038DC, s32 *, 0) = 0;
    M2C_FIELD(&D_802038DC, s16 *, 8) = 0;
    M2C_FIELD(&D_802038DC, s32 *, -4) = 2;
    var_a0 = 0;
    var_v1 = 0 & 0xFFFF;
    __repair_rows: {
        temp_v0 = var_v1 * 0x1C;
        *(&D_802038E8 + temp_v0) = 0x40;
        *(&D_802038E9 + temp_v0) = 0;
        *(&D_802038EC + temp_v0) = 0;
        *(&D_802038F0 + temp_v0) = 0;
        *(&D_802038F1 + temp_v0) = 0;
        *(&D_802038F2 + temp_v0) = 0;
        *(&D_802038F3 + temp_v0) = 0;
        *(&D_802038F4 + temp_v0) = 0;
        *(&D_802038F5 + temp_v0) = 0;
        *(&D_802038F6 + temp_v0) = 0;
        *(&D_802038F7 + temp_v0) = 0x40;
        *(&D_802038F8 + temp_v0) = 0;
        *(&D_802038FC + temp_v0) = 0;
        *(&D_80203900 + temp_v0) = 0;
        *(&D_80203901 + temp_v0) = 0;
        var_a0 += 1;
        var_v1 = var_a0 & 0xFFFF;
    }
if ((u32) (var_a0 & 0xFFFF) < 0x10U) goto __repair_rows;
    var_a0_2 = 0;
    do {
        temp_v1_2 = (var_a0_2 & 0xFFFF) * 0x2C;
        *(&D_801D7DF4 + temp_v1_2) = -1;
        *(&D_801D7DFC + temp_v1_2) = 0;
        *(&D_801D7E00 + temp_v1_2) = 1.0f;
        *(&D_801D7E04 + temp_v1_2) = 0;
        *(&D_801D7E06 + temp_v1_2) = 0x7FFF;
        *(&D_801D7E08 + temp_v1_2) = 0x40;
        *(&D_801D7E16 + temp_v1_2) = 0x40;
        *(&D_801D7E09 + temp_v1_2) = 0;
        var_a0_2 += 1;
    } while ((u32) (var_a0_2 & 0xFFFF) < 8U);
    D_80203AB4 = 0;
}
