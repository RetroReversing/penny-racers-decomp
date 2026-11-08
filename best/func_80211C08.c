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

extern M2C_UNK D_8021EEC0;
extern M2C_UNK D_8021EFA0;

void func_80211C08(void) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = M2C_FIELD(&D_8021EFA0, s32 *, 0) & ~0x1800;
    M2C_FIELD(&D_8021EFA0, s32 *, 0) = temp_a0;
    temp_v1 = temp_a0 | 0x1800;
    if (M2C_FIELD(&D_8021EFA0, u8 *, -0xDD) != 1) {
        M2C_FIELD(&D_8021EFA0, s32 *, 0) = temp_v1;
        if (M2C_FIELD(&D_8021EFA0, u8 *, -0xE0) == 0) {
            M2C_FIELD(&D_8021EFA0, s32 *, 0) = (s32) ((temp_v1 & ~0x1800) | 0x800);
        }
        if (M2C_FIELD(&D_8021EEC0, u8 *, 0) == (M2C_FIELD(&D_8021EEC0, u8 *, 3) - 1)) {
            M2C_FIELD(&D_8021EEC0, s32 *, 0xE0) = (s32) ((M2C_FIELD(&D_8021EEC0, s32 *, 0xE0) & ~0x1800) | 0x1000);
        }
    }
}
