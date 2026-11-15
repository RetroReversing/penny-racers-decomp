extern u8 D_80189B34;
extern u8 D_80189CB6;
extern u8 D_8018A276[];

static inline s32 is_zero(s32 x) { return x == 0; }

s32 func_801485C8(void)
{
    s32 i;
    s32 n;
    u8 v;
    u8 *p;

    if (D_80189B34 == 1) {
        i = 1;
        D_8018A276[1] |= 0x10;
        D_8018A276[2] |= 0x10;
        D_8018A276[3] |= 0x10;
    } else {
        i = 1;
        p = &D_80189CB6;
        do {
            v = D_8018A276[i];
            if ((v & 0xF) == *p) {
                D_8018A276[i] = v | 0x10;
            }
            i++;
        } while (i < 4);
        i = 1;
    }
    n = 0;
    do {
        n += is_zero(D_8018A276[i] & 0x10);
        i++;
    } while (i < 4);
    return n;
}
