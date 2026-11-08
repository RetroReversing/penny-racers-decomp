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

M2C_UNK func_800294A0(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_801AFB94(s32, s32);                    /* extern */
extern M2C_UNK D_1B0E50;
extern M2C_UNK D_1F9030;
extern s32 D_801CA134;
extern u8 D_8021E1A3;
extern M2C_UNK D_802D6890;

void func_8022E6F4(void) {
    func_800294A0(&D_1B0E50, &D_802D6890, &D_1F9030 - &D_1B0E50);
    func_801AFB94(D_801CA134, (D_8021E1A3 + 1) & 0xFF);
}
