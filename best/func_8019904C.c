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

extern M2C_UNK D_8011F30C;
extern s8 D_801C7068;
extern M2C_UNK D_801C7081;
extern M2C_UNK D_801C7084;
extern void *D_801C7AB0;
extern u8 D_801CA130;

s32 func_8019904C(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_v1_2;
    u8 var_v0;
    u8 var_v1;

    var_a1 = 0;
    if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 3) {
        var_v1 = *(&D_801C7084 + (D_801CA130 * 5));
    } else {
        var_v1 = *(&D_801C7084 + (D_801CA130 * 5)) - 0x2E;
    }
    if (D_801C7068 < 0x17) {
        if (D_801CA130 != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
            temp_v0 = arg0 & 0xFFFF;
            if ((u32) ((var_v1 - 0x16) & 0xFF) < 0x14U) {
                var_v1_2 = temp_v0 * 0x64;
                var_v0 = *(&D_801C7081 + (D_801CA130 * 5)) + 0x3C;
            } else {
                var_v1_2 = temp_v0 * 0x64;
                var_v0 = *(&D_801C7081 + (D_801CA130 * 5));
            }
            *(&D_8011F30C + var_v1_2) = (f32) var_v0 * 0.5f;
        }
        var_a1 = 1;
    }
    return var_a1 & 0xFF;
}
