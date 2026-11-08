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

s32 func_80149778(s32);                             /* extern */
s32 func_801FA30C();                                /* extern */
extern M2C_UNK D_80189B34;
extern M2C_UNK D_8018A277;
extern u16 D_8018A27C;
extern M2C_UNK D_8018D3A0;
extern M2C_UNK D_8018D3A4;
extern M2C_UNK D_8018D3B0;
extern M2C_UNK D_8018D3B4;
extern M2C_UNK D_8018D3B8;
extern M2C_UNK D_8018D3BC;
extern s16 D_8021E1A6;

void func_8014BCD8(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;

    if ((M2C_FIELD(&D_80189B34, u8 *, 0) == 2) && (M2C_FIELD(&D_80189B34, u8 *, 2) & 0x80) && (D_8021E1A6 == M2C_FIELD(&D_80189B34, u8 *, 0)) && (D_8018A27C != 0)) {
        __repair_rows: {
            temp_v0 = func_801FA30C() & 3;
            temp_s0 = -(temp_v0 != 3) & temp_v0;
            temp_s1 = *(&D_8018A277 + temp_s0) & 0xF;
        }
if (func_80149778(temp_s1 & 0xFF) & 0xFF) goto __repair_rows;
        *(&D_8018A277 + temp_s0) = *(&D_8018A277 + temp_s0) | 0x20;
        temp_v0_2 = temp_s1 << 5;
        if (D_8018A27C & 1) {
            *(&D_8018D3A4 + temp_v0_2) = *(&D_8018D3A4 + temp_v0_2) | 0x200000;
        }
        temp_v0_3 = temp_s1 << 5;
        if (D_8018A27C & 2) {
            *(&D_8018D3A4 + temp_v0_3) = *(&D_8018D3A4 + temp_v0_3) | 0x400000;
        }
        temp_v0_4 = temp_s1 << 5;
        if (D_8018A27C & 4) {
            *(&D_8018D3A4 + temp_v0_4) = *(&D_8018D3A4 + temp_v0_4) | 0x800000;
        }
        temp_v0_5 = temp_s1 << 5;
        if (D_8018A27C & 8) {
            *(&D_8018D3A4 + temp_v0_5) = *(&D_8018D3A4 + temp_v0_5) | 0x01000000;
        }
        temp_v1 = temp_s1 << 5;
        if (D_8018A27C & 0x10) {
            *(&D_8018D3B0 + temp_v1) = *(&D_8018D3B0 + temp_v1) | 0x200;
        }
        temp_v1_2 = temp_s1 << 5;
        if (D_8018A27C & 0x20) {
            *(&D_8018D3B4 + temp_v1_2) = *(&D_8018D3B4 + temp_v1_2) | 0x40;
        }
        temp_v1_3 = temp_s1 << 5;
        if (D_8018A27C & 0x40) {
            *(&D_8018D3B4 + temp_v1_3) = *(&D_8018D3B4 + temp_v1_3) | 0x80;
        }
        temp_v0_6 = temp_s1 << 5;
        if (D_8018A27C & 0x80) {
            *(&D_8018D3B8 + temp_v0_6) = *(&D_8018D3B8 + temp_v0_6) | 0x40000;
        }
        temp_v0_7 = temp_s1 << 5;
        if (D_8018A27C & 0x100) {
            *(&D_8018D3B8 + temp_v0_7) = *(&D_8018D3B8 + temp_v0_7) | 0x80000;
        }
        temp_v0_8 = temp_s1 << 5;
        if (D_8018A27C & 0x200) {
            *(&D_8018D3B8 + temp_v0_8) = *(&D_8018D3B8 + temp_v0_8) | 0x100000;
        }
        temp_v1_4 = temp_s1 << 5;
        if (D_8018A27C & 0x400) {
            *(&D_8018D3BC + temp_v1_4) = *(&D_8018D3BC + temp_v1_4) | 0x4000;
        }
        temp_v1_5 = temp_s1 << 5;
        if (D_8018A27C & 0x800) {
            *(&D_8018D3A0 + temp_v1_5) = *(&D_8018D3A0 + temp_v1_5) | 0x2000;
        }
    }
}
