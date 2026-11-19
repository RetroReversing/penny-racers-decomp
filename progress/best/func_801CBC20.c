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

M2C_UNK func_801CA4DC(s32, u8 *, M2C_UNK);          /* extern */
M2C_UNK func_801CA528(s32 *, s32, s32, u8, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_801CF4C8;

void func_801CBC20(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5) {
    u8 sp18;
    u8 sp30;
    s32 sp38;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_v0;
    u32 var_a0;

    sp38 = *arg0;
    var_s0 = 0;
    var_s3 = arg1;
    var_v1 = 0;
    var_v0 = 0 & 0xFFFF;
    __repair_rows: {
        (&sp18)[var_v0] = 0;
        var_v1 += 1;
        var_v0 = var_v1 & 0xFFFF;
    }
if ((u32) (var_v1 & 0xFFFF) < 0x11U) goto __repair_rows;
    var_v1_2 = 0;
    var_v0_2 = 0 & 0xFFFF;
    do {
        (&sp30)[var_v0_2] = 0;
        var_v1_2 += 1;
        var_v0_2 = var_v1_2 & 0xFFFF;
    } while ((u32) (var_v1_2 & 0xFFFF) < 5U);
    func_801CA4DC(arg5 + 0xE, &sp18, 0x10);
    func_801CA4DC(arg5 + 0xA, &sp30, 4);
    temp_v0 = 0 & 0xFFFF;
    var_a0 = temp_v0;
    if ((M2C_FIELD((arg5 + temp_v0), u8 *, 0xE) != 0) & (temp_v0 < 0x10U)) {
        do {
            func_801CA528(&sp38, var_s3 & 0xFFFF, arg2 & 0xFFFF, (&sp18)[var_a0], &D_801CF4C8, arg4);
            var_s0 += 1;
            var_a0 = var_s0 & 0xFFFF;
            var_s3 += arg3;
        } while ((M2C_FIELD((arg5 + var_a0), u8 *, 0xE) != 0) & (var_a0 < 0x10U));
    }
    if (M2C_FIELD(arg5, u8 *, 0xA) != 0) {
        temp_s2 = arg2 & 0xFFFF;
        func_801CA528(&sp38, var_s3 & 0xFFFF, temp_s2, 0xEU, &D_801CF4C8, arg4);
        func_801CA528(&sp38, (var_s3 + ((u32) (arg3 & 0xFFFF) >> 1)) & 0xFFFF, temp_s2, sp30, &D_801CF4C8, arg4);
    }
    *arg0 = sp38;
}
