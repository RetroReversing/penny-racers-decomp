typedef struct {u16 st; u8 pad[98];} Slot;
extern Slot D_8011F32E[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern s32 D_8021AFDC;
extern s32 D_8021E130;
extern s8 D_8021E189;

void func_800DE2E0();
void func_800DE38C();
void func_801CF468(u16, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_80231C5C();

void func_80214504(s32 arg0) {
    switch (D_8011F32E[arg0 & 0xFFFF].st) {
    case 0:
        D_8021E130 = 0;
        D_8021E189 = 0;
        D_8011F32E[arg0 & 0xFFFF].st = 1;
        func_80203DF8(1, 0x78, 0xFF, 0xFF, 0xFF);
        return;
    case 1:
        if (D_8021E130 == 0x10E) {
            func_80203DF8(2, 0x78, 0, 0, 0);
        }
        if (D_8021E130 >= 0x186) {
            func_80203DF8(1, 0x78, 0xFF, 0xFF, 0xFF);
            D_8011F32E[arg0 & 0xFFFF].st = 3;
        }
        D_8021E130 += 1;
        return;
    case 3:
        if (D_8021E130 == 0x24E) {
            func_80203DF8(2, 0x78, 0, 0, 0);
        }
        if (D_8021E130 >= 0x2D0) {
            D_8011F32E[arg0 & 0xFFFF].st = 2;
        }
        D_8021E130 += 1;
        return;
    case 2:
        func_800DE38C();
        func_800DE2E0(arg0);
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        D_8021AFDC = 0x28;
        D_80168BB0 = 0x28;
        return;
    case 4:
        break;
    }
}
