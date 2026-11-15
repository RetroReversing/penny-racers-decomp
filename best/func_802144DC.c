extern unsigned char D_8021E19E;

void func_802144DC(void)
{
    unsigned char *p = &D_8021E19E;
    unsigned char v;

    v = 0xFF;
    if (*p < 0xFF) {
        v = *p + 5;
    }
    *p = v;
}
