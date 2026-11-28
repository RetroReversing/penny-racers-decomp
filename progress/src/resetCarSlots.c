typedef struct {
    s16 unk0, unk2, unk4, unk6, unk8, unkA, unkC, unkE, unk10;
    s16 pad12;
    s32 unk14, unk18, unk1C, unk20;
    u8 unk24, unk25;
    s16 pad26;
    s32 unk28[7][2];
    s16 pad60, pad62;
    s16 unk64, unk66, unk68, unk6A, unk6C;
    char pad6E[0x178 - 0x6E];
} Rec31130;
extern Rec31130 sCarSlots[];
void func_80025DBC(void *);
/* Clears every entry in the car slot table, keeping each slot's index in unk0. */ void resetCarSlots(void)
{
    u16 slot;
    u16 row;

    for (slot = 0; slot < 7; slot++) {
        func_80025DBC(&sCarSlots[slot]);
        sCarSlots[slot].unk0 = slot;
        sCarSlots[slot].unk2 = 0;
        sCarSlots[slot].unk4 = 0;
        sCarSlots[slot].unk6 = 0;
        sCarSlots[slot].unk8 = 0;
        sCarSlots[slot].unkA = 0;
        sCarSlots[slot].unkC = 0;
        sCarSlots[slot].unkE = 0;
        sCarSlots[slot].unk10 = 0;
        sCarSlots[slot].unk14 = 0;
        sCarSlots[slot].unk18 = 0;
        sCarSlots[slot].unk1C = 0;
        sCarSlots[slot].unk20 = 0;
        sCarSlots[slot].unk24 = 0;
        sCarSlots[slot].unk25 = 0;
        for (row = 0; row < 7; row++) {
            sCarSlots[slot].unk28[row][0] = 0;
            sCarSlots[slot].unk28[row][1] = 0;
        }
        sCarSlots[slot].unk64 = 0;
        sCarSlots[slot].unk66 = 0;
        sCarSlots[slot].unk68 = 0;
        sCarSlots[slot].unk6A = 0;
        sCarSlots[slot].unk6C = 0;
    }
}
