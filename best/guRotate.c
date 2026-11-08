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

f32 __cosf(f32);                             /* extern */
M2C_UNK func_80032B80(f32, f32 *, s32);             /* extern */
M2C_UNK func_80032CC0(f32, f32 *);                  /* extern */
f32 __sinf(f32);                             /* extern */
M2C_UNK guNormalize(f32 *, f32 *, f32 *);         /* extern */
extern f32 D_800470A0;

void guRotate(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa0_4;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;

    sp58 = arg2;
    sp5C = arg3;
    sp60 = arg4;
    guNormalize(&sp58, &sp5C, &sp60);
    temp_fs0 = arg1 * D_800470A0;
    temp_fs5 = __sinf(temp_fs0);
    temp_fv0 = __cosf(temp_fs0);
    temp_fa0 = 1.0f - temp_fv0;
    temp_fs4 = sp58 * sp5C * temp_fa0;
    temp_fs1 = sp5C * sp60 * temp_fa0;
    temp_fs0_2 = sp60 * sp58 * temp_fa0;
    func_80032CC0(temp_fa0, &sp10);
    temp_fa0_2 = sp58 * sp58;
    temp_fa0_3 = sp5C * sp5C;
    temp_fv0_2 = sp58 * temp_fs5;
    temp_fv1 = sp5C * temp_fs5;
    temp_fa0_4 = sp60 * sp60;
    temp_fv0_3 = sp60 * temp_fs5;
    sp34 = temp_fs1 - temp_fv0_2;
    sp28 = temp_fs1 + temp_fv0_2;
    sp10 = temp_fa0_2 + (temp_fv0 * (1.0f - temp_fa0_2));
    sp30 = temp_fs0_2 + temp_fv1;
    sp18 = temp_fs0_2 - temp_fv1;
    sp24 = temp_fa0_3 + (temp_fv0 * (1.0f - temp_fa0_3));
    sp20 = temp_fs4 - temp_fv0_3;
    sp14 = temp_fs4 + temp_fv0_3;
    sp38 = temp_fa0_4 + (temp_fv0 * (1.0f - temp_fa0_4));
    func_80032B80(temp_fa0_4, &sp10, arg0);
}
