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

extern char D_801C5EA8[];
extern char D_801C5EB0[];
extern char D_801C5EB8[];
extern char D_801C5EC0[];
extern char D_801C5EC8[];
extern char D_801C5ED0[];
extern char D_801C7084[];
extern void *D_801C7AB0;

s32 func_801C34CC(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_v0;
    s8 var_v0_2;
    u8 var_v1;

    var_v0 = 0xFF;
    if ((arg0 & 0xFF) != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
        if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 3) {
            var_v1 = *(D_801C7084 + ((arg0 & 0xFF) * 5));
            var_a0 = 0;
        } else {
            var_v1 = *(D_801C7084 + ((arg0 & 0xFF) * 5)) - 0x2E;
            var_a0 = 0;
        }
loop_5:
        temp_v0 = var_a0 & 0xFF;
        if ((u32) (var_v1 & 0xFF) < 5U) {
            var_v0_2 = *(D_801C5EA8 + temp_v0);
            goto block_17;
        }
        if ((u32) ((var_v1 - 5) & 0xFF) < 5U) {
            var_v0_2 = *(D_801C5EB0 + temp_v0);
            goto block_17;
        }
        temp_v0_2 = var_a0 & 0xFF;
        if ((u32) ((var_v1 - 0x16) & 0xFF) < 5U) {
            var_v0_2 = *(D_801C5EB8 + temp_v0_2);
            goto block_17;
        }
        if ((u32) ((var_v1 - 0x1B) & 0xFF) < 5U) {
            var_v0_2 = *(D_801C5EC0 + temp_v0_2);
            goto block_17;
        }
        temp_v0_3 = var_a0 & 0xFF;
        if ((u32) ((var_v1 - 0x20) & 0xFF) < 5U) {
            var_v0_2 = *(D_801C5EC8 + temp_v0_3);
            goto block_17;
        }
        if ((u32) ((var_v1 - 0x25) & 0xFF) < 5U) {
            var_v0_2 = *(D_801C5ED0 + temp_v0_3);
block_17:
            var_v0 = var_a0 & 0xFF;
            if (var_v0_2 != (s8) var_v1) {
                goto block_18;
            }
        } else {
block_18:
            var_a0 += 1;
            var_v0 = var_a0 & 0xFF;
            if ((u32) (var_a0 & 0xFF) < 5U) {
                goto loop_5;
            }
        }
    }
    return var_v0;
}
