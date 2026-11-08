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

extern M2C_UNK D_8021B650;
extern M2C_UNK D_8021B651;
extern M2C_UNK D_8021B652;
extern M2C_UNK D_8021B653;
extern M2C_UNK D_8021F264;

void func_80211C7C(s32 arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    u32 temp_a0;
    u8 temp_v0_2;

    temp_a0 = arg0 & 0xFF;
    temp_a3 = ((u8) M2C_FIELD(&D_8021F264, u8 *, 0) % temp_a0) & 0xFF;
    temp_a1 = ((u8) M2C_FIELD(&D_8021F264, u8 *, 0) / temp_a0) & 0xFF;
    temp_v0 = temp_a1 + 1;
    temp_a1_2 = temp_a1 * 4;
    temp_a2 = (-(temp_v0 < 4) & temp_v0) * 4;
    M2C_FIELD(&D_8021F264, s8 *, -4) = (s8) (*(&D_8021B650 + temp_a1_2) - ((s32) (temp_a3 * (*(&D_8021B650 + temp_a1_2) - *(&D_8021B650 + temp_a2))) / (s32) temp_a0));
    M2C_FIELD(&D_8021F264, s8 *, -3) = (s8) (*(&D_8021B651 + temp_a1_2) - ((s32) (temp_a3 * (*(&D_8021B651 + temp_a1_2) - *(&D_8021B651 + temp_a2))) / (s32) temp_a0));
    M2C_FIELD(&D_8021F264, s8 *, -2) = (s8) (*(&D_8021B652 + temp_a1_2) - ((s32) (temp_a3 * (*(&D_8021B652 + temp_a1_2) - *(&D_8021B652 + temp_a2))) / (s32) temp_a0));
    M2C_FIELD(&D_8021F264, s8 *, -1) = (s8) (*(&D_8021B653 + temp_a1_2) - ((s32) (temp_a3 * (*(&D_8021B653 + temp_a1_2) - *(&D_8021B653 + temp_a2))) / (s32) temp_a0));
    temp_v0_2 = M2C_FIELD(&D_8021F264, u8 *, 0) + 1;
    M2C_FIELD(&D_8021F264, u8 *, 0) = temp_v0_2;
    if ((temp_v0_2 & 0xFF) >= (temp_a0 * 4)) {
        M2C_FIELD(&D_8021F264, u8 *, 0) = 0U;
    }
}
