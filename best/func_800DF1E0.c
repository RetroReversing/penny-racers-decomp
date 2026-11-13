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

extern char D_8011F340[];
extern char D_8011F34C[];

void func_800DF1E0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1;
    u8 temp_v1;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    *(D_8011F34C + temp_v0) = arg1;
    temp_v1 = M2C_FIELD(M2C_FIELD(*(D_8011F340 + temp_v0), void **, 4), u8 *, 4);
    if (temp_v1 != 1) {
        var_a3 = 0;
        if ((s32) temp_v1 >= 2) {
            var_a3 = 0x100;
            if (temp_v1 != 2) {
                var_a3 = 0;
            }
        }
    } else {
        var_a3 = 0x10;
    }
    var_a2 = 0;
    if (var_a3 != 0) {
        var_v1 = 0 * 2;
        do {
            *(s32 *)(var_v1 + arg1) = *(s32 *)(var_v1 + M2C_FIELD(M2C_FIELD(*(D_8011F340 + ((arg0 & 0xFFFF) * 0x64)), void **, 4), s32 *, 8));
            var_a2 += 1;
            var_v1 = var_a2 * 2;
        } while (var_a2 < var_a3);
    }
}
