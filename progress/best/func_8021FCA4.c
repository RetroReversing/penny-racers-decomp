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

extern short D_800DD2C0;
extern char D_800DB1B8[];
extern f32 D_80220E40;
extern char D_80220FB0[];
extern char D_80220FB4[];
extern char D_80220FB8[];
extern char D_80220FBC[];
extern char D_80220FC0[];
extern char D_80220FC4[];
extern char D_80220FC8[];
extern char D_80220FCC[];

void func_8021FCA4(void) {
char * __repair_loop_constant;

    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a2;

    D_80220E40 = 65.0f;
    var_a2 = 0;
    __repair_loop_constant = D_800DB1B8;
do {
        temp_a0 = var_a2 * 0x28;
        *(__repair_loop_constant + 0x2108 + temp_a0) = 0;
        temp_a1 = var_a2 * 2;
        temp_v1 = var_a2 * 3;
        *(__repair_loop_constant + 0x210A + temp_a0) = temp_v1;
        *(__repair_loop_constant + 0x210C + temp_a0) = temp_v1 + 1;
        *(__repair_loop_constant + 0x210E + temp_a0) = temp_v1 + 2;
        *(__repair_loop_constant + 0x2110 + temp_a0) = *(temp_a1 + D_80220FB0);
        *(__repair_loop_constant + 0x2112 + temp_a0) = *(temp_a1 + D_80220FB4);
        *(__repair_loop_constant + 0x2114 + temp_a0) = *(temp_a1 + D_80220FB8);
        *(__repair_loop_constant + 0x2116 + temp_a0) = *(temp_a1 + D_80220FBC);
        *(__repair_loop_constant + 0x2128 + temp_a0) = *(temp_a1 + D_80220FC0);
        *(__repair_loop_constant + 0x212A + temp_a0) = *(temp_a1 + D_80220FC4);
        *(__repair_loop_constant + 0x212C + temp_a0) = *(temp_a1 + D_80220FC8);
        *(__repair_loop_constant + 0x212E + temp_a0) = *(temp_a1 + D_80220FCC);
        var_a2 += 1;
    } while (var_a2 < 4);
    D_800DD2C0 = 1;
}
