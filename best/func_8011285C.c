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

f32 func_80033640(f32);                             /* extern */
M2C_UNK func_8013AE60(s32);                         /* extern */
extern f64 D_80183840;
extern f64 D_80183848;
extern M2C_UNK D_802B2784;
extern M2C_UNK func_8016D3AC;

void func_8011285C(s32 arg0) {
    f64 temp_fs0;
    f64 temp_fs1;
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    u16 *temp_a0;
    u16 temp_v1;

    func_8013AE60(arg0 & 0xFFFF);
    var_s2 = 0;
    var_v0 = 0 * 2;
    do {
        temp_a0 = var_v0 + (&func_8016D3AC + 0x514);
        temp_v1 = *temp_a0 + *(var_v0 + (&func_8016D3AC + 0x51C));
        *temp_a0 = temp_v1;
        var_s2 += 1;
        if ((u16) *temp_a0 >= 0x169U) {
            *temp_a0 = temp_v1 - 0x168;
        }
        var_v0 = var_s2 * 2;
    } while (var_s2 < 2);
    var_s2_2 = 0;
    temp_fs1 = D_80183840;
    temp_fs0 = D_80183848;
    var_s1 = 2;
    __repair_rows: {
        temp_s0 = var_s2_2 * 2;
        *(&D_802B2784 + (var_s1 * 0x10)) = (s16) (s32) (func_80033640((f32) (((f64) *(temp_s0 + (&func_8016D3AC + 0x514)) * temp_fs1) / temp_fs0)) * (f32) *(temp_s0 + (&func_8016D3AC + 0x518)));
        var_s2_2 += 1;
        var_s1 = var_s2_2 + 2;
    }
if (var_s2_2 < 2) goto __repair_rows;
}
