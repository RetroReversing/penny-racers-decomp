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

M2C_UNK func_8002ADD0(void *, void *);              /* extern */
s32 func_80038340(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, s32); /* extern */
extern M2C_UNK D_8006E780;
extern M2C_UNK D_8006FB38;
extern M2C_UNK D_8006FCAC;

void func_80027AB0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_8006E780;
    temp_v1 = arg2 * 0x184;
    *(&D_8006FCAC + temp_v1) = func_80038340(0, 0, &D_8006E780, 1, arg1);
    func_8002ADD0(temp_v1 + &D_8006FB38, arg0);
}
