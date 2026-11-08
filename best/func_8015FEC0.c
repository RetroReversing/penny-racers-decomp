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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, s32, f32, f32, f32, s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32, s32);                    /* extern */
M2C_UNK func_8013E640(s32, s32, void *, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_801D7028(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D6D6;
extern M2C_UNK D_80239678;
extern M2C_UNK func_8016018C;
extern M2C_UNK func_801604F0;

void func_8015FEC0(void *arg0) {
    s16 temp_v0_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s8 var_s2;
    void *temp_s4;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x898);
    if ((temp_s1 == 1) && !(M2C_FIELD(arg0, u16 *, 0x560) & 0xF) && (temp_v0 = func_8013E364(), temp_s2 = temp_v0 & 0xFFFF, (temp_s2 != 0xFFFF))) {
        temp_s4 = (M2C_FIELD(arg0, u16 *, 2) * 0x64) + &D_8011F2F0;
        temp_v0_2 = func_800DE41C(0, 0, 3, 0, 0x20, temp_s1, NULL, &func_8016018C, 0, M2C_FIELD(temp_s4, f32 *, 0x18), M2C_FIELD(temp_s4, f32 *, 0x1C), M2C_FIELD(temp_s4, f32 *, 0x20), 0, 0, 0, 0, 0, 0);
        temp_s0 = temp_v0 & 0xFFFF;
        if ((u32) ((temp_v0_2 + 2) & 0xFFFF) < 2U) {
            func_8013E49C(temp_s2, temp_v0_2);
            return;
        }
        func_8013E818(temp_s0, temp_v0_2 & 0xFFFF, 0, 0, 0, 0, 0x258);
        *(&D_8018D6C4 + (temp_s0 * 0x7C)) = arg0;
        M2C_FIELD(arg0, s8 *, 0x8D0) = 0x78;
        M2C_FIELD(arg0, u16 *, 0x560) = (u16) (M2C_FIELD(arg0, u16 *, 0x560) | 7);
        temp_v0_3 = M2C_FIELD(arg0, s16 *, 0x55E);
        if (temp_v0_3 > 0) {
            M2C_FIELD(arg0, s16 *, 0x55E) = (s16) (temp_v0_3 - 1);
        }
        var_s2 = 0;
loop_9:
        temp_v0_4 = func_8013E364();
        temp_s1_2 = temp_v0_4 & 0xFFFF;
        if (temp_s1_2 != 0xFFFF) {
            temp_v0_5 = func_800DE41C(0, 0, 1, 0, 0x51, 0x64, &D_80239678, &func_801604F0, 0, M2C_FIELD(temp_s4, f32 *, 0x18), M2C_FIELD(temp_s4, f32 *, 0x1C), M2C_FIELD(temp_s4, f32 *, 0x20), 0, 0, 0, 0x3D4CCCCD, 0x3D4CCCCD, 0x3D4CCCCD);
            temp_s0_2 = temp_v0_4 & 0xFFFF;
            if ((u32) ((temp_v0_5 + 2) & 0xFFFF) >= 2U) {
                temp_s1_3 = temp_v0_5 & 0xFFFF;
                func_8013E640(temp_s0_2, temp_s1_3, arg0, 0x40, 0, 0, 0, 0, 0, 0, 0x258);
                temp_v0_6 = temp_s0_2 * 0x7C;
                *(&D_8018D6C4 + temp_v0_6) = arg0;
                *(&D_8018D6D6 + temp_v0_6) = var_s2;
                func_801D7028(temp_s1_3, 0x32);
                var_s2 += 1;
                if (var_s2 >= 3) {

                } else {
                    goto loop_9;
                }
            } else {
                func_8013E49C(temp_s1_2, temp_v0_5);
            }
        }
    }
}
