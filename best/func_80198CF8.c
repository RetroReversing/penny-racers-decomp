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

M2C_UNK func_801FE948();                            /* extern */
M2C_UNK func_801FE954(s32);                         /* extern */
M2C_UNK func_801FF37C(s32);                         /* extern */
extern s32 D_80203AC0;

void func_80198CF8(s32 arg0) {
    if (D_80203AC0 != 0) {
        if (D_80203AC0 != 1) {
            func_801FE948();
            return;
        }
        func_801FF37C(arg0 & 0xFFFF);
        return;
    }
    func_801FE954(arg0 & 0xFFFF);
    func_801FE948();
}
