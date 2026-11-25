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

s32 func_801D7028();
extern char D_8011F2F0[];
extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F304[];
extern char D_8011F32E[];
extern char D_8011F340[];
extern char D_8022E618[];
extern char D_802378C0[];
extern char D_80237914[];

void func_80160B68(s32 arg0) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    s32 temp_a0_3;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1_4;
    s16 var_v0_2;
    u16 var_v1;
    s32 var_v1_2;
    u16 temp_v0_2;
    u16 temp_v1_3;
    u8 var_v0;
    void *temp_a0;
    void *temp_a2;
    void *temp_a3_2;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_5;

     temp_a3 = (arg0 & 0xFFFF) * 0x64; 
    if (*(s32 *)*(D_8011F340 + temp_a3) == 0) {
        temp_a3_2 = temp_a3 + D_8011F2F0;
        temp_a0 = (M2C_FIELD(temp_a3_2, u16 *, 0x14) * 0x64) + D_8011F2F0;
        temp_s0 = M2C_FIELD(temp_a3_2, s32 **, 0x60);
        temp_v0 = M2C_FIELD(M2C_FIELD(temp_s0, s32 **, 4), u16 *, 2) * 0x64;
        temp_a2 = temp_v0 + D_8011F2F0;
        temp_v1 = temp_v0 + (D_8011F2F0 + 0x64);
        temp_s1 = temp_v0 + (D_8011F2F0 + 0x1F4);
        temp_s3 = M2C_FIELD(temp_s1, s32 **, 0x50);
        M2C_FIELD(temp_a3_2, f32 *, 0x18) = (f32) M2C_FIELD(temp_a2, f32 *, 0x18);
        M2C_FIELD(temp_a3_2, f32 *, 0x1C) = (f32) M2C_FIELD(temp_a2, f32 *, 0x1C);
        M2C_FIELD(temp_a3_2, f32 *, 0x20) = (f32) M2C_FIELD(temp_a2, f32 *, 0x20);
        M2C_FIELD(temp_a3_2, f32 *, 0x24) = (f32) M2C_FIELD(temp_a2, f32 *, 0x24);
        M2C_FIELD(temp_a3_2, f32 *, 0x28) = (f32) M2C_FIELD(temp_a2, f32 *, 0x28);
        M2C_FIELD(temp_a3_2, f32 *, 0x2C) = (f32) M2C_FIELD(temp_a2, f32 *, 0x2C);
        M2C_FIELD(temp_a0, f32 *, 0x18) = (f32) M2C_FIELD(temp_v1, f32 *, 0x18);
        M2C_FIELD(temp_a0, f32 *, 0x1C) = (f32) M2C_FIELD(temp_v1, f32 *, 0x1C);
        M2C_FIELD(temp_a0, f32 *, 0x20) = (f32) M2C_FIELD(temp_v1, f32 *, 0x20);
        M2C_FIELD(temp_a0, f32 *, 0x24) = (f32) M2C_FIELD(temp_v1, f32 *, 0x24);
        M2C_FIELD(temp_a0, f32 *, 0x28) = (f32) M2C_FIELD(temp_v1, f32 *, 0x28);
        M2C_FIELD(temp_a0, f32 *, 0x2C) = (f32) M2C_FIELD(temp_v1, f32 *, 0x2C);
        if (*(D_8022E618 + M2C_FIELD(M2C_FIELD(temp_s0, s32 **, 4), u16 *, 4)) != 0) {
            M2C_FIELD(temp_s0, u8 *, 0x18) = 5U;
            M2C_FIELD(temp_s0, u8 *, 0x19) = 5U;
        }
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0x17) >= 0xFFU) {
          u8 var_v0_1;
            var_v0_1 = 0x9B;
          M2C_FIELD(temp_s0, u8 *, 0x17) = var_v0_1;
        } else {
          u8 var_v0_2_;
            var_v0_2_ = M2C_FIELD(temp_s0, u8 *, 0x17) + 0xA;
          M2C_FIELD(temp_s0, u8 *, 0x17) = var_v0_2_;
        }
        
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0x18) < 0xFFU) {
            M2C_FIELD(temp_s0, u8 *, 0x18) += 0xA;
        }
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0x19) < 0xFFU) {
            M2C_FIELD(temp_s0, u8 *, 0x19) += 0xA;
        }
        var_v1 = M2C_FIELD(temp_s0, u16 *, 0x14);
        var_v1 = 0;
        if (((u32) (var_v1 & 3) >> 1) != 0) {
            var_v1 = (var_v1 << 0x10) > 0;
        }
        switch (var_v1) {                           /* switch 1; irregular */
            M2C_FIELD(temp_s3, s32 **, 4) = D_802378C0;
            break;
            M2C_FIELD(temp_s3, s32 **, 4) = D_80237914;
            break;
        }
        temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 0x14) - 1;
        M2C_FIELD(temp_s0, u16 *, 0x14) = temp_v0_2;
        var_v0_2 = arg0 & 0xFFFF;
        if ((temp_v0_2 << 0x10) == 0) {
            temp_v1_2 = M2C_FIELD(temp_s0, s32 **, 4);
            if (M2C_FIELD(temp_v1_2, s16 *, 0x55E) != 0) {
                var_v1_2 = (arg0 & 0xFFFF) * 0x64;
                var_v0_2 = 3;
            } else {
                func_801D7028(M2C_FIELD(temp_v1_2, u16 *, 2), 0x2A, temp_a2, temp_a3_2);
                var_v1_2 = (arg0 & 0xFFFF) * 0x64;
                var_v0_2 = 1;
            }
            *(D_8011F32E + var_v1_2) = var_v0_2;
            var_v0_2 = arg0 & 0xFFFF;
        }
        temp_v1_3 = *(D_8011F32E + (var_v0_2 * 0x64));
        switch (temp_v1_3) {                        /* switch 2 */
            temp_v1_4 = *(D_8011F304 + ((arg0 & 0xFFFF) * 0x64)) * 0x64;
            if ((u8) *(D_8011F2FC + temp_v1_4) < 0xFAU) {
                *(D_8011F2FC + temp_v1_4) = *(D_8011F2FC + temp_v1_4) + 5;
                return;
            }
            break;
            M2C_FIELD(temp_s3, s32 **, 4) = D_802378C0;
            temp_fv1 = M2C_FIELD(temp_s1, f32 *, 0x34);
            M2C_FIELD(temp_s1, f32 *, 0x34) = (f32) (((3.0f - temp_fv1) * 0.4f) + temp_fv1);
            temp_fv1_2 = M2C_FIELD(temp_s1, f32 *, 0x30);
            M2C_FIELD(temp_s1, f32 *, 0x30) = (f32) (((0.3f - temp_fv1_2) * 0.4f) + temp_fv1_2);
            if (M2C_FIELD(temp_s1, f32 *, 0x34) > 2.8f) {
                *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
                return;
            }
            break;
            M2C_FIELD(temp_s3, s32 **, 4) = D_802378C0;
            temp_fv1_3 = M2C_FIELD(temp_s1, f32 *, 0x34);
            M2C_FIELD(temp_s1, f32 *, 0x34) = (f32) (((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3);
            temp_fv1_4 = M2C_FIELD(temp_s1, f32 *, 0x30);
            temp_fv0 = ((3.0f - temp_fv1_4) * 0.4f) + temp_fv1_4;
            M2C_FIELD(temp_s1, f32 *, 0x30) = temp_fv0;
            if (temp_fv0 > 2.8f) {
                *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
                return;
            }
            break;
            M2C_FIELD(temp_s1, f32 *, 0x34) = 1.0f;
            M2C_FIELD(temp_s1, f32 *, 0x30) = 1.0f;
            if (M2C_FIELD(M2C_FIELD(temp_s0, s32 **, 4), s16 *, 0x55E) == 0) {
                M2C_FIELD(temp_s3, s32 **, 4) = NULL;
            }
            temp_a0_3 = (arg0 & 0xFFFF) * 0x64;
            temp_v0_3 = *(D_8011F304 + temp_a0_3) * 0x64;
            *(D_8011F2FC + temp_v0_3) = *(D_8011F2FC + temp_v0_3) - 5;
            if ((u8) *(D_8011F2FC + (*(D_8011F304 + temp_a0_3) * 0x64)) < 6U) {
                *(D_8011F32E + temp_a0_3) = 4;
                return;
            }
            break;
            if (M2C_FIELD(M2C_FIELD(temp_s0, s32 **, 4), s16 *, 0x55E) == 0) {
                M2C_FIELD(temp_s3, s32 **, 4) = NULL;
            }
            temp_v1_5 = M2C_FIELD(temp_s0, s32 **, 4);
            M2C_FIELD(temp_v1_5, u16 *, 0x560) &= 0xDF;
            func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
            *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
            break;
        }
    } else {
    }
}
