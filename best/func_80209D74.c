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

M2C_UNK func_802055F8(M2C_UNK *);                   /* extern */
extern M2C_UNK D_8011F2F0;
extern u8 D_8021B00C;
extern M2C_UNK D_8021B024;
extern M2C_UNK D_8021B038;
extern M2C_UNK D_8021B04C;
extern u16 D_8021E146;
extern s16 D_8021E1A2;
extern M2C_UNK D_8021E20B;
extern u16 D_8021EFF8;
extern u16 D_8021F024;
extern u16 D_8021F026;
extern u16 D_8021F090;

void func_80209D74(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_s4;
    void *temp_s5;
    void *temp_v1_2;

    temp_s0 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_s1 = (D_8021F090 * 0x64) + &D_8011F2F0;
    temp_s3 = (D_8021E146 * 0x64) + &D_8011F2F0;
    temp_s2 = (D_8021F024 * 0x64) + &D_8011F2F0;
    temp_s5 = (D_8021F026 * 0x64) + &D_8011F2F0;
    temp_s4 = (D_8021EFF8 * 0x64) + &D_8011F2F0;
    temp_v0 = M2C_FIELD(temp_s0, u8 *, 0);
    if (temp_v0 != 0) {
        if (((s32) temp_v0 >= 0) && ((s32) temp_v0 < 4)) {
            var_a0 = 0;
            if (*M2C_FIELD(temp_s0, u8 **, 0x50) == 0) {
                M2C_FIELD(temp_s0, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x28) - 1.0f);
            }
            do {
                temp_v1 = var_a0 & 0xFF;
                if (M2C_FIELD(temp_s0, u8 *, 0) != temp_v1) {
                    temp_v1_2 = (temp_v1 * 2) + temp_s0;
                    M2C_FIELD(temp_v1_2, u16 *, 2) = (u16) (M2C_FIELD(temp_v1_2, u16 *, 2) | 8);
                }
                var_a0 += 1;
            } while ((u32) (var_a0 & 0xFF) < 4U);
        }
        return;
    }
    if (D_8021E1A2 == 0) {
        if (*(&D_8021E20B + (M2C_FIELD(temp_s0, u8 *, 0) * 9)) == 1) {
            if (*M2C_FIELD(temp_s0, u8 **, 0x50) == 0) {
                M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18) = 0xC1A00000;
                M2C_FIELD(temp_s1, f32 *, 0x1C) = -10.0f;
                M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20) = 0;
                M2C_FIELD(temp_s3, f32 *, 0x18) = -200.0f;
                M2C_FIELD(temp_s2, f32 *, 0x18) = 200.0f;
                M2C_FIELD(temp_s5, f32 *, 0x18) = -200.0f;
                M2C_FIELD(temp_s4, f32 *, 0x18) = 200.0f;
                goto block_13;
            }
        } else if (D_8021B00C == 0) {
            if (*M2C_FIELD(temp_s0, u8 **, 0x50) == 0) {
                func_802055F8(&D_8011F2F0);
                M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(&D_8021B024, M2C_UNK32 *, 0);
                M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) M2C_FIELD(&D_8021B038, f32 *, 0);
                M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20) = (M2C_UNK32) M2C_FIELD(&D_8021B04C, M2C_UNK32 *, 0);
                M2C_FIELD(temp_s3, f32 *, 0x18) = (f32) M2C_FIELD(&D_8021B024, f32 *, 4);
                M2C_FIELD(temp_s2, f32 *, 0x18) = (f32) M2C_FIELD(&D_8021B024, f32 *, 8);
                M2C_FIELD(temp_s5, f32 *, 0x18) = (f32) M2C_FIELD(&D_8021B024, f32 *, 0xC);
                M2C_FIELD(temp_s4, f32 *, 0x18) = (f32) M2C_FIELD(&D_8021B024, f32 *, 0x10);
                M2C_FIELD(temp_s3, f32 *, 0x1C) = (f32) (M2C_FIELD(&D_8021B038, f32 *, 4) + -10.0f);
                M2C_FIELD(temp_s2, f32 *, 0x1C) = (f32) (M2C_FIELD(&D_8021B038, f32 *, 8) + -10.0f);
                M2C_FIELD(temp_s5, f32 *, 0x1C) = (f32) (M2C_FIELD(&D_8021B038, f32 *, 0xC) + -10.0f);
                M2C_FIELD(temp_s4, f32 *, 0x1C) = (f32) (M2C_FIELD(&D_8021B038, f32 *, 0x10) + -10.0f);
                M2C_FIELD(temp_s3, f32 *, 0x20) = (f32) M2C_FIELD(&D_8021B04C, f32 *, 4);
                M2C_FIELD(temp_s2, f32 *, 0x20) = (f32) M2C_FIELD(&D_8021B04C, f32 *, 8);
                M2C_FIELD(temp_s5, f32 *, 0x20) = (f32) M2C_FIELD(&D_8021B04C, f32 *, 0xC);
                M2C_FIELD(temp_s4, f32 *, 0x20) = (f32) M2C_FIELD(&D_8021B04C, f32 *, 0x10);
                goto block_13;
            }
        } else if (*M2C_FIELD(temp_s0, u8 **, 0x50) == 0) {
            M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18) = 0;
            M2C_FIELD(temp_s1, f32 *, 0x1C) = -10.0f;
            M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20) = 0;
            M2C_FIELD(temp_s3, f32 *, 0x18) = -200.0f;
            M2C_FIELD(temp_s2, f32 *, 0x18) = 200.0f;
block_13:
            if (*M2C_FIELD(temp_s0, u8 **, 0x50) == 0) {
                M2C_FIELD(temp_s1, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s1, f32 *, 0x28) - 1.0f);
                M2C_FIELD(temp_s3, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s3, f32 *, 0x28) - 1.0f);
                M2C_FIELD(temp_s2, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s2, f32 *, 0x28) - 1.0f);
                M2C_FIELD(temp_s5, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s5, f32 *, 0x28) - 1.0f);
                M2C_FIELD(temp_s4, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s4, f32 *, 0x28) - 1.0f);
            }
        }
    } else if (*M2C_FIELD(temp_s0, u8 **, 0x50) == 0) {
        M2C_FIELD(temp_s0, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x28) - 1.0f);
    }
    M2C_FIELD(temp_s0, u16 *, 4) = (u16) (M2C_FIELD(temp_s0, u16 *, 4) | 8);
    M2C_FIELD(temp_s0, u16 *, 6) = (u16) (M2C_FIELD(temp_s0, u16 *, 6) | 8);
    M2C_FIELD(temp_s0, u16 *, 8) = (u16) (M2C_FIELD(temp_s0, u16 *, 8) | 8);
}
