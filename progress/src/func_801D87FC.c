typedef struct {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ u8 unk2;
    /* 0x03 */ u8 unk3;
    /* 0x04 */ u16 unk4;
    /* 0x06 */ u16 unk6[16];
    /* 0x26 */ u16 unk26;
    /* 0x28 */ s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s32 unk68;
    s32 unk6C;
} Rec801E9958;
extern Rec801E9958 D_801E9958[];
extern u16 D_801E4400[];

void func_801D87FC(void) {
    s32 i;
    s32 j;

    for (i = 0; i < 4; i++) {
        D_801E9958[i].unk0 = 0;
        D_801E9958[i].unk2 = 0;
        D_801E9958[i].unk3 = 0;
        D_801E9958[i].unk4 = 0;
        for (j = 0; j < 16; j++) {
            D_801E9958[i].unk6[j] = D_801E4400[j];
        }
        D_801E9958[i].unk28 = 0;
        D_801E9958[i].unk2C = 0;
        D_801E9958[i].unk30 = 0;
        D_801E9958[i].unk34 = 0;
        D_801E9958[i].unk68 = 0;
        D_801E9958[i].unk6C = 0;
        D_801E9958[i].unk38 = 0;
        D_801E9958[i].unk3C = 0;
        D_801E9958[i].unk40 = 0;
        D_801E9958[i].unk44 = 0;
        D_801E9958[i].unk48 = 0;
        D_801E9958[i].unk4C = 0;
        D_801E9958[i].unk50 = 0;
        D_801E9958[i].unk54 = 0;
        D_801E9958[i].unk58 = 0;
        D_801E9958[i].unk5C = 0;
        D_801E9958[i].unk60 = 0;
        D_801E9958[i].unk64 = 0;
    }
}
