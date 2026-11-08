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

M2C_UNK func_800382AC(void *, void *);              /* extern */
M2C_UNK func_800382CC(void *, void **);             /* extern */
extern void *D_80046DF4;

s32 func_800300F0(void **arg0, s16 arg1) {
    s16 var_a1;
    s32 var_s1;
    s32 var_v0;
    void *var_s0;
    

    var_a1 = arg1;
    var_s0 = M2C_FIELD(D_80046DF4, void **, 0x20);
    var_s1 = 0;
    if ((var_s0 != NULL) || (var_s0 = M2C_FIELD(D_80046DF4, void **, 0x10), (var_s0 != NULL))) {
        *arg0 = var_s0;
        func_800382CC(var_s0, arg0);
        func_800382AC(var_s0, D_80046DF4 + 0x18);
        return 0;
    }
    var_s0 = M2C_FIELD(D_80046DF4, void **, 0x18);
    var_v0 = 0;
    if (var_s0 != NULL) {
        do {
            if ((var_a1 >= M2C_FIELD(M2C_FIELD(var_s0, void **, 8), s16 *, 0x16)) && (M2C_FIELD(var_s0, s32 *, 0x88) == 0)) {
                *arg0 = var_s0;
                var_s1 = 1;
                var_a1 = (s16) (u16) M2C_FIELD(M2C_FIELD(var_s0, void **, 8), s16 *, 0x16);
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0);
            var_v0 = var_s1;
        } while (var_s0 != NULL);
    }
    return var_v0;
}
