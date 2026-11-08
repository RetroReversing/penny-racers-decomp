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

extern M2C_UNK D_8011F2F2;
extern M2C_UNK D_8011F340;
extern void *D_801C7AB0;
extern u16 D_80233EC0;

void func_80129FD4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_v1;
    u16 *temp_v0;
    u16 *temp_v1;
    u16 *temp_v1_6;
    u16 var_a3;
    u16 var_a3_2;
    u16 var_a3_3;
    u16 var_t0;
    u16 var_t0_2;
    u16 var_t0_3;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_7;
    void *temp_v1_8;

    var_a3 = M2C_FIELD(arg0, u16 *, 4);
    var_t0 = M2C_FIELD(arg0, u16 *, 6);
    var_v1 = var_a3 & 0xFFFF;
    do {
        temp_a0 = var_v1 * 0x64;
        temp_v1 = ((arg2 & 0xFF) * 2) + (temp_a0 + &D_8011F2F2);
        *temp_v1 |= 8;
        if (var_t0 == 0) {
            temp_v1_2 = *(&D_8011F340 + temp_a0);
            if (M2C_FIELD(temp_v1_2, u16 *, 0xA) != 0xFFFF) {
                var_a3 = M2C_FIELD(temp_v1_2, u16 *, 0xA);
            } else {
                var_a3 = M2C_FIELD(*(&D_8011F340 + ((var_a3 & 0xFFFF) * 0x64)), u16 *, 0xE);
                var_t0 = 1;
            }
        } else {
            temp_v1_3 = *(&D_8011F340 + ((var_a3 & 0xFFFF) * 0x64));
            if (M2C_FIELD(temp_v1_3, u16 *, 0xE) != 0xFFFF) {
                var_a3 = M2C_FIELD(temp_v1_3, u16 *, 0xE);
            } else {
                var_a3 = M2C_FIELD(*(&D_8011F340 + ((var_a3 & 0xFFFF) * 0x64)), u16 *, 0xA);
                var_t0 = 0;
            }
        }
        var_v1 = var_a3 & 0xFFFF;
    } while (M2C_FIELD(arg0, u16 *, 4) != var_a3);
    var_a3_2 = M2C_FIELD(arg0, u16 *, 4);
    var_t0_2 = M2C_FIELD(arg0, u16 *, 6);
    var_t1 = 0;
loop_19:
    temp_a0_2 = var_a3_2 & 0xFFFF;
    temp_v0 = ((arg2 & 0xFF) * 2) + ((temp_a0_2 * 0x64) + &D_8011F2F2);
    *temp_v0 &= 0xFFF7;
    if (temp_a0_2 != ((D_80233EC0 + M2C_FIELD(D_801C7AB0, u8 *, 2)) - 1)) {
        temp_v0_2 = var_a3_2 & 0xFFFF;
        if (var_t0_2 == 0) {
            temp_v1_4 = *(&D_8011F340 + (temp_v0_2 * 0x64));
            if (M2C_FIELD(temp_v1_4, u16 *, 0xA) != 0xFFFF) {
                var_a3_2 = M2C_FIELD(temp_v1_4, u16 *, 0xA);
                var_t1 += 1;
            } else {
                var_a3_2 = M2C_FIELD(*(&D_8011F340 + ((var_a3_2 & 0xFFFF) * 0x64)), u16 *, 0xE);
                var_t0_2 = 1;
                goto block_17;
            }
        } else {
            temp_v1_5 = *(&D_8011F340 + (temp_v0_2 * 0x64));
            if (M2C_FIELD(temp_v1_5, u16 *, 0xE) != 0xFFFF) {
                var_a3_2 = M2C_FIELD(temp_v1_5, u16 *, 0xE);
                var_t1 += 1;
            } else {
                var_a3_2 = M2C_FIELD(*(&D_8011F340 + ((var_a3_2 & 0xFFFF) * 0x64)), u16 *, 0xA);
                var_t0_2 = 0;
block_17:
                var_t1 += 1;
            }
        }
        if ((u32) (var_t1 & 0xFFFF) < (u32) (arg1 & 0xFFFF)) {
            goto loop_19;
        }
    }
    var_a3_3 = M2C_FIELD(arg0, u16 *, 4);
    var_t0_3 = M2C_FIELD(arg0, u16 *, 6);
    var_t1_2 = 0;
loop_30:
    temp_v0_3 = var_a3_3 & 0xFFFF;
    temp_v1_6 = ((arg2 & 0xFF) * 2) + ((temp_v0_3 * 0x64) + &D_8011F2F2);
    *temp_v1_6 &= 0xFFF7;
    if (temp_v0_3 != D_80233EC0) {
        temp_v0_4 = var_a3_3 & 0xFFFF;
        if (var_t0_3 == 0) {
            temp_v1_7 = *(&D_8011F340 + (temp_v0_4 * 0x64));
            if (M2C_FIELD(temp_v1_7, u16 *, 8) != 0xFFFF) {
                var_a3_3 = M2C_FIELD(temp_v1_7, u16 *, 8);
                var_t1_2 += 1;
            } else {
                var_a3_3 = M2C_FIELD(*(&D_8011F340 + ((var_a3_3 & 0xFFFF) * 0x64)), u16 *, 0xC);
                var_t0_3 = 1;
                goto block_28;
            }
        } else {
            temp_v1_8 = *(&D_8011F340 + (temp_v0_4 * 0x64));
            if (M2C_FIELD(temp_v1_8, u16 *, 0xC) != 0xFFFF) {
                var_a3_3 = M2C_FIELD(temp_v1_8, u16 *, 0xC);
                var_t1_2 += 1;
            } else {
                var_a3_3 = M2C_FIELD(*(&D_8011F340 + ((var_a3_3 & 0xFFFF) * 0x64)), u16 *, 8);
                var_t0_3 = 0;
block_28:
                var_t1_2 += 1;
            }
        }
        if ((u32) (var_t1_2 & 0xFFFF) < (u32) (arg1 & 0xFFFF)) {
            goto loop_30;
        }
    }
}
