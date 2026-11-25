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

s32 func_8013AE60();
s32 func_80226A60();
s32 func_80226BA0();
s32 func_80228140();
s32 func_80228290();
extern char D_8011F2F0[];
extern char D_8011F350[];
extern u8 D_80233EC1;

void func_80226720(s32 arg0) {
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 temp_a0;
    s32 var_v0;
    s32 var_v1;
    u32 var_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_s1;
    s32 temp;

    do {
    temp_s0 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
    temp_s1 = *(D_8011F350 + (M2C_FIELD(temp_s0, u16 *, 0xE) * 0x64));
    temp_v1 = *M2C_FIELD(temp_s0, u8 **, 0x50);
    temp = (s32) temp_v1;
    } while (0);
    if (temp < 4) {
        if ((s32) temp_v1 < 2) {
            if (temp_v1 != 0) {
temp_a0 = arg0 & 0xFFFF;

            } else {
                *(D_8011F2F0 + (temp_a0 * 0x64)) = M2C_FIELD(temp_s1, u8 *, 0x7D1) - D_80233EC1;
                func_8013AE60();
            }
        } else {
            var_fv1 = (f32) M2C_FIELD(temp_s1, s8 *, 0x87B);
            var_v0 = 1;
            if (!(var_fv1 < 10.0f)) {
                var_v0 = 0;
            }
            var_v1 = 1;
            if (!(var_fv1 > -10.0f)) {
                var_v1 = 0;
            }
            if (var_v0 & var_v1) {
                var_fv1 = 0.0f;
            }
            M2C_FIELD(temp_s0, f32 *, 0x28) = (f32) ((var_fv1 - 10.0f) * -0.7f);
            var_fv1_2 = (M2C_FIELD(temp_s1, f32 *, 0x770) * 0.1f) + M2C_FIELD(temp_s0, f32 *, 0x24);
            M2C_FIELD(temp_s0, f32 *, 0x24) = var_fv1_2;
            if (var_fv1_2 > 360.0f) {
                if (var_fv1_2 >= 2.1474836e9f) {
                    var_fv0 = var_fv1_2 - 2.1474836e9f;
                    goto block_21;
                }
                goto block_20;
                goto block_22;
            }
        }
    } else if (temp_v1 != 4) {

    } else {
        var_fv1_2 = (M2C_FIELD(temp_s1, f32 *, 0x770) * 0.1f) + M2C_FIELD(temp_s0, f32 *, 0x24);
        M2C_FIELD(temp_s0, f32 *, 0x24) = var_fv1_2;
        if (var_fv1_2 > 360.0f) {
            if (var_fv1_2 >= 2.1474836e9f) {
                var_fv0 = var_fv1_2 - 2.1474836e9f;
block_21:
                var_v0_2 = ((s32) var_fv0 | 0x80000000) & 0xFFFF;
            } else {
block_20:
                var_v0_2 = (s32) var_fv1_2 & 0xFFFF;
            }
block_22:
            M2C_FIELD(temp_s0, f32 *, 0x24) -= ((f32) ((var_v0_2 / 360) & 0xFFFF) * 360.0f);
        }
    }
    if (M2C_FIELD(temp_s0, u8 *, 1) == 1) {
        temp_v1_2 = M2C_FIELD(temp_s1, u8 *, 0x879);
        switch (temp_v1_2) {
        case 0:
            func_80226A60(arg0 & 0xFFFF, temp_s1);
            return;
        case 1:
            func_80226BA0(arg0 & 0xFFFF, temp_s1);
            return;
        case 2:
            func_80228140(arg0 & 0xFFFF, temp_s1);
            return;
        case 4:
        case 5:
            func_80228290(arg0 & 0xFFFF, temp_s1);
            break;
        }
    } else {
    }
}
