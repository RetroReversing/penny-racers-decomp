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

s32 func_8002EF78();

s32 func_8002E6E4(void *arg0, s32 arg1, s32 *arg2) {
    s32 *temp_v0;
    s32 var_a1;

    var_a1 = arg1;
    switch (var_a1) {                               /* irregular */
    case 9:
        M2C_FIELD(arg0, s32 *, 0x84) = 1;
        break;
    case 3:
        temp_v0 = M2C_FIELD(arg0, s32 **, 0x80);
        if (temp_v0 == NULL) {
            M2C_FIELD(arg0, s32 **, 0x7C) = arg2;
        } else {
            *temp_v0 = arg2;
        }
        M2C_FIELD(arg0, s32 **, 0x80) = arg2;
        break;
    case 4:
        var_a1 = 4;
        M2C_FIELD(arg0, s32 *, 0x78) = 1;
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        M2C_FIELD(arg0, s16 *, 0x5A) = 1;
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        M2C_FIELD(arg0, s32 *, 0x50) = 1;
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        /* fallthrough */
    default:
        func_8002EF78(arg0, var_a1);
        break;
    }
    return 0;
}
