typedef struct { u8 pad0[0xC]; u8 unkC; u8 padD[0xB]; f32 x, y, z; u8 pad24[0x1A]; u16 state; u8 pad40[0x24]; } Obj64;
extern Obj64 D_8011F2F0[];
extern u8 D_801C6B33;
extern s8 cursorY;
extern s8 cursorX;
extern u16 hudSlotIndex;
extern u8 D_801C7ABD;
s32 func_8019881C(void);
u8 func_80198B9C(void);
s32 func_8019862C(void);
s32 func_8019904C(s32 arg0);

void func_80197F78(u16 arg0)
{
    u16 state;

    D_8011F2F0[arg0].x = (cursorX + 1) * 400.0f * 0.5f;
    D_8011F2F0[arg0].y = 0.0f;
    D_8011F2F0[arg0].z = cursorY * 400.0f * 0.5f;
    if (D_8011F2F0[hudSlotIndex].state == 7 || D_8011F2F0[hudSlotIndex].state == 8 || D_8011F2F0[hudSlotIndex].state == 6) {
        D_801C6B33 = func_8019881C();
    } else if (D_8011F2F0[hudSlotIndex].state == 9 || D_8011F2F0[hudSlotIndex].state == 10 || D_8011F2F0[hudSlotIndex].state == 13) {
        D_801C6B33 = func_80198B9C();
    } else if (D_8011F2F0[hudSlotIndex].state == 11 || D_8011F2F0[hudSlotIndex].state == 12) {
        D_801C6B33 = func_8019862C();
    } else if (D_8011F2F0[hudSlotIndex].state == 15 || D_8011F2F0[hudSlotIndex].state == 16) {
        D_801C6B33 = func_8019904C(arg0);
    } else {
        state = D_8011F2F0[hudSlotIndex].state;
        if (!(state == 17 || state == 18) && !(state == 19 || state == 20) && cursorX < 0x17) {
            D_801C6B33 = 1;
        } else {
            D_801C6B33 = 0;
        }
    }
    if (D_801C6B33 != 0) {
        D_8011F2F0[arg0].unkC = D_801C7ABD;
    } else {
        D_8011F2F0[arg0].unkC = 0;
    }
}

