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

extern char D_8011F2FD[];
extern char D_8011F300[];
extern u16 D_8018BC3C;
extern u16 func_800E1850;

void func_8021AF20(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;

    var_v0 = func_800E1850 & 0xFFFF;
    if ((func_800E1850 & 0xFFFF) != 0xFFFF) {
        var_v1 = var_v0 * 2;
        __repair_rows: {
            temp_v1 = (((var_v1 + var_v0) * 8) + var_v0) * 4;
            *(D_8011F2FD + temp_v1) = 4;
            var_v0 = *(D_8011F300 + temp_v1) & 0xFFFF;
            var_v1 = var_v0 * 2;
        }
if (var_v0 != 0xFFFF) goto __repair_rows;
    }
    *(D_8011F2FD + (D_8018BC3C * 0x64)) = 0;
    *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 0;
}
