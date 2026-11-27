typedef struct {
    u16 id;
    u8 pad2[0x23];
    u8 unk25;
    u8 pad26[0x152];
} Racer;

extern Racer sCarSlots[];
extern s16 D_8021E1A6;
extern u8 D_80232CF8;
extern u8 D_80232D04;
extern u8 D_80232D10;
extern u8 D_80232D1C;
extern u8 D_80232D28;
void debugPrintf();
void loadCarSlotSpec(s32, s32);

void func_802306F0(u16 arg0)
{
    u8 used[14];
    s32 i;
    s32 k;

    debugPrintf(&D_80232CF8, arg0);
    switch (D_8021E1A6) {
    case 0:
        debugPrintf(&D_80232D04);
        break;
    case 1:
        debugPrintf(&D_80232D10);
        break;
    case 2:
        debugPrintf(&D_80232D1C);
        break;
    case 3:
        debugPrintf(&D_80232D28);
        break;
    }
    for (i = 0; i < 14; i++) {
        used[i] = 0;
    }
    switch (arg0) {
    case 1:
        k = sCarSlots[0].id + 1;
        for (i = 1; i < 6; i++) {
            k++;
            k = (k < 13) ? k : 0;
            loadCarSlotSpec((u16) i, (u16) k);
            sCarSlots[i].unk25 = 0;
        }
        break;
    case 2:
        used[sCarSlots[0].id] = 1;
        used[sCarSlots[1].id] = 1;
        k = sCarSlots[0].id;
        for (i = 2; i < 4; i++) {
            while (used[k]) {
                k++;
                k = (k < 13) ? k : 0;
            }
            loadCarSlotSpec((u16) i, (u16) k);
            sCarSlots[i].unk25 = 0;
            used[k] = 1;
        }
        k = sCarSlots[1].id;
        for (i = 4; i < 6; i++) {
            while (used[k]) {
                k++;
                k = (k < 13) ? k : 0;
            }
            loadCarSlotSpec((u16) i, (u16) k);
            sCarSlots[i].unk25 = 1;
            used[k] = 1;
        }
        break;
    }
}
