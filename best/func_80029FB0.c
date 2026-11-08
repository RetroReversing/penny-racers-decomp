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

s32 func_80029690();
s32 func_8002A3A0();
s32 func_8002A3D0();
s32 func_80033A90();
extern char D_8006C320[];
extern char D_8006C324[];
extern char D_8006F970[];
extern char D_8006F9D8[];
extern char D_8006F9DB[];
extern s32 D_8006FEF8;
extern s32 D_80071F70;
extern char D_800DE2C8[];
extern s32 func_8002A110;

s32 func_80029FB0(void) {
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;

    var_v0 = 0;
    if (D_8006FEF8 == 0) {
        func_8002A3A0();
        func_80033A90(&D_8006F970, &D_8006C320, 1);
        func_80033A90(&D_800DE2C8, &D_8006C324, 1);
        func_80029690(&D_8006FEF8 - 4, &func_8002A110);
        func_8002A3D0();
        D_80071F70 = 0;
        var_a0 = 1;
        var_a1 = 0;
        var_v1 = 0;
        do {
            if (*(D_8006F9DB + var_v1) == 0) {
                if ((*(D_8006F9D8 + var_v1) & 5) == 5) {
                    var_a1 |= var_a0;
                    D_80071F70 += 1;
                }
                var_a0 *= 2;
            }
            var_v1 += 4;
            var_v0 = var_a1 & 0xFF;
        } while (var_v1 < 0x10);
    }
    return var_v0;
}
