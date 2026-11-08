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

extern char D_80168CE4[];

s32 func_80146E4C(u32 arg0) {
    s32 temp_v1;
    s32 var_a1;

    var_a1 = 0;
    if ((u32) (arg0 & 0xF00) < 0x800U) {
        var_a1 = *(D_80168CE4 + ((arg0 >> 8) & 7)) + (arg0 & 0x1F);
    } else {
        temp_v1 = arg0 & 0xFFFF;
        switch (temp_v1) {                          /* irregular */
        case 0x3FFF:
            var_a1 = 0x12;
            break;
        case 0x4FFF:
        case 0x2FFF:
            var_a1 = 0xA;
            break;
        }
    }
    return var_a1 & 0xFFFF;
}
