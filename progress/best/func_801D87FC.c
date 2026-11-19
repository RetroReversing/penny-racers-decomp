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

extern char D_801E4400[];
extern char D_801E9958[];
extern char D_801E995A[];
extern char D_801E995B[];
extern char D_801E995C[];
extern char D_801E995E[];
extern char D_801E9980[];
extern char D_801E9984[];
extern char D_801E9988[];
extern char D_801E998C[];
extern char D_801E9990[];
extern char D_801E9994[];
extern char D_801E9998[];
extern char D_801E999C[];
extern char D_801E99A0[];
extern char D_801E99A4[];
extern char D_801E99A8[];
extern char D_801E99AC[];
extern char D_801E99B0[];
extern char D_801E99B4[];
extern char D_801E99B8[];
extern char D_801E99BC[];
extern char D_801E99C0[];
extern char D_801E99C4[];

void func_801D87FC(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;

    var_a1 = 0;
    do {
        temp_v0 = var_a1 * 0x70;
        *(D_801E9958 + temp_v0) = 0;
        *(D_801E995A + temp_v0) = 0;
        *(D_801E995B + temp_v0) = 0;
        *(D_801E995C + temp_v0) = 0;
        var_a0 = 0;
        var_v0 = 0 * 2;
loop_2:
        *(var_v0 + ((var_a1 * 0x70) + D_801E995E)) = *(var_v0 + D_801E4400);
        var_a0 += 1;
        var_v0 = var_a0 * 2;
        if (var_a0 < 0x10) {
            goto loop_2;
        }
        temp_v0_2 = var_a1 * 0x70;
        *(D_801E9980 + temp_v0_2) = 0;
        *(D_801E9984 + temp_v0_2) = 0;
        *(D_801E9988 + temp_v0_2) = 0;
        *(D_801E998C + temp_v0_2) = 0;
        *(D_801E99C0 + temp_v0_2) = 0;
        *(D_801E99C4 + temp_v0_2) = 0;
        *(D_801E9990 + temp_v0_2) = 0;
        *(D_801E9994 + temp_v0_2) = 0;
        *(D_801E9998 + temp_v0_2) = 0;
        *(D_801E999C + temp_v0_2) = 0;
        *(D_801E99A0 + temp_v0_2) = 0;
        *(D_801E99A4 + temp_v0_2) = 0;
        *(D_801E99A8 + temp_v0_2) = 0;
        *(D_801E99AC + temp_v0_2) = 0;
        *(D_801E99B0 + temp_v0_2) = 0;
        *(D_801E99B4 + temp_v0_2) = 0;
        *(D_801E99B8 + temp_v0_2) = 0;
        *(D_801E99BC + temp_v0_2) = 0;
        var_a1 += 1;
    } while (var_a1 < 4);
}
