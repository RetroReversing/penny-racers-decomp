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
M2C_UNK func_8013EA18(void *, s32, s32, s32);       /* extern */
M2C_UNK func_8013EC48(s32, f32);                    /* extern */
M2C_UNK func_8013EDFC(s32, void *);                 /* extern */
s32 func_801FA30C();                                /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F32E;

void func_8015D7F0(s32 arg0) {
    f32 temp_ft0;
    f32 temp_ft0_2;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    u16 temp_v1;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_s2;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_s0 = temp_v0 + &D_8011F2F0;
    temp_s2 = M2C_FIELD(temp_s0, void **, 0x60);
    M2C_FIELD(temp_s0, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x28) - 10.0f);
    temp_v1 = *(&D_8011F32E + temp_v0);
    if (temp_v1 != 0) {
        temp_s1 = arg0 & 0xFFFF;
        if (temp_v1 != 1) {

        } else {
            temp_ft0 = M2C_FIELD(temp_s0, f32 *, 0x30);
            func_8013EC48(temp_s1, (((M2C_FIELD(temp_s2, f32 *, 8) * 12.0f) - temp_ft0) * 0.3f) + temp_ft0);
            M2C_FIELD(temp_s2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x30) * 15.0f);
            M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xC) - 4);
            if ((u8) M2C_FIELD(temp_s0, u8 *, 0xC) < 5U) {
                func_8013E49C(M2C_FIELD(temp_s2, u16 *, 0x76));
                *(&D_8011F2FD + (temp_s1 * 0x64)) = 2;
            }
        }
    } else {
        temp_s1_2 = arg0 & 0xFFFF;
        temp_ft0_2 = M2C_FIELD(temp_s0, f32 *, 0x30);
        func_8013EC48(temp_s1_2, (((M2C_FIELD(temp_s2, f32 *, 8) * 12.0f) - temp_ft0_2) * 0.3f) + temp_ft0_2);
        M2C_FIELD(temp_s2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x30) * 15.0f);
        func_8013EDFC(temp_s1_2, temp_s2);
        if ((M2C_FIELD(temp_s2, f32 *, 8) * 9.8f) < M2C_FIELD(temp_s0, f32 *, 0x30)) {
            *(&D_8011F32E + (temp_s1_2 * 0x64)) = 1;
        }
    }
    temp_v1_2 = M2C_FIELD(temp_s2, u8 *, 0x16);
    switch (temp_v1_2) {                            /* irregular */
    case 0:
        var_a1 = 0xFF;
        var_a2 = (func_801FA30C() & 0xF) + 0xB4;
        var_a3 = 0;
block_40:
        func_8013EA18(temp_s2, var_a1, var_a2, var_a3);
        return;
    case 1:
        var_a1 = 0xFF;
        var_a2 = 0;
        var_a3 = (func_801FA30C() & 0xF) + 0xB4;
        goto block_40;
    case 2:
        var_a1 = 0;
        var_a2 = (func_801FA30C() & 0xF) + 0xB4;
        var_a3 = 0xFF;
        goto block_40;
    case 3:
        var_a1 = (func_801FA30C() & 0xF) + 0xB4;
        var_a2 = 0;
        var_a3 = 0xFF;
        goto block_40;
    case 4:
        var_a1 = (func_801FA30C() & 0xF) + 0xB4;
        var_a2 = 0xFF;
        var_a3 = 0;
        goto block_40;
    case 5:
        var_a1 = 0;
        var_a2 = 0xFF;
        var_a3 = (func_801FA30C() & 0xF) + 0xB4;
        goto block_40;
    case 6:
        var_a1 = 0xFF;
        var_a2 = 0xFF;
        var_a3 = (func_801FA30C() & 0xF) + 0xB4;
        goto block_40;
    case 7:
        var_a1 = 0xFF;
        var_a2 = (func_801FA30C() & 0xF) + 0xB4;
        var_a3 = 0xFF;
        goto block_40;
    case 8:
        var_a1 = (func_801FA30C() & 0xF) + 0xB4;
        var_a2 = 0xFF;
        var_a3 = 0xFF;
        goto block_40;
    case 9:
        temp_s0_2 = (func_801FA30C() & 0xF) + 0xB4;
        var_a1 = temp_s0_2;
        var_a2 = (func_801FA30C() & 0xF) + 0xB4;
        var_a3 = 0xFF;
        goto block_40;
    case 10:
        temp_s0_3 = (func_801FA30C() & 0xF) + 0xB4;
        var_a1 = temp_s0_3;
        var_a2 = 0xFF;
        var_a3 = (func_801FA30C() & 0xF) + 0xB4;
        goto block_40;
    case 11:
        temp_s0_4 = (func_801FA30C() & 0xF) + 0xB4;
        var_a1 = 0xFF;
        var_a2 = temp_s0_4;
        var_a3 = (func_801FA30C() & 0xF) + 0xB4;
        goto block_40;
    case 12:
        temp_s0_5 = (func_801FA30C() & 0xF) + 0xB4;
        temp_s1_3 = (func_801FA30C() & 0xF) + 0xB4;
        var_a1 = temp_s0_5;
        var_a2 = temp_s1_3;
        var_a3 = (func_801FA30C() & 0xF) + 0xB4;
        goto block_40;
    default:
        temp_s1_4 = func_801FA30C() & 0xFF;
        temp_s0_6 = func_801FA30C() & 0xFF;
        var_a1 = temp_s1_4;
        var_a2 = temp_s0_6;
        var_a3 = func_801FA30C() & 0xFF;
        goto block_40;
    }
}
