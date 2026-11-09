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

M2C_UNK func_800DECCC(s32);                         /* extern */
extern M2C_UNK D_8011F2F0;
extern u16 func_800E1850;

void func_800E1510(void) {
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 var_a0_2;
    void *temp_s0;

    var_v1 = 0;
    var_a0 = func_800E1850 & 0xFFFF;
    do {
        temp_s0 = (var_a0 * 0x64) + &D_8011F2F0;
        var_v0_2 = var_v1 & 0xFF;
        if (M2C_FIELD(temp_s0, u8 *, 0xD) != 0) {
            M2C_FIELD(temp_s0, u8 *, 0xD) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xD) - 1);
            var_v0_2 = var_v1 & 0xFF;
            if (M2C_FIELD(temp_s0, u8 *, 0xD) == 0) {
                func_800DECCC(var_a0);
                var_v1 = 1;
                var_v0_2 = 1 & 0xFF;
            }
        }
        if (var_v0_2 == 0) {
            var_a0_2 = M2C_FIELD(temp_s0, u16 *, 0x10);
            var_v0 = var_a0_2 & 0xFFFF;
        } else {
            var_v1 = 0;
            var_a0_2 = func_800E1850;
            var_v0 = var_a0_2 & 0xFFFF;
        }
        var_a0 = var_a0_2 & 0xFFFF;
    } while (var_v0 != 0xFFFF);
}
