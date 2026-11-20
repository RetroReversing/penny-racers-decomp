/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern unsigned char D_8021F260;
extern unsigned char D_8021F261;
extern unsigned char D_8021F262;
extern unsigned char D_80189CBF;
extern unsigned char D_8021F263;
s32 func_801497AC();
s32 func_8014A2D0();
s32 func_8014A4C8();
s32 func_8014A9F4();
s32 func_8014BA14();
s32 func_801CA140();
s32 func_801CA468();
s32 func_801CA494();
s32 func_801CABF4();
extern char D_800DE080[];
extern char D_8011F2F0[];
extern char D_80187BF0[];
extern u8 D_80189C9A;
extern u8 D_80189C9B;
extern u8 D_80189CB6;
extern u8 D_80189CB7;
extern u16 D_80189CC6;
extern char D_80189CC9[];
extern char D_8018A277[];
extern char D_8018BC35[];
extern char D_8018D140[];
extern char D_8018D26C[];
extern char D_801CF4C8[];
extern char D_801D4390[];

void func_80145A6C(s32 arg0, s32 arg1) {
    void *sp34;
    s16 temp_s0_2;
    s16 temp_s1;
    s16 temp_s6;
    s16 temp_v1_2;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s2_5;
    s32 var_s2_6;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_v0;
    u16 temp_s0_3;
    u16 temp_s0_4;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1_3;
    u32 var_s0;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_a3_3;
    u8 var_a1;
    u8 var_a1_2;
    u8 var_a2;
    u8 var_a2_2;
    u8 var_a3;
    u8 var_a3_2;
    u8 var_s1;
    u8 var_s3_3;
    u8 var_s4;
    void *temp_v1;

    temp_a1 = arg1 & 0xFFFF;
    sp34 = (temp_a1 * 0x64) + D_8011F2F0;
    func_801CA140(arg0, temp_a1);
    temp_v1 = (*(void **)((char *)(D_800DE080) + 0x64));
    (*(void **)((char *)(D_800DE080) + 0x64)) = (void *) (temp_v1 + 8);
    (*(s32 *)((char *)(temp_v1) + 0)) = 0xED000000;
    (*(s32 *)((char *)(temp_v1) + 4)) = 0x5003C0;
    if (D_80189CC6 & 0x100) {
        var_a1 = 0xFF;
        var_a2 = 0xFF;
        var_a3 = 0xFF;
    } else {
        var_a1 = 0;
        var_a2 = 0;
        var_a3 = 0;
    }
    var_s3 = 0;
    func_801CA494(arg0, var_a1, var_a2, var_a3);
    var_v0 = 0 & 1;
    do {
        var_s0 = 0x2000;
        if (var_v0 != 0) {
            var_s0 = 0x20;
        }
        var_s2 = 0;
        temp_s6 = var_s3 << 5;
        temp_v1_2 = (var_s3 << 5) + 0xA0;
do {
        temp_s0 = var_s2 << 6;
        temp_s1 = temp_s0 + (var_s0 & 0xFF);
        func_8014A4C8(arg0, temp_s6, temp_s1, 0xB, 7);
        temp_s0_2 = temp_s0 + (var_s0 >> 8);
        func_8014A4C8(arg0, temp_s6, temp_s0_2, 0xB, 8);
        func_8014A4C8(arg0, temp_v1_2, temp_s1, 0xB, 7);
        func_8014A4C8(arg0, temp_v1_2, temp_s0_2, 0xB, 8);
        var_s2 += 1;
        } while (var_s2 < 5);
        var_s3 += 1;
        var_v0 = var_s3 & 1;
    } while (5 > var_s3);
    if (D_80189CC6 & 0x200) {
        var_s2_2 = 0;
        do {
            temp_s3 = func_801497AC(*(D_8018BC35 + var_s2_2)) & 0xFF;
            if (temp_s3 != 0xFF) {
                if ((D_80189C9B == var_s2_2) && ((*(u16 *)((char *)(sp34) + 0x40)) != 0x100)) {
                    var_a1_2 = D_8021F260;
                    var_a2_2 = D_8021F261;
                    var_a3_2 = D_8021F262;
                } else {
                    var_a1_2 = 0x80;
                    var_a2_2 = 0x80;
                    var_a3_2 = 0x80;
                }
                func_801CA494(arg0, var_a1_2, var_a2_2, var_a3_2);
                func_8014A4C8(arg0, 0x64, (s16) ((var_s2_2 * 0x14) + 0xE), 7, temp_s3);
            }
            var_s2_2 += 1;
        } while (var_s2_2 < 3);
        func_801CA494(arg0, 0U, 0U, 0U, 0xFF);
        func_8014A4C8(arg0, 0x97, 0x10, 0xB, 0x38);
        func_801CA468(arg0, 0xFF);
        func_8014A4C8(arg0, 0x97, 0x13, 7, 0);
        func_8014A4C8(arg0, 0x1F, 0x11, 7, 1);
        func_8014A4C8(arg0, 0x40, 0x11, 7, 2);
        func_8014A4C8(arg0, 0x1F, 0x25, 7, 1);
        func_8014A4C8(arg0, 0x40, 0x25, 7, 3);
        func_8014A4C8(arg0, 0x1F, 0x39, 7, 1);
        func_8014A4C8(arg0, 0x40, 0x39, 7, 4);
    }
    temp_v0 = (*(u16 *)((char *)(sp34) + 0x40));
    if (((temp_v0 == 0x20) | (temp_v0 == 0x30)) != 0) {
        func_801CA494(arg0, 0U, 0U, 0U, 0xFF);
        func_8014A4C8(arg0, 0x37, 0x6B, 0xB, 0x36);
        func_801CA468(arg0, 0xFF);
        func_8014A4C8(arg0, 0x5A, 0x5F, 7, 6);
        func_8014A4C8(arg0, 0x21, 0x5F, 7, 5);
    }
    temp_v1_3 = (*(u16 *)((char *)(sp34) + 0x40));
    switch (temp_v1_3) {                            /* irregular */
    case 0x20:
        func_801CA468(arg0, 0xFF);
        func_8014A4C8(arg0, 0xA6, 0x41, 7, 0xB);
        func_8014A4C8(arg0, 0xA6, 0xCE, 7, 0xC);
        func_8014A4C8(arg0, 0x120, 0x41, 7, 0xD);
        func_8014A4C8(arg0, 0x120, 0xCE, 7, 0xE);
        func_801CA494(arg0, 0U, 0U, 0U, 0x7F);
        func_8014A4C8(arg0, 0xB1, 0x60, 0xB, 0x39);
        func_8014A4C8(arg0, 0xB1, 0x85, 0xB, 0x39);
        func_8014A4C8(arg0, 0xB1, 0xAA, 0xB, 0x39);
        func_801CA494(arg0, 0U, 0U, 0U, 0xFF);
        func_8014A4C8(arg0, 0xAF, 0x5E, 0xB, 0x39);
        func_8014A4C8(arg0, 0xAF, 0x83, 0xB, 0x39);
        func_8014A4C8(arg0, 0xAF, 0xA8, 0xB, 0x39);
        func_801CA468(arg0, 0xFF);
        func_8014A4C8(arg0, 0xBF, 0x36, 7, 0xA);
        func_8014A4C8(arg0, 0xF4, 0xC1, 7, 9);
        func_801CA494(arg0, 0x70U, 0xFFU, 0x6FU, 0xFF);
        func_8014A4C8(arg0, 0xC1, (s16) ((D_80189C9A * 0x25) + 0x60), 0xB, 0x3B);
        func_801CA468(arg0, 0xFF);
        var_s2_3 = 0;
        do {
            temp_a3 = (-((func_801497AC(*(D_8018A277 + var_s2_3)) & 0xFF) != 0xFF) & 0xFF) | 0x60;
            func_801CA494(arg0, temp_a3, temp_a3, temp_a3, 0xFF);
            func_8014A4C8(arg0, 0xF9, (s16) ((var_s2_3 * 0x25) + 0x56), 0xB, 0x2C);
            var_s2_3 += 1;
        } while (var_s2_3 < 3);
        var_s2_4 = 0;
        do {
            temp_s3_2 = func_801497AC(*(D_8018A277 + var_s2_4)) & 0xFF;
            if (temp_s3_2 != 0xFF) {
                temp_a3_2 = (-((*(D_8018A277 + var_s2_4) & 0x10) == 0) & 0xFF) | 0x7F;
                func_801CA494(arg0, temp_a3_2, temp_a3_2, temp_a3_2, 0xFF);
                func_8014A4C8(arg0, 0xCD, (s16) ((var_s2_4 * 0x25) + 0x57), 7, temp_s3_2);
                var_s3_2 = 0xF3;
                if ((u8) *(D_80189CC9 + var_s2_4) < 0xAU) {
                    var_s3_2 = 0xEB;
                }
                if ((u8) *(D_80189CC9 + var_s2_4) >= 0x64U) {
                    var_s3_2 = 0xF9;
                }
                func_8014A2D0(arg0, var_s3_2 & 0xFFFF, ((var_s2_4 * 0x25) + 0x5D) & 0xFFFF, *(D_80189CC9 + var_s2_4), 3, 0);
            }
            var_s2_4 += 1;
        } while (var_s2_4 < 3);
block_49:
        func_801CA468(arg0, 0xFF);
        break;
    case 0x40:
        /* fallthrough */
    case 0x50:
        func_801CA494(arg0, 0U, 0U, 0U, 0x7F);
        func_8014A4C8(arg0, 0x23, 0x52, 0xB, 0x3A);
        func_801CA494(arg0, 0U, 0U, 0U, 0xFF);
        func_8014A4C8(arg0, 0x21, 0x50, 0xB, 0x3A);
        func_801CA494(arg0, 0xC0U, 8U, 0x38U, 0xFF);
        func_8014A4C8(arg0, 0x24, 0x85, 0xB, 0x3C);
        func_801CA468(arg0, 0xFF);
        func_8014A4C8(arg0, 0x53, 0x4D, 0xB, 0x2A);
        func_8014A4C8(arg0, 0x53, 0xC2, 0xB, 0x2B);
        func_8014A4C8(arg0, 0x28, 0xD1, 7, 7);
        var_s2_5 = 0;
        do {
            temp_s0_3 = *(((D_80189CBF + var_s2_5) * 2) + D_8018D26C);
            temp_a3_3 = (-((temp_s0_3 & 0x1000) == 0) & 0xFF) | 0x7F;
            func_801CA494(arg0, temp_a3_3, temp_a3_3, temp_a3_3, 0xFF);
            func_8014A9F4(temp_s0_3 & 0xFFFF, (*(u8 *)((char *)(&D_80189CBF) + -1)));
            func_801CABF4(arg0, 0x31, ((var_s2_5 * 0xF) + 0x59) & 0xFFFF, 0xA, D_801D4390, D_80187BF0, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
            var_s2_5 += 1;
        } while (var_s2_5 < 7);
        /* fallthrough */
    case 0x30:
        func_801CA494(arg0, 0U, 0U, 0U, 0x7F);
        func_8014A4C8(arg0, 0xAE, 0x52, 0xB, 0x3A);
        func_801CA494(arg0, 0U, 0U, 0U, 0xFF);
        func_8014A4C8(arg0, 0xAC, 0x50, 0xB, 0x3A);
        func_801CA494(arg0, 0xC0U, 8U, 0x38U, 0xFF);
        func_8014A4C8(arg0, 0xAF, 0x85, 0xB, 0x3C);
        func_801CA468(arg0, 0xFF);
        func_8014A4C8(arg0, 0xDE, 0x4D, 0xB, 0x2A);
        func_8014A4C8(arg0, 0xDE, 0xC2, 0xB, 0x2B);
        func_8014A4C8(arg0, 0xB4, 0xD1, 7, 8);
        var_s2_6 = 0;
        do {
            temp_s0_4 = *(((D_80189CB7 + var_s2_6) * 2) + D_8018D140);
            var_s4 = 0xFF;
            var_s3_3 = 0xFF;
            var_s1 = 0xFF;
            if (temp_s0_4 & 0x1000) {
                var_s4 = 0x80;
                var_s3_3 = 0x80;
                var_s1 = 0x80;
            }
            if ((func_8014BA14(temp_s0_4 & 0xFFFF) & 0xFF) == 1) {
                var_s4 = D_8021F260;
                var_s3_3 = D_8021F261;
                var_s1 = D_8021F262;
            }
            func_801CA494(arg0, var_s4 & 0xFF, var_s3_3 & 0xFF, var_s1 & 0xFF, 0xFF);
            func_8014A9F4(temp_s0_4 & 0xFFFF, D_80189CB6);
            func_801CABF4(arg0, 0xBC, ((var_s2_6 * 0xF) + 0x59) & 0xFFFF, 0xA, D_801D4390, D_80187BF0, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
            var_s2_6 += 1;
        } while (var_s2_6 < 7);
        func_801CA494(arg0, D_8021F260, D_8021F261, D_8021F262, (s32) D_8021F263);
        func_8014A4C8(arg0, 0xEF, 0x40, 7, func_801497AC(*(D_8018A277 + D_80189C9A)) & 0xFF);
        {
        func_801CA468(arg0, 0xFF);break;}
    }
    temp_v0_2 = (*(u16 *)((char *)(sp34) + 0x40));
    if (((temp_v0_2 == 0x40) | (temp_v0_2 == 0x50)) != 0) {
        func_8014A4C8(arg0, 0xEB, (s16) (s32) (*(f32 *)((char *)(sp34) + 0x1C)), 0xB, 0x2D);
    }
    if ((*(u16 *)((char *)(sp34) + 0x40)) == 0x50) {
        func_8014A4C8(arg0, 0x19, (s16) (s32) (*(f32 *)((char *)(sp34) + 0x1C)), 0xB, 0x2D);
    }
}
