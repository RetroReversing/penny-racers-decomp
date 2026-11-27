typedef struct { u8 pad0[0x6E]; u16 rows[14][9]; u8 sel[14]; } Car;
extern Car sCarSlots[];
extern u16 D_80189CBC;
extern u8 D_80189CBD;
extern u16 D_80189CC4;
extern u8 D_80189CC5;
extern void *randomMasks[][8];
extern u16 D_80189C9E[];
extern u8 D_8021F048[][14];
extern u16 D_8021F270[][14][8];
void *func_8014A030(void *, u8, s32);
u8 func_80149778(u8);

/* Swaps the race state of sCars slotA and slotB when they overtake: copies the rows and selection data where the flags say a move happened, updates the display slots, and refreshes the saved copies of both sCars. */ void swapCarState(slotA, slotB)
u8 slotA;
u8 slotB;
{
    Car *carB;
    Car *carA;
    u16 flagsA;
    u16 flagsB;
    s32 row;
    u8 column;
    s32 i;
    s32 j;

    carB = &sCarSlots[slotB];
    carA = &sCarSlots[slotA];
    flagsA = D_80189CBC >> 8;
    if (!(flagsA & 8)) {
        row = flagsA & 0xF;
        column = D_80189CBD;
        column &= 0x1F;
        randomMasks[slotA][row] = func_8014A030(randomMasks[slotA][row], column, 0);
        randomMasks[slotB][row] = func_8014A030(randomMasks[slotB][row], column, 1);
        if (!(flagsA & 7)) {
            carB->sel[column] = carA->sel[column];
            for (i = 0; i < 9; i++) {
                carB->rows[column][i] = carA->rows[column][i];
            }
        }
    }
    flagsB = D_80189CC4 >> 8;
    if (!(flagsB & 8)) {
        row = flagsB & 0xF;
        column = D_80189CC5;
        column &= 0x1F;
        randomMasks[slotA][row] = func_8014A030(randomMasks[slotA][row], column, 1);
        randomMasks[slotB][row] = func_8014A030(randomMasks[slotB][row], column, 0);
        if (!(flagsB & 7)) {
            carA->sel[column] = carB->sel[column];
            for (i = 0; i < 8; i++) {
                carA->rows[column][i] = carB->rows[column][i];
            }
        }
    }
    D_80189C9E[slotB] = D_80189C9E[0xF];
    D_80189C9E[slotA] = D_80189C9E[0x13];
    D_80189C9E[slotB + 6] = D_80189C9E[0x13];
    D_80189C9E[slotA + 6] = D_80189C9E[0xF];
    if (func_80149778(slotB) == 1) {
        for (i = 0; i < 14; i++) {
            D_8021F048[slotB][i] = carB->sel[i];
            for (j = 0; j < 8; j++) {
                D_8021F270[slotB][i][j] = carB->rows[i][j];
            }
        }
    }
    if (func_80149778(slotA) == 1) {
        for (i = 0; i < 14; i++) {
            D_8021F048[slotA][i] = carA->sel[i];
            for (j = 0; j < 8; j++) {
                D_8021F270[slotA][i][j] = carA->rows[i][j];
            }
        }
    }
}
