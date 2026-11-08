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

M2C_UNK func_80033A90(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osCreateThread(M2C_UNK *, M2C_UNK, M2C_UNK *, s32 *, M2C_UNK *, s32); /* extern */
M2C_UNK func_80034090(M2C_UNK, M2C_UNK *, s16 *);   /* extern */
M2C_UNK osSetThreadPri(M2C_UNK, s32);                /* extern */
M2C_UNK osStartThread(M2C_UNK *);                   /* extern */
M2C_UNK func_80034340();                            /* extern */
s32 func_8003EAC0();                                /* extern */
M2C_UNK func_8003EAE0(s32);                         /* extern */
s32 func_8003EDA0(M2C_UNK);                         /* extern */
M2C_UNK func_8003F210();                            /* extern */
extern s32 D_800473D0;
extern M2C_UNK *D_800473D4;
extern M2C_UNK *D_800473D8;
extern M2C_UNK *D_800473DC;
extern s32 D_800473E0;
extern s32 D_800473E4;
extern s32 D_800473E8;
extern M2C_UNK D_8006C378;
extern M2C_UNK D_8006D530;
extern M2C_UNK D_8006D548;
extern s16 D_8006D560;
extern s8 D_8006D562;
extern s32 D_8006D564;
extern s16 D_8006D578;
extern s8 D_8006D57A;
extern s32 D_8006D57C;
extern M2C_UNK viMgrMain;

void func_80039B50(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    if (D_800473D0 == 0) {
        var_s2 = -1;
        func_80034340();
        func_80033A90(&D_8006D530, &D_8006D548, 5);
        D_8006D560 = 0xD;
        D_8006D562 = 0;
        D_8006D564 = 0;
        D_8006D578 = 0xE;
        D_8006D57A = 0;
        D_8006D57C = 0;
        func_80034090(7, &D_8006D530, &D_8006D560);
        func_80034090(3, &D_8006D530, &D_8006D578);
        temp_v0 = func_8003EDA0(0);
        if (temp_v0 < arg0) {
            var_s2 = temp_v0;
            osSetThreadPri(0, arg0);
        }
        temp_v0_2 = func_8003EAC0();
        D_800473D0 = 1;
        D_800473D4 = &D_8006C378;
        D_800473D8 = &D_8006D530;
        D_800473DC = &D_8006D530;
        D_800473E0 = 0;
        D_800473E4 = 0;
        D_800473E8 = 0;
        osCreateThread(&D_8006C378, 0, &viMgrMain, &D_800473D0, &D_8006D530, arg0);
        func_8003F210();
        osStartThread(&D_8006C378);
        func_8003EAE0(temp_v0_2);
        if (var_s2 != -1) {
            osSetThreadPri(0, temp_v0);
        }
    }
}
