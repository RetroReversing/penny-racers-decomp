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

M2C_UNK gfxDrawSprite(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK gfxSetup2DState();                            /* extern */
M2C_UNK gfxDrawClippedTex8b(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern s16 carClassIndex;
extern M2C_UNK D_80301DE8;
extern M2C_UNK D_80303310;

void func_80219C14(s32 arg0) {
    do { gfxSetup2DState(); } while (0);
    gfxDrawClippedTex8b(arg0, 0x3A, 0x2B, 0, 0, 0xD0, 0x1A, 0xD0, 0x1A, 0x40, 0x20, 0, 0, 0x13F, 0xEF, &D_80301DE8, &D_80303310);
    gfxDrawSprite(arg0, 0xDC, 0xB4, 0xB, carClassIndex + 0x43);
}
