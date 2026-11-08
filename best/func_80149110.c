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

s32 func_801FA30C();
extern char D_80189CC9[];
extern u8 D_8018A276;
extern char D_8018A277[];

s32 func_80149110(void) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    u8 var_a2;
    u8 var_a2_2;

    var_s0 = 0;
    var_a2 = 0;
    if (!(func_801FA30C() & 1)) {
        var_a2_2 = 0xFF;
        var_a1 = 0;
        var_a0 = 0 & 0xFF;
        do {
            if (((u32) (var_a2_2 & 0xFF) >= (u8) *(D_80189CC9 + var_a0)) && !(*(D_8018A277 + var_a0) & 0x10)) {
                var_a2_2 = *(D_80189CC9 + var_a0);
                var_s0 = var_a1;
            }
            var_a1 += 1;
            var_a0 = var_a1 & 0xFF;
        } while ((u8) D_8018A276 >= (u32) (var_a1 & 0xFF));
        return var_s0 & 0xFF;
    }
    var_a1_2 = 0;
    var_a0_2 = 0 & 0xFF;
    do {
        if (((u8) *(D_80189CC9 + var_a0_2) >= (u32) (var_a2 & 0xFF)) && !(*(D_8018A277 + var_a0_2) & 0x10)) {
            var_a2 = *(D_80189CC9 + var_a0_2);
            var_s0 = var_a1_2;
        }
        var_a1_2 += 1;
        var_a0_2 = var_a1_2 & 0xFF;
    } while ((u8) D_8018A276 >= (u32) (var_a1_2 & 0xFF));
    return var_s0 & 0xFF;
}
