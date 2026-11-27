s32 func_8014A870(s32, s32, s32);
void playStageSound(s32, s32);
typedef struct { u8 pad0[0x3E]; u16 state; u8 pad40[0x24]; } Obj;
extern Obj D_8011F2F0[];
extern u16 D_80190CA0;
extern u8 D_80190CA6;
extern u8 D_80190CB0;
extern u8 D_801C5E9C[];
extern u8 D_801C5EA2;

void func_802163B0(u16 arg0)
{
    Obj *obj = &D_8011F2F0[arg0];
    u16 *fade = &D_80190CA0;
    u8 *a = (u8 *) fade + 2;
    u8 *b = (u8 *) fade + 4;
    s32 input = func_8014A870(0x1E, 7, 0);
    s16 *temp;

    switch (obj->state) {
    case 0:
        *fade = 0xFF;
        D_80190CA6 = 0;
        *a = D_801C5E9C[0] - 3;
        *b = D_801C5E9C[1] - 5;
        obj->state = 0x10;
    case 0x10:
        if ((input & 8) && *a != 1) {
            playStageSound(7, 0x3B);
            *a = 1;
        }
        if ((input & 4) && *a != 0) {
            playStageSound(7, 0x3B);
            *a = 0;
        }
        D_801C5E9C[0] = *a + 3;
        if (input & 0x10) {
            input = 0;
            playStageSound(7, 0x3D);
            D_80190CA6 = 1;
            obj->state = 0x20;
        }
        if (input & 0x20) {
            playStageSound(7, 0x3A);
            {
                u8 *p = &D_80190CB0;
                do {*p = 0;}while(0);
                *(s16 *) (p - 0x16) = 0x10;
            }
            D_801C5EA2 = 5;
        }
        break;
    case 0x20:
        if ((input & 8) && *b != 1) {
            playStageSound(7, 0x3B);
            *b = 1;
        }
        if ((input & 4) && *b != 0) {
            playStageSound(7, 0x3B);
            *b = 0;
        }
        D_801C5E9C[1] = *b + 5;
        if (input & 0x10) {
            input = 0;
            playStageSound(7, 0x3D);
            obj->state = 0x30;
        }
        if (input & 0x20) {
            playStageSound(7, 0x3A);
            obj->state = 0;
        }
        break;
    case 0x30:
        *fade -= 8;
        if ((s16) *fade < 0) {
            *fade = 0;
            {
                u8 *p = &D_80190CB0;
                *p = 0;
                temp = (s16 *) (p - 0x16);
                *temp = 0xF0;
            }
        }
        break;
    }
}
