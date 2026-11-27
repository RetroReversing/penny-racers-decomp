typedef struct {
    u16 id;
    u8 pad2[0x23];
    u8 unk25;
    u8 pad26[0x152];
} Racer;

extern Racer sCarSlots[];
extern s16 carClassIndex;
extern u8 D_80232CF8;
extern u8 D_80232D04;
extern u8 D_80232D10;
extern u8 D_80232D1C;
extern u8 D_80232D28;
void debugPrintf();
void loadCarSlotSpec(s32, s32);

/* Fills the six car slots for a race with one or two human players. Slots are picked in order
 * after the player's own car, and slot 4-5 are tagged as the second player's when two play. */
void assignCarSlots(u16 playerCount)
{
    u8 takenCars[14];
    s32 i;
    s32 carId;

    debugPrintf(&D_80232CF8, playerCount);
    switch (carClassIndex) {
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
        takenCars[i] = 0;
    }
    switch (playerCount) {
    case 1:
        carId = sCarSlots[0].id + 1;
        for (i = 1; i < 6; i++) {
            carId++;
            carId = (carId < 13) ? carId : 0;
            loadCarSlotSpec((u16) i, (u16) carId);
            sCarSlots[i].unk25 = 0;
        }
        break;
    case 2:
        takenCars[sCarSlots[0].id] = 1;
        takenCars[sCarSlots[1].id] = 1;
        carId = sCarSlots[0].id;
        for (i = 2; i < 4; i++) {
            while (takenCars[carId]) {
                carId++;
                carId = (carId < 13) ? carId : 0;
            }
            loadCarSlotSpec((u16) i, (u16) carId);
            sCarSlots[i].unk25 = 0;
            takenCars[carId] = 1;
        }
        carId = sCarSlots[1].id;
        for (i = 4; i < 6; i++) {
            while (takenCars[carId]) {
                carId++;
                carId = (carId < 13) ? carId : 0;
            }
            loadCarSlotSpec((u16) i, (u16) carId);
            sCarSlots[i].unk25 = 1;
            takenCars[carId] = 1;
        }
        break;
    }
}
