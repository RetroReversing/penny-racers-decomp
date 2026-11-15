extern u8 D_80190CAC;
extern u8 D_8021F080;

void func_80217600(void)
{
    s32 i;
    u8 *n;

    i = 0;
    n = &D_80190CAC;
    do {
        if (i < (s32) *n) {
            *(&D_8021F080 + i) = i;
            i += 1;
        } else {
            *(&D_8021F080 + i) = 0xFF;
            i += 1;
        }
    } while (i < 0x10);
}
