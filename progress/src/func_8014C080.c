void liftCopyFlags(s32);
extern char playerSlots[];

void func_8014C080(u16 arg0)
{
    u16 v;
    s32 off;

    liftCopyFlags(arg0);
    off = arg0 * 100;
    v = *(u16 *)(playerSlots + off);
    *(u16 *)(playerSlots + off) = v + 8;
    if (*(u16 *)(playerSlots + off) >= 0x100) {
        *(u16 *)(playerSlots + off) = v - 0xF7;
    }
}
