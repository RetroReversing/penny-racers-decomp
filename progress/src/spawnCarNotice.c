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
extern Slot noticeStates[];
extern u8 D_802328DB[][5];
extern s32 objCreate();
extern void updateCarReload();

/* Spawns a notice object for a car and sets its starting notice state from the per-car table, when the car is in a state that shows one. */ void spawnCarNotice(Obj *car)
{
    s32 noticeKind;
    s32 noticeId;

    if (car->unk4 >= 6) return;
    if (car->unk594 >= 4) return;
    if (car->unk53A == 0) return;
    noticeKind = 0;
    switch (car->unk879) {
    case 0:
        switch (car->unk53A) {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        case 12: case 13: case 14:
            noticeKind = 1;
            break;
        case 11:
            noticeKind = 0;
            break;
        case 15:
            noticeKind = 4;
            break;
        }
        break;
    case 1:
        switch (car->unk53A) {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        case 12: case 13: case 14:
            noticeKind = 1;
            break;
        case 11:
            noticeKind = 0;
            break;
        case 15:
            noticeKind = 4;
            break;
        }
        break;
    }
    noticeId = objCreate(0, ((u8 *)car)[5], 3, 0, 0x20, 1, 0, updateCarReload, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if ((u16)(noticeId + 2) < 2) return;
    if (car->unk879 == 1) {
        if (noticeKind == 0) {
            noticeStates[(u16)noticeId].unk0 = D_802328DB[car->unk596][0] << 1;
        } else if (car->unk596 >= 4) {
            noticeStates[(u16)noticeId].unk0 = 1;
        } else {
            noticeStates[(u16)noticeId].unk0 = 0;
        }
    } else {
        noticeStates[(u16)noticeId].unk0 = D_802328DB[car->unk596][noticeKind];
    }
}
