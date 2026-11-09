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

s32 func_80148230();
s32 func_8014A4C8();
s32 func_801CA140();
s32 func_801CA494();
s32 func_80209B90();
extern char D_8011F2F0[];
extern char D_8011F330[];
extern u16 D_8021AFE6;
extern char D_8021B014[];
extern char D_8021B110[];
extern char D_8021B112[];
extern char D_8021B114[];
extern s32 D_8021B128;
extern s32 D_8021B12C;
extern s32 D_8021B1A0;
extern char D_8021B1A4[];
extern char D_8021B1A6[];
extern s16 D_8021E18C;
extern u8 D_8021E19E;
extern s16 D_8021E1A2;

void func_80209310(s32 arg0, s32 arg1) {
    s32 var_a1_3;
    s32 var_a2_3;
    s32 var_a3;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_s0_4;
    s16 temp_s1;
    s16 temp_s2;
    s16 var_a1;
    s16 var_a1_2;
    s16 var_a2;
    s16 var_a2_2;
    s16 var_s1;
    s32 temp_s0;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_v0;
    u16 temp_v1;
    u8 temp_v1_2;

    temp_s0 = arg1 & 0xFFFF;
    func_80209B90(temp_s0);
    temp_v1 = *(D_8011F330 + (temp_s0 * 0x64));
    if (temp_v1 != 0) {
        var_v0 = arg1 & 0xFFFF;
        if (temp_v1 == 2) {
            func_801CA140(arg0);
            func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
            if ((D_8021E1A2 == 0) || (temp_v0 = *(D_8011F2F0 + ((arg1 & 0xFFFF) * 0x64)) * 6, func_8014A4C8(arg0, *(D_8021B110 + temp_v0), (s16) (*(D_8021B112 + temp_v0) + D_8021AFE6), 0xB, (s32) *(D_8021B114 + temp_v0)), var_s4 = 0, (D_8021E1A2 == 0))) {
                var_s4 = 0x55;
                var_s5 = 0x2A;
                if (D_8021B128 == 1) {
                    var_s4 = 7;
                }
            } else {
                var_s5 = 0;
            }
            var_s0 = 0;
            if (D_8021E1A2 >= 0) {
                do {
                    if (*(D_8021B014 + var_s0) == 1) {
                        temp_v0_2 = var_s0 * 4;
                        func_8014A4C8(arg0, (s16) (*(D_8021B1A4 + temp_v0_2) + var_s4), (s16) (*(D_8021B1A6 + temp_v0_2) + var_s5 + D_8021AFE6), 0xB, 0x56);
                    }
                    var_s0 += 1;
                } while (D_8021E1A2 >= var_s0);
            }
            if ((D_8021B128 == 1) && (temp_v1_2 = *(D_8011F2F0 + ((arg1 & 0xFFFF) * 0x64)), (temp_v1_2 == D_8021E1A2))) {
                var_s4_2 = 0;
                if (temp_v1_2 == 0) {
                    var_s4_2 = 0x34;
                    var_s5_2 = 0x14;
                } else {
                    var_s5_2 = 0;
                }
                func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xC8);
                temp_s0_2 = var_s4_2 + 0x58;
                if (!(func_80148230() & 0xFF)) {
                    func_8014A4C8(arg0, 0x8C, 0x68, 0xB, 0x59);
                    func_8014A4C8(arg0, 0x8C, 0xAB, 0xB, 0x5A);
                    func_8014A4C8(arg0, 0x114, 0x68, 0xB, 0x5B);
                    var_a1 = 0x114;
                    var_a2 = 0xAB;
                } else {
                    temp_s2 = var_s5_2 + 0x59;
                    func_8014A4C8(arg0, temp_s0_2, temp_s2, 0xB, 0x4B);
                    temp_s1 = var_s5_2 + 0x91;
                    func_8014A4C8(arg0, temp_s0_2, temp_s1, 0xB, 0x4C);
                    temp_s0_3 = var_s4_2 + 0xE0;
                    func_8014A4C8(arg0, temp_s0_3, temp_s2, 0xB, 0x4D);
                    var_a1 = temp_s0_3;
                    var_a2 = temp_s1;
                }
                func_8014A4C8(arg0, var_a1, var_a2, 0xB);
                func_801CA494(arg0, 0xFF, 0xFF, 0xFF, (s32) D_8021E19E);
                temp_s0_4 = var_s5_2 + 0x62;
                if (D_8021B1A0 > 0) {
                    func_8014A4C8(arg0, var_s4_2 + 0x5B, temp_s0_4, 0xB, 0x23);
                    func_8014A4C8(arg0, var_s4_2 + 0xD2, temp_s0_4, 0xB, 0x24);
                    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
                    var_a1_2 = var_s4_2 + 0x71;
                    var_a2_2 = var_s5_2 + 0x65;
                    goto block_34;
                }
                if (!(func_80148230() & 0xFF) && (temp_s1_2 = var_s5_2 + 0x58, ((D_8021E18C < 9) != 0))) {
                    func_8014A4C8(arg0, var_s4_2 + 0x5B, (s16) ((D_8021B12C * 0x14) + temp_s1_2), 0xB, 0x23);
                    func_8014A4C8(arg0, var_s4_2 + 0xD2, (s16) ((D_8021B12C * 0x14) + temp_s1_2), 0xB, 0x24);
                    switch (D_8021B12C) {           /* irregular */
                    case 0:
                        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
                        func_8014A4C8(arg0, 0xA4, 0x6F, 0xB, 0x25);
                        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
                        func_8014A4C8(arg0, 0xA4, 0x83, 0xB, 0x26);
                        var_a1_2 = 0xA4;
                        var_a2_2 = 0x97;
                        goto block_34;
                    case 1:
                        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
                        func_8014A4C8(arg0, 0xA4, 0x97, 0xB, 9);
                        func_8014A4C8(arg0, 0xA4, 0x6F, 0xB, 0x25);
                        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
                        var_a1_2 = 0xA4;
                        var_a2_2 = 0x83;
                        goto block_34;
                    case 2:
                        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
                        func_8014A4C8(arg0, 0xA4, 0x6F, 0xB, 0x25);
                        func_8014A4C8(arg0, 0xA4, 0x83, 0xB, 0x26);
                        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
                        var_a1_2 = 0xA4;
                        var_a2_2 = 0x97;
                        goto block_34;
                    }
                } else {
                    temp_s1_3 = var_s5_2 + 0x62;
                    func_8014A4C8(arg0, var_s4_2 + 0x5B, (s16) ((D_8021B12C * 0x14) + temp_s1_3), 0xB, 0x23);
                    func_8014A4C8(arg0, var_s4_2 + 0xD2, (s16) ((D_8021B12C * 0x14) + temp_s1_3), 0xB, 0x24);
                    if (D_8021B12C == 0) {
                        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
                        var_s1 = var_s4_2 + 0x71;
                        func_8014A4C8(arg0, var_s1, var_s5_2 + 0x65, 0xB, 0x25);
                        var_a1_3 = 0x64;
                        var_a2_3 = 0x64;
                        var_a3 = 0x64;
                    } else {
                        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
                        var_s1 = var_s4_2 + 0x71;
                        func_8014A4C8(arg0, var_s1, var_s5_2 + 0x65, 0xB, 0x25);
                        var_a1_3 = 0xFF;
                        var_a2_3 = 0xFF;
                        var_a3 = 0xFF;
                    }
                    func_801CA494(arg0, var_a1_3, var_a2_3, var_a3);
                    var_a1_2 = var_s1;
                    var_a2_2 = var_s5_2 + 0x7A;
block_34:
                    func_8014A4C8(arg0, var_a1_2, var_a2_2, 0xB);
                }
            }
        } else {
            goto block_36;
        }
    } else {
        var_v0 = arg1 & 0xFFFF;
block_36:
        temp_v1_3 = var_v0 * 0x64;
        *(D_8011F330 + temp_v1_3) = *(D_8011F330 + temp_v1_3) + 1;
    }
}
