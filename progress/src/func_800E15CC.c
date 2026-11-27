typedef struct {
    u8 pad0[0xD];
    u8 unkD;
    u8 padE[2];
    u16 next;
    u8 pad12[0x54 - 0x12];
    s32 unk54;
    u8 pad58[100 - 0x58];
} Ent800E15CC;
extern u16 objListHead;
extern u16 visibleObjList[];
extern Ent800E15CC D_8011F2F0[];
void sortObjIndicesByGroup(s32, s32, u16 *);
void func_800E15CC(void) {
    u16 n;
    u16 cur;
    Ent800E15CC *e;

    n = 0;
    cur = objListHead;
    do {
        e = &D_8011F2F0[cur];
        if (e->unk54 != 0 && e->unkD == 0) {
            visibleObjList[n] = cur;
            n++;
        }
        cur = e->next;
    } while (cur != 0xFFFF);
    visibleObjList[n] = 0xFFFF;
    if (n - 1 > 0) {
        sortObjIndicesByGroup(0, n - 1, visibleObjList);
    }
}
