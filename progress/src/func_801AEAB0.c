u16 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 dmaRomToRam(void *, void *, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
extern u8 D_1B0E50[];
extern u8 D_1F9030[];
extern u8 D_8006FAF0[];
extern u8 D_8011F2F4[];
extern u8 playerSlots[];
extern u8 D_80196448[];
extern u8 D_801B63E4[];
extern u8 D_801B7204[];
extern u16 hudSlotIndex;
extern u8 D_801C7ABD;
extern u8 D_801C7AD0;
extern u8 D_801D5A90[];
extern u8 D_802D6890[];

void func_801AEAB0(void) {
    s32 temp_v1;

    *(u16 *)(D_8006FAF0 + 0x20) = 0;
    temp_v1 = (objCreate(0, 0, 3, 0, 0x40, 0xFF, 0, NULL, D_801B7204, 0, 0, 0, 0, 0, 0, 0, 0, 0) & 0xFFFF) * 0x64;
    *(u16 *)(D_8011F2F4 + temp_v1) = *(u16 *)(D_8011F2F4 + temp_v1) | 0x20;
    hudSlotIndex = objCreate(0, 0, 3, 0, 0x7C, 0, 0, D_80196448, D_801B63E4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    *(u16 *)(playerSlots + (hudSlotIndex * 0x64)) = 0;
    D_801C7ABD = 0xF0;
    D_801C7AD0 = 0;
    objCreate(0, 0, 3, 0, 0x7F, 0, 0, D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    dmaRomToRam(D_1B0E50, D_802D6890, D_1F9030 - D_1B0E50);
    func_80203DF8(1, 0x1E, 0, 0, 0);
}
