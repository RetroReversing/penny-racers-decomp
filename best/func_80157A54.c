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

f32 __sinf(f32);                                    /* extern */
M2C_UNK func_8013AE60(s32);                         /* extern */
extern M2C_UNK D_8016D898;
extern M2C_UNK D_8016D8A0;
extern M2C_UNK D_8016D8A8;
extern M2C_UNK D_8016D8B4;
extern f64 D_80183830;
extern f64 D_80183838;
extern M2C_UNK D_802B27C4;

void func_80157A54(s32 arg0) {
    f64 temp_fs0;
    f64 temp_fs1;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    u16 *temp_v1;
    u16 temp_a0;

    func_8013AE60(arg0 & 0xFFFF);
    var_s2 = 0;
    var_v0 = 0 * 2;
    do {
        temp_v1 = var_v0 + &D_8016D8A8;
        temp_a0 = *temp_v1;
        *temp_v1 = temp_a0 + 0xC;
        var_s2 += 1;
        if ((u16) *temp_v1 >= 0x169U) {
            *temp_v1 = temp_a0 - 0x15C;
        }
        var_v0 = var_s2 * 2;
    } while (var_s2 < 5);
    var_s2_2 = 0;
    temp_fs1 = D_80183830;
    temp_fs0 = D_80183838;
    __repair_rows: {
        temp_s1 = *(&D_8016D898 + var_s2_2) * 0x10;
        temp_s0 = var_s2_2 * 2;
        *(&D_802B27C4 + temp_s1) = (s16) (s32) (__sinf((f32) (((f64) *(temp_s0 + &D_8016D8A8) * temp_fs1) / temp_fs0)) * (f32) *(temp_s0 + &D_8016D8B4));
        *(&D_802B27C4 + (*(&D_8016D8A0 + var_s2_2) * 0x10)) = *(&D_802B27C4 + (*(&D_8016D898 + var_s2_2) * 0x10));
        var_s2_2 += 1;
    }
if (var_s2_2 < 5) goto __repair_rows;
}
