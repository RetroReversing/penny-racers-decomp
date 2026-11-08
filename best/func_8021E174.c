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
s16 func_8012913C(u16, M2C_UNK32, f32, M2C_UNK32);  /* extern */
M2C_UNK func_8022FE50(M2C_UNK, u8, u8, M2C_UNK);    /* extern */
extern M2C_UNK D_800DA260;
extern M2C_UNK D_8022A770;
extern M2C_UNK D_8022A772;
extern u16 D_80233EC0;
extern M2C_UNK func_8011EDAC;
extern M2C_UNK func_8021B5F4;
extern M2C_UNK func_8021C010;

void func_8021E174(u8 *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f64 temp_fs1;
    f64 temp_fs2;
    f64 temp_fs3;
    s32 var_a0;
    u8 *var_s2;
    u8 temp_a1;
    u8 temp_a2;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v1;

    var_s2 = arg0;
    if (*var_s2 != 0) {
        temp_s3 = &func_8011EDAC + 0x544;
        temp_fs3 = M2C_FIELD(&func_8021C010, f64 *, 0x1ED8);
        temp_fs2 = M2C_FIELD(&func_8021C010, f64 *, 0x1EE0);
        temp_fs1 = M2C_FIELD(&func_8021C010, f64 *, 0x1EE8);
        __repair_rows: {
            temp_a1 = M2C_FIELD(var_s2, u8 *, 1);
            temp_s0 = (temp_a1 * 0x8F0) + &D_8022A770;
            temp_a0 = (temp_a1 * 0x178) + &D_800DA260;
            temp_v1 = (M2C_FIELD(var_s2, u8 *, 0x1D) * 0x24) + (&func_8021B5F4 + 0xAC);
            M2C_FIELD(temp_a0, s16 *, 0) = (s16) M2C_FIELD(var_s2, u8 *, 0x1F);
            M2C_FIELD(temp_a0, u16 *, 2) = (u16) M2C_FIELD(temp_v1, u16 *, 0);
            M2C_FIELD(temp_a0, u16 *, 4) = (u16) M2C_FIELD(temp_v1, u16 *, 2);
            M2C_FIELD(temp_a0, u16 *, 6) = (u16) M2C_FIELD(temp_v1, u16 *, 4);
            M2C_FIELD(temp_a0, u16 *, 8) = (u16) M2C_FIELD(temp_v1, u16 *, 6);
            M2C_FIELD(temp_a0, u16 *, 0xA) = (u16) M2C_FIELD(temp_v1, u16 *, 8);
            M2C_FIELD(temp_a0, u16 *, 0xC) = (u16) M2C_FIELD(temp_v1, u16 *, 0xA);
            M2C_FIELD(temp_a0, u16 *, 0xE) = (u16) M2C_FIELD(temp_v1, u16 *, 0xC);
            M2C_FIELD(temp_a0, f32 *, 0x14) = (f32) M2C_FIELD(temp_v1, f32 *, 0x10);
            M2C_FIELD(temp_a0, f32 *, 0x18) = (f32) M2C_FIELD(temp_v1, f32 *, 0x14);
            M2C_FIELD(temp_a0, f32 *, 0x1C) = (f32) M2C_FIELD(temp_v1, f32 *, 0x18);
            M2C_FIELD(temp_a0, f32 *, 0x20) = (f32) M2C_FIELD(temp_v1, f32 *, 0x1C);
            M2C_FIELD(temp_a0, u8 *, 0x24) = (u8) M2C_FIELD(temp_v1, u8 *, 0x20);
            temp_a2 = M2C_FIELD(var_s2, u8 *, 1);
            func_8022FE50(0, temp_a2, temp_a2, 1);
            temp_s1 = (*(&D_8022A772 + (M2C_FIELD(var_s2, u8 *, 1) * 0x8F0)) * 0x64) + temp_s3;
            M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(var_s2, M2C_UNK32 *, 4);
            M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) ((f64) M2C_FIELD(var_s2, f32 *, 8) + M2C_FIELD(&func_8021C010, f64 *, 0x1EF0));
            M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20) = (M2C_UNK32) M2C_FIELD(var_s2, M2C_UNK32 *, 0xC);
            M2C_FIELD(temp_s1, f32 *, 0x28) = (f32) M2C_FIELD(var_s2, f32 *, 0x14);
            M2C_FIELD(temp_s0, s16 *, 0x8E4) = (s16) M2C_FIELD(var_s2, u8 *, 0x10);
            M2C_FIELD(temp_s0, s16 *, 0x8E6) = (s16) M2C_FIELD(var_s2, u8 *, 0x11);
            M2C_FIELD(temp_s0, s16 *, 0x8E8) = (s16) M2C_FIELD(var_s2, u8 *, 0x12);
            M2C_FIELD(temp_s0, u8 *, 0x597) = (u8) M2C_FIELD(var_s2, u8 *, 0x13);
            M2C_FIELD(temp_s0, f32 *, 0x748) = (f32) M2C_FIELD(var_s2, f32 *, 0x18);
            M2C_FIELD(temp_s0, u8 *, 0x74C) = (u8) M2C_FIELD(var_s2, u8 *, 0x1C);
            M2C_FIELD(temp_s0, f32 *, 0x770) = 150.0f;
            temp_fv0 = (f32) ((f64) (__sinf((f32) (((f64) M2C_FIELD(var_s2, f32 *, 0x14) * temp_fs3) / temp_fs2)) * M2C_FIELD(temp_s0, f32 *, 0x770)) * temp_fs1);
            M2C_FIELD(temp_s0, f32 *, 0x784) = temp_fv0;
            M2C_FIELD(temp_s0, f32 *, 0x7B4) = temp_fv0;
            M2C_FIELD(temp_s0, f32 *, 0x790) = temp_fv0;
            M2C_FIELD(temp_s0, f32 *, 0x7C0) = temp_fv0;
            M2C_FIELD(temp_s0, f32 *, 0x788) = 0.0f;
            M2C_FIELD(temp_s0, f32 *, 0x7BC) = 0.0f;
            M2C_FIELD(temp_s0, f32 *, 0x794) = 0.0f;
            M2C_FIELD(temp_s0, f32 *, 0x7C4) = 0.0f;
            temp_fv0_2 = (f32) ((f64) (__cosf((f32) (((f64) M2C_FIELD(var_s2, f32 *, 0x14) * temp_fs3) / temp_fs2)) * M2C_FIELD(temp_s0, f32 *, 0x770)) * temp_fs1);
            M2C_FIELD(temp_s0, f32 *, 0x78C) = temp_fv0_2;
            M2C_FIELD(temp_s0, f32 *, 0x7BC) = temp_fv0_2;
            M2C_FIELD(temp_s0, f32 *, 0x798) = temp_fv0_2;
            M2C_FIELD(temp_s0, f32 *, 0x7C8) = temp_fv0_2;
            M2C_FIELD(temp_s0, s16 *, 0x7D0) = func_8012913C(D_80233EC0, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20));
            M2C_FIELD(temp_s0, s16 *, 0x7D2) = 0;
            M2C_FIELD(temp_s0, s16 *, 0x814) = func_8012913C(D_80233EC0, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20));
            M2C_FIELD(temp_s0, s16 *, 0x816) = 0;
            if (M2C_FIELD(var_s2, u8 *, 0) == 2) {
                M2C_FIELD(temp_s0, f32 *, 0x5EC) = 0.0f;
                M2C_FIELD(temp_s0, s8 *, 0x5F2) = 1;
                var_a0 = 0;
                do {
                    M2C_FIELD(M2C_FIELD((((M2C_FIELD(temp_s0, u16 *, 2) + var_a0) * 0x64) + temp_s3), void **, 0x50), s32 *, 4) = 0;
                    var_a0 += 1;
                } while (var_a0 < 8);
            }
            var_s2 += 0x20;
        }
if (*var_s2 != 0) goto __repair_rows;
    }
}
