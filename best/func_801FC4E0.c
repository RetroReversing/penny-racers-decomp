typedef struct { u16 st; u8 pad[98]; } Slot;
extern int func_801CA140(void **);
extern int func_801CA468(void **, u16);
extern int func_801CB74C(void **, int, int, int, void *, s32);
extern u8 D_8006FAF0[];
extern Slot D_8011F330[];
extern u8 D_801FFD30[];
extern s32 D_801FFD40[];
extern s16 D_802038C4;
extern s16 D_802038C6;
extern u16 D_80203AC8;
extern u8 D_80220ED8[];

void func_801FC4E0(void **arg0, u32 arg1) {
    s16 v;
    s32 *t;
    if (D_80203AC8 != 0) {
        switch (D_8011F330[arg1 & 0xFFFF].st) {
        case 0:
            D_802038C6 = 0;
            D_802038C4 = 0;
            D_8011F330[arg1 & 0xFFFF].st = 1;
            return;
        case 1:
            if (D_802038C4 < 0xFF) {
                v = D_802038C4 + 5;
                D_802038C4 = v;
                if (v >= 0x100) D_802038C4 = 0xFF;
            } else {
                D_8011F330[arg1 & 0xFFFF].st = 2;
            }
            break;
        case 2:
            D_802038C6 = D_802038C6 + 1;
            if (D_802038C6 >= 0x33) D_8011F330[arg1 & 0xFFFF].st = 3;
            break;
        case 3:
            if (D_802038C4 > 0) {
                v = D_802038C4 - 5;
                D_802038C4 = v;
                if (v < 0) D_802038C4 = 0;
            } else {
                D_80203AC8 = 0;
                D_8011F330[arg1 & 0xFFFF].st = 0;
            }
            break;
        }
        func_801CA140(arg0);
        t = (s32 *)*arg0;
        *arg0 = t + 2;
        t[0] = 0x06000000;
        t[1] = (s32)D_80220ED8;
        func_801CA468(arg0, D_802038C4);
        func_801CB74C(arg0, 0x64, 0xA0, 8, D_801FFD30, D_801FFD40[0]);
        func_801CB74C(arg0, 0x64, 0x6E, 8, D_801FFD30, D_801FFD40[*(u16 *)(D_8006FAF0 + 0x20)]);
    }
}
