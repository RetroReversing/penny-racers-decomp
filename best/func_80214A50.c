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

M2C_UNK func_800294A0(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_802153C4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_425610;
extern M2C_UNK D_42A740;
extern s8 D_80190C98;
extern M2C_UNK D_801D5A90;
extern M2C_UNK D_8030BD90;
extern M2C_UNK func_80214B8C;
extern M2C_UNK func_80214FD8;

void func_80214A50(void) {
    D_80190C98 = 0;
    func_800294A0(&D_425610, &D_8030BD90, &D_42A740 - &D_425610);
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_802153C4(0x40, 0x3F000000, 0x3F000000, 0xA6, 0xD0, 0xF1);
    func_800DE41C(0, 0, 3, 0, 0x54, 0, 0, &func_80214B8C, &func_80214FD8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80203DF8(1, 6, 0, 0, 0);
}
