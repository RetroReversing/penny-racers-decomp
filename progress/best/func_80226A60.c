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
extern char D_801E995A[];
extern char D_801E995B[];
extern char D_801E9990[];
extern char D_801E9994[];
extern char D_801E999C[];
extern char D_801E99C4[];

void func_80226A60(s32 arg0, void *arg1) {
    s32 temp_v1;

    M2C_FIELD(arg1, u8 *, 0x87B) = (u8) *(D_801E995A + (M2C_FIELD(arg1, u16 *, 4) * 0x70));
    M2C_FIELD(arg1, u8 *, 0x87C) = (u8) *(D_801E995B + (M2C_FIELD(arg1, u16 *, 4) * 0x70));
    if (*(D_801E9990 + (M2C_FIELD(arg1, u16 *, 4) * 0x70)) == 0) {
        M2C_FIELD(arg1, s32 *, 0x890) = 0;
    } else {
        M2C_FIELD(arg1, s32 *, 0x890) += 1;
    }
    if (*(D_801E9994 + (M2C_FIELD(arg1, u16 *, 4) * 0x70)) == 0) {
        M2C_FIELD(arg1, s32 *, 0x894) = 0;
    } else {
        M2C_FIELD(arg1, s32 *, 0x894) += 1;
    }
    temp_v1 = *(D_801E999C + (M2C_FIELD(arg1, u16 *, 4) * 0x70));
    if (temp_v1 != 0) {
        if (temp_v1 == 1) {
            func_801D7028(arg0 & 0xFFFF, 0x37);
        }
        M2C_FIELD(arg1, s32 *, 0x89C) += 1;
    } else {
        M2C_FIELD(arg1, s32 *, 0x89C) = 0;
    }
    if (*(D_801E99C4 + (M2C_FIELD(arg1, u16 *, 4) * 0x70)) == 0) {
        M2C_FIELD(arg1, s32 *, 0x898) = 0;
    } else {
        M2C_FIELD(arg1, s32 *, 0x898) += 1;
    }
    func_80221AD0(arg1);
}
