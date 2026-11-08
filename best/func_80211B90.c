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

extern M2C_UNK D_8021B59C;
extern M2C_UNK D_8021B5F8;
extern M2C_UNK D_8021B618;
extern M2C_UNK D_8021B620;
extern M2C_UNK D_8021EEC1;
extern u16 D_8021EEC6;
extern u16 D_8021EEC8;

void func_80211B90(void) {
    u32 temp_v0;
    u8 temp_a0;

    temp_a0 = *(&D_8021B59C + M2C_FIELD(&D_8021EEC1, u8 *, 0));
    temp_v0 = temp_a0 >> 4;
    if ((temp_a0 & 0xF) == 6) {
        M2C_FIELD(&D_8021EEC1, u16 *, 5) = (u16) *(&D_8021B618 + (temp_v0 * 2));
    } else {
        D_8021EEC6 = *(&D_8021B5F8 + (temp_v0 * 2));
    }
    D_8021EEC8 = *(&D_8021B620 + ((temp_a0 & 0xF) * 2));
}
