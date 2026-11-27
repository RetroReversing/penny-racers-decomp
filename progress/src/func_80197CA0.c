typedef struct { u8 pad0[0xC]; u8 unkC; u8 padD[0xB]; f32 x, y, z; u8 pad24[0x1A]; u16 state; u8 pad40[0x24]; } Obj64;
extern Obj64 D_8011F2F0[];
extern u8 D_801C6B32;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7074;
extern u8 D_801C7ABD;
s32 func_801987E0(void);
u8 func_80198A90(void);
s32 func_801984DC(void);
s32 func_80198F1C(s32 arg0);

void func_80197CA0(u16 arg0)
{
    u16 state;

    D_8011F2F0[arg0].x = D_801C7068 * 400.0f * 0.5f;
    D_8011F2F0[arg0].y = 0.0f;
    D_8011F2F0[arg0].z = (D_801C6BB9 + 1) * 400.0f * 0.5f;
    if (D_8011F2F0[D_801C7074].state == 7 || D_8011F2F0[D_801C7074].state == 8 || D_8011F2F0[D_801C7074].state == 6) {
        D_801C6B32 = func_801987E0();
    } else if (D_8011F2F0[D_801C7074].state == 9 || D_8011F2F0[D_801C7074].state == 10 || D_8011F2F0[D_801C7074].state == 13) {
        D_801C6B32 = func_80198A90();
    } else if (D_8011F2F0[D_801C7074].state == 11 || D_8011F2F0[D_801C7074].state == 12) {
        D_801C6B32 = func_801984DC();
    } else if (D_8011F2F0[D_801C7074].state == 15 || D_8011F2F0[D_801C7074].state == 16) {
        D_801C6B32 = func_80198F1C(arg0);
    } else {
        state = D_8011F2F0[D_801C7074].state;
        if (!(state == 17 || state == 18) && !(state == 19 || state == 20) && D_801C6BB9 < 0x17) {
            D_801C6B32 = 1;
        } else {
            D_801C6B32 = 0;
        }
    }
    if (D_801C6B32 != 0) {
        D_8011F2F0[arg0].unkC = D_801C7ABD;
    } else {
        D_8011F2F0[arg0].unkC = 0;
    }
}
