/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
extern signed char D_8021E180;
extern unsigned short D_8021E18C;
s32 func_800DE2E0();
s32 func_800DE38C();
s32 func_8014A870();
s32 func_8014B854();
s32 func_801CF468();
s32 func_80203DF8();
s32 func_8020E650();
s32 func_8020E788();
s32 func_80231C5C();
extern char D_8011F32E[];
extern char D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern char D_801C5E9C[];
extern char D_801C5ED8[];
extern char D_801C5EDC[];
extern char D_801C5EE0[];
extern char D_801C5EE4[];
extern char D_801C5EE8[];
extern char D_801C5EEC[];
extern char D_801C5EF0[];
extern char D_801C5EF4[];
extern char D_801C5EF8[];
extern char D_801C6074[];
extern char D_801C618C[];
extern char D_801C631C[];
extern char D_801C6408[];
extern char D_801C6624[];
extern char D_801C673C[];
extern char D_801C687C[];
extern char D_801C7080[];
extern s32 *D_801C7AB0;
extern s32 *D_801CA134;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s32 D_8021B060;
extern u8 D_8021B068;
extern s32 D_8021B300;
extern s32 D_8021B304;
extern s8 D_8021E189;
extern s16 D_8021E1A0;
extern s16 D_8021E1A2;
extern char D_8021E20B[];

void func_8020CAF4(s32 arg0) {
    s32 *var_v0_2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 var_a0;
    s32 temp_a0;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    u16 temp_v1;

    temp_v1 = *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* switch 1; irregular */
        D_8021E189 = 0;
        var_a0 = 0;
        do {
            if (D_8021E1A2 != 0) {
                *(D_8021E20B + (var_a0 * 9)) = 0;
            }
            temp_v0 = var_a0 + 1;
            var_a0 = temp_v0;
        } while (temp_v0 < 4);
        temp_v0_2 = arg0 & 0xFFFF;
        if (D_8021B068 == 0) {
            *(D_8011F32E + (temp_v0_2 * 0x64)) = 1;
            return;
        }
        *(D_8011F32E + (temp_v0_2 * 0x64)) = 2;
        return;
        D_8021E180 = 0;
        temp_a0 = -(*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) & func_8014A870(0x1E, 3, 0);
        var_v0 = temp_a0 & 4;
        if ((D_801E9990 == 1) && (var_v0 = temp_a0 & 4, (D_8021B300 == 0))) {
            temp_v0_3 = D_8021E18C - 9;
            switch (temp_v0_3) {                    /* switch 2 */
                D_801CA134 = D_801C5EF8;
                var_v0_2 = D_801C5ED8;
block_22:
                D_801C7AB0 = var_v0_2;
                break;
                D_801CA134 = D_801C6074;
                var_v0_2 = D_801C5EDC;
                goto block_22;
                D_801CA134 = D_801C618C;
                var_v0_2 = D_801C5EE0;
                goto block_22;
                D_801CA134 = D_801C631C;
                var_v0_2 = D_801C5EE4;
                goto block_22;
                D_801CA134 = D_801C6408;
                var_v0_2 = D_801C5EE8;
                goto block_22;
                D_801CA134 = D_801C6624;
                var_v0_2 = D_801C5EEC;
                goto block_22;
                D_801CA134 = D_801C673C;
                var_v0_2 = D_801C5EF0;
                goto block_22;
                D_801CA134 = D_801C687C;
                var_v0_2 = D_801C5EF4;
                goto block_22;
                D_801CA134 = D_801C7080;
                var_v0_2 = D_801C5E9C;
                goto block_22;
            }
            func_8014B854(0x3D);
            D_8021E180 = 1;
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
        } else {
            var_v0_3 = temp_a0 & 8;
            if ((var_v0 != 0) && (var_v0_3 = temp_a0 & 8, (D_8021B300 == 0))) {
                var_v0_4 = 2;
                if (D_8021B068 == 0) {
                    goto block_31;
                }
            } else if ((var_v0_3 != 0) && (D_8021B300 == 0)) {
                var_v0_4 = 1;
                if (D_8021B068 == 0) {
block_31:
                    D_8021B300 = var_v0_4;
                    func_8014B854(0x3B);
                }
            } else if ((D_801E9994 == 1) && (D_8021B068 == 0) && (D_8021B300 == 0)) {
                func_8014B854(0x3A);
                *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 5;
            }
        }
        switch (D_8021B300) {                       /* switch 3; irregular */
            var_v0_5 = D_8021B304 - 1;
block_42:
            D_8021B304 = var_v0_5;
            break;
            var_v0_5 = D_8021B304 + 1;
            goto block_42;
        }
        if ((u32) (D_8021B304 + 6) >= 0xDU) {
            if (D_8021B300 == 1) {
                D_8021E18C += 1;
            }
            if (D_8021B300 == 2) {
                D_8021E18C -= 1;
            }
            D_8021B304 = 0;
            D_8021B300 = 0;
        }
        func_8020E650();
        func_8020E788();
        return;
        if ((D_801E9990 == 1) && (D_8021B300 == 0)) {
            func_8014B854(0x3D);
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 4;
        }
        D_8021B068 = 1;
        if ((D_801E9994 == 1) && (D_8021B300 == 0)) {
            func_8014B854(0x3A);
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
            D_8021B068 = 0;
            return;
        }
        return;
        if (D_8021B300 == 0) {
            func_80203DF8(2, 6, 0, 0, 0);
            D_8021AFDC = 6;
            D_8021B060 = 6;
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
            return;
        }
        break;
        if (D_8021B300 == 0) {
            func_80203DF8(2, 6, 0, 0, 0);
            D_8021AFDC = 4;
            D_8021B060 = 4;
            D_8021E1A0 = 3;
            D_8021B068 = 0;
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
            return;
        }
        break;
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            D_8021AFE0 = 0;
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_80168BB0 = D_8021B060;
        }
        break;
    }
}
