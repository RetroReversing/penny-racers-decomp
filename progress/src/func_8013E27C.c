extern u16 D_80187BE0;
extern u16 D_80189DC2;
extern u16 D_8018F5C2;
extern char D_8018D738[];
extern char D_8018D73A[];

s32 func_8013E27C(s32 arg0)
{
    u32 m;
    u16 saved;
    u16 i;
    u16 a1;
    u16 slot;
    u32 idx;
    u32 off;

    m = arg0 & 0xFFFF;
    if ((u32) D_80187BE0 < m)
    {
        return 0xFFFF;
    }
    saved = a1 = D_8018F5C2;
    for (i = 0; i < ((u16)arg0); i++) { off = (a1 & 0xFFFF) * 124;
            a1 = *((u16 *) (D_8018D73A + off)); }
    idx = (a1 & 0xFFFF) * 124;
    slot = *((u16 *) (D_8018D738 + idx));
    *((u16 *) (D_8018D73A + slot * 124)) = 0xFFFF;
    *((u16 *) (D_8018D738 + idx)) = 0xFFFF;
    D_8018F5C2 = a1;
    D_80187BE0 -= arg0;
    if (D_80187BE0 == 0)
    {
        D_80189DC2 = 0xFFFF;
    }
    return saved & 0xFFFF;
}
