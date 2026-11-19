s32 func_80031B94(void *arg0, s32 arg1)
{
    s32 t;

    t = *(s32 *)((s8 *)arg0 + 0x24) - arg1;
    if (t >= 0) {
        return t;
    }
    return 0x3E8;
}
