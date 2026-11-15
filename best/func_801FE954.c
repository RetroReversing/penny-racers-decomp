extern s8 D_801E995B;
extern s8 D_801E995A;
extern s32 D_801E9988;
extern s32 D_801E998C;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_801E99A0;
extern s32 D_801E99A4;
extern s32 D_801E99A8;
extern s32 D_801E99AC;
extern s32 D_801E99B4;
extern s32 D_801E99C0;
extern s32 D_801E99C4;
extern f64 D_80203860;
extern f64 D_80203868;
extern u8 D_80203AAD;
extern s32 D_80203AB4;
extern s32 D_80203AC0;
extern s32 D_80203AC4;
extern s32 D_80203ACC;
extern u8 D_802038E8[];
extern u8 D_802038E9[];
extern s32 D_802038EC[];
extern u8 D_802038F0[];
extern u8 D_802038F1[];
extern u8 D_802038F2[];
extern u8 D_802038F3[];
extern u8 D_802038F4[];
extern u8 D_802038F5[];
extern u8 D_802038F6[];
extern u8 D_802038F7[];
extern u8 D_802038F8[];
extern s32 D_802038FC[];
extern u8 D_80203900[];
extern u8 D_80203901[];
extern s32 D_802038E0[];
extern void alSeqpStop(void *);
extern void func_80027C90(s32, s32);
extern void func_80027D00(s32);
extern void func_80028100(s32, s32);
extern u8 D_8006FB38[];

void func_801FE954(void) {
    s32 a1;
    s32 a2;
    u16 i;

    if (D_801E995B >= 11) {
        a1 = (s32)((f64)(f32)(D_801E995B - 10) * D_80203860);
    } else if (D_801E995B < -10) {
        a1 = (s32)((f64)(f32)(D_801E995B + 10) * D_80203860);
    } else {
        a1 = 0;
    }
    if (D_801E995A >= 11) {
        a2 = (s32)((f64)(f32)(D_801E995A - 10) * D_80203868);
    } else if (D_801E995A < -10) {
        a2 = (s32)((f64)(f32)(D_801E995A + 10) * D_80203868);
    } else {
        a2 = 0;
    }

    if (D_80203AC0 != 25) {
        D_80203ACC++;
    } else {
        D_80203ACC = 0;
    }
    if (D_801E9990 == 1) {
        alSeqpStop(D_8006FB38);
        func_80027C90(0, D_80203ACC);
        func_80027D00(0);
        D_802038E0[0] = 0;
        D_802038E0[-1] = 0;
        D_80203AC4 = D_80203ACC;
        for (i = 0; i < 16; i++) {
            D_802038E8[i * 28] = 0x40;
            D_802038E9[i * 28] = 0;
            D_802038EC[i * 7] = 0;
            D_802038F0[i * 28] = 0;
            D_802038F1[i * 28] = 0;
            D_802038F2[i * 28] = 0;
            D_802038F3[i * 28] = 0;
            D_802038F4[i * 28] = 0;
            D_802038F5[i * 28] = 0;
            D_802038F6[i * 28] = 0;
            D_802038F7[i * 28] = 0x40;
            D_802038F8[i * 28] = 0;
            D_802038FC[i * 7] = 0;
            D_80203900[i * 28] = 0;
            D_80203901[i * 28] = 0;
        }
    }
    if (D_801E9994 == 1) {
        alSeqpStop(D_8006FB38);
        D_80203AC4 = -1;
    }
    if (D_801E99C4 == 1) {
        func_80028100(0, 200);
        D_80203AC4 = -1;
        return;
    }
}
