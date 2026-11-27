typedef struct { u8 pad0[0x3E]; u16 st; u8 pad40[0x60 - 0x40]; u8 *p; } Car;
typedef struct { s16 ob[3]; u16 flag; s16 tc[2]; s8 n[3]; u8 a; } Vtx_;
typedef struct { u8 pad0[0x38]; s32 unk38; s32 unk3C; u8 pad40[0x68 - 0x40]; s32 unk68; u8 pad6C[4]; } Obj;
extern Car D_8011F2F0[];
extern Obj D_801E9958[];
extern u8 D_80046832;
extern s32 D_80046834;
extern s32 D_80168BB0;
extern s16 menuPanelTlut;
extern f32 D_80183BB0;
extern f32 D_80183BB4;
extern f32 D_80183BB8;
extern u16 D_80183BBC;
extern u16 D_80183BBE;
extern u16 D_80183BC0;
extern Vtx_ D_80187D00[][224];
extern u8 D_80187BE8;
extern u8 D_8018991C;
extern u8 D_80189928[];
extern u16 D_8018BC3C;
extern u8 D_8018BC34;
extern u8 D_8018D39F;
extern u8 D_8018D669;
extern f32 D_8018D680[];
extern u8 D_8018F5C0;
extern f32 D_802210CC;
extern f32 D_802210D0;
void setCarLight(void *, u8, u8, u8, u8, u8, u8, s32, s32, s32);
f32 __sinf(f32);
#define SINF(x) ({ __sinf(x); })
void func_802319E8(void);
void createNoticeScreenObj(void);
void func_80143D70(void);
void playStageSound(s32, s32);
u32 func_801FA38C(s32);

void func_8015A9CC(u16 arg0)
{
    s32 i;
    s32 j;
    s32 n;
    s32 k;
    s32 t;
    u32 r;
    f32 *pos;
    f32 *other;

    switch (D_8011F2F0[arg0].st) {
    case 0:
        D_80183BB8 = 10.0f;
        for (t = 0; t < 16; t++) {
            D_8018D680[t] = t * 22.5;
        }
        D_8018F5C0 = 100;
        D_8018D39F = 100;
        D_8018991C = 100;
        D_8018D669 = 0;
        D_8018BC34 = 0;
        D_80187BE8 = 0;
        n = 100;
        D_80183BB4 = n;
        setCarLight(D_80189928, 0, 0, 0, n, n, n, -0x49, 0x49, 0x49);
        D_80183BBC = 1;
        D_80183BBE = 900;
        D_80183BC0 = 0;
        D_80046832 = 1;
        D_8011F2F0[arg0].st = 10;
        break;
    case 1:
        D_8011F2F0[D_8018BC3C].p[0] = 2;
        D_8011F2F0[D_8018BC3C].p[6] = 0xFF;
        D_8011F2F0[D_8018BC3C].p[7] = 0xFF;
        D_8011F2F0[D_8018BC3C].p[8] = 0xFF;
        D_8011F2F0[arg0].st = 2;
        break;
    case 2:
        if (D_8011F2F0[D_8018BC3C].p[0] == 0) {
            D_80046832 = 0;
            func_802319E8();
            createNoticeScreenObj();
            func_80143D70();
            D_80168BB0 = 0;
            menuPanelTlut = 0;
        }
        {
            pos = &D_802210D0;

            if (*pos > 100.0f) {
                *pos -= 4.0f;
                other = pos - 1;
                *other += 2.0f;
            }
        }
        break;
    case 10:
        D_80183BC0++;
        if (D_80183BBE == D_80183BC0) {
            D_8011F2F0[arg0].st = D_80183BBC;
        }
        if (D_80183BC0 == 1) {
            playStageSound(7, 0x1D);
        }
        if (D_8011F2F0[D_8018BC3C].p[0] == 0) {
            if (D_801E9958[0].unk68 == 1 || D_801E9958[1].unk68 == 1 || D_801E9958[2].unk68 == 1 || D_801E9958[3].unk68 == 1 ||
                D_801E9958[0].unk38 == 1 || D_801E9958[1].unk38 == 1 || D_801E9958[2].unk38 == 1 || D_801E9958[3].unk38 == 1 ||
                D_801E9958[0].unk3C == 1 || D_801E9958[1].unk3C == 1 || D_801E9958[2].unk3C == 1 || D_801E9958[3].unk3C == 1) {
                D_8011F2F0[arg0].st = D_80183BBC;
            }
        }
        break;
    }

    r = func_801FA38C(0) % 10;
    if (r == 0 && D_80183BB8 > 8.0f) {
        D_80183BB8 -= 1.0f;
    }
    if (r == 1 && D_80183BB8 < 12.0f) {
        D_80183BB8 += 1.0f;
    }
    for (t = 0; t < 16; t++) {
        D_8018D680[t] += D_80183BB8;
        if (D_8018D680[t] > 360.0f) {
            D_8018D680[t] -= 360.0f;
        }
    }
    for (i = 0; i < 14; i++) {
        for (j = 0; j < 16; j++) {
            k = j + i * 16;
            D_80183BB0 = D_8018D680[j];
            D_80187D00[D_80046834][k].ob[2] = SINF((f32)(D_80183BB0 * 3.14 / 180.0)) * 400.0f;
            D_80187D00[D_80046834][k].n[0] = SINF((f32)(D_80183BB0 * 0.5 * 3.14 / 180.0)) * 60.0f;
            D_80187D00[D_80046834][k].n[2] = D_80187D00[D_80046834][k].n[0] > 0.0f ?
                127.0f - D_80187D00[D_80046834][k].n[0] : D_80187D00[D_80046834][k].n[0] + 127.0f;
        }
    }
    if (D_80183BB4 < 255.0f) {
        D_80183BB4 += 0.5;
        D_8018D39F = D_8018991C = D_8018F5C0 = D_80183BB4;
        D_8018BC34 = D_80187BE8 = D_8018D669 = D_8018F5C0 - 100;
    }
    setCarLight(D_80189928, D_8018D669, D_8018BC34, D_80187BE8, D_8018F5C0, D_8018D39F, D_8018991C, -0x49, 0x49, 0x49);
    if (D_8011F2F0[arg0].st != 2) {
        {
            pos = &D_802210D0;

            if (*pos < 500.0f) {
                *pos += 1.0f;
            }
        }
        {
            pos = &D_802210CC;

            if (*pos > -280.0f) {
                *pos -= 1.0f;
            }
        }
    }
}
