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

extern unsigned char D_8006FB18;
extern char D_8006FB14[];

void func_80224694(void *arg0, f32 arg1) {
    f32 temp_ft0;
    f32 temp_fv0;
    f32 var_fv0;
    f32 var_fv1;

    if (D_8006FB18 != 0) {
        if (M2C_FIELD(arg0, f32 *, 0x748) > 1200.0f) {
            temp_ft0 = M2C_FIELD(arg0, f32 *, 0x770);
            if (temp_ft0 < arg1) {
                var_fv1 = 0.4f;
                var_fv0 = arg1 - temp_ft0;
            } else {
                M2C_FIELD(arg0, f32 *, 0x754) = (f32) ((M2C_FIELD(arg0, f32 *, 0x770) - arg1) * *(s32 *)((M2C_FIELD(arg0, u8 *, 0x74C) * 4) + M2C_FIELD(arg0, s32 *, 0x238)));
                var_fv0 = arg1 - M2C_FIELD(arg0, f32 *, 0x770);
                var_fv1 = 0.5f;
            }
            M2C_FIELD(arg0, f32 *, 0x770) = (f32) ((var_fv0 * var_fv1) + M2C_FIELD(arg0, f32 *, 0x770));
            return;
        }
        temp_fv0 = M2C_FIELD(arg0, f32 *, 0x770) * 0.5f;
        M2C_FIELD(arg0, f32 *, 0x770) = temp_fv0;
        if (temp_fv0 < 5.0f) {
            M2C_FIELD(arg0, s8 *, 0x74D) = 0;
            M2C_FIELD(arg0, f32 *, 0x754) = 0.0f;
            goto block_8;
        }
    } else {
block_8:
        M2C_FIELD(arg0, f32 *, 0x770) = 0.0f;
    }
}
