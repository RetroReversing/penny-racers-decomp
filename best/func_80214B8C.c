extern u8 D_8011F2F0[];
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u8 D_80190C98;
extern u8 D_80190C9A;
extern u8 D_80190C9C;
extern u8 D_8021F028[];
extern u8 D_8021F02A;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s32 D_80168BB0;
extern u8 D_8006FB38[];

s32 func_8014A870(s32, s32, s32);
void func_8014B854(s32);
void func_801D65BC(s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_801E1EEC(s32, s32);
void alSeqpSetVol(void *, s16);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(s32, s32, s32, s32);

void func_80214B8C(s32 arg0) {
    u8 *s2;
    s32 s0;
    u8 c98;
    s32 v2;
    s32 v4;
    u16 state;

    s2 = D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64);
    state = *(u16 *)(s2 + 0x3E);
    switch (state) {
    case 0:
        if (**(u8 **)(D_8011F350 + D_8018BC3C * 0x64) == 0) {
            D_80190C9C = 0;
            *(u16 *)(s2 + 0x3E) = 0x10;
        }
        break;
    case 0x10:
        s0 = func_8014A870(0x1E, 3, 0);
        D_80190C9A = D_8021F028[0];
        if (s0 & 1) {
            if (((u8 *)&D_80190C9A)[-2] != 0) {
                ((u8 *)&D_80190C9A)[-2]--;
                func_8014B854(0x3B);
            }
        }
        if (s0 & 2) {
            if (D_80190C98 != 3) {
                D_80190C98++;
                func_8014B854(0x3B);
            }
        }
        c98 = D_80190C98;
        if (c98 < 2) {
            v2 = s0 & 4;
            if (s0 & 8) {
                if (D_8021F028[c98] != 0x15) {
                    D_8021F028[c98]++;
                    func_8014B854(0x3B);
                    v2 = s0 & 4;
                    if (D_80190C98 == 0) {
                        alSeqpSetVol(D_8006FB38, (s16)(D_8021F028[0] * 0x43E));
                    }
                }
            }
            if (v2 && D_8021F028[D_80190C98] != 0) {
                D_8021F028[D_80190C98]--;
                func_8014B854(0x3B);
                if (D_80190C98 == 0) {
                    alSeqpSetVol(D_8006FB38, (s16)(D_8021F028[0] * 0x43E));
                }
            }
        }
        if (D_80190C9A == 0 && D_8021F028[0] != 0) {
            func_801D65BC(0);
        }
        if (D_80190C98 == 2) {
            if ((s0 & 4) && D_8021F02A != 0) {
                D_8021F02A = 0;
                func_8014B854(0x3B);
            }
            if ((s0 & 8) && D_8021F02A != 1) {
                D_8021F02A = 1;
                func_8014B854(0x3B);
            }
        }
        if (s0 & 0x10) {
            if (D_80190C98 < 3) {
                s0 = 0;
                func_8014B854(0x3D);
                D_80190C98 = 3;
            } else if (D_80190C98 == 3) {
                func_8014B854(0x3D);
                func_80203DF8(2, 6, 0, 0, 0);
                func_801E1EEC(9, 0);
                *(u16 *)(s2 + 0x3E) = 0x20;
            }
        }
        if (s0 & 0x20) {
            func_8014B854(0x3D);
            func_80203DF8(2, 6, 0, 0, 0);
            func_801E1EEC(9, 0);
            *(u16 *)(s2 + 0x3E) = 0x20;
        }
        break;
    case 0x20:
        if (**(u8 **)(D_8011F350 + D_8018BC3C * 0x64) == 0) {
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x26;
            D_80168BB0 = D_8021AFE0;
        }
        break;
    }
}
