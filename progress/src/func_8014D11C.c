extern u8 playerSlots[];

void func_8014D11C(s32 arg0) {
    s32 off;

    off = ((u16)arg0) * 0x64;
    *(u16 *)(playerSlots + off) = *(u16 *)(playerSlots + off) + 1;
    if (*(u16 *)(playerSlots + off) >= 0x80) {
        *(u16 *)(playerSlots + off) = *(vu16 *)(playerSlots + off) - 0x7F;
    }
}
