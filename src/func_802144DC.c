extern unsigned char D_8021E19E;

void func_802144DC(void)
{
    unsigned char *p;
    unsigned char v;

    p = &D_8021E19E;
    if (*p >= 0xFF) {
        v = 0xFF;
    } else {
        v = *p + 5;
    }
    *p = v;
}
