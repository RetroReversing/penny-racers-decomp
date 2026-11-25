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

extern unsigned short D_801C6B52;
s32 func_8014B854();
s32 func_801CF468();
s32 func_801D65BC();
s32 func_80203DF8();
s32 func_8021F5F0();
s32 func_802319E8();
s32 func_80231C5C();
extern s16 D_8006F9E8;
extern char D_8011F2F0[];
extern char D_8011F2F2[];
extern char D_8011F2F4[];
extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F300[];
extern char D_8011F32E[];
extern char D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern s8 D_801C5EA0;
extern s8 D_801C5EA1;
extern u8 D_801C5EA2;
extern u8 D_801C69D0;
extern char D_801C6B50[];
extern u16 D_801C6B54;
extern u16 D_801C6B56;
extern u16 D_801C6B58;
extern u16 D_801C7074;
extern s8 D_801C7AB8;
extern s32 D_801E9988;
extern s32 D_801E998C;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_801E99C0;
extern u16 func_800E1850;

void func_801B50B0(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v0_8;
    s32 var_v1_3;
    s32 var_v1_4;
    s8 var_v0_4;
    s8 var_v0_6;
    s8 var_v1;
    u16 temp_v1;
    u16 var_v0_2;
    u16 var_v0_5;
    u16 var_v0_7;
    u16 var_v0_9;
    u8 var_v1_2;

    temp_a0 = (arg0 & 0xFFFF) * 0x64;
    *(D_8011F2FC + temp_a0) = *(D_8011F2FC + temp_a0) - 8;
    if (*(D_8011F2FC + temp_a0) == 0xF) {
        *(D_8011F2FC + temp_a0) = 0xFF;
    }
    temp_v1 = *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* switch 1 */
        if (((D_801E9988 % 15) == 1) || ((D_801E998C % 15) == 1)) {
            func_8014B854(0x3B, 0, 1, 0x88888889);
            if (D_801C5EA2 == 3) {
                D_801C5EA2 = 4;
                var_v0 = (arg0 & 0xFFFF) * 0x64;
                var_v1 = 0x70;
                goto block_10;
            }
            if (D_801C5EA2 == 4) {
                D_801C5EA2 = 3;
                var_v0 = (arg0 & 0xFFFF) * 0x64;
                var_v1 = 0x60;
block_10:
                *(D_8011F2F0 + var_v0) = var_v1;
            }
        }
        if (D_801C69D0 != 0) {
            switch (D_801E9990) {                   /* switch 2; irregular */
                if ((D_801E99C0 == 0) && (D_801E9994 == 0)) {
                    func_8014B854(0x3D);
                    if (D_801C5EA2 == 3) {
                        D_801C5EA1 = 0;
                        func_80203DF8(4, 0x14, 0, 0, 0);
                        M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), s16 *, 4) = 0xC;
                        D_801C6B58 = 0;
                        D_801C6B56 = 6;
                        var_v0_2 = 4;
                        goto block_19;
                    }
                    if (D_801C5EA2 == 4) {
                        D_801C5EA2 = 5;
                        func_80203DF8(4, 0x14, 0, 0, 0);
                        M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), s16 *, 4) = 0xC;
                        D_801C6B58 = 0;
                        D_801C6B56 = 6;
                        var_v0_2 = 5;
block_19:
                        D_801C6B54 = var_v0_2;
                        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 6;
                    }
                    goto block_88;
                }
                if ((D_801E9990 == 0) && ((D_801E99C0 == 1) || (D_801E9994 == 1))) {
                    func_8014B854(0x3A);
                    var_v0_3 = D_801C7074 * 0x64;
                    var_v1_2 = *(D_8011F2F0 + var_v0_3);
block_86:
                    *(D_8011F32E + var_v0_3) = (s16) var_v1_2;
                    var_v1_3 = arg0 & 0xFFFF;
block_87:
                    *(D_8011F32E + (var_v1_3 * 0x64)) = 0;
                    M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), s8 *, 9) = 0;
block_88:
                    D_801C69D0 = 0;
                    return;
                }
                return;
            }
        } else {
block_89:
            D_801C69D0 = 1;
            return;
        }
        break;
        if (((D_801E9988 / 15) * 0xF) == (D_801E9988 - 1)) {
            func_8014B854(0x3B);
            var_a0 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0) == 0x50) {
                D_801C5EA2 = 4;
                var_v0_4 = 0x70;
                goto block_37;
            }
            var_a0 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0) != 0x60) {
                var_a0 = (arg0 & 0xFFFF) * 0x64;
                if (*(D_8011F2F0 + var_a0) == 0x70) {
                    D_801C5EA2 = 3;
                    var_v0_4 = 0x60;
                    goto block_37;
                }
            } else {
                goto block_36;
            }
        } else if (((D_801E998C / 15) * 0xF) == (D_801E998C - 1)) {
            func_8014B854(0x3B);
            var_a0 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0) == 0x50) {
                D_801C5EA2 = 3;
                var_v0_4 = 0x60;
                goto block_37;
            }
            var_a0 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0) == 0x60) {
                D_801C5EA2 = 4;
                var_v0_4 = 0x70;
                goto block_37;
            }
            var_a0 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0) == 0x70) {
block_36:
                D_801C5EA2 = 0;
                var_v0_4 = 0x50;
block_37:
                *(D_8011F2F0 + var_a0) = var_v0_4;
            }
        }
        if (D_801C69D0 != 0) {
            if ((D_801E9990 == 1) && (D_801E99C0 == 0) && (D_801E9994 == 0)) {
                func_8014B854(0x3D);
                switch (D_801C5EA2) {               /* switch 3; irregular */
                    *(D_8011F32E + (D_801C7074 * 0x64)) = 0x11;
                    D_801C7AB8 = 4;
                    var_v1_3 = arg0 & 0xFFFF;
                    goto block_87;
                    D_801C5EA1 = 0;
                    func_80203DF8(4, 0x14, 0, 0, 0);
                    M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), s16 *, 4) = 0xC;
                    D_801C6B58 = 0;
                    D_801C6B56 = 6;
                    var_v0_5 = 4;
block_48:
                    D_801C6B54 = var_v0_5;
                    *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 6;
                    break;
                    D_801C5EA2 = 5;
                    func_80203DF8(4, 0x14, 0, 0, 0);
                    M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), s16 *, 4) = 0xC;
                    D_801C6B58 = 0;
                    D_801C6B56 = 6;
                    var_v0_5 = 5;
                    goto block_48;
                }
                goto block_88;
            }
block_82:
            if ((D_801E9990 == 0) && ((D_801E99C0 == 1) || (D_801E9994 == 1))) {
                func_8014B854(0x3A);
                var_v0_3 = D_801C7074 * 0x64;
                var_v1_2 = 0x10;
                goto block_86;
            }
        } else {
            goto block_89;
        }
        break;
        if (((D_801E9988 / 15) * 0xF) == (D_801E9988 - 1)) {
            func_8014B854(0x3B);
            var_a0_2 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0_2) == 0x60) {
                D_801C5EA2 = 4;
                var_v0_6 = 0x90;
                goto block_66;
            }
            var_a0_2 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0_2) != 0x70) {
                var_a0_2 = (arg0 & 0xFFFF) * 0x64;
                if (*(D_8011F2F0 + var_a0_2) == 0x80) {
                    D_801C5EA2 = 2;
                    var_v0_6 = 0x70;
                    goto block_66;
                }
                var_a0_2 = (arg0 & 0xFFFF) * 0x64;
                if (*(D_8011F2F0 + var_a0_2) == 0x90) {
                    D_801C5EA2 = 3;
                    var_v0_6 = 0x80;
                    goto block_66;
                }
            } else {
                goto block_65;
            }
        } else if (((D_801E998C / 15) * 0xF) == (D_801E998C - 1)) {
            func_8014B854(0x3B);
            var_a0_2 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0_2) == 0x60) {
                D_801C5EA2 = 2;
                var_v0_6 = 0x70;
                goto block_66;
            }
            var_a0_2 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0_2) == 0x70) {
                D_801C5EA2 = 3;
                var_v0_6 = 0x80;
                goto block_66;
            }
            var_a0_2 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0_2) == 0x80) {
                D_801C5EA2 = 4;
                var_v0_6 = 0x90;
                goto block_66;
            }
            var_a0_2 = (arg0 & 0xFFFF) * 0x64;
            if (*(D_8011F2F0 + var_a0_2) == 0x90) {
block_65:
                D_801C5EA2 = 1;
                var_v0_6 = 0x60;
block_66:
                *(D_8011F2F0 + var_a0_2) = var_v0_6;
            }
        }
        if (D_801C69D0 != 0) {
            temp_s0 = D_801E9990;
            if ((temp_s0 == 1) && (D_801E99C0 == 0) && (D_801E9994 == 0)) {
                func_8014B854(0x3D);
                if (D_801C5EA2 == temp_s0) {
                    D_801C5EA0 = 1;
                    goto block_80;
                }
                switch (D_801C5EA2) {               /* switch 4; irregular */
                    D_801C5EA0 = 1;
                    func_80203DF8(4, 0x14, 0, 0, 0);
                    M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), s16 *, 4) = 0xC;
                    D_801C6B58 = 0;
                    D_801C6B56 = 6;
                    var_v0_7 = 4;
block_81:
                    D_801C6B54 = var_v0_7;
                    *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 6;
                    break;
                    D_801C5EA1 = 0;
                    func_80203DF8(4, 0x14, 0, 0, 0);
                    M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), s16 *, 4) = 0xC;
                    D_801C6B58 = 0;
                    D_801C6B56 = 6;
                    var_v0_7 = 4;
                    goto block_81;
block_80:
                    D_801C5EA2 = 5;
                    func_80203DF8(4, 0x14, 0, 0, 0);
                    M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), s16 *, 4) = 0xC;
                    D_801C6B58 = 0;
                    D_801C6B56 = 6;
                    var_v0_7 = 5;
                    goto block_81;
                }
                goto block_88;
            }
            goto block_82;
        }
        goto block_89;
        func_802319E8(temp_a0);
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        func_8021F5F0();
        func_801D65BC(0);
        var_v0_8 = 0x2A;
block_92:
        D_80168BB0 = var_v0_8;
        D_8006F9E8 = 8;
        return;
        func_802319E8(temp_a0);
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        func_8021F5F0();
        func_801D65BC(0);
        var_v0_8 = 2;
        goto block_92;
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            D_801C6B52 = (u16) func_800E1850;
            if (D_801C6B52 != 0xFFFF) {
                do {
                    *(D_8011F2FD + (D_801C6B52 * 0x64)) = 4;
                    D_801C6B52 = (u16) *(D_8011F300 + (D_801C6B52 * 0x64));
                } while (D_801C6B52 != 0xFFFF);
            }
            var_v1_4 = (arg0 & 0xFFFF) * 0x64;
            *(D_8011F2FD + var_v1_4) = 0;
            *(D_8011F2F2 + var_v1_4) = *(D_8011F2F2 + var_v1_4) | 0x20;
            *(D_8011F2F4 + var_v1_4) = *(D_8011F2F4 + var_v1_4) | 0x20;
            *(D_8011F2FD + (D_8018BC3C * 0x64)) = 0;
            var_v0_9 = 7;
block_100:
            *(D_8011F32E + var_v1_4) = var_v0_9;
        }
        break;
        D_801C6B58 += 1;
        if ((u16) D_801C6B56 < (u16) D_801C6B58) {
            var_v1_4 = (arg0 & 0xFFFF) * 0x64;
            var_v0_9 = D_801C6B54;
            goto block_100;
        }
        break;
    }
}
