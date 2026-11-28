extern u16 nodeListCount;
extern u16 nodeListTail;
extern u16 nodeListHead;
extern char nodePool[];
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
    if ((u32) nodeListCount < m)
    {
        return 0xFFFF;
    }
    saved = a1 = nodeListHead;
    for (i = 0; i < ((u16)arg0); i++) { off = (a1 & 0xFFFF) * 124;
            a1 = *((u16 *) (D_8018D73A + off)); }
    idx = (a1 & 0xFFFF) * 124;
    slot = *((u16 *) (nodePool + idx));
    *((u16 *) (D_8018D73A + slot * 124)) = 0xFFFF;
    *((u16 *) (nodePool + idx)) = 0xFFFF;
    nodeListHead = a1;
    nodeListCount -= arg0;
    if (nodeListCount == 0)
    {
        nodeListTail = 0xFFFF;
    }
    return saved & 0xFFFF;
}
