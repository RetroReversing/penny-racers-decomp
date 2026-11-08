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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
s32 func_8013E364(u16);                             /* extern */
M2C_UNK func_8013E49C(s32);                         /* extern */
M2C_UNK func_8013E640(s32, s32, void *, M2C_UNK, s32, f32, s32, f32, f32, f32, s32); /* extern */
M2C_UNK func_801D7028(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8016850C;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D727;
extern M2C_UNK D_8018D730;
extern M2C_UNK func_80164740;

void func_801644F0(void *arg0) {
    s16 temp_v0_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    u16 temp_a0;
    u32 temp_s4;
    void *temp_s1;
    void *temp_s5;

    temp_v0 = M2C_FIELD(arg0, u16 *, 2) * 0x64;
    temp_s1 = temp_v0 + &D_8011F2F0;
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x560);
    temp_s5 = M2C_FIELD((&D_8011F2F0 + temp_v0), void **, 0x244);
    temp_s4 = temp_a0 & 7;
    if ((M2C_FIELD(arg0, s32 *, 0x898) == 1) && (((((u16) M2C_FIELD(arg0, u16 *, 0x560) >> 3) & 1) | (temp_s4 >= 7U)) == 0) && (temp_v0_2 = func_8013E364(temp_a0), temp_s0 = temp_v0_2 & 0xFFFF, (temp_s0 != 0xFFFF))) {
        temp_v0_3 = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, &D_8016850C, &func_80164740, 0, M2C_FIELD(temp_s1, f32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, f32 *, 0x20), 0, 0, 0, M2C_FIELD(temp_s1, f32 *, 0x30), M2C_FIELD(temp_s1, f32 *, 0x34), M2C_FIELD(temp_s1, f32 *, 0x38));
        if ((u32) ((temp_v0_3 + 2) & 0xFFFF) < 2U) {
            func_8013E49C(temp_s0);
            return;
        }
        M2C_FIELD(arg0, u16 *, 0x560) = (u16) ((M2C_FIELD(arg0, u16 *, 0x560) & 0xF8) | (temp_s4 + 1));
        temp_s0_2 = temp_v0_2 & 0xFFFF;
        temp_s1_2 = temp_v0_3 & 0xFFFF;
        func_8013E640(temp_s0_2, temp_s1_2, arg0, 0, 0, 10.0f, 0, M2C_FIELD(arg0, f32 *, 0x7C0) * 0.5f, M2C_FIELD(arg0, f32 *, 0x7C4), M2C_FIELD(arg0, f32 *, 0x7C8) * 0.5f, 3);
        temp_v1 = temp_s0_2 * 0x7C;
        *(temp_v1 + &D_8018D727 + M2C_FIELD(arg0, u16 *, 4)) = 1;
        *(&D_8018D730 + temp_v1) = 13.0f;
        *(&D_8018D6C4 + temp_v1) = arg0;
        func_801D7028(temp_s1_2, 0x2B);
        temp_v0_4 = M2C_FIELD(arg0, s16 *, 0x55E);
        if (temp_v0_4 > 0) {
            M2C_FIELD(arg0, s16 *, 0x55E) = (s16) (temp_v0_4 - 1);
        }
        if (M2C_FIELD(arg0, s16 *, 0x55E) == 0) {
            M2C_FIELD(temp_s5, s32 *, 4) = 0;
        }
    }
}
