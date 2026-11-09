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

s32 func_8014A4C8();
s32 func_801CA140();
s32 func_801CA468();
s32 func_801CABF4();
extern char D_8011F2F0[];
extern char D_8011F2FC[];
extern char D_8011F32E[];
extern char D_8011F32F[];
extern char D_801C586C[];
extern u8 D_801C6B50;
extern char D_801C6BE0[];
extern u16 D_801C7074;
extern u16 D_801C7078;
extern char D_801C7081[];
extern char D_801C7084[];
extern void *D_801C7AB0;
extern u8 D_801C7AB6;
extern u8 D_801CA130;
extern char D_801CF4C8[];
extern char D_801D4390[];

void func_801B42C8(s32 arg0, s32 arg1) {
    s32 var_a1_2;
    s16 var_a2;
    s16 var_a2_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0_2;
    u16 temp_v0;
    u32 var_v0_3;
    u8 var_v0;
    u8 var_v1;

    func_801CA140();
    var_s1 = 0;
    do {
        var_s0 = 0;
        var_a1 = 0 & 0xFF;
loop_2:
        func_8014A4C8(arg0, (var_a1 << 5) + 0xF0, (s16) ((var_s1 & 0xFF) * 0x10), 0xD, 2);
        var_s0 += 1;
        var_a1 = var_s0 & 0xFF;
        if ((u32) (var_s0 & 0xFF) < 2U) {
            goto loop_2;
        }
        var_s1 += 1;
    } while ((u32) (var_s1 & 0xFF) < 0x10U);
    temp_a0 = D_801C7074 * 0x64;
    temp_v0 = *(D_8011F32E + temp_a0);
    if (((temp_v0 == 0xD) | (temp_v0 == 0x14)) != 0) {
        var_v0 = *(D_8011F2F0 + temp_a0);
    } else {
        var_v0 = *(D_8011F32F + (D_801C7074 * 0x64));
    }
    D_801C6B50 = var_v0;
    var_v0_2 = arg1 & 0xFFFF;
    if (((u32) (D_801C6B50 - 4) < 2U) || (var_v0_2 = arg1 & 0xFFFF, (((u32) (D_801C6B50 - 6) < 2U) != 0)) || (var_v0_2 = arg1 & 0xFFFF, (((u32) (D_801C6B50 - 8) < 2U) != 0)) || (var_v0_2 = arg1 & 0xFFFF, (((u32) (D_801C6B50 - 0xA) < 2U) != 0)) || (var_v0_2 = arg1 & 0xFFFF, (D_801C6B50 == 0xC))) {
        func_801CA468(arg0, *(D_8011F2FC + (var_v0_2 * 0x64)));
        var_a2 = 0xC;
        goto block_15;
    }
    if ((u32) (D_801C6B50 - 0x11) < 2U) {
        func_801CA468(arg0, *(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64)));
        var_a2 = 0x17;
block_15:
        func_8014A4C8(arg0, 0xF1, var_a2, 0xD);
        func_801CA468(arg0, 0xFFU);
    } else if (((u32) (D_801C6B50 - 0xE) < 2U) || (temp_v0_2 = D_801C6B50 & 0xFF, (((temp_v0_2 == 0x10) | (temp_v0_2 == 0x13)) != 0))) {
        func_801CA468(arg0, *(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64)));
        func_8014A4C8(arg0, 0xF1, 0xC, 0xD, 4);
        func_801CA468(arg0, 0xFFU);
        if ((u8) D_801C6B50 >= 0xFU) {
            func_8014A4C8(arg0, 0xF3, 0x3B, 0xD, 0x15);
            func_8014A4C8(arg0, 0xF1, 0x45, 0xD, 0x13);
            func_8014A4C8(arg0, 0xF2, 0x57, 0xD, 6);
            func_8014A4C8(arg0, 0x10E, 0x59, 0xD, 0x14);
            if (*(D_801C6BE0 + (D_801C7078 * 2)) != 0xFFFF) {
                if (M2C_FIELD(D_801C7AB0, u8 *, 0) == 3) {
                    var_v1 = *(D_801C7084 + (D_801CA130 * 5));
                    var_v0_3 = var_v1 & 0xFF;
                } else {
                    var_v1 = *(D_801C7084 + (D_801CA130 * 5)) - 0x2E;
                    var_v0_3 = var_v1 & 0xFF;
                }
                if (var_v0_3 < 0xAU) {
                    var_a1_2 = 0xF8;
                    goto block_29;
                }
                var_a1_2 = 0xF3;
                if ((u32) ((var_v1 - 0xA) & 0xFF) < 0x20U) {
                    goto block_29;
                }
                if ((u32) ((var_v1 - 0x2A) & 0xFF) < 4U) {
                    var_a1_2 = 0xFD;
block_29:
                    func_801CABF4(arg0, var_a1_2, 0x46, 0xA);
                }
                func_801CABF4(arg0, 0x11A, 0x5A, 0xA, &D_801D4390, *(D_801C586C + ((*(D_801C7081 + (D_801CA130 * 5)) / 15) & 0x3FC)), 0, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
            }
        }
    }
    func_8014A4C8(arg0, 0xF2, 0x73, 0xD, 0x24);
    func_8014A4C8(arg0, 0xF2, 0x6B, 0xD, 7);
    func_8014A4C8(arg0, 0x10E, 0x6D, 0xD, 0x14);
    temp_v1 = (0xC8 - D_801C7AB6) / 100;
    temp_s1 = ((0xC8 - D_801C7AB6) % 100) / 10;
    temp_v1_2 = temp_v1 & 0xFF;
    temp_s2 = (0xC8 - D_801C7AB6) % 10;
    if (temp_v1_2 != 0) {
        func_801CABF4(arg0, 0x110, 0x6E, 0xA, &D_801D4390, *(D_801C586C + (temp_v1_2 * 4)), 0, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
    }
    temp_a0_2 = temp_s1 & 0xFF;
    if (((temp_v1 & 0xFF) | (temp_a0_2 != 0)) != 0) {
        func_801CABF4(arg0, 0x11A, 0x6E, 0xA, &D_801D4390, *(D_801C586C + (temp_a0_2 * 4)), 0, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
    }
    func_801CABF4(arg0, 0x124, 0x6E, 0xA, &D_801D4390, *(D_801C586C + ((temp_s2 & 0xFF) * 4)), 0, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
        var_a2_2 = 0x7F;
    } else {
        func_8014A4C8(arg0, 0xF7, 0x7F, 0xD, 0x25);
        func_8014A4C8(arg0, 0xF8, 0x80, 0xD, 0x26);
        var_a2_2 = 0x8C;
    }
    func_8014A4C8(arg0, 0xF7, var_a2_2, 0xD);
    func_8014A4C8(arg0, 0xF3, 0xAC, 0xD, 0x12);
    func_8014A4C8(arg0, 0xFC, 0xAD, 0xD, 0x23);
    func_8014A4C8(arg0, 0xF3, 0xB6, 0xD, 0x16);
}
