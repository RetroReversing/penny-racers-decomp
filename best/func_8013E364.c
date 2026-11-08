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

s32 func_8013E364(void) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_a1;

    if (D_80187BE0 == 0) {
        var_v0 = 0xFFFF;
        if (*(D_8018D73A + ((D_8018F5C2 & 0xFFFF) * 0x7C)) != 0xFFFF) {
            var_v1 = D_8018F5C2 & 0xFFFF;
            var_v0_2 = var_v1 << 5;
            do {
                var_v1 = *(D_8018D73A + ((var_v0_2 - var_v1) * 4)) & 0xFFFF;
                var_v0_2 = var_v1 << 5;
            } while (*(D_8018D73A + (var_v1 * 0x7C)) != 0xFFFF);
            return 0xFFFF;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_a1 = D_8018F5C2;
    D_8018F5C2 = *(D_8018D73A + (D_8018F5C2 * 0x7C));
    *(D_8018D73A + ((temp_a1 & 0xFFFF) * 0x7C)) = 0xFFFF;
    if (D_8018F5C2 != 0xFFFF) {
        *(D_8018D738 + (D_8018F5C2 * 0x7C)) = 0xFFFF;
    }
    D_80187BE0 -= 1;
    var_v0 = temp_a1 & 0xFFFF;
    if (D_80187BE0 == 0) {
        D_80189DC2 = 0xFFFF;
        var_v0 = temp_a1 & 0xFFFF;
    }
    return var_v0;
}
