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

extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F350;
extern u8 D_80190CAA;
extern u16 D_80190CB4;

void func_8021AB34(void) {
    s16 temp_v0;
    s16 temp_v1;
    s16 var_a1;
    s16 var_a3;
    void *temp_a2;

    temp_a2 = &D_800DB1B8 + 0x2108;
    var_a3 = 0;
    if (D_80190CAA != 0) {
        if (D_80190CAA != 2) {
            if ((s32) D_80190CAA < 3) {
                if (D_80190CAA == 1) {
                    var_a3 = 2;
                    goto block_12;
                }
                var_a1 = 0;
            } else {
                if (D_80190CAA == 3) {
                    var_a3 = 0x50;
                    goto block_12;
                }
                var_a1 = 0;
            }
        } else {
            var_a3 = 0xA0;
block_12:
            var_a1 = var_a3;
        }
        temp_v1 = M2C_FIELD(temp_a2, s16 *, 8);
        temp_v0 = (s32) ((f32) (var_a1 - temp_v1) / 8.0f) + temp_v1;
        M2C_FIELD(temp_a2, s16 *, 8) = temp_v0;
        if (((var_a1 - 2) < temp_v0) && (temp_v0 < (var_a1 + 2))) {
            M2C_FIELD(temp_a2, s16 *, 8) = var_a3;
            D_80190CAA = 0;
        }
        M2C_FIELD(temp_a2, u16 *, 0x20) = (u16) M2C_FIELD(temp_a2, s16 *, 8);
        M2C_FIELD(temp_a2, u16 *, 0x22) = (u16) M2C_FIELD(temp_a2, u16 *, 0xA);
        M2C_FIELD(temp_a2, s16 *, 0x24) = (s16) ((u16) M2C_FIELD(temp_a2, s16 *, 8) + M2C_FIELD(temp_a2, u16 *, 0xC));
        M2C_FIELD(temp_a2, s16 *, 0x26) = (s16) (M2C_FIELD(temp_a2, u16 *, 0xA) + M2C_FIELD(temp_a2, u16 *, 0xE));
        M2C_FIELD(*(&D_8011F350 + (D_80190CB4 * 0x64)), u16 *, 0xA) = (u16) M2C_FIELD(temp_a2, s16 *, 8);
    }
}
