typedef struct {
    u16 st;
    u8 pad[98];
} Slot;
extern Slot playerSlots[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern s32 D_8021AFDC;
extern s32 D_8021E130;
extern s8 D_8021E189;
void func_800DE2E0(void);
void func_800DE38C(void);
void func_801CF468(s32, s8, s8, s8);
void setScreenTransition();
void func_80231C5C(void);

void func_80214504(u16 arg0)
{
    s32 pressed;

    switch (playerSlots[arg0].st) {
    case 0:
        D_8021E130 = 0;
        D_8021E189 = 0;
        playerSlots[arg0].st = 1;
        setScreenTransition(1, 0x78, 0xFF, 0xFF, 0xFF);
        break;
    case 1:
        pressed = 0;
        if (D_8021E130 == 0x10E) {
            setScreenTransition(2, 0x78, 0, 0, 0);
        }
        if (D_8021E130 >= 0x186 || (pressed & 0x10)) {
            setScreenTransition(1, 0x78, 0xFF, 0xFF, 0xFF);
            playerSlots[arg0].st = 3;
        }
        D_8021E130++;
        break;
    case 3:
        pressed = 0;
        if (D_8021E130 == 0x24E) {
            setScreenTransition(2, 0x78, 0, 0, 0);
        }
        if (D_8021E130 >= 0x2D0 || (pressed & 0x10)) {
            playerSlots[arg0].st = 2;
        }
        D_8021E130++;
        break;
    case 2:
        func_800DE38C();
        func_800DE2E0();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        D_8021AFDC = 0x28;
        D_80168BB0 = 0x28;
        break;
    }
}
