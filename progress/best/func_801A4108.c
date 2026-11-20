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

extern char D_801C7084[];
extern void *D_801C7AB0;

s32 func_801A4108(s32 arg0) {
    s32 var_v0;
    s32 var_v1;
    u8 var_a1;

    if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 3) {
        var_v1 = arg0 & 0xFF;
        var_a1 = *(D_801C7084 + (var_v1 * 5));
    } else {
        var_a1 = *(D_801C7084 + ((arg0 & 0xFF) * 5)) - 0x2E;
        var_v1 = arg0 & 0xFF;
    }
    if (var_v1 != 0xFF) {
        if (((arg0 & 0xFF) == M2C_FIELD(D_801C7AB0, u8 *, 2)) || ((var_v0 = 1, (((u32) ((var_a1 - 5) & 0xFF) < 5U) == 0)) && (var_v0 = 1, ((((u32) ((var_a1 - 0x20) & 0xFF) < 0xAU) | ((s8) var_a1 == 0x2A)) == 0)) && (var_v0 = 0, ((s8) var_a1 == 0x2B)))) {
            return 1;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 0;
    return var_v0;
}
