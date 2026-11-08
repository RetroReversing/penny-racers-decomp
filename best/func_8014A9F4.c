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

s32 func_80146E4C(s32);                             /* extern */
extern M2C_UNK D_800DA26A;
extern M2C_UNK D_80187BF0;
extern s16 D_80187C00;
extern M2C_UNK D_80203080;

void func_8014A9F4(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_v0;
    s32 var_v1;
    u16 *temp_v1;

    if (!(arg0 & 0x700)) {
        var_a2 = 0;
        var_v0 = 0 * 2;
        do {
            *(var_v0 + &D_80187BF0) = *(var_v0 + (((arg0 & 0xFF) * 0x12) + ((arg1 * 0x178) + (&D_800DA26A + 0x64))));
            var_a2 += 1;
            var_v0 = var_a2 * 2;
        } while (var_a2 < 8);
    } else {
        temp_a1 = *(&D_80203080 + ((func_80146E4C(arg0 & 0xFFFF) & 0xFFFF) * 4));
        var_a2_2 = 0;
        var_v1 = 0 * 2;
loop_5:
        temp_v1 = var_v1 + temp_a1;
        *(var_v1 + &D_80187BF0) = *temp_v1;
        if (*temp_v1 != 0xFFFF) {
            var_a2_2 += 1;
            var_v1 = var_a2_2 * 2;
            if (var_a2_2 >= 8) {

            } else {
                goto loop_5;
            }
        }
    }
    D_80187C00 = 0xFFFF;
}
