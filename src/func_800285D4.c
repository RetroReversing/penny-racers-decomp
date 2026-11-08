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

M2C_UNK osSendMesg(s32, u16 *, M2C_UNK);         /* extern */
extern void *D_800DDE88;

void func_800285D4(u16 *arg0) {
    void *var_s0;

    var_s0 = D_800DDE88;
    if (var_s0 != NULL) {
        do {
            if (M2C_FIELD(var_s0, u16 *, 8) & *arg0) {
                osSendMesg(M2C_FIELD(var_s0, s32 *, 4), arg0, 0);
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0);
        } while (var_s0 != NULL);
    }
}
