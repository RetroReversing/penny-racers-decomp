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
extern char D_8011F2F0[];
extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F334[];
extern char D_8022AFE9[];

void func_80133F54(s32 arg0) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fv0;
    f32 var_fv1;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_a1;
    s32 var_v0_3;
    u32 var_v0;
    u32 var_v0_2;

    temp_a1 = (arg0 & 0xFFFF) * 0x64;
    if (*(D_8022AFE9 + (*(D_8011F2F0 + temp_a1) * 0x8F0)) == 5) {
        *(D_8011F2FD + temp_a1) = 2;
        return;
    }
    temp_a1_2 = (arg0 & 0xFFFF) * 0x64;
    if (*(D_8011F2FC + temp_a1_2) != 3) {
        temp_fv1 = *(D_8011F334 + ((arg0 & 0xFFFF) * 0x64));
        if (temp_fv1 >= 2.1474836e9f) {
            var_v0 = ((s32) (temp_fv1 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
        } else {
            var_v0 = (s32) temp_fv1 & 0xFFFF;
        }
        if (var_v0 < 0x166U) {
            var_a1 = (arg0 & 0xFFFF) * 0x64;
            var_fv1 = *(D_8011F334 + var_a1);
            if (var_fv1 >= 2.1474836e9f) {
                var_fv0 = var_fv1 - 2.1474836e9f;
                goto block_23;
            }
            goto block_22;
            goto block_24;
        }
        goto block_25;
    }
    temp_fv1_2 = *(D_8011F334 + temp_a1_2);
    if (temp_fv1_2 >= 2.1474836e9f) {
        var_v0_2 = ((s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
    } else {
        var_v0_2 = (s32) temp_fv1_2 & 0xFFFF;
    }
    if (var_v0_2 < 0x9EU) {
        var_a1 = (arg0 & 0xFFFF) * 0x64;
        var_fv1 = *(D_8011F334 + var_a1);
        if (var_fv1 >= 2.1474836e9f) {
            var_fv0 = var_fv1 - 2.1474836e9f;
block_23:
            var_v0_3 = (s32) var_fv0 | (s32) (D_80000000 + 1);
        } else {
block_22:
            var_v0_3 = (s32) var_fv1 + 1;
        }
block_24:
        *(D_8011F334 + var_a1) = (f32) (var_v0_3 & 0xFFFF);
        return;
    }
block_25:
    *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
}
