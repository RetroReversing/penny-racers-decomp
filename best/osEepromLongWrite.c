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

M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK osSetTimer(M2C_UNK *, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_80041410(s32, s32, s32);                   /* extern */
extern M2C_UNK D_800DA1B0;
extern M2C_UNK D_800DAE20;
extern M2C_UNK D_800DDEA0;

s32 osEepromLongWrite(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
s32 __repair_result_var_v0;

    var_s3 = arg2;
    var_s1 = arg3;
    var_s2 = arg1;
    var_s0 = 0;
    if (var_s1 > 0) {
loop_2:
        __repair_result_var_v0 = func_80041410(arg0, var_s2 & 0xFF, var_s3);
        var_s0 = __repair_result_var_v0;
        var_s1 -= 8;
        if (var_s0 == 0) {
            var_s2 += 1;
            var_s3 += 8;
            osSetTimer(&D_800DAE20, 0, 0, &D_800DDEA0, &D_800DA1B0);
            osRecvMesg(&D_800DDEA0, 0, 1);
            if (var_s1 <= 0) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_v0 = var_s0;
    }
    return var_v0;
}
