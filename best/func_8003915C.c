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

s32 func_80039350();
s32 func_800393E4();
s32 func_80039478();
extern s32 *D_800473B0;

void *func_8003915C(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    void *sp18;
    s16 sp1C;
    s32 *temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s5;
    void *temp_s0;
    void *var_s4;

    temp_s2 = D_800473B0;
    var_s3 = arg3;
    var_s4 = arg0;
    var_s5 = arg2;
    sp1C = 0;
    if (M2C_FIELD(temp_s2, s32 *, 0) == 0) {
        *arg1 = 0;
    } else {
        temp_v0 = func_80039478(temp_s2, &sp18);
        M2C_FIELD(temp_s2, s32 *, 0x1C) = temp_v0;
        if ((temp_v0 - M2C_FIELD(temp_s2, s32 *, 0x20)) < var_s3) {
            do {
                M2C_FIELD(temp_s2, s32 *, 0x1C) &= ~0xF;
                M2C_FIELD(sp18, s32 *, 0x10) += func_800393E4(temp_s2, M2C_FIELD(sp18, s32 (**)(void *), 8)(sp18));
                temp_v0_2 = func_80039478(temp_s2, &sp18, sp18);
                M2C_FIELD(temp_s2, s32 *, 0x1C) = temp_v0_2;
            } while ((temp_v0_2 - M2C_FIELD(temp_s2, s32 *, 0x20)) < var_s3);
        }
        M2C_FIELD(temp_s2, s32 *, 0x1C) &= ~0xF;
        if (var_s3 > 0) {
            do {
                var_s1 = M2C_FIELD(temp_s2, s32 *, 0x48);
                if (var_s3 < var_s1) {
                    var_s1 = var_s3;
                }
                M2C_FIELD(var_s4, s32 *, 0) = 0x07000000;
                M2C_FIELD(var_s4, s32 *, 4) = 0;
                temp_s0 = M2C_FIELD(temp_s2, void **, 0x38);
                var_s3 -= var_s1;
                M2C_FIELD(temp_s0, s32 (**)(void *, s32, s32), 8)(temp_s0, 6, var_s5);
                var_s4 = M2C_FIELD(temp_s0, void *(**)(void *, s16 *, s32, s32, void *), 4)(temp_s0, &sp1C, var_s1, M2C_FIELD(temp_s2, s32 *, 0x20), var_s4 + 8);
                var_s5 += var_s1 * 4;
                M2C_FIELD(temp_s2, s32 *, 0x20) += var_s1;
            } while (var_s3 > 0);
        }
        *arg1 = (s32) (var_s4 - arg0) >> 3;
        func_80039350(temp_s2);
    }
    return var_s4;
}
