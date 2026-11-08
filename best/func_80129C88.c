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

void func_80129C88(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 *temp_v1;
    u16 *temp_v1_4;
    u16 *temp_v1_7;
    u16 var_a3;
    u16 var_a3_2;
    u16 var_a3_3;
    u16 var_t1;
    u16 var_t1_2;
    u16 var_t1_3;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_8;
    void *temp_v1_9;

    var_a3 = M2C_FIELD(arg0, u16 *, 4);
    var_t1 = M2C_FIELD(arg0, u16 *, 6);
    var_v1 = var_a3 & 0xFFFF;
    do {
        temp_t0 = var_v1 * 0x64;
        temp_v1 = ((arg2 & 0xFF) * 2) + (temp_t0 + &D_8011F2F2);
        *temp_v1 |= 8;
        if (var_t1 == 0) {
            temp_v1_2 = *(&D_8011F340 + temp_t0);
            if (M2C_FIELD(temp_v1_2, u16 *, 0xA) != 0xFFFF) {
                var_a3 = M2C_FIELD(temp_v1_2, u16 *, 0xA);
            } else {
                var_a3 = M2C_FIELD(*(&D_8011F340 + ((var_a3 & 0xFFFF) * 0x64)), u16 *, 0xE);
                var_t1 = 1;
            }
        } else {
            temp_v1_3 = *(&D_8011F340 + ((var_a3 & 0xFFFF) * 0x64));
            if (M2C_FIELD(temp_v1_3, u16 *, 0xE) != 0xFFFF) {
                var_a3 = M2C_FIELD(temp_v1_3, u16 *, 0xE);
            } else {
                var_a3 = M2C_FIELD(*(&D_8011F340 + ((var_a3 & 0xFFFF) * 0x64)), u16 *, 0xA);
                var_t1 = 0;
            }
        }
        var_v1 = var_a3 & 0xFFFF;
    } while (M2C_FIELD(arg0, u16 *, 4) != var_a3);
    var_a3_2 = M2C_FIELD(arg0, u16 *, 4);
    var_t1_2 = M2C_FIELD(arg0, u16 *, 6);
    var_t2 = 0;
    var_v1_2 = var_a3_2 & 0xFFFF;
    do {
        temp_t0_2 = var_v1_2 * 0x64;
        temp_v1_4 = ((arg2 & 0xFF) * 2) + (temp_t0_2 + &D_8011F2F2);
        *temp_v1_4 &= 0xFFF7;
        if (var_t1_2 == 0) {
            temp_v1_5 = *(&D_8011F340 + temp_t0_2);
            if (M2C_FIELD(temp_v1_5, u16 *, 0xA) != 0xFFFF) {
                var_a3_2 = M2C_FIELD(temp_v1_5, u16 *, 0xA);
                var_t2 += 1;
            } else {
                var_a3_2 = M2C_FIELD(*(&D_8011F340 + ((var_a3_2 & 0xFFFF) * 0x64)), u16 *, 0xE);
                var_t1_2 = 1;
                goto block_17;
            }
        } else {
            temp_v1_6 = *(&D_8011F340 + ((var_a3_2 & 0xFFFF) * 0x64));
            if (M2C_FIELD(temp_v1_6, u16 *, 0xE) != 0xFFFF) {
                var_a3_2 = M2C_FIELD(temp_v1_6, u16 *, 0xE);
                var_t2 += 1;
            } else {
                var_a3_2 = M2C_FIELD(*(&D_8011F340 + ((var_a3_2 & 0xFFFF) * 0x64)), u16 *, 0xA);
                var_t1_2 = 0;
block_17:
                var_t2 += 1;
            }
        }
        var_v1_2 = var_a3_2 & 0xFFFF;
    } while ((u32) (var_t2 & 0xFFFF) < (u32) (arg1 & 0xFFFF));
    var_a3_3 = M2C_FIELD(arg0, u16 *, 4);
    var_t1_3 = M2C_FIELD(arg0, u16 *, 6);
    var_t2_2 = 0;
    var_v1_3 = var_a3_3 & 0xFFFF;
    do {
        temp_a0 = var_v1_3 * 0x64;
        temp_v1_7 = ((arg2 & 0xFF) * 2) + (temp_a0 + &D_8011F2F2);
        *temp_v1_7 &= 0xFFF7;
        if (var_t1_3 == 0) {
            temp_v1_8 = *(&D_8011F340 + temp_a0);
            if (M2C_FIELD(temp_v1_8, u16 *, 8) != 0xFFFF) {
                var_a3_3 = M2C_FIELD(temp_v1_8, u16 *, 8);
                var_t2_2 += 1;
            } else {
                var_a3_3 = M2C_FIELD(*(&D_8011F340 + ((var_a3_3 & 0xFFFF) * 0x64)), u16 *, 0xC);
                var_t1_3 = 1;
                goto block_27;
            }
        } else {
            temp_v1_9 = *(&D_8011F340 + ((var_a3_3 & 0xFFFF) * 0x64));
            if (M2C_FIELD(temp_v1_9, u16 *, 0xC) != 0xFFFF) {
                var_a3_3 = M2C_FIELD(temp_v1_9, u16 *, 0xC);
                var_t2_2 += 1;
            } else {
                var_a3_3 = M2C_FIELD(*(&D_8011F340 + ((var_a3_3 & 0xFFFF) * 0x64)), u16 *, 8);
                var_t1_3 = 0;
block_27:
                var_t2_2 += 1;
            }
        }
        var_v1_3 = var_a3_3 & 0xFFFF;
    } while ((u32) (var_t2_2 & 0xFFFF) < (u32) (arg1 & 0xFFFF));
}
