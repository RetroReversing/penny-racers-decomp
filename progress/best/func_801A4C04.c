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

extern char D_801C5EB0[];
extern char D_801C5ED0[];
extern char D_801C7081[];
extern char D_801C7084[];
extern void *D_801C7AB0;

s32 func_801A4C04(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a0;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1;
    u8 var_a1;
    u8 var_a3;

    var_t0 = 0;
    if ((arg1 & 0xFF) == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
        return 0;
    }
    if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 3) {
        var_a3 = *(D_801C7084 + ((arg1 & 0xFF) * 5));
        var_v1 = arg0 & 0xFF;
    } else {
        var_a3 = *(D_801C7084 + ((arg1 & 0xFF) * 5)) - 0x2E;
        var_v1 = arg0 & 0xFF;
    }
    var_a0 = (arg1 & 0xFF) * 5;
    var_v0 = 0 & 0xFF;
    if (*(D_801C7081 + (var_v1 * 5)) == *(D_801C7081 + var_a0)) {
        if ((u32) ((var_a3 - 5) & 0xFF) < 5U) {
            var_a1 = *(D_801C5ED0 + (arg2 & 0xFF));
            goto block_10;
        }
        if ((u32) ((var_a3 - 0x20) & 0xFF) < 5U) {
            var_a0 = (arg1 & 0xFF) * 5;
            *(D_801C7081 + var_a0) = 0x3C;
            var_a1 = *(D_801C5EB0 + (arg2 & 0xFF));
block_10:
            *(D_801C7084 + var_a0) = var_a1;
            var_t0 = 1;
            if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 4) {
                *(D_801C7084 + var_a0) = var_a1 + 0x2E;
            }
        }
        var_v0 = var_t0 & 0xFF;
    }
    return var_v0;
}
