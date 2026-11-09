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
M2C_UNK func_801CA468(void **, u16);                /* extern */
M2C_UNK func_801CB74C(void **, s32, s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_801CBDE8(void **, s32, s32, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F33C;
extern u8 D_80126FF6;
extern M2C_UNK D_801D4FC0;
extern M2C_UNK D_802002D0;
extern M2C_UNK D_802002DC;
extern M2C_UNK D_802002EC;
extern M2C_UNK D_802002F0;
extern M2C_UNK D_80203554;
extern M2C_UNK D_80203558;
extern M2C_UNK D_80220ED8;
extern M2C_UNK D_8022A772;
extern M2C_UNK D_8022AFE9;
extern M2C_UNK D_80232840;
extern u16 D_80233EC0;

void func_801FCD60(void **arg0) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_v1;

    func_801CA140();
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_80220ED8;
    if (D_80126FF6 == 0) {
        if (M2C_FIELD(&D_802002F0, u16 *, 2) != 0) {
            if ((u16) M2C_FIELD(&D_802002F0, u16 *, 0) < 0xDFU) {
                M2C_FIELD(&D_802002F0, u16 *, 0) = (u16) (M2C_FIELD(&D_802002F0, u16 *, 0) + 0x20);
            } else {
                goto block_6;
            }
        } else if ((u16) M2C_FIELD(&D_802002F0, u16 *, 0) >= 0x21U) {
            M2C_FIELD(&D_802002F0, u16 *, 0) = (u16) (M2C_FIELD(&D_802002F0, u16 *, 0) - 0x20);
        } else {
block_6:
            M2C_FIELD(&D_802002F0, u16 *, 2) = (u16) (M2C_FIELD(&D_802002F0, u16 *, 2) ^ 1);
        }
        if (M2C_FIELD(&D_802002EC, u16 *, 2) != 0) {
            if ((u16) M2C_FIELD(&D_802002EC, u16 *, 0) < 0xFBU) {
                M2C_FIELD(&D_802002EC, u16 *, 0) = (u16) (M2C_FIELD(&D_802002EC, u16 *, 0) + 4);
            } else {
                goto block_12;
            }
        } else if ((u16) M2C_FIELD(&D_802002EC, u16 *, 0) >= 5U) {
            M2C_FIELD(&D_802002EC, u16 *, 0) = (u16) (M2C_FIELD(&D_802002EC, u16 *, 0) - 4);
        } else {
block_12:
            M2C_FIELD(&D_802002EC, u16 *, 2) = (u16) (M2C_FIELD(&D_802002EC, u16 *, 2) ^ 1);
        }
    }
    func_801CA468(arg0, 0x64U);
    var_s0 = 0;
    if ((s32) *(&D_80232840 + (M2C_FIELD(&D_8006FAF0, u16 *, 0x20) * 2)) > 0) {
        do {
            temp_fv1 = (*(&D_8011F334 + ((D_80233EC0 + var_s0) * 0x64)) / 30.0f) + 160.0f;
            if (temp_fv1 >= 2.1474836e9f) {
                var_a1 = (s32) (temp_fv1 - 2.1474836e9f) | 0x80000000;
            } else {
                var_a1 = (s32) temp_fv1;
            }
            temp_fv1_2 = (*(&D_8011F33C + ((D_80233EC0 + var_s0) * 0x64)) / 30.0f) + 120.0f;
            if (!(temp_fv1_2 >= 2.1474836e9f)) {
                var_a2 = (s32) temp_fv1_2;
            } else {
                var_a2 = (s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000;
            }
            func_801CB74C(arg0, var_a1 & 0xFFFF, var_a2 & 0xFFFF, 8, &D_802002DC, &D_80203554);
            var_s0 += 1;
        } while (var_s0 < (s32) *((M2C_FIELD(&D_8006FAF0, u16 *, 0x20) * 2) + &D_80232840));
    }
    func_801CA468(arg0, M2C_FIELD(&D_802002F0, u16 *, 0));
    var_s0_2 = 0;
    var_v0 = 0 * 8;
    __repair_rows: {
        temp_fv1_3 = (*(&D_8011F308 + (*(&D_8022A772 + ((((var_v0 + var_s0_2) * 0x10) - var_s0_2) * 0x10)) * 0x64)) / 30.0f) + 160.0f;
        if (temp_fv1_3 >= 2.1474836e9f) {
            var_a1_2 = (s32) (temp_fv1_3 - 2.1474836e9f) | 0x80000000;
            var_v0_2 = var_s0_2 * 8;
        } else {
            var_a1_2 = (s32) temp_fv1_3;
            var_v0_2 = var_s0_2 * 8;
        }
        temp_fv1_4 = (*(&D_8011F310 + (*(&D_8022A772 + ((((var_v0_2 + var_s0_2) * 0x10) - var_s0_2) * 0x10)) * 0x64)) / 30.0f) + 120.0f;
        if (!(temp_fv1_4 >= 2.1474836e9f)) {
            var_a2_2 = (s32) temp_fv1_4;
            var_v0_3 = var_s0_2 * 8;
        } else {
            var_a2_2 = (s32) (temp_fv1_4 - 2.1474836e9f) | 0x80000000;
            var_v0_3 = var_s0_2 * 8;
        }
        var_s0_2 += 1;
        func_801CBDE8(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 8, *((*(&D_8022AFE9 + ((((var_v0_3 + var_s0_2) * 0x10) - var_s0_2) * 0x10)) * 4) + &D_802002D0), 1, var_s0_2 & 0xFFFF);
        var_v0 = var_s0_2 * 8;
    }
if (var_s0_2 < 6) goto __repair_rows;
    func_801CA468(arg0, M2C_FIELD(&D_802002EC, u16 *, 0));
    func_801CB74C(arg0, 0x18, 0x10, 8, &D_801D4FC0, &D_80203558);
}
