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

M2C_UNK gfxSetup2DState();                            /* extern */
M2C_UNK gfxSetPrimColor(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK gfxDrawClippedTex4b(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern u8 D_8021C111;
extern M2C_UNK D_8021D468;
extern M2C_UNK D_8021DAE8;

void func_80218788(s32 arg0) {
    gfxSetup2DState();
    gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, (s32) D_8021C111);
    gfxDrawClippedTex4b(arg0, 0x69, 0xA7, 0, 0, 0x6C, 0x17, 0x90, 0x17, 0x40, 0x20, 0, 0, 0x13F, 0xEF, &D_8021D468, &D_8021DAE8);
}
