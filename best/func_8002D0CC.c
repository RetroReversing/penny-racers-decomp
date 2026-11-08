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
M2C_UNK func_800382AC(void *, void *);              /* extern */
M2C_UNK func_800382CC(void *);                      /* extern */
M2C_UNK func_80038390(void *, s16 *, M2C_UNK);      /* extern */

s32 func_8002D0CC(void *arg0, s16 *arg1) {
    s32 temp_s3;
    s32 var_s0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    temp_s3 = func_800339C0(1);
    if (temp_s0 != NULL) {
        func_800382CC(temp_s0);
        func_80038390(temp_s0 + 0xC, arg1, 0x10);
        func_800382AC(temp_s0, arg0);
        var_s0 = M2C_FIELD(temp_s0, s32 *, 8);
    } else {
        *arg1 = -1;
        var_s0 = 0;
    }
    func_800339C0(temp_s3);
    return var_s0;
}
