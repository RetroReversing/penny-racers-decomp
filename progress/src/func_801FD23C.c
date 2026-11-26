typedef struct { s16 x; s16 y; s16 w; s16 h; u8 pad8[0x10]; s16 x0; s16 y0; s16 x1; s16 y1; u8 pad20[8]; } ViewRec;
typedef struct { u8 pad[0x2110]; ViewRec r[1]; } ViewTbl;
extern ViewTbl D_800DB1B8;
typedef struct { u16 state; u8 pad[0x62]; } StateRec;
extern StateRec D_8011F32E[];
s32 func_8021F6A0(s32);

void func_801FD23C(u16 arg0) {
    switch (D_8011F32E[arg0].state) {
    case 0:
        func_8021F6A0(1);
        D_800DB1B8.r[0].w = 0xA0;
        D_800DB1B8.r[0].h = 0x78;
        D_8011F32E[arg0].state = 1;
        return;
    case 1:
        if (D_800DB1B8.r[0].x < 0xA0) {
            D_800DB1B8.r[0].x++;
        } else {
            D_8011F32E[arg0].state = 2;
        }
        break;
    case 2:
        if (D_800DB1B8.r[0].x > 0) {
            D_800DB1B8.r[0].x--;
        } else {
            D_8011F32E[arg0].state = 1;
        }
        break;
    default:
        return;
    }
    D_800DB1B8.r[0].x0 = D_800DB1B8.r[0].x;
    D_800DB1B8.r[0].y0 = D_800DB1B8.r[0].y;
    D_800DB1B8.r[0].x1 = D_800DB1B8.r[0].x + 0xA0;
    D_800DB1B8.r[0].y1 = D_800DB1B8.r[0].y + 0x78;
}
