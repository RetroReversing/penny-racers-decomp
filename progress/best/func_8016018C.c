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

M2C_UNK func_8013E49C(u16);                         /* extern */
M2C_UNK func_801D7028(u16, M2C_UNK);                /* extern */
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F350;
extern M2C_UNK D_8011F4E4;
extern M2C_UNK D_802378D8;
extern M2C_UNK D_80237914;

void func_8016018C(s32 arg0) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    s16 var_v0_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_a0_2;
    u16 temp_v0;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v1;
    void *temp_v1_3;

    temp_s1 = *(&D_8011F350 + ((arg0 & 0xFFFF) * 0x64));
    temp_a0 = M2C_FIELD(temp_s1, void **, 4);
    temp_s0 = (M2C_FIELD(temp_a0, u16 *, 2) * 0x64) + &D_8011F4E4;
    temp_s3 = M2C_FIELD(temp_s0, void **, 0x50);
    M2C_FIELD(temp_a0, s8 *, 0x8D0) = 0x78;
    temp_a0_2 = M2C_FIELD(temp_s1, u16 *, 0x14);
    var_v1 = 0;
    if (((u32) (temp_a0_2 & 3) >> 1) != 0) {
        var_v1 = (temp_a0_2 << 0x10) > 0;
    }
    switch (var_v1) {                               /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        M2C_FIELD(temp_s3, M2C_UNK **, 4) = &D_802378D8;
        break;
    case 1:                                         /* switch 1 */
        M2C_FIELD(temp_s3, M2C_UNK **, 4) = &D_80237914;
        break;
    }
    temp_v0 = M2C_FIELD(temp_s1, u16 *, 0x14) - 1;
    M2C_FIELD(temp_s1, u16 *, 0x14) = temp_v0;
    var_v0 = arg0 & 0xFFFF;
    if ((temp_v0 << 0x10) == 0) {
        temp_v1 = M2C_FIELD(temp_s1, void **, 4);
        if (M2C_FIELD(temp_v1, s16 *, 0x55E) != 0) {
            var_v1_2 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = 3;
        } else {
            func_801D7028(M2C_FIELD(temp_v1, u16 *, 2), 0x2A);
            var_v1_2 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = 1;
        }
        *(&D_8011F32E + var_v1_2) = var_v0_2;
        var_v0 = arg0 & 0xFFFF;
    }
    temp_v1_2 = *(&D_8011F32E + (var_v0 * 0x64));
    switch (temp_v1_2) {                            /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        M2C_FIELD(temp_s3, M2C_UNK **, 4) = &D_802378D8;
        temp_fv1 = M2C_FIELD(temp_s0, f32 *, 0x34);
        M2C_FIELD(temp_s0, f32 *, 0x34) = (f32) (((3.0f - temp_fv1) * 0.4f) + temp_fv1);
        temp_fv1_2 = M2C_FIELD(temp_s0, f32 *, 0x30);
        M2C_FIELD(temp_s0, f32 *, 0x30) = (f32) (((0.3f - temp_fv1_2) * 0.4f) + temp_fv1_2);
        if (M2C_FIELD(temp_s0, f32 *, 0x34) > 2.8f) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            return;
        }
        return;
    case 2:                                         /* switch 2 */
        M2C_FIELD(temp_s3, M2C_UNK **, 4) = &D_802378D8;
        temp_fv1_3 = M2C_FIELD(temp_s0, f32 *, 0x34);
        M2C_FIELD(temp_s0, f32 *, 0x34) = (f32) (((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3);
        temp_fv1_4 = M2C_FIELD(temp_s0, f32 *, 0x30);
        temp_fv0 = ((3.0f - temp_fv1_4) * 0.4f) + temp_fv1_4;
        M2C_FIELD(temp_s0, f32 *, 0x30) = temp_fv0;
        if (temp_fv0 > 2.8f) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
            return;
        }
        break;
    case 3:                                         /* switch 2 */
        M2C_FIELD(temp_s0, f32 *, 0x34) = 1.0f;
        M2C_FIELD(temp_s0, f32 *, 0x30) = 1.0f;
        temp_v1_3 = M2C_FIELD(temp_s1, void **, 4);
        M2C_FIELD(temp_v1_3, u16 *, 0x560) = (u16) (M2C_FIELD(temp_v1_3, u16 *, 0x560) & 0xF8);
        func_8013E49C(M2C_FIELD(temp_s1, u16 *, 0x76));
        *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
        if (M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), s16 *, 0x55E) == 0) {
            M2C_FIELD(temp_s3, M2C_UNK **, 4) = NULL;
        }
        break;
    }
}
