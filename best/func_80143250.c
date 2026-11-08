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

f32 __cosf(f32);                                    /* extern */
f32 __sinf(f32);                                    /* extern */
s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8016891C;
extern M2C_UNK D_802390C8;
extern M2C_UNK func_801434CC;
extern M2C_UNK func_801435A8;

void func_80143250(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u16 arg6, u16 arg7, u8 arg8, u8 arg9) {
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fv0;
    f32 var_fs3;
    s32 temp_v0;
    s32 var_s0;
    void *temp_s2;
    void *temp_v0_2;

    temp_s2 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    if (arg9 != 0) {
        var_fs3 = *(&D_8016891C + (M2C_FIELD(temp_s2, u16 *, 0x40) * 0x5C));
    } else {
        var_fs3 = M2C_FIELD(temp_s2, f32 *, 0x1C);
    }
    var_s0 = 0;
    if (arg6 != 0) {
        do {
            temp_fs0 = (((f32) var_s0 * (360.0f / (f32) (arg6 & 0xFFFF))) + arg5) * 0.0174f;
            temp_fs1 = __sinf(temp_fs0);
            temp_fv0 = __cosf(temp_fs0);
            temp_v0 = func_800DE41C(0, 0, 1, 0, 0x5B, arg8 & 0xFF, &D_802390C8, &func_801434CC, &func_801435A8, (temp_fs1 * arg4) + M2C_FIELD(temp_s2, f32 *, 0x18), var_fs3, (temp_fv0 * arg4) + M2C_FIELD(temp_s2, f32 *, 0x20), 0, 0, 0, arg3, arg3, arg3);
            var_s0 += 1;
            if ((u32) ((temp_v0 + 2) & 0xFFFF) >= 2U) {
                temp_v0_2 = ((temp_v0 & 0xFFFF) * 0x64) + &D_8011F2F0;
                M2C_FIELD(temp_v0_2, s16 *, 8) = 0x40;
                M2C_FIELD(temp_v0_2, s16 *, 6) = 0x40;
                M2C_FIELD(temp_v0_2, s16 *, 4) = 0x40;
                M2C_FIELD(temp_v0_2, s16 *, 2) = 0x40;
                M2C_FIELD(temp_v0_2, f32 *, 0x44) = (f32) (temp_fs1 * arg2);
                M2C_FIELD(temp_v0_2, f32 *, 0x4C) = (f32) (temp_fv0 * arg2);
                M2C_FIELD(temp_v0_2, s32 *, 0x48) = arg1;
                M2C_FIELD(temp_v0_2, u16 *, 0x40) = arg7;
            }
        } while (var_s0 < (arg6 & 0xFFFF));
    }
}
