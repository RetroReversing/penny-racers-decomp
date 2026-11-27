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

extern M2C_UNK D_8021E148;
extern M2C_UNK drawMenuFocusArrows;
extern M2C_UNK drawMenuIcons;
extern M2C_UNK drawOptionIcons;
extern M2C_UNK drawMenuIconSet3;
extern M2C_UNK drawMenuArrows;

void func_802054D0(void) {
    M2C_FIELD(&D_8021E148, M2C_UNK **, 0) = &drawMenuFocusArrows;
    M2C_FIELD(&D_8021E148, M2C_UNK **, 4) = &drawMenuIcons;
    M2C_FIELD(&D_8021E148, M2C_UNK **, 8) = &drawOptionIcons;
    M2C_FIELD(&D_8021E148, M2C_UNK **, 0xC) = &drawMenuIconSet3;
    M2C_FIELD(&D_8021E148, M2C_UNK **, 0x10) = &drawMenuArrows;
}
