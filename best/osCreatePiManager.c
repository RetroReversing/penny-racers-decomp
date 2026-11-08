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
M2C_UNK func_80034090(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osSetThreadPri(M2C_UNK, s32);                /* extern */
M2C_UNK osStartThread(M2C_UNK *);                   /* extern */
M2C_UNK func_8003D9B0();                            /* extern */
s32 func_8003EAC0();                                /* extern */
M2C_UNK func_8003EAE0(s32);                         /* extern */
s32 func_8003EDA0(M2C_UNK);                         /* extern */
extern s32 D_80048130;
extern M2C_UNK *D_80048134;
extern M2C_UNK *D_80048138;
extern M2C_UNK *D_8004813C;
extern M2C_UNK *D_80048140;
extern M2C_UNK *D_80048144;
extern M2C_UNK *D_80048148;
extern s32 D_80048160;
extern M2C_UNK D_8006D590;
extern M2C_UNK D_8006E740;
extern M2C_UNK D_8006E758;
extern M2C_UNK D_8006FF50;
extern M2C_UNK func_8003D1A0;
extern M2C_UNK func_8003D5F0;
extern M2C_UNK func_800417F0;

void osCreatePiManager(s32 arg0, M2C_UNK *arg1, M2C_UNK *arg2, M2C_UNK arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    if (D_80048130 == 0) {
        func_80033A90(arg1, arg2, arg3);
        do { func_80033A90(&D_8006E740, &D_8006E758, 1); } while (0);
        if (D_80048160 == 0) {
            func_8003D9B0();
        }
        func_80034090(8, &D_8006E740, 0x22222222);
        var_s2 = -1;
        temp_v0 = func_8003EDA0(0);
        if (temp_v0 < arg0) {
            var_s2 = temp_v0;
            osSetThreadPri(0, arg0);
        }
        temp_v0_2 = func_8003EAC0();
        D_80048130 = 1;
        D_80048140 = &D_8006FF50;
        D_80048144 = &func_800417F0;
        D_80048148 = &func_8003D1A0;
        D_80048134 = &D_8006D590;
        D_80048138 = arg1;
        D_8004813C = &D_8006E740;
        osCreateThread(&D_8006D590, 0, &func_8003D5F0, &D_80048130, &D_8006E740, arg0);
        osStartThread(&D_8006D590);
        do { func_8003EAE0(temp_v0_2); } while (0);
        if (var_s2 != -1) {
            osSetThreadPri(0, temp_v0);
        }
    }
}
