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

extern u8 D_80190CAC;
extern char D_8021F080[];

void func_80217600(void) {
    s8 var_v1;

    var_v1 = 0;
    do {
        if (var_v1 < (s32) D_80190CAC) {
            *(D_8021F080 + var_v1) = var_v1;
            var_v1 += 1;
        } else {
            *(D_8021F080 + var_v1) = 0xFF;
            var_v1 += 1;
        }
    } while (var_v1 < 0x10);
}
