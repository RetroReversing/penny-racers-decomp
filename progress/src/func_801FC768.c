typedef struct { u8 pad0[62]; u16 st; u8 pad1[36]; } Elem;
typedef struct { u8 *p; u8 pad[96]; } Rec;
extern Elem D_8011F2F0[];
extern Rec D_8011F350[];
extern u16 D_8018BC3C;
extern u16 D_802038C8;
extern u16 D_80203AC8;

void func_801FC768(u16 arg0) {
    switch (D_8011F2F0[arg0].st) {
    case 0:
        D_80203AC8 = 0;
        D_802038C8 = 0;
        goto L918;
    case 1:
        D_802038C8++;
        if (D_802038C8 < 0x12D) {
            return;
        }
        D_802038C8 = 0;
        D_8011F2F0[arg0].st = 2;
        *D_8011F350[D_8018BC3C].p = 2;
        return;
    case 2:
        if (*D_8011F350[D_8018BC3C].p != 0) {
            return;
        }
        D_8011F2F0[arg0].st = 3;
        D_80203AC8 = 1;
        return;
    case 3:
        if (D_80203AC8 == 0) {
            D_802038C8++;
        }
        if (D_802038C8 < 0xB) {
            return;
        }
        D_802038C8 = 0;
        D_8011F2F0[arg0].st = 4;
        return;
    case 4:
        return;
    }
    return;
L918:
    *D_8011F350[D_8018BC3C].p = 1;
    D_8011F2F0[arg0].st = 1;
}
