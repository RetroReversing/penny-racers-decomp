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

M2C_UNK func_800DE41C(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_800DEFF8();                            /* extern */
M2C_UNK func_801DD938(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_801DDA5C();                            /* extern */
extern s8 D_801F1888;
extern M2C_UNK func_801E2020;
extern M2C_UNK func_801E3640;
extern M2C_UNK func_801E3AE4;

void func_801E1EEC(s8 arg0, s32 arg1) {
    M2C_UNK *var_v0;
    s32 temp_v1;

    D_801F1888 = arg0;
    func_800DEFF8();
    func_801DDA5C();
    temp_v1 = arg0 & 0xFF;
    if (temp_v1 == 8) {
        func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x1F, 0, 0x21);
        return;
    }
    if (temp_v1 == 6) {
        var_v0 = &func_801E3640;
    } else if ((arg0 & 0xFF) == 9) {
        var_v0 = &func_801E3AE4;
    } else {
        var_v0 = &func_801E2020;
    }
    func_800DE41C(0, arg1 & 0xFF, 3, 0, var_v0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
