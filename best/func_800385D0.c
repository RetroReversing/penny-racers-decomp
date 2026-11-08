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

s32 func_800385D0(void *arg0, u32 *arg1) {
    u32 temp_v1;
    u32 var_a3;
    u32 var_t0;
    void *var_a2;

    var_t0 = -1U;
    if (M2C_FIELD(arg0, u32 *, 4) == 0) {
        return 0;
    }
    var_a3 = 0;
    var_a2 = arg0;
    __repair_rows: {
        if (((u32) M2C_FIELD(arg0, u32 *, 4) >> var_a3) & 1) {
            if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                M2C_FIELD(var_a2, u32 *, 0xB8) = (u32) (M2C_FIELD(var_a2, u32 *, 0xB8) - M2C_FIELD(arg0, s32 *, 0x10));
            }
            temp_v1 = M2C_FIELD(var_a2, u32 *, 0xB8);
            if (temp_v1 < var_t0) {
                var_t0 = temp_v1;
            }
        }
        var_a3 += 1;
        var_a2 += 4;
    }
if (var_a3 < 0x10U) goto __repair_rows;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    *arg1 = var_t0;
    return 1;
}
