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

extern u8 D_80189CB8;
extern M2C_UNK D_80189CB9;
extern u8 D_80189CC0;
extern M2C_UNK D_80189CC1;
extern M2C_UNK D_8018D140;
extern M2C_UNK D_8018D26C;

void func_80148B44(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t0_4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    u16 *temp_a0;
    u16 *temp_t1;
    u16 *temp_t1_2;
    u16 temp_a2;
    u16 temp_a2_2;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;

    var_t0 = 0;
    var_v0 = 0 * 2;
    do {
        temp_v1 = *(var_v0 + &D_8018D140);
        if (temp_v1 != 0x3FFF) {
            if ((s32) temp_v1 < 0x4000) {
                if (temp_v1 != 0x2FFF) {
                    var_a3 = 0;
                    goto block_7;
                }
            } else if (temp_v1 != 0x4FFF) {
                var_a3 = 0;
block_7:
                temp_t1 = (var_t0 * 2) + &D_8018D140;
                var_v0_2 = 0 * 2;
                do {
                    temp_a2 = *temp_t1;
                    var_a3 += 1;
                    if ((*(var_v0_2 + &D_8018D26C) & 0xFFF) == (temp_a2 & 0xFFF)) {
                        *temp_t1 = temp_a2 | 0x1000;
                    }
                    var_v0_2 = var_a3 * 2;
                } while (var_a3 < 0x96);
            }
        }
        var_t0 += 1;
        var_v0 = var_t0 * 2;
    } while (var_t0 < 0x96);
    M2C_FIELD(&D_80189CB9, u8 *, 0) = 0U;
    var_t0_2 = 0;
    if ((s32) M2C_FIELD(&D_80189CB9, u8 *, -1) > 0) {
        var_v0_3 = 0 * 2;
        do {
            var_t0_2 += 1;
            if (!(*(var_v0_3 + &D_8018D140) & 0xF000)) {
                M2C_FIELD(&D_80189CB9, u8 *, 0) = (u8) (M2C_FIELD(&D_80189CB9, u8 *, 0) + 1);
            }
            var_v0_3 = var_t0_2 * 2;
        } while (var_t0_2 < (s32) D_80189CB8);
    }
    var_t0_3 = 0;
    var_v0_4 = 0 * 2;
    do {
        temp_v1_2 = *(var_v0_4 + &D_8018D26C);
        if (temp_v1_2 != 0x3FFF) {
            if ((s32) temp_v1_2 < 0x4000) {
                if (temp_v1_2 != 0x2FFF) {
                    var_a3_2 = 0;
                    goto block_24;
                }
            } else if (temp_v1_2 != 0x4FFF) {
                var_a3_2 = 0;
block_24:
                temp_t1_2 = (var_t0_3 * 2) + &D_8018D26C;
                var_v0_5 = 0 * 2;
                do {
                    temp_a2_2 = *temp_t1_2;
                    var_a3_2 += 1;
                    if ((*(var_v0_5 + &D_8018D140) & 0xFFF) == (temp_a2_2 & 0xFFF)) {
                        *temp_t1_2 = temp_a2_2 | 0x1000;
                    }
                    var_v0_5 = var_a3_2 * 2;
                } while (var_a3_2 < 0x96);
            }
        }
        var_t0_3 += 1;
        var_v0_4 = var_t0_3 * 2;
    } while (var_t0_3 < 0x96);
    M2C_FIELD(&D_80189CC1, u8 *, 0) = 0U;
    var_t0_4 = 0;
    if ((s32) M2C_FIELD(&D_80189CC1, u8 *, -1) > 0) {
        var_v0_6 = 0 * 2;
        do {
            var_t0_4 += 1;
            if (!(*(var_v0_6 + &D_8018D26C) & 0xF000)) {
                M2C_FIELD(&D_80189CC1, u8 *, 0) = (u8) (M2C_FIELD(&D_80189CC1, u8 *, 0) + 1);
            }
            var_v0_6 = var_t0_4 * 2;
        } while (var_t0_4 < (s32) D_80189CC0);
    }
    var_a1 = 0;
    if ((arg1 & 0xFF) == 1) {
        var_v0_7 = 0 * 2;
        do {
            temp_a0 = var_v0_7 + (((arg0 & 0xFF) * 0x12C) + &D_8018D140);
            temp_v1_3 = *temp_a0;
            var_a1 += 1;
            if (!(temp_v1_3 & 0x700)) {
                *temp_a0 = temp_v1_3 | 0x1000;
            }
            var_v0_7 = var_a1 * 2;
        } while (var_a1 < 0x96);
    }
}
