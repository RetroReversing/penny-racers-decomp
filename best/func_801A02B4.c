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

s8 func_80205D48(M2C_UNK, M2C_UNK, u8);             /* extern */
extern M2C_UNK func_8021AF20;
extern M2C_UNK func_8021E174;

void func_801A02B4(void) {
    void *temp_v1;

    temp_v1 = &func_8021E174 + 0x2A;
    M2C_FIELD(&func_8021E174, s8 *, 0x2A) = func_80205D48(0x437F0000, 0x40000000, M2C_FIELD(&func_8021AF20, u8 *, 0x164));
    M2C_FIELD(temp_v1, u16 *, -2) = (u16) (M2C_FIELD(temp_v1, u16 *, -2) + 1);
    if (M2C_FIELD(&func_8021AF20, u8 *, 0x164) == 0) {
        M2C_FIELD(&func_8021AF20, u8 *, 0x164) = 1U;
    }
}
