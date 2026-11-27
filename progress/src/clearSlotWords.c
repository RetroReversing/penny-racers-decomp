extern u8 D_8021E670[];

void clearSlotWords(void)
{
    s32 i;
    u8 *p;

    i = 0;
    p = D_8021E670;
loop:
    *(u16 *)(p + i * 2) = 0;
    i++;
    if (i < 4) {
        goto loop;
    }
}
