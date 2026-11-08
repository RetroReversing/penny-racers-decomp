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

f32 __cosf(f32);                                    /* extern */
f32 __sinf(f32);                                    /* extern */
M2C_UNK guMtxF2L(f32 *, s32);                       /* extern */
extern f32 D_801FB2B4;

void func_801FA7FC(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    s32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    s32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    f32 sp4C;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_fs0 = arg1 * D_801FB2B4;
    temp_fs1 = arg2 * D_801FB2B4;
    temp_fs3 = arg3 * D_801FB2B4;
    temp_fs2 = __sinf(temp_fs0);
    temp_fs4 = __cosf(temp_fs0);
    temp_fs0_2 = __sinf(temp_fs1);
    temp_fs5 = __cosf(temp_fs1);
    temp_fs1_2 = __sinf(temp_fs3);
    temp_fv0 = __cosf(temp_fs3);
    temp_ft1 = temp_fs2 * temp_fs0_2;
    sp10 = (temp_fs5 * temp_fv0) - (temp_ft1 * temp_fs1_2);
    sp14 = (temp_fs5 * temp_fs1_2) + (temp_ft1 * temp_fv0);
    temp_fv1 = -temp_fs4;
    sp18 = temp_fv1 * temp_fs0_2;
    sp1C = 0;
    sp20 = temp_fv1 * temp_fs1_2;
    sp24 = temp_fs4 * temp_fv0;
    sp28 = temp_fs2;
    sp2C = 0;
    temp_fs2_2 = temp_fs2 * temp_fs5;
    sp30 = (temp_fs0_2 * temp_fv0) + (temp_fs2_2 * temp_fs1_2);
    sp34 = (temp_fs0_2 * temp_fs1_2) - (temp_fs2_2 * temp_fv0);
    sp38 = temp_fs4 * temp_fs5;
    sp3C = 0;
    sp40 = 0;
    sp44 = 0;
    sp48 = 0;
    sp4C = 1.0f;
    guMtxF2L(&sp10, arg0);
}
