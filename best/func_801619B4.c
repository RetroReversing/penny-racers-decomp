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

M2C_UNK func_80129918(void *, M2C_UNK32, f32, M2C_UNK32, f32, f32, f32); /* extern */
M2C_UNK func_8013E49C(u16);                         /* extern */
s32 func_8013F050(s32, void *);                     /* extern */
M2C_UNK func_8015CB40(s32);                         /* extern */
M2C_UNK func_801D7028(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_80168574;

void func_801619B4(s16 arg0) {
    f32 temp_fv1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s1_2;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_v0_3;
    u16 temp_v0_4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_s0;
    void *temp_s1;
    void *var_v0;

    temp_s1 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_s0 = M2C_FIELD(temp_s1, void **, 0x60);
    temp_v0 = M2C_FIELD(temp_s0, s16 *, 0x14);
    if (temp_v0 > 0) {
        temp_v0_2 = temp_v0 - 1;
        M2C_FIELD(temp_s0, s16 *, 0x14) = temp_v0_2;
        if ((temp_v0_2 << 0x10) <= 0) {
            var_v1 = 0;
            var_v0 = temp_s0;
            do {
                M2C_FIELD(var_v0, s8 *, 0x67) = 0;
                var_v1 += 1;
                var_v0 = temp_s0 + var_v1;
            } while (var_v1 < 7);
        }
    }
    temp_fv1 = M2C_FIELD(temp_s0, f32 *, 0xC);
    if (temp_fv1 != 0.0f) {
        M2C_FIELD(temp_s0, f32 *, 0xC) = (f32) (temp_fv1 - 0.1f);
        func_80129918(temp_s0 + 0x1C, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20), M2C_FIELD(temp_s0, f32 *, 8), M2C_FIELD(temp_s0, f32 *, 0xC), M2C_FIELD(temp_s0, f32 *, 0x10));
        M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(temp_s0, M2C_UNK32 *, 0x24);
        M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s0, f32 *, 0x28);
        M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20) = (M2C_UNK32) M2C_FIELD(temp_s0, M2C_UNK32 *, 0x2C);
        if (M2C_FIELD(temp_s0, s32 *, 0x1C) & 0xFFFF00) {
            M2C_FIELD(temp_s0, f32 *, 0xC) = 0.0f;
            return;
        }
        if (M2C_FIELD(temp_s1, f32 *, 0x1C) < *(&D_80168574 + (M2C_FIELD(&D_8006FAF0, u16 *, 0x20) * 4))) {
            temp_a0_3 = M2C_FIELD(temp_s0, void **, 4);
            temp_v0_4 = M2C_FIELD(temp_a0_3, u16 *, 0x560);
            M2C_FIELD(temp_a0_3, u16 *, 0x560) = (u16) (temp_v0_4 & 0xF8);
            temp_a0_4 = M2C_FIELD(temp_s0, void **, 4);
            M2C_FIELD(temp_a0_4, u16 *, 0x560) = (u16) (M2C_FIELD(temp_a0_4, u16 *, 0x560) | ((temp_v0_4 & 7) - 1));
            func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
            var_v0_2 = (arg0 & 0xFFFF) * 0x19;
block_13:
            *(&D_8011F2FD + (var_v0_2 * 4)) = 2;
        }
    } else {
        temp_s1_2 = arg0 & 0xFFFF;
        if (func_8013F050(temp_s1_2, temp_s0) & 0xFF) {
            temp_a0 = M2C_FIELD(temp_s0, void **, 4);
            temp_v0_3 = M2C_FIELD(temp_a0, u16 *, 0x560);
            M2C_FIELD(temp_a0, u16 *, 0x560) = (u16) (temp_v0_3 & 0xF8);
            temp_a0_2 = M2C_FIELD(temp_s0, void **, 4);
            M2C_FIELD(temp_a0_2, u16 *, 0x560) = (u16) (M2C_FIELD(temp_a0_2, u16 *, 0x560) | ((temp_v0_3 & 7) - 1));
            func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
            func_8015CB40(temp_s1_2);
            func_801D7028(temp_s1_2, 0x33);
            var_v0_2 = temp_s1_2 * 0x19;
            goto block_13;
        }
    }
}
