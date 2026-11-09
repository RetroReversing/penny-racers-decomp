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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32);                         /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, f32, f32, f32, s32); /* extern */
s32 func_801FA30C();                                /* extern */
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F350;
extern f64 D_80183970;
extern f64 D_80183978;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D6D6;
extern M2C_UNK D_802390C8;
extern M2C_UNK func_8015CF2C;
extern M2C_UNK func_8015CFD8;
extern M2C_UNK func_8015D368;

void func_8015CB40(s32 arg0) {
    f64 temp_fs0;
    f64 temp_fs1;
    f64 var_fv0;
    f64 var_fv0_2;
    f64 var_fv0_3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 var_s0;
    s32 var_s6;

    temp_v0 = func_8013E364();
    var_s0 = temp_v0 & 0xFFFF;
    if (var_s0 != 0xFFFF) {
        temp_v0_2 = (arg0 & 0xFFFF) * 0x64;
        temp_v0_3 = func_800DE41C(0, 0, 3, 0, 0x20, 1, NULL, &func_8015CF2C, NULL, *(&D_8011F308 + temp_v0_2), *(&D_8011F30C + temp_v0_2), *(&D_8011F310 + temp_v0_2), 0, 0, 0, 0, 0, 0);
        if ((u32) ((temp_v0_3 + 2) & 0xFFFF) >= 2U) {
            var_s0 = temp_v0 & 0xFFFF;
            func_8013E818(var_s0, temp_v0_3 & 0xFFFF, 0, 0.0f, 0.0f, 0.0f, 3);
            *(&D_8018D6C4 + (var_s0 * 0x7C)) = M2C_FIELD(*(&D_8011F350 + ((arg0 & 0xFFFF) * 0x64)), s32 *, 4);
            var_s6 = 0;
            temp_s5 = (arg0 & 0xFFFF) * 0x64;
            temp_fs1 = D_80183970;
            temp_fs0 = D_80183978;
loop_6:
            temp_v0_4 = func_8013E364();
            var_s0 = temp_v0_4 & 0xFFFF;
            if (var_s0 != 0xFFFF) {
                temp_v0_5 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xC8, &D_802390C8, &func_8015CFD8, &func_8015D368, *(&D_8011F308 + temp_s5), *(&D_8011F30C + temp_s5), *(&D_8011F310 + temp_s5), 0, 0, 0, 0x3DCCCCCD, 0x3DCCCCCD, 0x3DCCCCCD);
                if ((u32) ((temp_v0_5 + 2) & 0xFFFF) >= 2U) {
                    temp_v0_6 = func_801FA30C() & 0x3F;
                    var_fv0 = (f64) temp_v0_6;
                    if (temp_v0_6 < 0) {
                        var_fv0 += temp_fs1;
                    }
                    temp_v0_7 = func_801FA30C() & 0x1F;
                    var_fv0_2 = (f64) temp_v0_7;
                    if (temp_v0_7 < 0) {
                        var_fv0_2 += temp_fs1;
                    }
                    temp_v0_8 = func_801FA30C() & 0x3F;
                    var_fv0_3 = (f64) temp_v0_8;
                    if (temp_v0_8 < 0) {
                        var_fv0_3 += temp_fs1;
                    }
                    temp_s1 = temp_v0_4 & 0xFFFF;
                    func_8013E818(temp_s1, temp_v0_5 & 0xFFFF, 0x40, (f32) ((f64) (s16) (s32) ((f32) var_fv0 - 32.0f) * temp_fs0), (f32) ((f64) (s16) (s32) (f32) var_fv0_2 * temp_fs0), (f32) ((f64) (s16) (s32) ((f32) var_fv0_3 - 32.0f) * temp_fs0), func_801FA30C() & 8);
                    *(&D_8018D6D6 + (temp_s1 * 0x7C)) = 1;/*__repair_loop_weight*/do {
                    var_s6 += 1;} while (0);
                    if ((u32) (var_s6 & 0xFFFF) >= 0xAU) {

                    } else {
                        goto loop_6;
                    }
                } else {
                    goto block_4;
                }
            }
        } else {
block_4:
            func_8013E49C(var_s0);
        }
    }
}
