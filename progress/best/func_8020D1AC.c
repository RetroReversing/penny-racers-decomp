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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern short D_8021E18C;
extern signed char D_8021B37A;
extern signed char D_8021B37D;
extern short D_8021E1A2;
extern unsigned char D_8021E1A7;
s32 func_80148230();
s32 func_8014A4C8();
s32 func_801CA140();
s32 func_801CA494();
s32 func_801CABF4();
s32 func_801CAF18();
s32 func_801CB9EC();
s32 func_801CCE7C();
s32 func_801E435C();
extern u8 D_801C5E9C;
extern u8 D_801C5E9E;
extern u8 D_801C5EA0;
extern u8 D_801C5EDA;
extern u8 D_801C5EDE;
extern u8 D_801C5EE2;
extern u8 D_801C5EE6;
extern u8 D_801C5EEA;
extern u8 D_801C5EEE;
extern u8 D_801C5EF2;
extern u8 D_801C5EF6;
extern char D_801C5EFA[];
extern char D_801C5EFB[];
extern char D_801C6076[];
extern char D_801C6077[];
extern char D_801C618E[];
extern char D_801C618F[];
extern char D_801C631E[];
extern char D_801C631F[];
extern char D_801C640A[];
extern char D_801C640B[];
extern char D_801C6626[];
extern char D_801C6627[];
extern char D_801C673E[];
extern char D_801C673F[];
extern char D_801C687E[];
extern char D_801C687F[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801CF4C8[];
extern char D_801D4390[];
extern char D_801D51C8[];
extern char D_801D5470[];
extern u8 D_801E87E1;
extern char D_801E97A0[];
extern char D_801E97A1[];
extern char D_801E97A2[];
extern char D_801E97A3[];
extern char D_801E97A4[];
extern char D_801E97A5[];
extern char D_801E97A6[];
extern u8 D_8021B068;
extern u16 D_8021B30A;
extern f32 D_8021B30C;
extern char D_8021B310[];
extern char D_8021B311[];
extern char D_8021B324[];
extern char D_8021B325[];
extern char D_8021B326[];
extern char D_8021B327[];
extern char D_8021B328[];
extern u8 D_8021E18D;
extern char D_802E66D8[];
extern char D_802F92E0[];

void func_8020D1AC(s32 arg0) {
    s16 temp_s0;
    s16 temp_s1;
    s16 temp_s2;
    s16 temp_v0_2;
    s16 var_a1_12;
    s16 var_a2;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 var_a1;
    s32 var_a1_10;
    s32 var_a1_11;
    s32 var_a1_13;
    s32 var_a1_14;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a1_7;
    s32 var_a1_8;
    s32 var_a1_9;
    s32 var_a2_2;
    s32 var_s0;
    s32 var_s0_10;
    s32 var_s0_11;
    s32 var_s0_12;
    s32 var_s0_13;
    s32 var_s0_14;
    s32 var_s0_15;
    s32 var_s0_16;
    s32 var_s0_17;
    s32 var_s0_18;
    s32 var_s0_19;
    s32 var_s0_20;
    s32 var_s0_21;
    s32 var_s0_22;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_s0_8;
    s32 var_s0_9;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s8 var_v1;
    u32 temp_s1_2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    s32 temp;

    temp_s3 = -(D_8021E18C >= 9) & 0xC;
    temp = temp_s3 + 0x40;
    func_801CA140();
    func_801CA494(arg0, 0x78, 0x78, 0x78, 0xFF);
    func_801CCE7C(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, D_802E66D8, D_802F92E0);
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    func_801CA494(arg0, 0, 0, 0, 0x64);
    func_8014A4C8(arg0, 0x32, 0x19, 0xB, 0x2E);
    func_8014A4C8(arg0, 0x102, 0x19, 0xB, 0x2E);
    func_8014A4C8(arg0, 0x42, 0x18, 0xB, 0x2F);
    func_8014A4C8(arg0, 0x32, 0xBE, 0xB, 0x2E);
    func_8014A4C8(arg0, 0x102, 0xBE, 0xB, 0x2E);
    func_8014A4C8(arg0, 0x42, 0xBF, 0xB, 0x2F);
    do { func_8014A4C8(arg0, 0x4D, temp, 0xB, 0x31); } while (0);
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    func_8014A4C8(arg0, 0x30, 0x17, 0xB, 1);
    var_s0 = 0;
    var_a1 = 0 << 5;
    do {
        func_8014A4C8(arg0, (s16) (var_a1 + 0x40), 0x16, 0xB, 2);
        var_s0 += 1;
        var_a1 = var_s0 << 5;
    } while (var_s0 < 6);
    func_8014A4C8(arg0, 0x100, 0x17, 0xB, 3);
    func_8014A4C8(arg0, 0x57, 0x11, 4, 0);
    temp_s1 = temp_s3 + 0x3D;
    func_8014A4C8(arg0, 0x4A, temp_s1, 4, 0xA);
    temp_s0 = temp_s3 + 0x93;
    func_8014A4C8(arg0, 0x4A, temp_s0, 4, 0xB);
    func_8014A4C8(arg0, 0x9E, temp_s1, 4, 0xC);
    func_8014A4C8(arg0, 0x9E, temp_s0, 4, 0xD);
    func_8014A4C8(arg0, 0x30, 0xBC, 0xB, 4);
    var_s0_2 = 0;
    var_a1_2 = 0 << 5;
    loop_goto_1:
    {
        func_8014A4C8(arg0, (s16) (var_a1_2 + 0x40), 0xBD, 0xB, 5);
        var_s0_2 += 1;
        var_a1_2 = var_s0_2 << 5;
    }
    if (var_s0_2 < 6)
    {
        goto loop_goto_1;
    }
    func_8014A4C8(arg0, 0x100, 0xBC, 0xB, 6);
    if (D_8021E18C < 9) {
        temp_v0 = D_8021E18C * 2;
        func_8014A4C8(arg0, (s16) *(D_8021B310 + temp_v0), *(D_8021B311 + temp_v0) + temp_s3, 4, D_8021E18C + 1);
    }
    temp_v0_2 = (u16) D_8021E18C - 9;
    switch (temp_v0_2) {
    case 0:
        var_s0_3 = 0;
        if ((s32) D_801C5EDA > 0) {
            var_v0 = 0 * 4;
            do {
                temp_v0_3 = var_v0 + var_s0_3;
                func_8014A4C8(arg0, (*(D_801C5EFA + temp_v0_3) * 3) + 0x54, (*(D_801C5EFB + temp_v0_3) * 3) + (temp_s3 + 0x48), 0xB, 0x58);
                var_s0_3 += 1;
                var_v0 = var_s0_3 * 4;
            } while (var_s0_3 < (s32) D_801C5EDA);
        }
        var_s0_4 = 0;
        var_a1_3 = 0 * 8;
        do {
            func_8014A4C8(arg0, (s16) (((var_a1_3 + var_s0_4) * 2) + 0x54), (s16) (temp_s3 + 0x48), 4, 0x11);
            var_s0_4 += 1;
            var_a1_3 = var_s0_4 * 8;
        } while (var_s0_4 < 4);
        break;
    case 1:
        var_s0_5 = 0;
        if ((s32) D_801C5EDE > 0) {
            var_v0_2 = 0 * 4;
            do {
                temp_v0_4 = var_v0_2 + var_s0_5;
                func_8014A4C8(arg0, (*(D_801C6076 + temp_v0_4) * 3) + 0x54, (*(D_801C6077 + temp_v0_4) * 3) + (temp_s3 + 0x48), 0xB, 0x58);
                var_s0_5 += 1;
                var_v0_2 = var_s0_5 * 4;
            } while (var_s0_5 < (s32) D_801C5EDE);
        }
        var_s0_6 = 0;
        var_a1_4 = 0 * 8;
        do {
            func_8014A4C8(arg0, (s16) (((var_a1_4 + var_s0_6) * 2) + 0x54), (s16) (temp_s3 + 0x48), 4, 0x11);
            var_s0_6 += 1;
            var_a1_4 = var_s0_6 * 8;
        } while (var_s0_6 < 4);
        break;
    case 2:
        var_s0_7 = 0;
        if ((s32) D_801C5EE2 > 0) {
            var_v0_3 = 0 * 4;
            do {
                temp_v0_5 = var_v0_3 + var_s0_7;
                func_8014A4C8(arg0, (*(D_801C618E + temp_v0_5) * 3) + 0x54, (*(D_801C618F + temp_v0_5) * 3) + (temp_s3 + 0x48), 0xB, 0x58);
                var_s0_7 += 1;
                var_v0_3 = var_s0_7 * 4;
            } while (var_s0_7 < (s32) D_801C5EE2);
        }
        var_s0_8 = 0;
        var_a1_5 = 0 * 8;
        do {
            func_8014A4C8(arg0, (s16) (((var_a1_5 + var_s0_8) * 2) + 0x54), (s16) (temp_s3 + 0x48), 4, 0x11);
            var_s0_8 += 1;
            var_a1_5 = var_s0_8 * 8;
        } while (var_s0_8 < 4);
        break;
    case 3:
        var_s0_9 = 0;
        if ((s32) D_801C5EE6 > 0) {
            var_v0_4 = 0 * 4;
            do {
                temp_v0_6 = var_v0_4 + var_s0_9;
                func_8014A4C8(arg0, (*(D_801C631E + temp_v0_6) * 3) + 0x54, (*(D_801C631F + temp_v0_6) * 3) + (temp_s3 + 0x48), 0xB, 0x58);
                var_s0_9 += 1;
                var_v0_4 = var_s0_9 * 4;
            } while (var_s0_9 < (s32) D_801C5EE6);
        }
        var_s0_10 = 0;
        var_a1_6 = 0 * 8;
        do {
            func_8014A4C8(arg0, (s16) (((var_a1_6 + var_s0_10) * 2) + 0x54), (s16) (temp_s3 + 0x48), 4, 0x11);
            var_s0_10 += 1;
            var_a1_6 = var_s0_10 * 8;
        } while (var_s0_10 < 4);
        break;
    case 4:
        var_s0_11 = 0;
        if ((s32) D_801C5EEA > 0) {
            var_v0_5 = 0 * 4;
            do {
                temp_v0_7 = var_v0_5 + var_s0_11;
                func_8014A4C8(arg0, (*(D_801C640A + temp_v0_7) * 3) + 0x54, (*(D_801C640B + temp_v0_7) * 3) + (temp_s3 + 0x48), 0xB, 0x58);
                var_s0_11 += 1;
                var_v0_5 = var_s0_11 * 4;
            } while (var_s0_11 < (s32) D_801C5EEA);
        }
        var_s0_12 = 0;
        var_a1_7 = 0 * 8;
        do {
            func_8014A4C8(arg0, (s16) (((var_a1_7 + var_s0_12) * 2) + 0x54), (s16) (temp_s3 + 0x48), 4, 0x11);
            var_s0_12 += 1;
            var_a1_7 = var_s0_12 * 8;
        } while (var_s0_12 < 4);
        break;
    case 5:
        var_s0_13 = 0;
        if ((s32) D_801C5EEE > 0) {
            var_v0_6 = 0 * 4;
            do {
                temp_v0_8 = var_v0_6 + var_s0_13;
                func_8014A4C8(arg0, (*(D_801C6626 + temp_v0_8) * 3) + 0x54, (*(D_801C6627 + temp_v0_8) * 3) + (temp_s3 + 0x48), 0xB, 0x58);
                var_s0_13 += 1;
                var_v0_6 = var_s0_13 * 4;
            } while (var_s0_13 < (s32) D_801C5EEE);
        }
        var_s0_14 = 0;
        var_a1_8 = 0 * 8;
        do {
            func_8014A4C8(arg0, (s16) (((var_a1_8 + var_s0_14) * 2) + 0x54), (s16) (temp_s3 + 0x48), 4, 0x11);
            var_s0_14 += 1;
            var_a1_8 = var_s0_14 * 8;
        } while (var_s0_14 < 4);
        break;
    case 6:
        var_s0_15 = 0;
        if ((s32) D_801C5EF2 > 0) {
            var_v0_7 = 0 * 4;
            do {
                temp_v0_9 = var_v0_7 + var_s0_15;
                func_8014A4C8(arg0, (*(D_801C673E + temp_v0_9) * 3) + 0x54, (*(D_801C673F + temp_v0_9) * 3) + (temp_s3 + 0x48), 0xB, 0x58);
                var_s0_15 += 1;
                var_v0_7 = var_s0_15 * 4;
            } while (var_s0_15 < (s32) D_801C5EF2);
        }
        var_s0_16 = 0;
        var_a1_9 = 0 * 8;
        do {
            func_8014A4C8(arg0, (s16) (((var_a1_9 + var_s0_16) * 2) + 0x54), (s16) (temp_s3 + 0x48), 4, 0x11);
            var_s0_16 += 1;
            var_a1_9 = var_s0_16 * 8;
        } while (var_s0_16 < 4);
        break;
    case 7:
        var_s0_17 = 0;
        if ((s32) D_801C5EF6 > 0) {
            var_v0_8 = 0 * 4;
            do {
                temp_v0_10 = var_v0_8 + var_s0_17;
                func_8014A4C8(arg0, (*(D_801C687E + temp_v0_10) * 3) + 0x54, (*(D_801C687F + temp_v0_10) * 3) + (temp_s3 + 0x48), 0xB, 0x58);
                var_s0_17 += 1;
                var_v0_8 = var_s0_17 * 4;
            } while (var_s0_17 < (s32) D_801C5EF6);
        }
        var_s0_18 = 0;
        var_a1_10 = 0 * 8;
        do {
            func_8014A4C8(arg0, (s16) (((var_a1_10 + var_s0_18) * 2) + 0x54), (s16) (temp_s3 + 0x48), 4, 0x11);
            var_s0_18 += 1;
            var_a1_10 = var_s0_18 * 8;
        } while (var_s0_18 < 4);
        break;
    case 8:
        var_s0_19 = 0;
        if ((s32) D_801C5E9E > 0) {
            var_v0_9 = 0 * 4;
            do {
                temp_v0_11 = var_v0_9 + var_s0_19;
                func_8014A4C8(arg0, (*(D_801C7082 + temp_v0_11) * 3) + 0x54, (*(D_801C7083 + temp_v0_11) * 3) + (temp_s3 + 0x48), 0xB, 0x58);
                var_s0_19 += 1;
                var_v0_9 = var_s0_19 * 4;
            } while (var_s0_19 < (s32) D_801C5E9E);
        }
        var_s0_20 = 0;
        var_a1_11 = 0 * 8;
        do {
            func_8014A4C8(arg0, (s16) (((var_a1_11 + var_s0_20) * 2) + 0x54), (s16) (temp_s3 + 0x48), 4, 0x11);
            var_s0_20 += 1;
            var_a1_11 = var_s0_20 * 8;
        } while (var_s0_20 < 4);
        break;
    }
    func_8014A4C8(arg0, (s16) (D_8021B30A + 0x34), 0xC6, 0xB, 0x28);
    func_8014A4C8(arg0, (s16) (0xFB - D_8021B30A), 0xC6, 0xB, 0x29);
    func_8014A4C8(arg0, 0xA7, temp_s3 + 0x3C, 4, 0x17);
    func_801CA494(arg0, 0x80, 0x80, 0x80, 0xFF);
    temp_s2 = temp_s3 + 0x43;
    func_8014A4C8(arg0, 0xA8, temp_s2, 4, 0x18);
    func_8014A4C8(arg0, 0xBD, temp_s2, 4, 0x19);
    func_8014A4C8(arg0, 0xD2, temp_s2, 4, 0x1A);
    func_8014A4C8(arg0, 0xE7, temp_s2, 4, 0x1B);
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    if (*(D_8021B326 + (D_8021E18C * 5)) == 0x18) {
        var_a1_12 = 0xA8;
        var_a2 = temp_s2;
        goto block_70;
    }
    var_a1_12 = 0xBD;
    if (*(D_8021B326 + (D_8021E18C * 5)) == 0x19) {
        goto block_69;
    }
    if (*(D_8021B326 + (D_8021E18C * 5)) == 0x1A) {
        var_a1_12 = 0xD2;
        goto block_69;
    }
    if (*(D_8021B326 + (D_8021E18C * 5)) == 0x1B) {
        var_a1_12 = 0xE7;
block_69:
        var_a2 = temp_s3 + 0x43;
block_70:
        func_8014A4C8(arg0, var_a1_12, var_a2, 4);
    }
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    temp_v1 = *(D_8021B325 + (D_8021E18C * 5));
    if (temp_v1 != 0x63) {
        func_8014A4C8(arg0, 0xBD, temp_s3 + 0x72, 4, (s32) temp_v1);
    }
    temp_v1_2 = *(D_8021B324 + (D_8021E18C * 5));
    if (temp_v1_2 != 0x63) {
        func_8014A4C8(arg0, 0xBD, temp_s3 + 0x8B, 4, (s32) temp_v1_2);
    }
    temp_v1_3 = *(D_8021B327 + (D_8021E18C * 5));
    if (temp_v1_3 != 0x63) {
        func_8014A4C8(arg0, 0xD3, temp_s3 + 0x83, 4, (s32) temp_v1_3);
    }
    if (D_801C5EA0 == 1) {
        if (D_801C5E9C == 3) {
            var_v1 = 0x25;
            D_8021B37A = 0x1F;
            goto block_82;
        }
        if (D_801C5E9C == 4) {
            D_8021B37A = 0x20;
            var_v1 = 0x26;
block_82:
            D_8021B37D = var_v1;
        }
    }
    temp_v1_4 = *(D_8021B328 + (D_8021E18C * 5));
    if (temp_v1_4 != 0x63) {
        func_8014A4C8(arg0, 0xD3, temp_s3 + 0x6A, 4, (s32) temp_v1_4);
    }
    func_8014A4C8(arg0, 0xA9, temp_s3 + 0x6B, 4, 0x12);
    if (D_8021E18C < 9) {
        func_8014A4C8(arg0, 0xA9, temp_s3 + 0x84, 4, 0x13);
    }
    if (D_8021B068 == 1) {
        if (D_8021B30C >= 2.1474836e9f) {
            var_a2_2 = ((s32) (D_8021B30C - 2.1474836e9f) | 0x80000000) << 0x10;
        } else {
            var_a2_2 = (s32) D_8021B30C << 0x10;
        }
        func_8014A4C8(arg0, 0xB4, (s16) (var_a2_2 >> 0x10), 0xB, 0x2D);
    }
    if ((D_8021E1A2 < 2) && ((*(s16 *)((s8 *)D_8021E1A2 + (-0x16))) < 9)) {
        func_8014A4C8(arg0, 0x30, 0x9C, 4, 0x22);
        func_8014A4C8(arg0, 0x9F, 0x9C, 4, 0x23);
        var_s0_21 = 0;
        var_a1_13 = 0 * 8;
        do {
            func_801CAF18(arg0, (((((var_a1_13 - var_s0_21) * 8) - var_s0_21) * 2) + 0x61) & 0xFFFF, 0x9E, 0xA, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
            var_s0_21 += 1;
            var_a1_13 = var_s0_21 * 8;
        } while (var_s0_21 < 2);
        var_s0_22 = 0;
        var_a1_14 = 0 * 8;
        do {
            func_801CAF18(arg0, (((((var_a1_14 - var_s0_22) * 8) - var_s0_22) * 2) + 0x7A) & 0xFFFF, 0x9E, 0xB, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
            var_s0_22 += 1;
            var_a1_14 = var_s0_22 * 8;
        } while (var_s0_22 < 2);
        func_801CB9EC(arg0, 0xBE, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_801E97A3 + (D_8021E18C * 0x30)));
        func_801CB9EC(arg0, 0xD7, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_801E97A4 + (D_8021E18C * 0x30)));
        func_801CB9EC(arg0, 0xF0, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_801E97A5 + (D_8021E18C * 0x30)));
        func_801CB9EC(arg0, 0x50, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_801E97A0 + (D_8021E18C * 0x30)));
        func_801CB9EC(arg0, 0x69, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_801E97A1 + (D_8021E18C * 0x30)));
        func_801CB9EC(arg0, 0x82, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_801E97A2 + (D_8021E18C * 0x30)));
        func_801CABF4(arg0, 0x50, 0xAB, 0xA, D_801D4390, (D_8021E18C * 0x30) + D_801E97A6, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        func_801CABF4(arg0, 0xBE, 0xAB, 0xA, D_801D4390, (D_8021E18C * 0x30) + (D_801E97A6 + 0x12), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
    }
    temp_s0_2 = func_801E435C(D_8021E18D, D_8021E1A7);
    if ((func_80148230() & 0xFF) == 2) {
        temp_s1_2 = temp_s0_2 & 0xFF;
        if ((D_8021E18C < 9) & (temp_s1_2 < 4U)) {
            func_8014A4C8(arg0, 0x2E, 0x44, 4, 0x24);
            if (temp_s1_2 == 1) {
                var_v0_10 = 0x14;
                goto block_108;
            }
            if ((temp_s0_2 & 0xFF) == 2) {
                var_v0_10 = 0x15;
                goto block_108;
            }
            var_v0_10 = 0x16;
            if ((temp_s0_2 & 0xFF) == 3) {
block_108:
                func_8014A4C8(arg0, 0x33, 0x39, 4, var_v0_10);
            }
        }
    }
    if (!(func_80148230() & 0xFF) && (D_8021E18C < 9) && (D_801E87E1 == (D_8021E18C + 1))) {
        func_8014A4C8(arg0, 0x38, 0x7A, 4, 0x28);
        func_8014A4C8(arg0, 0x46, 0x7A, 4, 0x29);
    }
}
