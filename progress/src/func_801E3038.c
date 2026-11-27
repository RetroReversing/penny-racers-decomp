typedef struct {
    u8 unk0;
    u8 pad1[0xC];
    u8 unkD;
    u8 padE[0x30];
    u16 unk3E;
    u8 pad40[0x20];
    u8 *unk60;
} Unk8011F2F0;
typedef struct {
    s32 unk0;
    u8 pad4[0x2C];
} Unk801E97CC;

extern Unk8011F2F0 D_8011F2F0[];
extern Unk801E97CC D_801E97CC[];
extern s32 D_801E9D58;
extern u8 D_801F1890[];
extern u8 D_801F1895[];
extern u8 D_801E9010[];
extern u8 D_801E9015[];
extern u8 D_8021F028[];
extern s32 D_801E9734;
extern s32 D_801E9760;
extern u8 D_801E979A;
extern u16 D_801E9B32;
extern u16 D_801E979C;
extern u16 D_8018BC3C;

extern void func_80029790(void);
extern s32 func_80029938(void);
extern s32 func_800297E8(s32, u8 *, s32);
extern s32 func_80029890(s32, u8 *, s32);
extern void func_800297C8(void);
extern void func_801DD938();
extern s32 func_801E2FA4(void);
extern s32 func_801E3010(void);
extern void func_801E2EF4(void);
extern void func_801E2EC4(s32 *);
extern void func_801E2E00(u16, s32 *);
extern void func_801E2E48(u16);
extern void func_801E2F38(u16);

void func_801E3038(u16 arg0) {
    s32 i;
    s32 flag;

    switch (D_8011F2F0[arg0].unk3E) {
    case 0:
        func_80029790();
        func_801E2EF4();
        D_8021F028[0] = 0x15;
        D_8021F028[1] = 0x15;
        D_8021F028[2] = 0;
        D_801E9015[0] = 0x15;
        D_801E9015[1] = 0x15;
        D_801E9015[2] = 0;
        D_8011F2F0[arg0].unk3E = 1;
    case 1:
        switch (D_801E9D58 = func_80029938()) {
        case 1:
            if ((D_801E9D58 = func_800297E8(0x3F, D_801F1890, 8)) != 0) {
                D_8011F2F0[arg0].unk3E = 9;
                break;
            }
            flag = 0;
            for (i = 0; i < 5; i++) {
                if (D_801F1890[i] != D_801E9010[i]) {
                    flag = 1;
                }
            }
            if (D_801F1895[0] >= 0x16) {
                flag = 1;
            }
            if (D_801F1895[1] >= 0x16) {
                flag = 1;
            }
            if (D_801F1895[2] >= 2) {
                flag = 1;
            }
            if (flag == 0) {
                D_8021F028[0] = D_801F1895[0];
                D_8021F028[1] = D_801F1895[1];
                D_8021F028[2] = D_801F1895[2];
                D_8011F2F0[arg0].unk3E = 2;
            } else {
                D_8011F2F0[arg0].unk3E = 3;
            }
            break;
        case -1:
        case 0:
        case 2:
            D_8011F2F0[arg0].unk3E = 9;
            break;
        }
        break;
    case 2:
        if ((D_801E9D58 = func_801E3010()) != 0) {
            func_801E2EF4();
            D_8011F2F0[arg0].unk3E = 9;
        } else {
            D_801E979A = 0;
            for (i = 0; i < 9; i++) {
                func_801E2E00(i, &D_801E9734);
                if (D_801E9734 != D_801E97CC[i].unk0) {
                    func_801E2E48(i);
                    func_801E2F38(i);
                    D_801E979A++;
                }
            }
            if (D_801E979A != 0) {
                D_8011F2F0[arg0].unk3E = 8;
            } else {
                D_8011F2F0[arg0].unk3E = 10;
            }
        }
        break;
    case 3:
        func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 20, 0, 100);
    case 4:
        if ((D_801E9D58 = func_80029890(0x3F, D_801E9010, 8)) != 0) {
            D_8011F2F0[arg0].unk3E = 9;
            break;
        }
        if ((D_801E9D58 = func_800297E8(0x3F, D_801F1890, 8)) != 0) {
            D_8011F2F0[arg0].unk3E = 9;
            break;
        }
        flag = 0;
        for (i = 0; i < 5; i++) {
            if (D_801F1890[i] != D_801E9010[i]) {
                flag = 1;
            }
        }
        if (flag != 0) {
            D_8011F2F0[arg0].unk3E = 9;
            break;
        }
        if ((D_801E9D58 = func_801E2FA4()) != 0) {
            D_8011F2F0[arg0].unk3E = 9;
            break;
        }
        if ((D_801E9D58 = func_801E3010()) != 0) {
            func_801E2EF4();
            D_8011F2F0[arg0].unk3E = 9;
            break;
        }
        func_801E2EC4(&D_801E9734);
        if (D_801E9760 != D_801E9734) {
            D_8011F2F0[arg0].unk3E = 9;
        } else {
            D_8011F2F0[arg0].unk3E = 10;
        }
        break;
    case 7:
        func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 20, 0, 0x65);
        D_8011F2F0[arg0].unk3E = 10;
        break;
    case 8:
        func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 20, 0, 0x67);
        D_8011F2F0[arg0].unk3E = 10;
        break;
    case 9:
        func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 20, 0, 0x66);
        D_8011F2F0[arg0].unk3E = 10;
        break;
    case 10:
        func_800297C8();
        D_8011F2F0[arg0].unkD = 2;
        *D_8011F2F0[D_8018BC3C].unk60 = 1;
        D_8011F2F0[D_801E9B32].unkD = 2;
        D_8011F2F0[D_801E979C].unkD = 2;
        break;
    }
}
