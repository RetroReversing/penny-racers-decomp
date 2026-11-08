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

M2C_UNK func_80211C7C(M2C_UNK);                     /* extern */
extern M2C_UNK func_8021E174;

void func_801A11C4(void) {
    M2C_FIELD(&func_8021E174, u8 *, 0x2A) = (u8) (M2C_FIELD(&func_8021E174, u8 *, 0x2A) - 8);
    func_80211C7C(0x14);
}
