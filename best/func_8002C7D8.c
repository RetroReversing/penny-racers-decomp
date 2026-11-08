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

M2C_UNK func_8002C858(void *);                      /* extern */
s32 func_8002D0CC(void *, void *);                  /* extern */
M2C_UNK func_8002D164(void *, s16 *, s32);          /* extern */

s32 func_8002C7D8(void *arg0) {
    s16 sp10;
    s32 temp_v0;
    void *var_a0;

    __repair_rows: {
        if (M2C_FIELD(arg0, s16 *, 0x28) == 5) {
            sp10 = 5;
            func_8002D164(arg0 + 0x14, &sp10, M2C_FIELD(arg0, s32 *, 0x48));
            var_a0 = arg0 + 0x14;
        } else {
            func_8002C858(arg0 + 0x28);
            var_a0 = arg0 + 0x14;
        }
        temp_v0 = func_8002D0CC(var_a0, arg0 + 0x28);
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_v0;
    }
if (temp_v0 == 0) goto __repair_rows;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + temp_v0);
    return M2C_FIELD(arg0, s32 *, 0x4C);
}
