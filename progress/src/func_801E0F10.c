typedef struct { u8 player; u8 unk1[0xB]; u8 key; u8 unkD[0x31]; u16 state; u8 unk40[0x20]; u8 *unk60; } Obj;
typedef struct {
    u8 unk0[0x594]; s16 laps; u8 unk596[0x879 - 0x596]; u8 mode; u8 unk87A; u8 unk87B; s8 stick; u8 unk87D[0x890 - 0x87D];
    s32 a; s32 b; s32 c; s32 d; u8 unk8A0[0x8F0 - 0x8A0];
} Car;
typedef struct { u32 w[0x5E]; } Info;
typedef struct { u8 unk0[0x20]; u16 track; } Sel;
typedef struct { u8 unk0; u8 unk1; u16 unk2; u16 unk4; u8 unk6; u8 unk7; u8 unk8; u8 unk9; u16 unkA; u16 unkC; u16 unkE; u16 unk10; } Menu;

extern Obj D_8011F2F0[];
extern Car sCars[];
extern Info sCarSlots[];
extern Sel D_8006FAF0;
extern u8 D_801E87E0;
extern u8 D_801E87E1;
extern u8 D_801E87E2;
extern u8 D_801E87E3;
extern u8 D_801E87E5;
extern u16 D_801E87E6;
extern u32 D_801F1880[];
extern u8 D_801F18E0[];
extern u8 D_801F18E1[];
extern u8 D_801E9D80[];
extern u8 D_801E9D81[];
extern u8 D_801E9498[];
extern Menu D_801D59C4;
extern void debugPrintf();
extern void func_80232360();
extern void func_801E28BC();
extern void func_801E2ABC();
extern void updatePlayerFade();
extern void func_801CEC2C();
extern s16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *,
                         f32, f32, f32, f32, f32, f32, f32, f32, f32);

#define SPAWN(a, f, g) objCreate(0, 0, 3, 0, a, 0xFF, 0, f, g, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)
#define MENU ((Menu *) D_8011F2F0[D_801E87E6].unk60)

void func_801E0F10(u16 arg0)
{
    u8 key;
    s32 flags;
    u8 x;
    u8 track;

    D_801E87E5 = D_8011F2F0[arg0].player;
    key = D_8011F2F0[arg0].key;
    switch (D_8011F2F0[arg0].state) {
    case 0:
        D_801F1880[D_801E87E5] = 0;
        D_8011F2F0[arg0].state = 1;
    case 1:
        if (key == 1) {
            D_801F1880[D_801E87E5] = 0;
            D_8011F2F0[arg0].state = 2;
        }
        if (key == 2) {
            sCars[D_801E87E5].mode = 2;
            D_801F1880[D_801E87E5] = 0;
            D_8011F2F0[arg0].state = 3;
        }
        if (key == 3) {
            D_8011F2F0[arg0].state = 4;
        }
        break;
    case 2:
        flags = 0;
        if (sCars[D_801E87E5].stick < -0x20) {
            flags |= 1;
        }
        if (sCars[D_801E87E5].a) {
            flags |= 2;
        }
        if (sCars[D_801E87E5].b) {
            flags |= 4;
        }
        if (sCars[D_801E87E5].c) {
            flags |= 0x10;
        }
        if (sCars[D_801E87E5].d) {
            flags |= 8;
        }
        x = sCars[D_801E87E5].unk87B;
        D_801F18E0[D_801F1880[D_801E87E5]] = flags;
        (D_801F18E0 + 1)[D_801F1880[D_801E87E5]] = x;
        D_801F1880[D_801E87E5] += 2;
        D_801E87E2 = 0;
        if (D_801F1880[D_801E87E5] >= 0x7AFA || key == 0) {
            D_801F18E0[D_801F1880[D_801E87E5]] = 0xFF;
            (D_801F18E0 + 1)[D_801F1880[D_801E87E5]] = 0xFF;
            if (D_801F1880[D_801E87E5] < 0x7AFA) {
                D_801E87E0 = track = D_8006FAF0.track;
                D_801E87E2 = 1;
                if (sCars[1].laps < 4) {
                    D_801F1880[D_801E87E5] = 0;
                    D_801E87E3 = 1;
                    D_801E87E1 = track;
                    sCarSlots[7] = sCarSlots[D_801E87E5];
                    while (1) {
                        D_801E9D80[D_801F1880[D_801E87E5]] = D_801F18E0[D_801F1880[D_801E87E5]];
                        D_801E9D81[D_801F1880[D_801E87E5]] = D_801F18E1[D_801F1880[D_801E87E5]];
                        if (D_801F18E0[D_801F1880[D_801E87E5]] == 0xFF &&
                            D_801F18E1[D_801F1880[D_801E87E5]] == 0xFF) {
                            break;
                        }
                        D_801F1880[D_801E87E5] += 2;
                    }
                    debugPrintf(D_801E9498);
                }
            } else {
                SPAWN(0x9F, func_801E28BC, func_801E2ABC);
                D_801E87E6 = SPAWN(0x9E, updatePlayerFade, func_801CEC2C);
                D_8011F2F0[D_801E87E6].unk60 = (u8 *) &D_801D59C4;
                MENU->unk0 = 0;
                MENU->unk2 = 0x14;
                MENU->unk4 = 0;
                MENU->unk6 = 0;
                MENU->unk7 = 0;
                MENU->unk8 = 0;
                MENU->unk9 = 0;
                MENU->unkA = 0;
                MENU->unkC = 0;
                MENU->unkE = 0;
                MENU->unk10 = 0;
            }
            D_8011F2F0[arg0].key = 0;
            D_8011F2F0[arg0].state = 1;
        }
        break;
    case 3:
        if (D_801E87E3 != 1 || D_801E87E1 != D_8006FAF0.track) {
            D_8011F2F0[arg0].key = 0;
        }
        if (D_8011F2F0[arg0].key == 2) {
            D_801F1880[D_801E87E5] += 2;
        }
        if ((D_801E9D80[D_801F1880[D_801E87E5]] == 0xFF && D_801E9D80[D_801F1880[D_801E87E5] + 1] == 0xFF) ||
            key == 0) {
            D_8011F2F0[arg0].key = 0;
            sCars[D_801E87E5].mode = 1;
            func_80232360(D_801E87E5, 0);
            D_8011F2F0[arg0].state = 1;
        }
        break;
    }
}
