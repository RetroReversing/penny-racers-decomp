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

extern char D_80000000[];
extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F32E[];
extern char D_8011F334[];

void func_801348C8(s32 arg0) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    s16 var_v0_3;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 temp_v1;
    u32 var_v0_2;
    u8 temp_a1;

    temp_v1 = *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
        temp_a1 = *(D_8011F2FC + temp_v1_2) + 8;
        if (temp_a1 >= 0xFFU) {
            *(D_8011F2FC + temp_v1_2) = 0xFF;
            var_v1 = arg0 & 0xFFFF;
        } else {
            *(D_8011F2FC + ((arg0 & 0xFFFF) * 0x64)) = temp_a1;
            var_v1 = arg0 & 0xFFFF;
        }
        temp_a2 = var_v1 * 0x64;
        temp_fv1 = *(D_8011F334 + temp_a2);
        if (temp_fv1 >= 2.1474836e9f) {
            var_v0 = (s32) (temp_fv1 - 2.1474836e9f) | (s32) (D_80000000 + 1);
        } else {
            var_v0 = (s32) temp_fv1 + 1;
        }
        *(D_8011F334 + temp_a2) = (f32) (var_v0 & 0xFFFF);
        temp_fv1_2 = *(D_8011F334 + ((arg0 & 0xFFFF) * 0x64));
        if (temp_fv1_2 >= 2.1474836e9f) {
            var_v0_2 = ((s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
        } else {
            var_v0_2 = (s32) temp_fv1_2 & 0xFFFF;
        }
        if (var_v0_2 >= 0x79U) {
            temp_fv1_3 = *(D_8011F310 + ((arg0 & 0xFFFF) * 0x64));
            if (temp_fv1_3 >= 2.1474836e9f) {
                var_v1_2 = ((s32) (temp_fv1_3 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
            } else {
                var_v1_2 = (s32) temp_fv1_3 & 0xFFFF;
            }
            if (var_v1_2 == 0xFF) {
                temp_v0 = (arg0 & 0xFFFF) * 0x64;
                *(D_8011F2FD + temp_v0) = 2;
                *(D_8011F32E + temp_v0) = 3;
                return;
            }
            var_v1_3 = (arg0 & 0xFFFF) * 0x64;
            var_v0_3 = 1;
block_38:
            *(D_8011F32E + var_v1_3) = var_v0_3;
        } else {
            return;
        }
        break;
    case 1:
        temp_v0_2 = arg0 & 0xFFFF;
        temp_v1_3 = temp_v0_2 * 0x64;
        temp_fv1_4 = *(D_8011F308 + temp_v1_3);
        if (!(temp_fv1_4 > -80.0f)) {
            var_v1_3 = temp_v0_2 * 0x64;
            var_v0_3 = 2;
            goto block_38;
        }
        *(D_8011F308 + temp_v1_3) = temp_fv1_4 - 1.0f;
        return;
    case 2:
        temp_v1_4 = (arg0 & 0xFFFF) * 0x64;
        temp_fv1_5 = *(D_8011F30C + temp_v1_4);
        if (temp_fv1_5 > -36.0f) {
            *(D_8011F30C + temp_v1_4) = temp_fv1_5 - 1.0f;
            return;
        }
        var_v1_3 = (arg0 & 0xFFFF) * 0x64;
        var_v0_3 = 3;
        goto block_38;
    }
}
