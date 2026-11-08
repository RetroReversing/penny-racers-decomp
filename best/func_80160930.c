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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32);                         /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F304;
extern M2C_UNK D_8011F350;
extern M2C_UNK D_8018D6C0;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D6D7;
extern M2C_UNK D_802396AC;
extern M2C_UNK func_80160B68;
extern M2C_UNK func_801610E0;

void func_80160930(void *arg0) {
    s16 temp_v0_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a1;
    void *temp_s1;

    temp_s1 = (M2C_FIELD(arg0, u16 *, 2) * 0x64) + &D_8011F2F0;
    if ((M2C_FIELD(arg0, s32 *, 0x898) == 1) && !(M2C_FIELD(arg0, u16 *, 0x560) & 0x28) && (temp_v0 = func_8013E364(), temp_s0 = temp_v0 & 0xFFFF, (temp_s0 != 0xFFFF))) {
        temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x52, 0, &D_802396AC, &func_80160B68, &func_801610E0, M2C_FIELD(temp_s1, f32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, f32 *, 0x20), M2C_FIELD(temp_s1, f32 *, 0x24), M2C_FIELD(temp_s1, f32 *, 0x28), M2C_FIELD(temp_s1, f32 *, 0x2C), M2C_FIELD(temp_s1, f32 *, 0x30), M2C_FIELD(temp_s1, f32 *, 0x34), M2C_FIELD(temp_s1, f32 *, 0x38));
        if ((u32) ((temp_v0_2 + 2) & 0xFFFF) >= 2U) {
            temp_s0_2 = temp_v0 & 0xFFFF;
            temp_s1_2 = temp_v0_2 & 0xFFFF;
            func_8013E818(temp_s0_2, temp_s1_2, 0, 0, 0, 0, 0x258);
            temp_v1 = temp_s0_2 * 0x7C;
            *(&D_8018D6C4 + temp_v1) = arg0;
            temp_a1 = temp_v1 + &D_8018D6C0;
            M2C_FIELD(temp_a1, s8 *, 0x19) = 0xFF;
            M2C_FIELD(temp_a1, s8 *, 0x18) = 0xFF;
            *(&D_8018D6D7 + temp_v1) = 0xFF;
            *(temp_v1 + (&D_8018D6C0 + 0x67) + M2C_FIELD(arg0, u16 *, 4)) = 1;
            M2C_FIELD(arg0, s8 *, 0x8D0) = 0x78;
            M2C_FIELD(arg0, u16 *, 0x560) = (u16) (M2C_FIELD(arg0, u16 *, 0x560) | 0x20);
            temp_v1_2 = temp_s1_2 * 0x64;
            *(&D_8011F350 + (*(&D_8011F304 + temp_v1_2) * 0x64)) = *(&D_8011F350 + temp_v1_2);
            temp_v0_3 = M2C_FIELD(arg0, s16 *, 0x55E);
            if (temp_v0_3 > 0) {
                M2C_FIELD(arg0, s16 *, 0x55E) = (s16) (temp_v0_3 - 1);
            }
        } else {
            func_8013E49C(temp_s0);
        }
    }
}
