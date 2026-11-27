typedef struct {
    u8 unk0; u8 unk1; s32 unk4; u8 unk8; u8 unk9; u8 unkA; u8 unkB; u8 unkC; u8 unkD; u8 unkE; u8 unkF;
    u8 unk10; s32 unk14; u8 unk18; u8 unk19;
} Rec;
typedef struct { s32 unk0; s32 unk4; } Pair;
extern s8 stickY;
extern s8 stickX;
extern s32 D_801E9988;
extern s32 D_801E998C;
extern s32 btnPlayPressed;
extern s32 btnStopPressed;
extern s32 btnCycleNextPressed;
extern s32 btnUpPressed;
extern s32 btnDownPressed;
extern s32 btnRightPressed;
extern s32 btnLeftPressed;
extern s32 D_801E99B4;
extern s32 btnModePressed;
extern s32 btnCyclePrevPressed;
extern s32 D_80203AA8;
extern u8 D_80203AAD;
extern s32 D_80203AB4;
extern s32 soundTestMode;
extern s32 D_80203AC4;
extern s32 D_80203ACC;
extern Pair D_802038DC;
extern Rec D_802038E8[];
extern u8 D_8006FB38[];
void alSeqpStop(void *);
void func_80027C90(s32, s32);
void func_80027D00(s32);
void func_80028100(s32, s32);

#define REC D_802038E8[D_80203AB4]
#define SLIDE(flag, val, d, max) \
    if (d != 0) { \
        REC.flag = 1; \
        if (REC.val + d >= max + 1) { \
            REC.val = max; \
        } else if (REC.val + d < 0) { \
            REC.val = 0; \
        } else { \
            REC.val = d + REC.val; \
        } \
    } \
    if (btnStopPressed == 1) { \
        REC.flag = 0; \
    }

void func_801FE954(void)
{
    s8 dx;
    s8 dy;
    u16 i;

    if (stickX > 10) {
        dx = (f32)(stickX - 10) * 0.05;
    } else if (stickX < -10) {
        dx = (f32)(stickX + 10) * 0.05;
    } else {
        dx = 0;
    }
    if (stickY > 10) {
        dy = (f32)(stickY - 10) * 0.05;
    } else if (stickY < -10) {
        dy = (f32)(stickY + 10) * 0.05;
    } else {
        dy = 0;
    }
    if (btnCycleNextPressed == 1) {
        D_80203AA8 ^= 1;
    }
    switch (D_80203AA8) {
    case 0:
        if (btnUpPressed == 1) {
            if (D_80203ACC == 0) {
                D_80203ACC = 0x19;
            } else {
                D_80203ACC--;
            }
        }
        if (btnDownPressed == 1) {
            if (D_80203ACC == 0x19) {
                D_80203ACC = 0;
            } else {
                D_80203ACC++;
            }
        }
        if (btnPlayPressed == 1) {
            alSeqpStop(D_8006FB38);
            func_80027C90(0, D_80203ACC);
            func_80027D00(0);
            D_802038DC.unk4 = 0;
            D_802038DC.unk0 = 0;
            D_80203AC4 = D_80203ACC;
            for (i = 0; i < 16; i++) {
                D_802038E8[i].unk0 = 0x40;
                D_802038E8[i].unk1 = 0;
                D_802038E8[i].unk4 = 0;
                D_802038E8[i].unk8 = 0;
                D_802038E8[i].unk9 = 0;
                D_802038E8[i].unkA = 0;
                D_802038E8[i].unkB = 0;
                D_802038E8[i].unkC = 0;
                D_802038E8[i].unkD = 0;
                D_802038E8[i].unkE = 0;
                D_802038E8[i].unkF = 0x40;
                D_802038E8[i].unk10 = 0;
                D_802038E8[i].unk14 = 0;
                D_802038E8[i].unk18 = 0;
                D_802038E8[i].unk19 = 0;
            }
        }
        if (btnStopPressed == 1) {
            alSeqpStop(D_8006FB38);
            D_80203AC4 = -1;
        }
        if (btnCyclePrevPressed == 1) {
            func_80028100(0, 0xC8);
            D_80203AC4 = -1;
        }
        break;
    case 1:
        if (btnRightPressed == 1) {
            D_80203AB4++;
        }
        if (btnLeftPressed == 1 && D_80203AB4 > 0) {
            D_80203AB4--;
        }
        if (btnUpPressed == 1 && D_80203AAD != 0) {
            D_80203AAD--;
        }
        if (btnDownPressed == 1 && D_80203AAD < 4) {
            D_80203AAD++;
        }
        if (D_801E99B4 == 1) {
            if (REC.unkB) {
                if (REC.unk10) {
                    REC.unk10 = 0;
                } else {
                    REC.unk10 = 0x7F;
                }
            } else {
                REC.unkB = 1;
                REC.unk10 = 0;
            }
        }
        switch (D_80203AAD) {
        case 0:
            if (D_801E9988 == 1) {
                REC.unkC = 1;
                if (REC.unk14 < 0xFF) {
                    REC.unk14++;
                }
            }
            if (D_801E998C == 1) {
                REC.unkC = 1;
                if (REC.unk14 > 0) {
                    REC.unk14--;
                }
            }
            if (btnStopPressed == 1) {
                REC.unkC = 0;
            }
            break;
        case 1:
            SLIDE(unkB, unk10, dx, 0x7F);
            break;
        case 2:
            SLIDE(unkA, unkF, dy, 0x7F);
            break;
        case 3:
            SLIDE(unkD, unk18, dx, 0x7F);
            break;
        case 4:
            SLIDE(unkE, unk19, dx, 0xFF);
            break;
        }
        break;
    }
    if (btnModePressed == 1) {
        soundTestMode = 1;
    }
}
