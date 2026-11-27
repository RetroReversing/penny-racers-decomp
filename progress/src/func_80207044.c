typedef struct { u8 pad0[0x3E]; u16 f3E; u8 pad40[0x20]; u8 *f60; } Rec;
typedef struct { u8 flag; u8 pad1[8]; u8 f9; u8 pad10[2]; u16 fC; u8 padE[0x12]; s16 pos[8]; } Menu;
extern Rec D_8011F2F0[];
extern Menu D_8021E180;
extern u16 D_8018BC3C;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_8021AFDC;
extern s32 D_8021B060;
extern s32 D_80168BB0;
s32 func_8014A870(s32, s32, s32);
void func_8014B854(s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);

void func_80207044(u16 id) {
    s32 keys;

    switch (D_8011F2F0[id].f3E) {
    case 0:
        D_8021E180.f9 = 0;
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            D_8011F2F0[id].f3E = 1;
        }
        break;
    case 1:
        D_8021E180.flag = 0;
        keys = func_8014A870(0x14, 7, 0);
        if (D_801E9990 == 1) {
            func_8014B854(0x3D);
            D_8021E180.flag = 1;
        } else if (D_801E9994 == 1) {
            func_8014B854(0x3A);
            D_8021E180.pos[0]--;
        } else if (keys & 8) {
            D_8021E180.pos[D_8021E180.pos[0]]++;
            if ((D_8021E180.pos[0] != 1 || D_8021E180.pos[4] != 0) && (D_8021E180.pos[0] != 2 || D_8021E180.pos[1] < 2)
                    && (D_8021E180.pos[0] != 3 || D_8021E180.pos[6] != 0)) {
                func_8014B854(0x3B);
            }
        } else if (keys & 4) {
            D_8021E180.pos[D_8021E180.pos[0]]--;
            if ((D_8021E180.pos[0] != 1 || D_8021E180.pos[4] != 0) && (D_8021E180.pos[0] != 2 || D_8021E180.pos[1] < 2)
                    && (D_8021E180.pos[0] != 3 || D_8021E180.pos[6] != 0)) {
                func_8014B854(0x3B);
            }
        }
        if (D_8021E180.pos[D_8021E180.pos[0]] > D_8021E180.pos[D_8021E180.pos[0] + 3]) {
            D_8021E180.pos[D_8021E180.pos[0]] = 0;
        } else if (D_8021E180.pos[D_8021E180.pos[0]] < 0) {
            D_8021E180.pos[D_8021E180.pos[0]] = D_8021E180.pos[D_8021E180.pos[0] + 3];
        }
        if (D_8021E180.flag == 1) {
            D_8021E180.pos[0]++;
            if (D_8021E180.pos[0] >= 4) {
                D_8021E180.pos[0] = 3;
                func_80203DF8(2, 6, 0, 0, 0);
                D_8021AFDC = 4;
                D_8021B060 = 0xC;
                D_8011F2F0[id].f3E = 3;
            }
        }
        if (D_8021E180.pos[0] <= 0) {
            D_8021E180.pos[0] = 1;
            func_80203DF8(2, 6, 0, 0, 0);
            D_8021AFDC = 4;
            D_8021B060 = 2;
            D_8011F2F0[id].f3E = 3;
        }
        break;
    case 3:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            if (D_8021E180.pos[1] >= 2) {
                D_8021E180.fC = 9;
            }
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_80168BB0 = D_8021B060;
        }
        break;
    }
}
