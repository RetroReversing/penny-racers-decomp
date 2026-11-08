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

extern M2C_UNK D_8018D3A0;
extern u8 D_8021E1A7;
extern M2C_UNK D_8021E22F;
extern M2C_UNK D_8021E230;
extern M2C_UNK D_8021E231;
extern M2C_UNK D_8021E251;
extern M2C_UNK D_8021E273;
extern M2C_UNK D_8021E295;
extern M2C_UNK D_8021E2B7;
extern M2C_UNK D_8021E2D9;
extern M2C_UNK D_8021E2FB;
extern M2C_UNK D_8021E31D;

void func_80149CC4(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_v0;
    s8 var_a2_2;
    s8 var_a3;
    u32 temp_a0;
    u8 var_a2_3;

    var_t0 = 0;
    var_a2 = 1;
    do {
        var_v0 = 1 & 0xFF;
loop_2:
        *(((var_t0 & 0xFF) * 0x22) + ((arg0 * 0x110) + &D_8021E22F) + var_v0) = 0;
        var_a2 += 1;
        var_v0 = var_a2 & 0xFF;
        if ((u32) (var_a2 & 0xFF) < 0x22U) {
            goto loop_2;
        }
        var_t0 += 1;
        var_a2 = 1;
    } while ((u32) (var_t0 & 0xFF) < 8U);
    var_t0_2 = 0;
    var_a3 = 0;
    do {
        var_t1 = 1;
        var_a2_2 = 0;
        temp_a1 = var_t0_2 & 0xFF;
loop_6:
        if (var_t1 & *((temp_a1 * 4) + ((arg0 << 5) + &D_8018D3A0))) {
            *((temp_a1 * 0x22) + ((arg0 * 0x110) + &D_8021E22F) + ((var_a3 & 0xFF) + ((-((u32) (var_t0_2 & 0xFF) >= 5U) & 3) | 2))) = var_a2_2;
            var_a3 += 1;
        }
        var_a2_2 += 1;
        var_t1 *= 2;
        if ((u32) (var_a2_2 & 0xFF) < 0x1FU) {
            goto loop_6;
        }
        temp_a0 = var_t0_2 & 0xFF;
        if (!(var_a3 & 0xFF)) {
            temp_v0 = ((var_t0_2 & 0xFF) * 0x22) + (arg0 * 0x110);
            *(&D_8021E230 + temp_v0) = 1;
            *(&D_8021E231 + temp_v0) = 0x5A;
            var_t0_2 += 1;
        } else if (temp_a0 >= 5U) {
            temp_v1 = (temp_a0 * 0x22) + (arg0 * 0x110);
            *(&D_8021E230 + temp_v1) = var_a3 + 1;
            *(&D_8021E231 + temp_v1) = 0x5A;
            var_t0_2 += 1;
        } else {
            *(&D_8021E230 + (((var_t0_2 & 0xFF) * 0x22) + (arg0 * 0x110))) = var_a3;
            var_t0_2 += 1;
        }
        var_a3 = 0;
    } while ((u32) (var_t0_2 & 0xFF) < 8U);
    if (!(arg1 & 0xFF)) {
        var_a2_3 = D_8021E1A7;
        if (var_a2_3 >= 3U) {
            var_a2_3 = 2;
        }
        temp_v0_2 = arg0 * 0x110;
        *(&D_8021E22F + temp_v0_2) = 0;
        *(&D_8021E251 + temp_v0_2) = var_a2_3;
        *(&D_8021E273 + temp_v0_2) = 0;
        *(&D_8021E295 + temp_v0_2) = 0;
        *(&D_8021E2B7 + temp_v0_2) = 0;
        *(&D_8021E2D9 + temp_v0_2) = 0;
        *(&D_8021E2FB + temp_v0_2) = 0;
        *(&D_8021E31D + temp_v0_2) = 0;
    }
}
