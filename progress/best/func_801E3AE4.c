/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
extern unsigned char D_801F1895;
extern unsigned char D_8021F028;
extern unsigned char D_801F1896;
extern unsigned char D_8021F029;
extern unsigned char D_801F1897;
extern unsigned char D_8021F02A;
extern unsigned char D_801E9015;
extern unsigned char D_801E9016;
extern unsigned char D_801E9017;
s32 func_80029790();
s32 func_800297C8();
s32 func_800297E8();
s32 func_80029890();
s32 func_80029938();
s32 func_800DF094();
s32 func_801DD938();
extern char D_8011F2FD[];
extern char D_8011F32E[];
extern unsigned char D_801E9010[];
extern u16 D_801E979C;
extern u16 D_801E9B32;
extern s32 D_801E9D58;
extern char D_801F1890[];

void func_801E3AE4(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v0_2;

    switch ((*(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)))) {
    case 0:
        func_80029790();
        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
        /* fallthrough */
    case 1:
        temp_v0 = func_80029938();
        D_801E9D58 = temp_v0;
        if (temp_v0 != 1) {
            if (temp_v0 < 2) {
                var_v0 = arg0 & 0xFFFF;
                if (temp_v0 >= -1) {
                    goto block_24;
                }
            default:
                return;
            }
            var_v0 = arg0 & 0xFFFF;
            if (temp_v0 != 2) {
                return;
            }
            goto block_24;
        }
        temp_v0_2 = func_800297E8(0x3F, D_801F1890, 8);
        D_801E9D58 = temp_v0_2;
        var_v0 = arg0 & 0xFFFF;
        if (temp_v0_2 == 0) {
            var_a1 = 0;
            var_a0 = 0;
            do {
                if (*(D_801F1890 + var_a0) != *(D_801E9010 + var_a0)) {
                    var_a1 = 1;
                }
                var_a0 += 1;
            } while (var_a0 < 5);
            if (var_a1 == 0) {
                D_801F1895 = (u8) D_8021F028;
                D_801F1896 = (u8) D_8021F029;
                do { D_801F1897 = (u8) D_8021F02A;
                D_801E9015 = (u8) D_8021F028;
                D_801E9016 = (u8) D_8021F029;
                D_801E9017 = (u8) D_8021F02A;
                temp_v0_3 = func_80029890(0x3F, &D_801F1895 - 5, 8);
                D_801E9D58 = temp_v0_3;
                var_v0 = arg0 & 0xFFFF; } while (0);
                if (temp_v0_3 == 0) {
                    temp_v0_4 = func_800297E8(0x3F, D_801F1890, 8);
                    D_801E9D58 = temp_v0_4;
                    var_v0 = arg0 & 0xFFFF;
                    do {
                        var_a1_2 = 0;
                    } while (0);
                    if (temp_v0_4 == 0) {
                        var_a0_2 = 0;
                        do {
                            if (*(D_801F1890 + var_a0_2) != *(D_801E9010 + var_a0_2)) {
                                var_a1_2 = 1;
                            }
                            var_a0_2 += 1;
                        } while (var_a0_2 < 8);
                        var_v0 = arg0 & 0xFFFF;
                        if (var_a1_2 == 0) {
                            *(D_8011F32E + (var_v0 * 0x64)) = 0xA;
                            return;
                        }
                        goto block_24;
                    }
                }
                goto block_24;
            }
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 7;
            return;
        }
block_24:
        *(D_8011F32E + (var_v0 * 0x64)) = 9;
        return;
    case 7:
        var_v0_2 = 0x65;
block_27:
        func_801DD938(0x10, 0x4C, 0xA, 2, var_v0_2);
        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0xA;
        return;
    case 9:
        var_v0_2 = 0x66;
        goto block_27;
    case 10:
        func_800297C8();
        *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
        *(D_8011F2FD + (D_801E9B32 * 0x64)) = 2;
        *(D_8011F2FD + (D_801E979C * 0x64)) = 2;
        func_800DF094(2);
        break;
    }
}
