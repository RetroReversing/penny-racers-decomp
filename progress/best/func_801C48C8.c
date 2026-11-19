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

extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 *D_801C7AB0;
extern char D_801C7AC0[];

void func_801C48C8(s32 arg0, u8 *arg1, s8 *arg2, s8 *arg3) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_v0_3;
    u8 temp_a1;
    u8 var_a0;

    if ((*(D_801C7083 + ((arg0 & 0xFF) * 5)) == 0) || (temp_v0 = (arg0 & 0xFF) * 5, temp_a1 = *((*(D_801C7083 + temp_v0) * 0x18) + D_801C7AC0 + *(D_801C7082 + temp_v0)), ((temp_a1 & 0xFF) == 0xFF))) {
        *arg2 = 0x7F;
        *arg1 = 0x7F;
        return;
    }
    if (*D_801C7AB0 == 3) {
        var_a0 = *(D_801C7084 + ((temp_a1 & 0xFF) * 5));
        var_v0 = var_a0 - 5;
    } else {
        var_a0 = *(D_801C7084 + ((temp_a1 & 0xFF) * 5)) - 0x2E;
        var_v0 = var_a0 - 5;
    }
    var_v0_2 = arg0 & 0xFF;
    if (((u32) (var_v0 & 0xFF) < 5U) || (var_v0_2 = arg0 & 0xFF, ((((u32) ((var_a0 - 0x20) & 0xFF) < 5U) | ((s8) var_a0 == 0x2A)) != 0))) {
        var_v1 = arg0 & 0xFF;
        if (((*(D_801C7081 + (var_v0_2 * 5)) == 0) && (var_v1 = arg0 & 0xFF, (*(D_801C7081 + ((temp_a1 & 0xFF) * 5)) == 0x3C))) || ((*(D_801C7081 + (var_v1 * 5)) == 0x3C) && (*(D_801C7081 + ((temp_a1 & 0xFF) * 5)) == 0x78))) {
            temp_v0_2 = (arg0 & 0xFF) * 5;
            *arg1 = *(D_801C7082 + temp_v0_2);
            var_v0_3 = *(D_801C7083 + temp_v0_2) - 1;
            goto block_22;
        }
    } else if ((u32) ((var_a0 - 0xA) & 0xFF) < 6U) {
        var_v1_2 = arg0 & 0xFF;
        if (((*(D_801C7081 + ((arg0 & 0xFF) * 5)) == 0) && (var_v1_2 = arg0 & 0xFF, (*(D_801C7081 + ((temp_a1 & 0xFF) * 5)) == 0x3C))) || ((*(D_801C7081 + (var_v1_2 * 5)) == 0x3C) && (*(D_801C7081 + ((temp_a1 & 0xFF) * 5)) == 0x78))) {
            temp_v0_3 = (arg0 & 0xFF) * 5;
            *arg1 = *(D_801C7082 + temp_v0_3);
            *arg2 = *(D_801C7083 + temp_v0_3) - 1;
            *arg3 = 0xFF;
        }
    } else if ((u32) ((var_a0 - 0x25) & 0xFF) < 5U) {
        temp_a0 = (arg0 & 0xFF) * 5;
        if (*(D_801C7081 + temp_a0) == *(D_801C7081 + ((temp_a1 & 0xFF) * 5))) {
            *arg1 = *(D_801C7082 + temp_a0);
            var_v0_3 = *(D_801C7083 + temp_a0) - 1;
block_22:
            *arg2 = var_v0_3;
            *arg3 = 0;
        }
    }
}
