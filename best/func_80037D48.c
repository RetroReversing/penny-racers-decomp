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

u8 func_80038164();
s32 func_800381F8();

void func_80037D48(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v1;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = func_800381F8();
    M2C_FIELD(arg0, s32 *, 0xC) += temp_v0;
    temp_v0_2 = func_80038164(arg0);
    if ((temp_v0_2 & 0xFF) == 0xFF) {
        temp_v0_3 = func_80038164(arg0);
        temp_v1 = temp_v0_3 & 0xFF;
        if (temp_v1 == 0x51) {
            M2C_FIELD(arg1, s16 *, 0) = 3;
            M2C_FIELD(arg1, s32 *, 4) = temp_v0;
            M2C_FIELD(arg1, u8 *, 8) = temp_v0_2;
            M2C_FIELD(arg1, u8 *, 9) = temp_v0_3;
            M2C_FIELD(arg1, u8 *, 0xA) = func_80038164(arg0);
            M2C_FIELD(arg1, u8 *, 0xB) = func_80038164(arg0);
            M2C_FIELD(arg1, u8 *, 0xC) = func_80038164(arg0);
            M2C_FIELD(arg1, u8 *, 0xD) = func_80038164(arg0);
            goto block_7;
        }
        if (temp_v1 != 0x2F) {
            M2C_FIELD(arg0, u16 *, 0x1A) = 0U;
            return;
        }
        M2C_FIELD(arg1, s16 *, 0) = 4;
        M2C_FIELD(arg1, s32 *, 4) = temp_v0;
        M2C_FIELD(arg1, u8 *, 8) = temp_v0_2;
        M2C_FIELD(arg1, u8 *, 9) = temp_v0_3;
        M2C_FIELD(arg1, u8 *, 0xA) = func_80038164(arg0);
block_7:
        M2C_FIELD(arg0, u16 *, 0x1A) = 0U;
        return;
    }
    M2C_FIELD(arg1, s16 *, 0) = 1;
    M2C_FIELD(arg1, s32 *, 4) = temp_v0;
    if (temp_v0_2 & 0x80) {
        M2C_FIELD(arg1, u8 *, 8) = temp_v0_2;
        M2C_FIELD(arg1, u8 *, 9) = func_80038164(arg0);
        M2C_FIELD(arg0, u16 *, 0x1A) = (u16) (temp_v0_2 & 0xFF);
    } else {
        M2C_FIELD(arg1, u8 *, 9) = temp_v0_2;
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u16 *, 0x1A);
    }
    temp_v0_4 = M2C_FIELD(arg1, u8 *, 8) & 0xF0;
    if (!((temp_v0_4 != 0xC0) & (temp_v0_4 != 0xD0))) {
        M2C_FIELD(arg1, u8 *, 0xA) = 0U;
        return;
    }
    M2C_FIELD(arg1, u8 *, 0xA) = func_80038164(arg0);
}
