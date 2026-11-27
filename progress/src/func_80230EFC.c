typedef struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x53A - 6];
    u16 unk53A;
    u8 pad53C[0x594 - 0x53C];
    s16 unk594;
    s8 unk596;
    u8 pad597[0x879 - 0x597];
    u8 unk879;
} Obj;
typedef struct { u16 unk0; u8 pad[98]; } Slot;
extern Slot D_8011F330[];
extern u8 D_802328DB[][5];
extern s32 objCreate();
extern void func_8013F638();

void func_80230EFC(Obj *a0)
{
    s32 s0;
    s32 ret;

    if (a0->unk4 >= 6) return;
    if (a0->unk594 >= 4) return;
    if (a0->unk53A == 0) return;
    s0 = 0;
    switch (a0->unk879) {
    case 0:
        switch (a0->unk53A) {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        case 12: case 13: case 14:
            s0 = 1;
            break;
        case 11:
            s0 = 0;
            break;
        case 15:
            s0 = 4;
            break;
        }
        break;
    case 1:
        switch (a0->unk53A) {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        case 12: case 13: case 14:
            s0 = 1;
            break;
        case 11:
            s0 = 0;
            break;
        case 15:
            s0 = 4;
            break;
        }
        break;
    }
    ret = objCreate(0, ((u8 *)a0)[5], 3, 0, 0x20, 1, 0, func_8013F638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if ((u16)(ret + 2) < 2) return;
    if (a0->unk879 == 1) {
        if (s0 == 0) {
            D_8011F330[(u16)ret].unk0 = D_802328DB[a0->unk596][0] << 1;
        } else if (a0->unk596 >= 4) {
            D_8011F330[(u16)ret].unk0 = 1;
        } else {
            D_8011F330[(u16)ret].unk0 = 0;
        }
    } else {
        D_8011F330[(u16)ret].unk0 = D_802328DB[a0->unk596][s0];
    }
}
