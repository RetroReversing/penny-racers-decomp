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

M2C_UNK func_801CC150(s32 *, s16, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_801CCE7C(s32 *, s16, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_801CDDB8(s32 *, s16, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_801CE3A0(s32 *, s16, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_80200300;
extern M2C_UNK D_80202484;

void func_8014A4C8(s32 *arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4) {
    s32 sp48;
    void *temp_a0;
    void *temp_t0;

    sp48 = *arg0;
    temp_a0 = (arg4 * 0x16) + *(&D_80202484 + (arg3 * 4));
    temp_t0 = (arg3 * 0xC) + &D_80200300;
    if ((M2C_FIELD(temp_a0, u16 *, 0xA) | M2C_FIELD(temp_a0, u16 *, 8)) == 0) {
        if (((arg3 < 3) | (arg3 == 0xD)) != 0) {
            func_801CC150(&sp48, arg1, arg2, M2C_FIELD(temp_a0, s16 *, 0), (s32) M2C_FIELD(temp_a0, s16 *, 2), (s32) M2C_FIELD(temp_a0, s16 *, 4), (s32) M2C_FIELD(temp_a0, s16 *, 6), (s32) M2C_FIELD(temp_t0, s16 *, 0), (s32) M2C_FIELD(temp_t0, s16 *, 2), (s32) M2C_FIELD(temp_a0, u8 *, 0xC), (s32) M2C_FIELD(temp_a0, u8 *, 0xD), (s32) M2C_FIELD(temp_a0, s16 *, 0xE), (s32) M2C_FIELD(temp_a0, s16 *, 0x10), (s32) M2C_FIELD(temp_a0, s16 *, 0x12), (s32) M2C_FIELD(temp_a0, s16 *, 0x14), M2C_FIELD(temp_t0, s32 *, 4), M2C_FIELD(temp_t0, s32 *, 8));
        } else {
            func_801CCE7C(&sp48, arg1, arg2, M2C_FIELD(temp_a0, s16 *, 0), (s32) M2C_FIELD(temp_a0, s16 *, 2), (s32) M2C_FIELD(temp_a0, s16 *, 4), (s32) M2C_FIELD(temp_a0, s16 *, 6), (s32) M2C_FIELD(temp_t0, s16 *, 0), (s32) M2C_FIELD(temp_t0, s16 *, 2), (s32) M2C_FIELD(temp_a0, u8 *, 0xC), (s32) M2C_FIELD(temp_a0, u8 *, 0xD), (s32) M2C_FIELD(temp_a0, s16 *, 0xE), (s32) M2C_FIELD(temp_a0, s16 *, 0x10), (s32) M2C_FIELD(temp_a0, s16 *, 0x12), (s32) M2C_FIELD(temp_a0, s16 *, 0x14), M2C_FIELD(temp_t0, s32 *, 4), M2C_FIELD(temp_t0, s32 *, 8));
        }
    } else if (arg3 == 0xD) {
        func_801CE3A0(&sp48, arg1, arg2, (s16) M2C_FIELD(temp_a0, u16 *, 8), (s32) (s16) M2C_FIELD(temp_a0, u16 *, 0xA), (s32) M2C_FIELD(temp_a0, s16 *, 0), (s32) M2C_FIELD(temp_a0, s16 *, 2), (s32) M2C_FIELD(temp_a0, s16 *, 4), (s32) M2C_FIELD(temp_a0, s16 *, 6), (s32) M2C_FIELD(temp_t0, s16 *, 0), (s32) M2C_FIELD(temp_t0, s16 *, 2), M2C_FIELD(temp_t0, s32 *, 4), M2C_FIELD(temp_t0, s32 *, 8), (s32) (u16) M2C_FIELD(temp_a0, s16 *, 0xE), (s32) (u16) M2C_FIELD(temp_a0, s16 *, 0x10), (s32) (u16) M2C_FIELD(temp_a0, s16 *, 0x12), (s32) (u16) M2C_FIELD(temp_a0, s16 *, 0x14));
    } else {
        func_801CDDB8(&sp48, arg1, arg2, (s16) M2C_FIELD(temp_a0, u16 *, 8), (s32) (s16) M2C_FIELD(temp_a0, u16 *, 0xA), (s32) M2C_FIELD(temp_a0, s16 *, 0), (s32) M2C_FIELD(temp_a0, s16 *, 2), (s32) M2C_FIELD(temp_a0, s16 *, 4), (s32) M2C_FIELD(temp_a0, s16 *, 6), (s32) M2C_FIELD(temp_t0, s16 *, 0), (s32) M2C_FIELD(temp_t0, s16 *, 2), M2C_FIELD(temp_t0, s32 *, 4), M2C_FIELD(temp_t0, s32 *, 8), (s32) (u16) M2C_FIELD(temp_a0, s16 *, 0xE), (s32) (u16) M2C_FIELD(temp_a0, s16 *, 0x10), (s32) (u16) M2C_FIELD(temp_a0, s16 *, 0x12), (s32) (u16) M2C_FIELD(temp_a0, s16 *, 0x14));
    }
    *arg0 = sp48;
}
