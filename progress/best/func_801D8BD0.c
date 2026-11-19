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

M2C_UNK func_801D8980(s32 *, s32, s32, M2C_UNK, s32, s32); /* extern */

void func_801D8BD0(s32 *arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4, s32 arg5, s32 arg6) {
    s32 sp18;
    s32 *sp24;
    u16 sp2E;
    u16 sp36;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;

    sp24 = arg0;
    sp2E = arg3;
    sp36 = arg4;
    sp18 = *arg0;
    temp_s3 = arg1 & 0xFFFF;
    temp_s2 = arg2 & 0xFFFF;
    func_801D8980(&sp18, temp_s3, temp_s2, 0, arg5, arg6);
    temp_s0 = (arg1 + ((sp2E + 1) * 0x18)) & 0xFFFF;
    func_801D8980(&sp18, temp_s0, temp_s2, 2, arg5, arg6);
    temp_s1 = (arg2 + ((sp36 + 1) * 0x18)) & 0xFFFF;
    func_801D8980(&sp18, temp_s3, temp_s1, 5, arg5, arg6);
    func_801D8980(&sp18, temp_s0, temp_s1, 7, arg5, arg6);
    var_s1 = 1;
    if (sp2E != 0) {
        var_a1 = 1 * 2;
        __repair_rows: {
            func_801D8980(&sp18, (arg1 + ((var_a1 + var_s1) * 8)) & 0xFFFF, arg2 & 0xFFFF, 1, arg5, arg6);
            var_s1 += 1;
            var_a1 = var_s1 * 2;
        }
if ((s32) sp2E >= var_s1) goto __repair_rows;
    }
    var_s1_2 = 1;
    if (sp2E != 0) {
        var_a1_2 = 1 * 2;
        do {
            func_801D8980(&sp18, (arg1 + ((var_a1_2 + var_s1_2) * 8)) & 0xFFFF, (arg2 + ((sp36 + 1) * 0x18)) & 0xFFFF, 6, arg5, arg6);
            var_s1_2 += 1;
            var_a1_2 = var_s1_2 * 2;
        } while ((s32) sp2E >= var_s1_2);
    }
    var_s1_3 = 1;
    if (sp36 != 0) {
        var_a2 = 1 * 2;
        do {
            func_801D8980(&sp18, arg1 & 0xFFFF, (arg2 + ((var_a2 + var_s1_3) * 8)) & 0xFFFF, 3, arg5, arg6);
            var_s1_3 += 1;
            var_a2 = var_s1_3 * 2;
        } while ((s32) sp36 >= var_s1_3);
        var_s1_4 = 1;
        if (sp36 != 0) {
            var_a2_2 = 1 * 2;
            do {
                func_801D8980(&sp18, (arg1 + ((sp2E + 1) * 0x18)) & 0xFFFF, (arg2 + ((var_a2_2 + var_s1_4) * 8)) & 0xFFFF, 4, arg5, arg6);
                var_s1_4 += 1;
                var_a2_2 = var_s1_4 * 2;
            } while ((s32) sp36 >= var_s1_4);
        }
    }
    *sp24 = sp18;
}
