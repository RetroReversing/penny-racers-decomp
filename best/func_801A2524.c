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

s32 func_80205D48(M2C_UNK, M2C_UNK, u8);            /* extern */
M2C_UNK func_80205E04(void *, M2C_UNK, u8);         /* extern */
M2C_UNK func_80205EBC(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80211C7C(M2C_UNK);                     /* extern */
extern M2C_UNK func_8021AF20;
extern M2C_UNK func_8021E174;

void func_801A2524(void) {
    M2C_FIELD(&func_8021E174, u8 *, 0x2A) = (u8) (M2C_FIELD(&func_8021E174, u8 *, 0x2A) - 8);
    func_80205E04(&func_8021AF20 + 0xFC, 0x422C0000, M2C_FIELD(&func_8021AF20, u8 *, 0x164));
    func_80205EBC(&func_8021AF20 + 0x100, 0x42200000, 0xC0400000, 0x3E4CCCCD, (s32) M2C_FIELD(&func_8021AF20, u8 *, 0x164));
    func_80211C7C(0x14);
    if ((M2C_FIELD((&func_8021E174 + 0x2A), s16 *, 4) == 0) && (M2C_FIELD(&func_8021AF20, s32 *, 0x208) != 1)) {
        M2C_FIELD(&func_8021AF20, s32 *, 0x160) = func_80205D48(0x41A00000, 0x40800000, M2C_FIELD(&func_8021AF20, u8 *, 0x164));
    }
    if (M2C_FIELD(&func_8021AF20, u8 *, 0x164) == 0) {
        M2C_FIELD(&func_8021AF20, u8 *, 0x164) = 1U;
    }
}
