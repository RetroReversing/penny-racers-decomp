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

s32 func_8014A030(s32, u16, M2C_UNK);               /* extern */
s32 func_801FA30C();                                /* extern */
extern M2C_UNK D_800DA260;
extern M2C_UNK D_80168BC0;
extern M2C_UNK D_80168C40;
extern u8 D_80189B34;
extern M2C_UNK D_8018D3A0;
extern M2C_UNK D_8018D3A4;
extern M2C_UNK D_8018D3A8;
extern M2C_UNK D_8018D3AC;
extern M2C_UNK D_8018D3B0;
extern M2C_UNK D_8018D3B4;
extern M2C_UNK D_8018D3B7;
extern M2C_UNK D_8018D3B8;
extern M2C_UNK D_8018D3BC;
extern s16 D_8021E1A2;

void func_80148DBC(s32 arg0) {
    s32 *temp_a1;
    s32 *temp_s0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v1;
    u32 var_s1;
    u32 var_s4;
    void *temp_s0_2;

    var_s1 = 1;
    if (D_8021E1A2 != 0) {
        var_s1 = 2;
    }
    var_s2 = 0;
    if (D_80189B34 == 2) {
        var_s4 = var_s1;
        if (var_s4 < 6U) {
            var_s2 = 0;
            do {
loop_6:
                temp_s1 = func_801FA30C();
                temp_s0 = ((var_s2 & 0xFF) * 4) + (((var_s4 & 0xFF) << 5) + &D_8018D3A0);
                *temp_s0 = temp_s1 | (func_801FA30C() << 0x10);
                temp_s1_2 = func_801FA30C();
                *temp_s0 &= ~(temp_s1_2 | (func_801FA30C() << 0x10));
                var_s2 += 1;
                if ((u32) (var_s2 & 0xFF) < 8U) {
                    goto loop_6;
                }
                temp_s1_3 = var_s4 & 0xFF;
                temp_s0_2 = (temp_s1_3 * 0x178) + &D_800DA260;
                temp_s1_4 = temp_s1_3 << 5;
                *(&D_8018D3A0 + temp_s1_4) = func_8014A030(*(&D_8018D3A0 + temp_s1_4), M2C_FIELD(temp_s0_2, u16 *, 0), 1);
                *(&D_8018D3B4 + temp_s1_4) = func_8014A030(*(&D_8018D3B4 + temp_s1_4), (M2C_FIELD(temp_s0_2, u8 *, 9) - 1) & 0xFF, 1);
                *(&D_8018D3B8 + temp_s1_4) = func_8014A030(*(&D_8018D3B8 + temp_s1_4), (M2C_FIELD(temp_s0_2, u8 *, 0xD) - 1) & 0xFF, 1);
                *(&D_8018D3BC + temp_s1_4) = func_8014A030(*(&D_8018D3BC + temp_s1_4), (M2C_FIELD(temp_s0_2, u8 *, 0xF) - 1) & 0xFF, 1);
                var_s2_2 = 0;
loop_8:
                temp_a0 = var_s2_2 & 0xFF;
                temp_a0_2 = temp_a0 * 4;
                temp_a1 = temp_a0_2 + (((var_s4 & 0xFF) << 5) + &D_8018D3A0);
                temp_v1 = *temp_a1 & *(((((arg0 & 3) * 8) + temp_a0) * 4) + &D_80168BC0);
                *temp_a1 = temp_v1;
                var_s2_2 += 1;
                *temp_a1 = temp_v1 | *(temp_a0_2 + &D_80168C40);
                if ((u32) (var_s2_2 & 0xFF) < 8U) {
                    goto loop_8;
                }
                var_s4 += 1;
                var_s2 = 0;
            } while ((u32) (var_s4 & 0xFF) < 6U);
        }
    }
    var_v1 = 0 & 0xFF;
    do {
        temp_v1_2 = var_v1 << 5;
        *(&D_8018D3A0 + temp_v1_2) = *(&D_8018D3A0 + temp_v1_2) & 0x3FFF;
        *(&D_8018D3A4 + temp_v1_2) = *(&D_8018D3A4 + temp_v1_2) & 0x01FFFFFF;
        *(&D_8018D3A8 + temp_v1_2) = *(&D_8018D3A8 + temp_v1_2) & 0xFFF;
        *(&D_8018D3AC + temp_v1_2) = *(&D_8018D3AC + temp_v1_2) & 0x1FF;
        *(&D_8018D3B0 + temp_v1_2) = *(&D_8018D3B0 + temp_v1_2) & 0x3FF;
        *(&D_8018D3B4 + temp_v1_2) = (s32) *(&D_8018D3B7 + temp_v1_2);
        *(&D_8018D3B8 + temp_v1_2) = *(&D_8018D3B8 + temp_v1_2) & 0x1FFFFF;
        *(&D_8018D3BC + temp_v1_2) = *(&D_8018D3BC + temp_v1_2) & 0x7FFF;
        var_s2 += 1;
        var_v1 = var_s2 & 0xFF;
    } while ((u32) (var_s2 & 0xFF) < 6U);
}
