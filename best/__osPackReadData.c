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

extern s8 D_8006F990;
extern s32 D_8006F9CC;
extern u8 D_8006FE78;

void __osPackReadData(void) {
    s8 sp0;
    s8 sp1;
    s8 sp2;
    s8 sp3;
    s16 sp4;
    s8 sp6;
    s8 sp7;
    s32 var_a2;
    s32 var_a2_2;
    s8 *var_a3;
    s8 *var_v0;

    var_a3 = &D_8006F990;
    var_a2 = 0xE;
    var_v0 = &D_8006F990 + 0x38;
    do {
        *var_v0 = 0;
        var_a2 -= 1;
        var_v0 -= 4;
    } while (var_a2 >= 0);
    var_a2_2 = 0;
    D_8006F9CC = 1;
    sp0 = 0xFF;
    sp2 = 4;
    sp4 = 0xFFFF;
    sp1 = 1;
    sp3 = 1;
    sp6 = -1;
    sp7 = -1;
    if ((s32) D_8006FE78 > 0) {
        do {
            M2C_FIELD(var_a3, s8 *, 0) = M2C_UNALIGNED32(sp0);
            M2C_FIELD(var_a3, M2C_UNK *, 4) = M2C_UNALIGNED32(sp4);
            var_a2_2 += 1;
            var_a3 += 8;
        } while (var_a2_2 < (s32) D_8006FE78);
    }
    *var_a3 = 0xFE;
}
