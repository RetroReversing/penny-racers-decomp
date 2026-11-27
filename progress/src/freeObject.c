typedef struct { u8 pad0[0xA]; u16 unkA; u16 unkC; } Info;
typedef struct { u8 pad0; u8 kind; u8 pad2[0xE]; u16 prev; u16 next; u16 child; u8 pad16[0x26]; u16 link; u8 pad3E[0x12]; Info *info; u8 pad54[0x10]; } Obj;
typedef struct { u16 a; u16 b; u8 pad[0x304]; } Node;
extern Obj D_8011F2F0[];
extern Node modelTransforms[];
extern u16 D_800E1ED0;
extern u16 D_80126FF0;
extern u16 D_80126FF2;
extern u16 D_80126FF4;
extern u16 objListHead;

/* Frees object objIndex and, for group kinds, its child objects: unlinks it from the active list and pushes it onto the free list. */ void freeObject(u16 objIndex) {
    if (D_8011F2F0[objIndex].kind != 0) {
        if (D_8011F2F0[objIndex].kind == 1 || D_8011F2F0[objIndex].kind == 4) {
            if (D_8011F2F0[objIndex].info->unkC != 0xFFFF) {
                freeObject(D_8011F2F0[objIndex].child);
            }
            if (D_8011F2F0[objIndex].info->unkA != 0xFFFF) {
                freeObject(D_8011F2F0[objIndex].child);
            }
        }
        D_80126FF0++;
        if (D_8011F2F0[objIndex].kind != 4) {
            if (D_8011F2F0[objIndex].prev != 0xFFFF) {
                D_8011F2F0[D_8011F2F0[objIndex].prev].next = D_8011F2F0[objIndex].next;
            }
            if (D_8011F2F0[objIndex].next != 0xFFFF) {
                D_8011F2F0[D_8011F2F0[objIndex].next].prev = D_8011F2F0[objIndex].prev;
            } else {
                objListHead = D_8011F2F0[objIndex].prev;
            }
        }
        D_8011F2F0[objIndex].prev = 0xFFFF;
        D_8011F2F0[objIndex].next = D_80126FF4;
        D_8011F2F0[D_80126FF4].prev = objIndex;
        D_80126FF4 = objIndex;
        D_8011F2F0[objIndex].kind = 0;
        if (D_8011F2F0[objIndex].link != 0xFFFF) {
            D_800E1ED0++;
            modelTransforms[D_80126FF2].a = D_8011F2F0[objIndex].link;
            modelTransforms[D_8011F2F0[objIndex].link].b = D_80126FF2;
            modelTransforms[D_8011F2F0[objIndex].link].a = 0xFFFF;
            D_80126FF2 = D_8011F2F0[objIndex].link;
        }
    }
}
