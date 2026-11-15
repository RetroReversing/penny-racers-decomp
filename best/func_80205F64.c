extern u8 D_8021F048[];

void func_80205F64(s32 arg0)
{
    s32 i;
    u8 *base;

    i = 0;
    arg0 &= 0xFF;
    base = D_8021F048;
    base += arg0 * 14;
    do {
        base[i & 0xFF] = 0;
        i++;
    } while ((u32)(i & 0xFF) < 14U);
}
