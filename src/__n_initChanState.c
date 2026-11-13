void func_80031D04(void *, s32);

void __n_initChanState(void *arg0)
{
    s32 i;

    for (i = 0; i < *(u8 *)((u8 *)arg0 + 0x34); i++) {
        *(s32 *)(*(u8 **)((u8 *)arg0 + 0x60) + i * 0x10) = 0;
        func_80031D04(arg0, i);
    }
}
