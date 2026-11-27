typedef struct { u8 pad[0x67]; u8 flags[7]; } Info;
typedef struct { u8 pad0[0x1C]; f32 y; u8 pad20[0x1E]; u16 state; u16 timer; u8 pad42[0x1E]; u8 *info; u8 pad64[0]; } Obj;
extern Obj D_8011F2F0[];
void func_8013AE60(u16);
void func_801D7028(u16, s32);
void func_8013F1D4(u16, u8 *);
void func_8013F44C(u16, u8 *);

void func_80140E0C(u16 id) {
    Obj *p;
    u8 *info;
    s32 i;

    p = &D_8011F2F0[id];
    info = D_8011F2F0[id].info;
    func_8013AE60(id);
    switch (D_8011F2F0[id].state) {
    case 0:
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 1;
            func_801D7028(id, 0x23);
        }
        break;
    case 1:
        p->y += 4.0f;
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 100;
            D_8011F2F0[id].state = 2;
        }
        func_8013F1D4(id, info);
        for (i = 0; i < 7; i++) {
            ((Info *) info)->flags[i] = 0;
        }
        break;
    case 2:
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 3;
            func_801D7028(id, 0x23);
        }
        func_8013F44C(id, info);
        break;
    case 3:
        p->y -= 4.0f;
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 4;
        }
        func_8013F44C(id, info);
        break;
    case 4:
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 5;
            func_801D7028(id, 0x23);
        }
        break;
    case 5:
        p->y += 4.0f;
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 6;
        }
        func_8013F1D4(id, info);
        for (i = 0; i < 7; i++) {
            ((Info *) info)->flags[i] = 0;
        }
        break;
    case 6:
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 7;
            func_801D7028(id, 0x23);
        }
        func_8013F44C(id, info);
        break;
    case 7:
        p->y -= 4.0f;
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 100;
            D_8011F2F0[id].state = 0;
        }
        func_8013F44C(id, info);
        break;
    }
}
