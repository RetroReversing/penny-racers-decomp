typedef struct { u8 unk0[0xD]; u8 unkD; u8 unkE[0xA]; f32 x; f32 y; u8 unk20[0x1E]; u16 state; u16 mode; u8 unk42[0x22]; } Obj;
typedef struct { u8 next; u8 dur; u8 timer; u8 y; } Step;
typedef struct { u8 unk0[4]; u8 unk4; } Flag;
typedef struct { s16 a; s16 b; s16 c; u8 unk6[0x32]; } Slot;
typedef struct { Slot slots[4]; u8 unkE0[0x8F0 - 0xE0]; } CarSlots;
typedef struct { u8 unk0[0x2108]; s16 laps; } Race;
extern Obj D_8011F2F0[];
extern u8 D_80183B48;
extern u8 D_80183B49;
extern u8 D_80183B4A;
extern u8 D_80183B4B;
extern Flag D_8006FB14;
typedef struct { u8 unk0[0x5F4]; Slot slots[4]; u8 unk6D4[0x8F0 - 0x6D4]; } Car;
extern CarSlots D_8022AD64[];
extern Car D_8022A770[];
extern Race D_800DB1B8;
extern void func_801D651C(s32, s32);
extern void func_8013F884();
extern s16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *,
                         f32, f32, f32, f32, f32, f32, f32, f32, f32);

#define START(n) D_80183B48 = n; D_80183B49 = 0x3C; D_80183B4A = 0

void func_8013095C(u16 arg0)
{
    s32 i;
    s32 j;
    Slot *s;

    switch (D_8011F2F0[arg0].state) {
    case 0:
        START(1);
        if (D_800DB1B8.laps < 3) {
            D_8011F2F0[arg0].x = 40.0f;
        } else {
            D_8011F2F0[arg0].x = 140.0f;
        }
        D_8011F2F0[arg0].y = -160.0f;
        D_80183B4B = 0x28;
        D_8011F2F0[arg0].state = 6;
        D_8011F2F0[arg0].mode = 1;
        break;
    case 1:
        START(2);
        D_8011F2F0[arg0].state = 0xA;
        D_8011F2F0[arg0].mode = 2;
        func_801D651C(7, 0x42);
        break;
    case 2:
        START(3);
        D_8011F2F0[arg0].state = 0xA;
        D_8011F2F0[arg0].mode = 3;
        func_801D651C(7, 0x42);
        break;
    case 3:
        START(4);
        D_8011F2F0[arg0].state = 0xA;
        D_8011F2F0[arg0].mode = 4;
        func_801D651C(7, 0x42);
        break;
    case 4:
        START(7);
        D_8011F2F0[arg0].state = 0xA;
        D_8011F2F0[arg0].mode = 5;
        D_8006FB14.unk4 = 1;
        func_801D651C(7, 0x43);
        func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_8013F884, 0,
                      0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        break;
    case 5:
        D_8011F2F0[arg0].unkD = 2;
        break;
    case 6:
        D_8011F2F0[arg0].y += (D_80183B4B - D_8011F2F0[arg0].y) * 0.2;
        D_80183B4A++;
        if (D_80183B49 == D_80183B4A) {
            D_8011F2F0[arg0].state = D_80183B48;
        }
        break;
    case 7:
        D_8011F2F0[arg0].y -= (D_8011F2F0[arg0].y + 160.0f) * 0.2;
        D_80183B4A++;
        if (D_80183B49 == D_80183B4A) {
            D_8011F2F0[arg0].state = 5;
        }
        break;
    case 10:
        D_80183B4A++;
        if (D_80183B48 == 7) {
            switch (D_800DB1B8.laps) {
            case 1:
                for (i = 0; i < 2; i++) {
                    if (D_80183B4A == i * 5 + 5) {
                        s = &D_8022AD64[0].slots[i];
                        s->a = i;
                        if (i == 0) {
                            s->b = 6;
                            s->c = 2;
                        }
                    }
                }
                break;
            case 2:
                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 2; j++) {
                        if (D_80183B4A == i * 6 + j * 2 + 5) {
                            s = &D_8022A770[i].slots[j];
                            s->a = i * 2 + j;
                            if (j == 0) {
                                switch (i) {
                                case 0:
                                    s->b = 6;
                                    break;
                                case 1:
                                    s->b = 5;
                                    break;
                                default:
                                    s->b = 0;
                                    break;
                                }
                                s->c = 2;
                            }
                        }
                    }
                }
                break;
            case 3:
                for (i = 0; i < 3; i++) {
                    if (D_80183B4A == i * 4 + 5) {
                        D_8022AD64[i].slots[0].a = -1;
                        D_8022AD64[i].slots[0].b = -1;
                        D_8022AD64[i].slots[0].c = 0;
                        D_8022AD64[i].slots[1].a = i;
                    }
                }
                break;
            case 4:
                for (i = 0; i < 4; i++) {
                    if (D_80183B4A == i * 4 + 5) {
                        D_8022AD64[i].slots[0].a = -1;
                        D_8022AD64[i].slots[0].b = -1;
                        D_8022AD64[i].slots[0].c = 0;
                        D_8022AD64[i].slots[1].a = i;
                    }
                }
                break;
            }
        }
        if (D_80183B49 == D_80183B4A) {
            D_8011F2F0[arg0].state = D_80183B48;
        }
        break;
    }
}
