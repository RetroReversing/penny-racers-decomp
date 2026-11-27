typedef struct { u8 pad0[0xA]; u16 unkA; u16 unkC; } Info;
typedef struct { u8 pad0; u8 kind; u8 pad2[0xE]; u16 prev; u16 next; u16 child; u8 pad16[0x26]; u16 link; u8 pad3E[0x12]; Info *info; u8 pad54[0x10]; } Obj;
typedef struct { u16 a; u16 b; u8 pad[0x304]; } Node;
extern Obj D_8011F2F0[];
extern Node D_800E2660[];
extern u16 D_800E1ED0;
extern u16 D_80126FF0;
extern u16 D_80126FF2;
extern u16 D_80126FF4;
extern u16 func_800E1850;

void func_800DECCC(u16 id) {
    if (D_8011F2F0[id].kind != 0) {
        if (D_8011F2F0[id].kind == 1 || D_8011F2F0[id].kind == 4) {
            if (D_8011F2F0[id].info->unkC != 0xFFFF) {
                func_800DECCC(D_8011F2F0[id].child);
            }
            if (D_8011F2F0[id].info->unkA != 0xFFFF) {
                func_800DECCC(D_8011F2F0[id].child);
            }
        }
        D_80126FF0++;
        if (D_8011F2F0[id].kind != 4) {
            if (D_8011F2F0[id].prev != 0xFFFF) {
                D_8011F2F0[D_8011F2F0[id].prev].next = D_8011F2F0[id].next;
            }
            if (D_8011F2F0[id].next != 0xFFFF) {
                D_8011F2F0[D_8011F2F0[id].next].prev = D_8011F2F0[id].prev;
            } else {
                func_800E1850 = D_8011F2F0[id].prev;
            }
        }
        D_8011F2F0[id].prev = 0xFFFF;
        D_8011F2F0[id].next = D_80126FF4;
        D_8011F2F0[D_80126FF4].prev = id;
        D_80126FF4 = id;
        D_8011F2F0[id].kind = 0;
        if (D_8011F2F0[id].link != 0xFFFF) {
            D_800E1ED0++;
            D_800E2660[D_80126FF2].a = D_8011F2F0[id].link;
            D_800E2660[D_8011F2F0[id].link].b = D_80126FF2;
            D_800E2660[D_8011F2F0[id].link].a = 0xFFFF;
            D_80126FF2 = D_8011F2F0[id].link;
        }
    }
}
