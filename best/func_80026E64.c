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

M2C_UNK func_800281F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_80029470();                            /* extern */
M2C_UNK osCreateThread(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK osSetThreadPri(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK osStartThread(M2C_UNK *);                   /* extern */
M2C_UNK osViSetSpecialFeatures(M2C_UNK);                     /* extern */
extern s32 D_80000300;
extern M2C_UNK D_8004AAB0;
extern M2C_UNK D_8004AC60;
extern M2C_UNK D_80071F70;
extern M2C_UNK (*D_800DA1E0)();
extern M2C_UNK func_80026250;

void func_80026E64(s32 arg0) {
    D_800DA1E0 = NULL;
    func_80029470();
    if (D_80000300 == 1) {
        func_800281F0(2, 1);
    } else {
        func_800281F0(0x1E, 1);
    }
    osViSetSpecialFeatures(0x5A);
    osCreateThread(&D_8004AC60, 3, &func_80026250, 0, &D_80071F70, 0xA);
    osStartThread(&D_8004AC60);
    osSetThreadPri(&D_8004AAB0, 0);
loop_4:
    if (D_800DA1E0 != NULL) {
        D_800DA1E0();
    }
    goto loop_4;
}
