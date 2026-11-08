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
M2C_UNK func_80143DCC();                            /* extern */
M2C_UNK func_80203B04();                            /* extern */
M2C_UNK func_80203B34();                            /* extern */
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80207DC8();                            /* extern */
extern M2C_UNK D_3EACF0;
extern M2C_UNK D_3ED8F0;
extern s8 D_8021B068;
extern s16 D_8021E18C;
extern M2C_UNK D_8021F260;
extern M2C_UNK D_8030BD90;
extern M2C_UNK func_80207044;
extern M2C_UNK func_80207440;

void func_80206F20(void) {
    func_800294A0(&D_3EACF0, &D_8030BD90, &D_3ED8F0 - &D_3EACF0);
    func_80143DCC();
    func_80203B04();
    func_80203B34();
    D_8021B068 = 0;
    D_8021E18C = 0;
    func_80203DF8(1, 6, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, &func_80207044, &func_80207440, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    M2C_FIELD(&D_8021F260, s8 *, 0) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 1) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 2) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 4) = 0;
    func_80207DC8();
}
