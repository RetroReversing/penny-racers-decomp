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

s32 func_800294A0();
s32 func_8002C210();
s32 func_80035B50();
void *func_80038340();
extern char D_8006E780[];
extern char D_8006FB38[];
extern void *D_800DA1E4;

void func_80027B40(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    void *temp_v0;

    temp_v0 = func_80038340(0, 0, &D_8006E780, 1, arg1);
    D_800DA1E4 = temp_v0;
    func_800294A0(arg0, temp_v0, arg1);
    func_80035B50(D_800DA1E4, arg2);
    temp_s1 = M2C_FIELD(D_800DA1E4, s32 *, 4);
    func_8002C210(&D_8006FB38, temp_s1);
    func_8002C210(D_8006FB38 + 0x184, temp_s1);
}
