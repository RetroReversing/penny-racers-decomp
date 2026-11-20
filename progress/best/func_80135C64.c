typedef struct {
    u8 b0;
    u8 b1;
    s16 h2;
} Unk350;

typedef struct {
    u8 b0;
    u8 pad1;
    u16 flags;
    u8 pad4[8];
    u8 c;
    u8 d;
    u8 padE[2];
    u16 next;
    u8 pad12[0x2C];
    u16 state;
    u8 pad40[4];
    f32 f44;
    f32 f48;
    f32 f4C;
    u8 pad50[0x10];
    Unk350 *ptr;
} Racer;

extern Racer D_8011F2F0[];
extern u8 D_8018A250[][5];
extern u8 D_8018A452[];
extern u16 D_8018A26E[];
extern s32 D_801E9990[][28];
extern u8 D_800DB1B8[];
extern u8 D_8006FB14[];
extern u16 D_80167E64;
extern u16 D_80167E66;
extern u8 D_80189CC8;
extern u8 *D_801C7AB0;
extern u16 D_8018BC3C;
extern u16 D_8006F9E8;
extern u16 D_800E1850;
extern u8 D_8022AFE9[][0x8F0];

#define gNumPlayers (*(s16 *)(D_800DB1B8 + 0x2108))

extern void func_800DE41C();
extern void func_801375A0();
extern void func_80137F60();
extern void func_801CF468(u16, s32, s32, s32);
extern void func_80028100(s32, s32);
extern void func_802319E8(void);
extern void func_80231C5C(void);
extern void func_8021F5F0(void);

void func_80135C64(u16 idx)
{
    u8 *__base_D_80189CC8;
    s32 i;
    s32 j;
    u16 n;

    switch (D_8011F2F0[idx].state) {
    case 0:
        for (i = 0; i < 5; i++) {
            D_8018A250[D_8011F2F0[idx].b0][i] = 0;
        }
        D_8018A452[1] = 0;
        D_8018A452[0] = 0;
        D_8011F2F0[idx].state = 1;
        break;
    case 1:
        if (D_8011F2F0[idx].c < 4) {
            D_8011F2F0[idx].f44 = 1.0f;
            D_8011F2F0[idx].f48 = 0.0f;
            D_8011F2F0[idx].f4C = 30.0f;
            __base_D_80189CC8 = &D_80189CC8;
            if ((*__base_D_80189CC8) == 3 && D_801C7AB0[1] == 6) {
                D_8011F2F0[idx].c++;
                if (D_8011F2F0[idx].c == 2) {
                    D_8011F2F0[idx].c = 4;
                }
            } else {
                D_8011F2F0[idx].c++;
            }
            D_8011F2F0[idx].state = 20;
        } else {
            D_80167E64++;
            if (gNumPlayers == D_80167E64) {
                D_8006FB14[4] = 3;
            }
            D_8011F2F0[idx].state = 2;
        }
        break;
    case 2:
        for (i = 0; i < gNumPlayers; i++) {
            if (D_801E9990[i][0] != 1) continue;
            if (gNumPlayers != D_80167E64) continue;
            if ((*__base_D_80189CC8) == 2) {
                if (D_8018A250[i][3] != 0xFF) continue;
                if (D_80167E66 != 0) continue;
                func_800DE41C(0, 0, 3, 0, 0x80, 0, 0, func_801375A0, func_80137F60, 0, 0, 0, 0, 0, 0, 0);
                for (j = 0; j < gNumPlayers; j++) {
                    D_8011F2F0[D_8018A26E[(unsigned short)j]].state = 4;
                }
                D_80167E66 = 1;
            } else {
                D_8011F2F0[D_8018BC3C].ptr->b0 = 2;
                func_801CF468(D_8018BC3C, 0, 0, 0);
                D_8011F2F0[D_8018BC3C].ptr->h2 = 20;
                D_8011F2F0[idx].f44 = 3.0f;
                D_8011F2F0[idx].f48 = 0.0f;
                D_8011F2F0[idx].f4C = 4.0f;
                func_80028100(0, 20);
                D_8011F2F0[idx].state = 30;
            }
        }
        break;
    case 3:
        func_802319E8();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        func_8021F5F0();
        D_8006F9E8 = 10;
        break;
    case 20:
        D_8011F2F0[idx].f48 = (u16)((u16)D_8011F2F0[idx].f48 + 1);
        if ((u16)D_8011F2F0[idx].f48 > (u16)D_8011F2F0[idx].f4C) {
            D_8011F2F0[idx].state = D_8011F2F0[idx].f44;
        }
        for (i = 0; i < gNumPlayers; i++) {
            if (D_801E9990[i][0] == 1) {
                D_8011F2F0[idx].state = D_8011F2F0[idx].f44;
            }
        }
        break;
    case 30:
        D_8011F2F0[idx].f48 = (u16)((u16)D_8011F2F0[idx].f48 + 1);
        if ((u16)D_8011F2F0[idx].f48 > (u16)D_8011F2F0[idx].f4C) {
            D_8011F2F0[idx].state = D_8011F2F0[idx].f44;
        }
        break;
    case 4:
        if (D_8011F2F0[D_8018BC3C].ptr->b0 == 0) {
            n = D_800E1850;
            while (n != 0xFFFF) {
                D_8011F2F0[n].d = 4;
                n = D_8011F2F0[n].next;
            }
            D_8011F2F0[idx].d = 0;
            D_8011F2F0[D_8018BC3C].d = 0;
            D_8011F2F0[idx].flags |= 0x20;
            D_8011F2F0[idx].state = 21;
        }
        break;
    }

    if ((*__base_D_80189CC8) == 0 || ((*__base_D_80189CC8) == 2 && gNumPlayers == 1)) {
        if (D_8022AFE9[D_8011F2F0[idx].b0][0] != 5) {
            if (D_8018A452[D_8011F2F0[idx].b0] < 32) {
                D_8018A452[D_8011F2F0[idx].b0]++;
            } else {
                D_8018A452[D_8011F2F0[idx].b0] = 0;
            }
        }
    }
    if (D_8011F2F0[idx].state == 4) {
        for (i = 0; i < 5; i++) {
            if (D_8018A250[D_8011F2F0[idx].b0][i] != 0) {
                D_8018A250[D_8011F2F0[idx].b0][i] -= 5;
            } else {
                D_8011F2F0[idx].d = 2;
            }
        }
    } else {
        if (D_8011F2F0[idx].c != 0 && D_8018A250[D_8011F2F0[idx].b0][4] < 0xFF) {
            D_8018A250[D_8011F2F0[idx].b0][4] += 5;
        }
        for (i = 0; i < D_8011F2F0[idx].c; i++) {
            if ((*__base_D_80189CC8) == 3 && (D_801C7AB0[1] == 6) & (i == 1)) break;
            if (D_8018A250[D_8011F2F0[idx].b0][i] < 0xFF) {
                D_8018A250[D_8011F2F0[idx].b0][i] += 5;
            }
        }
    }
}
