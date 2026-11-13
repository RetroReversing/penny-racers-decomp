typedef struct { u8 a, b, c; } T3;
typedef struct { u8 pad[0x2E]; u16 st; u8 pad2[0x34]; } Rec;
extern Rec D_8011F300[];
extern u8 D_8011F2FD[];
extern u8 *D_8011F350[];
extern u16 D_8018BC3C;
extern u8 D_801E9010[];
extern T3 D_801E9015;
extern T3 D_8021F028;
extern u8 D_801F1890[];
extern u8 D_801F1895, D_801F1896, D_801F1897;
extern T3 D_801F1895s;
extern s32 D_801E9734;
extern s32 D_801E9760;
extern u8 D_801E979A;
extern u16 D_801E979C;
extern s32 D_801E97CC[];
extern u16 D_801E9B32;
extern s32 D_801E9D58;
extern u16 D_8011F32E[];
void func_80029790(void);
void func_801E2EF4(void);
s32 func_80029938(void);
s32 func_800297E8(s32, void *, s32);
s32 func_80029890(s32, void *, s32);
s32 func_801E3010(void);
s32 func_801E2FA4(void);
void func_801E2E00(u16, void *);
void func_801E2E48(u16);
void func_801E2F38(u16);
void func_801E2EC4(void *);
void func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_800297C8(void);

#define ST(i) (*(u16 *)((u8 *)D_8011F32E + (i) * 100))
#define B2FD(i) (*(u8 *)((u8 *)D_8011F2FD + (i) * 100))

void func_801E3038(u16 arg0) {
    s32 i;
    s32 bad;

    switch (ST(arg0)) {
    case 0:
        func_80029790();
        func_801E2EF4();
        D_8021F028.a = 0x15;
        D_8021F028.b = 0x15;
        D_8021F028.c = 0;
        D_801E9015.a = 0x15;
        D_801E9015.b = 0x15;
        D_801E9015.c = 0;
        ST(arg0) = 1;
    case 1:
        D_801E9D58 = func_80029938();
        switch (D_801E9D58) {
        case 1:
            if ((D_801E9D58 = func_800297E8(0x3F, D_801F1890, 8)) != 0) {
                goto err;
            }
            bad = 0;
            for (i = 0; i < 5; i++) {
                if (D_801F1890[i] != D_801E9010[i]) {
                    bad = 1;
                }
            }
            if (D_801F1895 >= 0x16) bad = 1;
            if (D_801F1896 >= 0x16) bad = 1;
            if (D_801F1897 >= 2) bad = 1;
            if (!bad) {
                D_8021F028 = *(T3 *)&D_801F1895;
                ST(arg0) = 2;
            } else {
                ST(arg0) = 3;
            }
            break;
        case -1:
        case 0:
        case 2:
            goto err;
        }
        break;
    case 2:
        if ((D_801E9D58 = func_801E3010()) != 0) {
            func_801E2EF4();
            goto err;
        }
        D_801E979A = 0;
        for (i = 0; i < 9; i++) {
            func_801E2E00(i, &D_801E9734);
            if (D_801E9734 != D_801E97CC[i * 12]) {
                func_801E2E48(i);
                func_801E2F38(i);
                D_801E979A++;
            }
        }
        if (D_801E979A == 0) {
            goto done;
        }
        ST(arg0) = 8;
        break;
    case 3:
        func_801DD938(0x10, 0x4C, 10, 2, 200, 180, 18, 20, 0, 100);
        if ((D_801E9D58 = func_80029890(0x3F, D_801E9010, 8)) != 0) goto err;
        if ((D_801E9D58 = func_800297E8(0x3F, D_801F1890, 8)) != 0) goto err;
        bad = 0;
        for (i = 0; i < 5; i++) {
            if (D_801F1890[i] != D_801E9010[i]) {
                bad = 1;
            }
        }
        if (bad) goto err;
        if ((D_801E9D58 = func_801E2FA4()) != 0) goto err;
        if ((D_801E9D58 = func_801E3010()) != 0) {
            func_801E2EF4();
            goto err;
        }
        func_801E2EC4(&D_801E9734);
        if (D_801E9760 == D_801E9734) goto done;
    err:
        ST(arg0) = 9;
        break;
    done:
        ST(arg0) = 10;
        break;
    case 4:
        func_801DD938(0x10, 0x4C, 10, 2, 200, 180, 18, 20, 0, 0x65);
        ST(arg0) = 10;
        break;
    case 5:
        func_801DD938(0x10, 0x4C, 10, 2, 200, 180, 18, 20, 0, 0x67);
        ST(arg0) = 10;
        break;
    case 6:
        func_801DD938(0x10, 0x4C, 10, 2, 200, 180, 18, 20, 0, 0x66);
        ST(arg0) = 10;
        break;
    case 10:
        func_800297C8();
        B2FD(arg0) = 2;
        D_8011F350[D_8018BC3C * 25][0] = 1;
        B2FD(D_801E9B32) = 2;
        B2FD(D_801E979C) = 2;
        break;
    }
}
