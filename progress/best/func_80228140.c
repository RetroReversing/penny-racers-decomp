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

s32 func_801D7028();
s32 func_80221AD0();
extern char D_801E9D80[];
extern char D_801E9D81[];
extern s32 D_801F1884;

void func_80228140(s32 arg0, void *arg1) {
    u8 *temp_a1;

    temp_a1 = D_801F1884 + D_801E9D80;
    if (*temp_a1 != 0xFF) {
        if (!(*temp_a1 & 2)) {
            M2C_FIELD(arg1, s32 *, 0x890) = 0;
        } else {
            M2C_FIELD(arg1, s32 *, 0x890) += 1;
        }
        if (!(*(D_801E9D80 + D_801F1884) & 4)) {
            M2C_FIELD(arg1, s32 *, 0x894) = 0;
        } else {
            M2C_FIELD(arg1, s32 *, 0x894) += 1;
        }
        if (!(*(D_801E9D80 + D_801F1884) & 0x10)) {
            M2C_FIELD(arg1, s32 *, 0x898) = 0;
        } else {
            M2C_FIELD(arg1, s32 *, 0x898) += 1;
        }
        if (!(*(D_801E9D80 + D_801F1884) & 8)) {
            M2C_FIELD(arg1, s32 *, 0x89C) = 0;
        } else {
            M2C_FIELD(arg1, s32 *, 0x89C) += 1;
        }
        if (*(D_801E9D80 + D_801F1884) & 1) {
            M2C_FIELD(arg1, s8 *, 0x87C) = -0x40;
        } else {
            M2C_FIELD(arg1, s8 *, 0x87C) = 0;
        }
        M2C_FIELD(arg1, u8 *, 0x87B) = (u8) *(D_801E9D81 + D_801F1884);
        if (M2C_FIELD(arg1, s32 *, 0x89C) == 1) {
            func_801D7028(arg0 & 0xFFFF, 0x37);
        }
        func_80221AD0(arg1);
    }
}
