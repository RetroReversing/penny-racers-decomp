/* machine draft (m2c) for gcc-2.8.1-pm -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

s16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_8021F02C;
extern s16 D_8021F09A;
extern M2C_UNK func_80215480;
extern M2C_UNK func_802155CC;

void func_802153C4(s32 arg0, s32 arg1, s32 arg2, s8 arg3, u8 arg4, u8 arg5) {
    void *temp_v0;

    D_8021F09A = func_800DE41C(0, 0, 3, 0, arg0 & 0xFF, 0, 0, &func_80215480, &func_802155CC, arg1, arg2, 0, 0, 0, 0, 0, 0, 0);
    temp_v0 = &D_8021F02C + 2;
    M2C_FIELD(&D_8021F02C, s16 *, 2) = 0;
    M2C_FIELD(temp_v0, s16 *, 2) = 0;
    M2C_FIELD(temp_v0, s8 *, 4) = arg3;
    M2C_FIELD(temp_v0, u8 *, 5) = arg4;
    M2C_FIELD(temp_v0, u8 *, 6) = arg5;
}
