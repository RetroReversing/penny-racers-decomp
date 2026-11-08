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
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_41CF00;
extern M2C_UNK D_425610;
extern s8 D_80190CB2;
extern M2C_UNK D_801C5E9C;
extern u8 D_801C5EA0;
extern s8 D_801CA13C;
extern s8 D_8021E19E;
extern M2C_UNK D_8030BD90;
extern M2C_UNK func_80215850;
extern M2C_UNK func_80215CCC;

void func_80215700(void) {
    do { func_800294A0(&D_41CF00, &D_8030BD90, &D_425610 - &D_41CF00); } while (0);
    do { func_80143DCC(); } while (0);
    do { func_80203DF8(1, 0x14, 0, 0, 0); } while (0);
    D_801CA13C = 1;
    if (D_801C5EA0 == 0) {
        M2C_FIELD(&D_801C5E9C, s8 *, 0) = 3;
        M2C_FIELD(&D_801C5E9C, s8 *, 1) = 5;
        M2C_FIELD(&D_801C5E9C, s8 *, 2) = 0;
        M2C_FIELD(&D_801C5E9C, s8 *, 3) = 0;
    }
    D_8021E19E = 0;
    D_80190CB2 = 0;
    do { func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, &func_80215850, &func_80215CCC, 0, 0, 0, 0, 0, 0, 0, 0, 0); } while (0);
}
