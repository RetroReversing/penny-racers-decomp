extern s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8021A994(void);
extern void func_8021AC64(s32, s32, s32, s32, s32);
extern void func_80203DF8(s8, s16, s8, s8, u8);
extern void func_8013DD2C(void);
extern void func_80219488(void);
extern void func_801D5A90(void);
extern s8 D_80046832;
extern s8 D_80190CAA;
extern s8 D_8021EEB2;
extern u16 D_8018D140[];
extern u32 D_8018D3A0[];
extern u8 D_8021CA28[];

void func_80218FBC(void)
{
    s32 k;
    s32 i;
    s32 j;
    u32 bits;
    s32 idx;

    for (k = 0; k < 0x96; k++)
    {
        D_8018D140[k] = 0;
    }

    idx = 0;
    for (i = 0; i < 8; i++)
    {
        bits = D_8018D3A0[i];
        for (j = 0; j < D_8021CA28[i]; j++)
        {
            if (bits & 1)
            {
                D_8018D140[idx] = 1;
            }
            bits >>= 1;
            idx++;
        }
        if (i == 0)
        {
            idx += 2;
        }
    }

    D_80190CAA = 0;
    D_8021EEB2 = 1;
    D_80046832 = 0;
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, func_801D5A90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8021A994();
    func_8021AC64(0x87, 0x52, 0, 0x80, 0x83);
    func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x7A, 0, 0, func_80219488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80203DF8(1, 0x3C, 0, 0, 0);
}
