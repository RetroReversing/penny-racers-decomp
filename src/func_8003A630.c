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

M2C_UNK func_80033E30(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_8003A754();                            /* extern */
s32 func_8003F350(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_8003F464();                            /* extern */
M2C_UNK func_8003F4D0();                            /* extern */
extern M2C_UNK D_8006F990;
extern u8 D_80092C04;

s32 func_8003A630(s32 arg0) {
    s32 temp_v0;

    func_8003F464();
    if (D_80092C04 != 1) {
        func_8003A754();
        func_8003F350(1, &D_8006F990);
        func_80033E30(arg0, 0, 1);
    }
    temp_v0 = func_8003F350(0, &D_8006F990);
    D_80092C04 = 1;
    func_8003F4D0();
    return temp_v0;
}
