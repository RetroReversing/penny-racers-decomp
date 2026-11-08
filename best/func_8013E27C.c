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

extern u16 D_80187BE0;
extern s16 D_80189DC2;
extern char D_8018D738[];
extern char D_8018D73A[];
extern u16 D_8018F5C2;

s32 func_8013E27C(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_t0;
    u16 var_a1;
    u32 temp_v0;

    var_v0 = 0xFFFF;
    if ((u16) D_80187BE0 >= (u32) (arg0 & 0xFFFF)) {
        var_a1 = D_8018F5C2;
        temp_t0 = var_a1;
        var_a0 = 0;
        temp_v0 = arg0 & 0xFFFF;
        if (temp_v0 != 0) {
            var_v0_2 = var_a1 & 0xFFFF;
            do {
                var_a1 = *(D_8018D73A + (var_v0_2 * 0x7C));
                var_a0 += 1;
                var_v0_2 = var_a1 & 0xFFFF;
            } while ((u32) (var_a0 & 0xFFFF) < temp_v0);
        }
        temp_v1 = (var_a1 & 0xFFFF) * 0x7C;
        *(D_8018D73A + (*(D_8018D738 + temp_v1) * 0x7C)) = 0xFFFF;
        *(D_8018D738 + temp_v1) = 0xFFFF;
        D_8018F5C2 = var_a1;
        D_80187BE0 -= arg0;
        var_v0 = temp_t0 & 0xFFFF;
        if (D_80187BE0 == 0) {
            D_80189DC2 = 0xFFFF;
        }
    }
    return var_v0;
}
