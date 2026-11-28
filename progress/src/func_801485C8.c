extern u8 D_80189B34;
extern u8 D_80189CB6;
extern u8 menuRowList[];

static inline s32 is_zero(s32 x) { return x == 0; }

s32 func_801485C8(void)
{
    s32 i;
    s32 n;
    u8 v;
    u8 *p;

    if (D_80189B34 == 1) {
        i = 1;
        menuRowList[1] |= 0x10;
        menuRowList[2] |= 0x10;
        menuRowList[3] |= 0x10;
    } else {
        i = 1;
        p = &D_80189CB6;
        do {
            v = menuRowList[i];
            if ((v & 0xF) == *p) {
                menuRowList[i] = v | 0x10;
            }
            i++;
        } while (i < 4);
        i = 1;
    }
    n = 0;
    do {
        n += is_zero(menuRowList[i] & 0x10);
        i++;
    } while (i < 4);
    return n;
}
