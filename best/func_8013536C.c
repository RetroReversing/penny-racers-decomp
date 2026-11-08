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
M2C_UNK func_801CC150(void **, s16, s16, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_8006FB14;
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FC;
extern u8 D_80126FF6;
extern M2C_UNK D_80167F58;
extern M2C_UNK D_80167F60;
extern M2C_UNK D_80174A68;
extern M2C_UNK D_80175250;
extern M2C_UNK D_80220ED8;

void func_8013536C(void **arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    u16 var_a1;
    u16 var_a2;
    u8 temp_s1;
    void *temp_v1;

    if ((D_80126FF6 == (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) - 1)) && (*(&D_8011F2FC + ((arg1 & 0xFFFF) * 0x64)) != 0)) {
        temp_s1 = M2C_FIELD(&D_8006FB14, u8 *, 4);
        if (temp_s1 == 1) {
            M2C_FIELD(&D_8006FB14, u8 *, 4) = 1U;
            temp_v1 = *arg0;
            *arg0 = temp_v1 + 8;
            M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
            M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_80220ED8;
            func_801CA140();
            if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) == temp_s1) {
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
            func_801CC150(arg0, (s16) var_a1, (s16) var_a2, 0, 0, 0x60, 0x2A, 0x60, 0x2A, 0x60, 0x15, 0, 0, 0x13F, 0xEF, &D_80174A68, &D_80175250);
        }
    }
}
