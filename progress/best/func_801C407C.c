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
extern char D_801C7AD7[];

void func_801C407C(s32 arg0, s8 *arg1, u8 *arg2, s8 *arg3) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s8 var_v0_4;
    u32 var_v0;
    u8 temp_a1;
    u8 var_a0;

    if ((*(D_801C7082 + ((arg0 & 0xFF) * 5)) == 0) || (temp_v0 = (arg0 & 0xFF) * 5, temp_a1 = *((*(D_801C7083 + temp_v0) * 0x18) + D_801C7AD7 + *(D_801C7082 + temp_v0)), ((temp_a1 & 0xFF) == 0xFF))) {
        *arg2 = 0x7F;
        *arg1 = 0x7F;
        return;
    }
    if (*D_801C7AB0 == 3) {
        var_a0 = *(D_801C7084 + ((temp_a1 & 0xFF) * 5));
        var_v0 = var_a0 & 0xFF;
    } else {
        var_a0 = *(D_801C7084 + ((temp_a1 & 0xFF) * 5)) - 0x2E;
        var_v0 = var_a0 & 0xFF;
    }
    var_v0_2 = arg0 & 0xFF;
    if ((var_v0 < 5U) || (var_v0_2 = arg0 & 0xFF, ((((u32) ((var_a0 - 0x16) & 0xFF) < 5U) | ((s8) var_a0 == 0x2C)) != 0))) {
        temp_a0 = var_v0_2 * 5;
        if (*(D_801C7081 + temp_a0) == *(D_801C7081 + ((temp_a1 & 0xFF) * 5))) {
            *arg1 = *(D_801C7082 + temp_a0) - 1;
            *arg2 = *(D_801C7083 + temp_a0);
            goto block_20;
        }
    } else {
        var_v0_3 = arg0 & 0xFF;
        if (((u32) ((var_a0 - 0xD) & 0xFF) < 3U) || (var_v0_3 = arg0 & 0xFF, (((u32) ((var_a0 - 0x13) & 0xFF) < 3U) != 0))) {
            temp_a0_2 = var_v0_3 * 5;
            if (*(D_801C7081 + temp_a0_2) == *(D_801C7081 + ((temp_a1 & 0xFF) * 5))) {
                *arg1 = *(D_801C7082 + temp_a0_2) - 1;
                *arg2 = *(D_801C7083 + temp_a0_2);
                var_v0_4 = 0xFF;
                goto block_21;
            }
        } else if (((u32) ((var_a0 - 0x1B) & 0xFF) < 5U) && (((var_v1 = arg0 & 0xFF, (*(D_801C7081 + ((arg0 & 0xFF) * 5)) == 0x3C)) && (var_v1 = arg0 & 0xFF, (*(D_801C7081 + ((temp_a1 & 0xFF) * 5)) == 0))) || ((*(D_801C7081 + (var_v1 * 5)) == 0x78) && (*(D_801C7081 + ((temp_a1 & 0xFF) * 5)) == 0x3C)))) {
            temp_v1 = (arg0 & 0xFF) * 5;
            *arg1 = *(D_801C7082 + temp_v1) - 1;
            *arg2 = *(D_801C7083 + temp_v1);
block_20:
            var_v0_4 = 1;
block_21:
            *arg3 = var_v0_4;
        }
    }
}
