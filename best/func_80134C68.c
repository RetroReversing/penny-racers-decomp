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

M2C_UNK func_801CA140();                            /* extern */
M2C_UNK func_801CA468(void **, u8);                 /* extern */
M2C_UNK func_801CC150(void **, s32, s32, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_801CCE7C(void **, s16, s16, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern u8 D_80126FF6;
extern M2C_UNK D_80167F58;
extern M2C_UNK D_80167F60;
extern M2C_UNK D_8016D8F8;
extern M2C_UNK D_8016E8C0;
extern M2C_UNK D_80174538;
extern M2C_UNK D_80174A40;
extern M2C_UNK D_80220ED8;

void func_80134C68(void **arg0, s32 arg1) {
    M2C_UNK *var_v0;
    f32 temp_fv1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_a1_2;
    s32 var_a2_2;
    s32 var_v1;
    u16 var_a1;
    u16 var_a2;
    void *temp_v1;

    if (D_80126FF6 == (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) - 1)) {
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 8;
        M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
        M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_80220ED8;
        func_801CA140();
        func_801CA468(arg0, *(&D_8011F2FC + ((arg1 & 0xFFFF) * 0x64)));
        if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) == 1) {
            var_a1 = 0x70;
            var_a2 = 0x63;
        } else {
            temp_v0 = arg1 & 0xFFFF;
            if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) == 2) {
                var_a1 = 0x70;
                var_a2 = (*(&D_8011F2F0 + (temp_v0 * 0x64)) * 0x6C) + 0x32;
            } else {
                temp_v0_2 = *(&D_8011F2F0 + (temp_v0 * 0x64)) * 2;
                var_a1 = *(&D_80167F58 + temp_v0_2);
                var_a2 = *(&D_80167F60 + temp_v0_2);
            }
        }
        temp_fv1 = *(&D_8011F310 + ((arg1 & 0xFFFF) * 0x64));
        if (temp_fv1 >= 2.1474836e9f) {
            var_v1 = ((s32) (temp_fv1 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
        } else {
            var_v1 = (s32) temp_fv1 & 0xFFFF;
        }
        switch (var_v1) {                           /* irregular */
        case 0x0:
            temp_v0_3 = (arg1 & 0xFFFF) * 0x64;
            var_a1_2 = (s32) ((f32) var_a1 + *(&D_8011F308 + temp_v0_3) + 8.0f) << 0x10;
            var_v0 = &D_80174A40;
            var_a2_2 = (s32) ((f32) var_a2 + *(&D_8011F30C + temp_v0_3) + 5.0f) << 0x10;
block_21:
            func_801CC150(arg0, var_a1_2 >> 0x10, var_a2_2 >> 0x10, 0, var_v0);
            return;
        case 0x1:
            temp_v0_4 = (arg1 & 0xFFFF) * 0x64;
            var_a1_2 = (s32) ((f32) var_a1 + *(&D_8011F308 + temp_v0_4) + 8.0f) << 0x10;
            var_a2_2 = (s32) ((f32) var_a2 + *(&D_8011F30C + temp_v0_4) + 5.0f) << 0x10;
            var_v0 = &D_80174538;
            goto block_21;
        case 0xFF:
            temp_v0_5 = (arg1 & 0xFFFF) * 0x64;
            func_801CCE7C(arg0, (s16) (s32) ((f32) var_a1 + *(&D_8011F308 + temp_v0_5)), (s16) (s32) ((f32) var_a2 + *(&D_8011F30C + temp_v0_5)), 0, 0, 0x60, 0x2A, 0x60, 0x2A, 0x60, 0x15, 0, 0, 0x13F, 0xEF, &D_8016D8F8, &D_8016E8C0);
            break;
        }
    }
}
