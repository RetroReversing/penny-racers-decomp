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

M2C_UNK func_8014A2D0(s32, M2C_UNK, M2C_UNK, u8, s32, s32); /* extern */
M2C_UNK func_8014A4C8(s32, s16, s16, M2C_UNK, s32); /* extern */
M2C_UNK func_801CA140(s32, s32);                    /* extern */
M2C_UNK func_801CA468(s32, M2C_UNK);                /* extern */
M2C_UNK func_801CA494(s32, u8, u8, u8, s32);        /* extern */
M2C_UNK func_801CABF4(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_80168C60;
extern M2C_UNK D_80187BF0;
extern s16 D_80187C00;
extern M2C_UNK D_801CF4C8;
extern M2C_UNK D_801D4390;
extern M2C_UNK D_80203080;
extern M2C_UNK D_8021B3E0;
extern M2C_UNK D_8021B3E8;
extern M2C_UNK D_8021B3F0;
extern s16 D_8021E1A6;
extern M2C_UNK D_8021E22F;
extern u8 D_8021EEA4;
extern M2C_UNK D_8021EEA5;
extern u8 D_8021EEA7;
extern M2C_UNK D_8021EEA8;
extern u8 D_8021EEB0;
extern M2C_UNK D_8021EEB1;
extern M2C_UNK D_8021F260;
extern M2C_UNK D_8021F270;

void func_8020F354(s32 arg0, s32 arg1) {
    s16 temp_s0;
    s16 temp_s0_2;
    s32 temp_a1;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s8 temp_v1_2;
    u16 *temp_v0;
    u16 temp_v1;
    u8 temp_a3;
    u8 var_a1_2;
    u8 var_a2;
    u8 var_a3_5;
    u8 var_s1_3;
    u8 var_s2;
    u8 var_s4;
    void *temp_s5;

    temp_a1 = arg1 & 0xFFFF;
    temp_s5 = (temp_a1 * 0x64) + &D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_s5, u16 *, 0x40);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s5, u16 *, 0x40) = 0x10U;
        return;
    case 16:
        func_801CA140(arg0, temp_a1);
        func_801CA494(arg0, 0U, 0U, 0U, 0xFF);
        func_8014A4C8(arg0, 1, 0x12, 0xB, 0x33);
        func_8014A4C8(arg0, 1, 0x7A, 0xB, 0x34);
        func_8014A4C8(arg0, 0x49, 0xCB, 0xB, 0x35);
        func_801CA468(arg0, 0xFF);
        func_8014A4C8(arg0, 0x16, 0x13, 6, 0);
        func_8014A4C8(arg0, 0x1A, 0x26, 0xB, D_8021EEA7 + 0x47);
        func_8014A4C8(arg0, 0x17, 0x88, 6, 0x1B);
        func_8014A4C8(arg0, 0x18, 0x9A, 6, 0x1D);
        func_8014A4C8(arg0, 0x6F, 0x9A, 6, 0x1E);
        func_8014A4C8(arg0, 0x55, 0x9E, 6, 0x21);
        func_8014A4C8(arg0, 0x21, 0x9F, 6, 3);
        func_8014A4C8(arg0, 0x18, 0xB0, 6, 0x1F);
        func_8014A4C8(arg0, 0x6F, 0xB0, 6, 0x20);
        func_8014A4C8(arg0, 0x55, 0xB4, 6, 0x21);
        func_8014A4C8(arg0, 0x20, 0xB5, 6, 0x1A);
        var_s1 = 0;
        var_a1 = 0 * 8;
        do {
            func_8014A4C8(arg0, (s16) (var_a1 + 4), 0x7C, 6, 0x19);
            var_s1 += 1;
            var_a1 = var_s1 * 8;
        } while (var_s1 < 0xD);
        func_8014A4C8(arg0, 0x16, 0x71, 0xB, D_8021E1A6 + 0x43);
        var_s1_2 = 0;
        var_s0 = 0 * 2;
        __repair_rows: {
            temp_s0 = (((var_s0 + var_s1_2) * 8) - var_s1_2) + 0x12;
            func_8014A4C8(arg0, 0x78, temp_s0, 6, 4);
            func_8014A4C8(arg0, 0xCE, temp_s0, 6, 5);
            func_8014A4C8(arg0, 0x120, temp_s0, 6, 6);
            var_a3 = 0x80;
            if (D_8021EEA4 == var_s1_2) {
                var_a3 = (-(M2C_FIELD(temp_s5, u16 *, 0x3E) == 0x10) & 0xFF) | 0x80;
            }
            temp_a3 = var_a3 & 0xFFFF;
            func_801CA494(arg0, temp_a3, temp_a3, temp_a3, 0xFF);
            temp_s0_2 = (var_s1_2 * 0x17) + 0x13;
            func_8014A4C8(arg0, 0x8F, temp_s0_2, 6, (s32) *(&D_8021B3E0 + var_s1_2));
            func_801CA468(arg0, 0xFF);
            func_8014A4C8(arg0, 0x7B, temp_s0_2, 6, (s32) *(&D_8021B3E8 + var_s1_2));
            temp_v1_2 = M2C_FIELD(((var_s1_2 * 0x22) + ((D_8021EEA7 * 0x110) + &D_8021E22F) + *(&D_8021EEA8 + var_s1_2)), s8 *, 2);
            if (var_s1_2 == 0) {
                var_a3_2 = 0;
                var_a0 = 0 * 2;
                do {
                    *(var_a0 + &D_80187BF0) = *(var_a0 + ((temp_v1_2 * 0x10) + ((D_8021EEA7 * 0xE0) + &D_8021F270)));
                    var_a3_2 += 1;
                    var_a0 = var_a3_2 * 2;
                } while (var_a3_2 < 8);
            } else {
                var_a3_3 = 0x87;
                if (temp_v1_2 != 0x5A) {
                    var_a3_3 = *(&D_8021B3F0 + var_s1_2) + temp_v1_2;
                }
                var_a3_4 = 0;
                do {
                    temp_v0_2 = var_a3_4 * 2;
                    temp_v0 = temp_v0_2 + *(&D_80203080 + (var_a3_3 * 4));
                    *(temp_v0_2 + &D_80187BF0) = *temp_v0;
                    var_a3_4 += 1;
                } while (*temp_v0 != 0xFFFF);
            }
            D_80187C00 = 0xFFFF;
            func_801CABF4(arg0, 0xD5, ((var_s1_2 * 0x17) + 0x16) & 0xFFFF, 0xA, &D_801D4390, &D_80187BF0, 0, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
            var_s1_2 += 1;
            var_s0 = var_s1_2 * 2;
        }
if (var_s1_2 < 8) goto __repair_rows;
        var_a1_2 = 0x80;
        var_a2 = 0x80;
        var_a3_5 = 0x80;
        var_s4 = 0x80;
        var_s2 = 0x80;
        var_s1_3 = 0x80;
        if (M2C_FIELD(temp_s5, u16 *, 0x3E) == 0x20) {
            if (D_8021EEB0 == 0) {
                var_a1_2 = M2C_FIELD(&D_8021F260, u8 *, 0);
                var_a2 = M2C_FIELD(&D_8021F260, u8 *, 1);
                var_a3_5 = M2C_FIELD(&D_8021F260, u8 *, 2);
            } else {
                var_s4 = M2C_FIELD(&D_8021F260, u8 *, 0);
                var_s2 = M2C_FIELD(&D_8021F260, u8 *, 1);
                var_s1_3 = M2C_FIELD(&D_8021F260, u8 *, 2);
            }
        }
        func_801CA494(arg0, var_a1_2 & 0xFF, var_a2 & 0xFF, var_a3_5 & 0xFF, 0xFF);
        func_8014A4C8(arg0, 0x55, 0xCD, 6, 0x17);
        func_801CA494(arg0, var_s4 & 0xFF, var_s2 & 0xFF, var_s1_3 & 0xFF, 0xFF);
        func_8014A4C8(arg0, 0xA3, 0xCD, 6, 0x18);
        func_801CA468(arg0, 0xFF);
        if (M2C_FIELD(temp_s5, u16 *, 0x3E) == 0x10) {
            func_801CA494(arg0, M2C_FIELD(&D_8021F260, u8 *, 0), M2C_FIELD(&D_8021F260, u8 *, 1), M2C_FIELD(&D_8021F260, u8 *, 2), 0xFF);
            if (((u8) M2C_FIELD(&D_8021EEB1, u8 *, 0) >> 6) & 1) {
                func_8014A4C8(arg0, 0x124, (M2C_FIELD(&D_8021EEB1, u8 *, -0xD) * 0x17) + 0x13, 6, 2);
            }
            if (((u8) M2C_FIELD(&D_8021EEB1, u8 *, 0) >> 6) & 2) {
                func_8014A4C8(arg0, 0xCB, (M2C_FIELD(&D_8021EEB1, u8 *, -0xD) * 0x17) + 0x13, 6, 1);
            }
            func_801CA468(arg0, 0xFF);
        }
        if (D_8021E1A6 != 3) {
            func_8014A2D0(arg0, 0x56, 0x86, *(&D_80168C60 + D_8021E1A6), 2, 0);
        } else {
            func_8014A4C8(arg0, 0x5E, 0x8C, 6, 0x22);
        }
        func_8014A2D0(arg0, 0x5C, 0xA0, M2C_FIELD(&D_8021EEA5, u8 *, 0), 2, 1);
        func_8014A2D0(arg0, 0x5C, 0xB6, M2C_FIELD(&D_8021EEA5, u8 *, 1), 2, 1);
        return;
    }
}
