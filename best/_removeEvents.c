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

s32 func_800339C0(s32);                             /* extern */
M2C_UNK alLink(void *, void *);              /* extern */
M2C_UNK alUnlink(void *);                      /* extern */

void _removeEvents(void *arg0, s32 arg1) {
    s32 temp_s4;
    void *temp_s1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 8);
    temp_s4 = func_800339C0(1);
    if (var_s0 != NULL) {
        do {
            temp_s1 = M2C_FIELD(var_s0, void **, 0);
            if (M2C_FIELD(var_s0, s32 *, 0x10) == arg1) {
                if (temp_s1 != NULL) {
                    M2C_FIELD(temp_s1, s32 *, 8) = (s32) (M2C_FIELD(temp_s1, s32 *, 8) + M2C_FIELD(var_s0, s32 *, 8));
                }
                alUnlink(var_s0);
                alLink(var_s0, arg0);
            }
            var_s0 = temp_s1;
        } while (var_s0 != NULL);
    }
    func_800339C0(temp_s4);
}
