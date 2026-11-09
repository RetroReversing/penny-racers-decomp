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
extern M2C_UNK D_8011F318;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F350;
extern M2C_UNK D_8011F4E4;
extern M2C_UNK D_802378CC;
extern M2C_UNK D_80237914;

void func_80165BDC(s32 arg0) {
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v0;
    u16 temp_v1_2;
    u32 temp_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0_4;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_s0 = *(&D_8011F350 + ((arg0 & 0xFFFF) * 0x64));
    temp_a0 = (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 2) * 0x64) + &D_8011F4E4;
    temp_s1 = M2C_FIELD(temp_a0, void **, 0x50);
    temp_v0 = M2C_FIELD(temp_s0, s16 *, 0x14);
    if (temp_v0 != 0) {
        temp_v1 = (u32) (temp_v0 & 3) >> 1;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            M2C_FIELD(temp_s1, M2C_UNK **, 4) = &D_802378CC;
            break;
        case 1:                                     /* switch 1 */
            M2C_FIELD(temp_s1, M2C_UNK **, 4) = &D_80237914;
            break;
        }
        M2C_FIELD(temp_s0, s16 *, 0x14) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x14) - 1);
    }
    temp_v1_2 = *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1_2) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 0) * 0x64;
        *(&D_8011F318 + temp_v0_2) = *(&D_8011F318 + temp_v0_2) + M2C_FIELD(temp_s0, f32 *, 8);
        temp_v0_3 = M2C_FIELD(temp_s0, u16 *, 0) * 0x64;
        temp_fv1 = *(&D_8011F318 + temp_v0_3);
        if (temp_fv1 > 359.0f) {
            *(&D_8011F318 + temp_v0_3) = temp_fv1 - 360.0f;
        }
        temp_fv0 = M2C_FIELD(temp_s0, f32 *, 0xC) - M2C_FIELD(temp_s0, f32 *, 8);
        M2C_FIELD(temp_s0, f32 *, 0xC) = temp_fv0;
        if (temp_fv0 < 0.0f) {
            temp_fv0_2 = M2C_FIELD(temp_s0, f32 *, 8) * 0.9f;
            M2C_FIELD(temp_s0, f32 *, 8) = temp_fv0_2;
            if (temp_fv0_2 < 1.0f) {
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x8A4) = 0.7f;
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s8 *, 0x8A1) = 2;
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s8 *, 0x8D0) = 0x78;
                temp_v1_3 = M2C_FIELD(temp_s0, void **, 4);
                var_v0 = arg0 & 0xFFFF;
                if (M2C_FIELD(temp_v1_3, s16 *, 0x55E) == 0) {
                    func_801D7028(M2C_FIELD(temp_v1_3, u16 *, 2), 0x2A);
                    *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
                    return;
                }
block_27:
                *(&D_8011F32E + (var_v0 * 0x64)) = 3;
                return;
            }
            return;
        }
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s8 *, 0x8A1) = 6;
        temp_v0_4 = M2C_FIELD(temp_s0, void **, 4);
        temp_ft0 = M2C_FIELD(temp_v0_4, f32 *, 0x8D4);
        M2C_FIELD(temp_v0_4, f32 *, 0x8D4) = (f32) (((1.0f - temp_ft0) * 0.3f) + temp_ft0);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s32 *, 0x8D8) = 0;
        return;
    case 1:                                         /* switch 2 */
        M2C_FIELD(temp_s1, M2C_UNK **, 4) = &D_802378CC;
        temp_fv1_2 = M2C_FIELD(temp_a0, f32 *, 0x34);
        M2C_FIELD(temp_a0, f32 *, 0x34) = (f32) (((3.0f - temp_fv1_2) * 0.4f) + temp_fv1_2);
        temp_fv1_3 = M2C_FIELD(temp_a0, f32 *, 0x30);
        M2C_FIELD(temp_a0, f32 *, 0x30) = (f32) (((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3);
        if (M2C_FIELD(temp_a0, f32 *, 0x34) > 2.8f) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            return;
        }
        break;
    case 2:                                         /* switch 2 */
        M2C_FIELD(temp_s1, M2C_UNK **, 4) = &D_802378CC;
        temp_fv1_4 = M2C_FIELD(temp_a0, f32 *, 0x34);
        M2C_FIELD(temp_a0, f32 *, 0x34) = (f32) (((0.3f - temp_fv1_4) * 0.4f) + temp_fv1_4);
        temp_fv1_5 = M2C_FIELD(temp_a0, f32 *, 0x30);
        temp_fv0_3 = ((3.0f - temp_fv1_5) * 0.4f) + temp_fv1_5;
        M2C_FIELD(temp_a0, f32 *, 0x30) = temp_fv0_3;
        if (temp_fv0_3 > 2.8f) {
            var_v0 = arg0 & 0xFFFF;
            goto block_27;
        }
        break;
    case 3:                                         /* switch 2 */
        M2C_FIELD(temp_a0, f32 *, 0x34) = 1.0f;
        M2C_FIELD(temp_a0, f32 *, 0x30) = 1.0f;
        temp_v1_4 = M2C_FIELD(temp_s0, void **, 4);
        M2C_FIELD(temp_v1_4, u16 *, 0x560) = (u16) (M2C_FIELD(temp_v1_4, u16 *, 0x560) & 0xF8);
        func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
        *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
        if (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s16 *, 0x55E) == 0) {
            M2C_FIELD(temp_s1, M2C_UNK **, 4) = NULL;
            return;
        }
        M2C_FIELD(temp_s1, M2C_UNK **, 4) = &D_802378CC;
        break;
    }
}
