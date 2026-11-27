extern unsigned char menuArrowAlpha;

void func_802144DC(void)
{
    unsigned char *p;
    unsigned char v;

    p = &menuArrowAlpha;
    if (*p >= 0xFF) {
        v = 0xFF;
    } else {
        v = *p + 5;
    }
    *p = v;
}
