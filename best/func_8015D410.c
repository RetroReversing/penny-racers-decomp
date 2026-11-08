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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32, s32);                    /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_801684D8;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D6D6;
extern M2C_UNK D_802395A8;
extern M2C_UNK D_802395DC;
extern M2C_UNK func_8015D7F0;
extern M2C_UNK func_8015DC9C;
extern M2C_UNK func_8015DD80;
extern M2C_UNK func_8015E240;
extern M2C_UNK func_8015E404;
extern M2C_UNK func_8015E484;

void func_8015D410(s32 arg0, M2C_UNK arg1, s32 arg2, s8 arg3) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 var_a1;
    s32 var_s1;

    temp_v0 = func_8013E364();
    var_s1 = temp_v0 & 0xFFFF;
    if (var_s1 != 0xFFFF) {
        temp_v0_2 = (arg0 & 0xFFFF) * 0x64;
        var_a1 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, &D_801684D8, &func_8015D7F0, &func_8015E240, *(&D_8011F308 + temp_v0_2), *(&D_8011F30C + temp_v0_2), *(&D_8011F310 + temp_v0_2), 0, 0, 0, 1.0f, 1.0f, 1.0f);
        temp_s0 = temp_v0 & 0xFFFF;
        if ((u32) ((var_a1 + 2) & 0xFFFF) >= 2U) {
            func_8013E818(temp_s0, var_a1 & 0xFFFF, 0, arg1, 0, 0, 3);
            temp_v0_3 = temp_s0 * 0x7C;
            *(&D_8018D6C4 + temp_v0_3) = arg2;
            *(&D_8018D6D6 + temp_v0_3) = arg3;
            temp_v0_4 = func_8013E364();
            var_s1 = temp_v0_4 & 0xFFFF;
            if (var_s1 != 0xFFFF) {
                temp_v0_5 = (arg0 & 0xFFFF) * 0x64;
                var_a1 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, &D_802395A8, &func_8015DC9C, &func_8015E404, *(&D_8011F308 + temp_v0_5), *(&D_8011F30C + temp_v0_5), *(&D_8011F310 + temp_v0_5), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                temp_s0_2 = temp_v0_4 & 0xFFFF;
                if ((u32) ((var_a1 + 2) & 0xFFFF) >= 2U) {
                    func_8013E818(temp_s0_2, var_a1 & 0xFFFF, 0, arg1, 0, 0, 0);
                    temp_v0_6 = temp_s0_2 * 0x7C;
                    *(&D_8018D6C4 + temp_v0_6) = arg2;
                    *(&D_8018D6D6 + temp_v0_6) = arg3;
                    temp_v0_7 = func_8013E364();
                    var_s1 = temp_v0_7 & 0xFFFF;
                    if (var_s1 != 0xFFFF) {
                        temp_v0_8 = (arg0 & 0xFFFF) * 0x64;
                        var_a1 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, &D_802395DC, &func_8015DD80, &func_8015E484, *(&D_8011F308 + temp_v0_8), *(&D_8011F30C + temp_v0_8), *(&D_8011F310 + temp_v0_8), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        temp_s0_3 = temp_v0_7 & 0xFFFF;
                        if ((u32) ((var_a1 + 2) & 0xFFFF) < 2U) {
                            goto block_6;
                        }
                        func_8013E818(temp_s0_3, var_a1 & 0xFFFF, 0, arg1, 0, 0, 0);
                        temp_v0_9 = temp_s0_3 * 0x7C;
                        *(&D_8018D6C4 + temp_v0_9) = arg2;
                        *(&D_8018D6D6 + temp_v0_9) = arg3;
                    }
                } else {
                    goto block_6;
                }
            }
        } else {
block_6:
            func_8013E49C(var_s1, var_a1);
        }
    }
}
