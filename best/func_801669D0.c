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

s32 func_800DE41C(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, s32, M2C_UNK32, f32, M2C_UNK32, s32, f32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32, s32);                    /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK32, s32); /* extern */
M2C_UNK func_801D7028(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F320;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8022A770;
extern M2C_UNK D_8022A772;
extern M2C_UNK D_8022ACD0;
extern M2C_UNK D_8022AED0;
extern M2C_UNK D_80239540;
extern M2C_UNK func_80166DC0;
extern M2C_UNK func_8016711C;

void func_801669D0(void *arg0) {
    s16 temp_v0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    u16 temp_v1;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x898);
    if ((temp_s0 == 1) && !(M2C_FIELD(arg0, u16 *, 0x560) & 0x4F) && (temp_v0 = func_8013E364(), var_s2 = temp_v0 & 0xFFFF, (var_s2 != 0xFFFF))) {
        var_a1 = func_800DE41C(0, 0U, 3, 0, 0x20, temp_s0, NULL, &func_80166DC0, 0, 0, 0.0f, 0, 0, 0.0f, 0, 0, 0, 0);
        temp_s0_2 = temp_v0 & 0xFFFF;
        if ((u32) ((var_a1 + 2) & 0xFFFF) < 2U) {
            goto block_4;
        }
        func_8013E818(temp_s0_2, var_a1 & 0xFFFF, 0, 0, 0, 0, 0x136);
        *(&D_8018D6C4 + (temp_s0_2 * 0x7C)) = arg0;
        M2C_FIELD(arg0, u16 *, 0x560) = (u16) (M2C_FIELD(arg0, u16 *, 0x560) | 0x40);
        temp_v0_2 = M2C_FIELD(arg0, s16 *, 0x55E);
        if (temp_v0_2 > 0) {
            M2C_FIELD(arg0, s16 *, 0x55E) = (s16) (temp_v0_2 - 1);
        }
        var_s3 = 0;
        var_v0 = 0 * 8;
loop_8:
        temp_s0_3 = (((var_v0 + var_s3) * 0x10) - var_s3) * 0x10;
        temp_v1 = *(&D_8022A772 + temp_s0_3);
        if ((temp_v1 != 0xFFFF) && (temp_v1 != M2C_FIELD(arg0, u16 *, 2)) && !(*(&D_8022ACD0 + temp_s0_3) & 0x68)) {
            temp_v0_3 = func_8013E364();
            var_s2 = temp_v0_3 & 0xFFFF;
            if (var_s2 != 0xFFFF) {
                var_a1 = func_800DE41C(0, M2C_FIELD(arg0, u8 *, 5), 1, 0, 0x51, 0xFF, &D_80239540, &func_8016711C, 0, *(&D_8011F308 + (*(&D_8022A772 + temp_s0_3) * 0x64)), *(&D_8011F30C + (*(&D_8022A772 + temp_s0_3) * 0x64)) + 200.0f, *(&D_8011F310 + (*(&D_8022A772 + temp_s0_3) * 0x64)), 0, (f32) (var_s3 * 0x3C), 0, 0x3F800000, 0x3F800000, 0x3F800000);
                if ((u32) ((var_a1 + 2) & 0xFFFF) >= 2U) {
                    temp_s0_4 = var_s3 * 0x8F0;
                    *(&D_8022ACD0 + temp_s0_4) = *(&D_8022ACD0 + temp_s0_4) | 8;
                    *(&D_8022AED0 + temp_s0_4) = *(&D_8022AED0 + temp_s0_4) + 30000.0f;
                    temp_s2 = var_a1 & 0xFFFF;
                    func_801D7028(temp_s2, 0x36);
                    temp_s1 = temp_v0_3 & 0xFFFF;
                    func_8013E818(temp_s1, temp_s2, 0, 0, 0x43480000, *(&D_8011F320 + (*(&D_8022A772 + temp_s0_4) * 0x64)), 0x12C);
                    *(&D_8018D6C4 + (temp_s1 * 0x7C)) = temp_s0_4 + &D_8022A770;
                    goto block_14;
                }
block_4:
                func_8013E49C(var_s2, var_a1);
            }
        } else {
block_14:
            var_s3 += 1;
            var_v0 = var_s3 * 8;
            if (var_s3 >= 7) {

            } else {
                goto loop_8;
            }
        }
    }
}
