extern char D_801D7DF0[];
extern char D_801D7DF2[];
extern char D_801D7E06[];
extern u8 D_8021F029;

void playStageSoundVol(s32 arg0, s16 arg1, s16 arg2)
{
    s32 temp_v0;

    if (D_8021F029 != 0)
    {
        temp_v0 = arg0 * 0x2C;
        *(u8 *)(D_801D7DF0 + temp_v0) = 1;
        *(u16 *)(D_801D7DF2 + temp_v0) = arg1;
        *(u16 *)(D_801D7E06 + temp_v0) = arg2;
    }
}
