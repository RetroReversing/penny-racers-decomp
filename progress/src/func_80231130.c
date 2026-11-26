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
extern Rec31130 D_800DA260[];
void func_80025DBC(void *);
void func_80231130(void)
{
    u16 i;
    u16 j;

    for (i = 0; i < 7; i++) {
        func_80025DBC(&D_800DA260[i]);
        D_800DA260[i].unk0 = i;
        D_800DA260[i].unk2 = 0;
        D_800DA260[i].unk4 = 0;
        D_800DA260[i].unk6 = 0;
        D_800DA260[i].unk8 = 0;
        D_800DA260[i].unkA = 0;
        D_800DA260[i].unkC = 0;
        D_800DA260[i].unkE = 0;
        D_800DA260[i].unk10 = 0;
        D_800DA260[i].unk14 = 0;
        D_800DA260[i].unk18 = 0;
        D_800DA260[i].unk1C = 0;
        D_800DA260[i].unk20 = 0;
        D_800DA260[i].unk24 = 0;
        D_800DA260[i].unk25 = 0;
        for (j = 0; j < 7; j++) {
            D_800DA260[i].unk28[j][0] = 0;
            D_800DA260[i].unk28[j][1] = 0;
        }
        D_800DA260[i].unk64 = 0;
        D_800DA260[i].unk66 = 0;
        D_800DA260[i].unk68 = 0;
        D_800DA260[i].unk6A = 0;
        D_800DA260[i].unk6C = 0;
    }
}
