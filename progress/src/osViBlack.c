/* identical to osViBlack in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 __osDisableInt(s32 a0);
void func_8003EAE0(s32 a0);
extern u16 *D_800481F4;

/* Turns the VI blank bit (0x20 in the VI control word at D_800481F4) on when
 * active is non-zero, off otherwise. Interrupts are disabled around the update. */
void osViBlack(s32 active)
{
    s32 saved_int;
    u16 *ctrl;

    saved_int = __osDisableInt(active);
    if (active & 0xFF) {
        ctrl = D_800481F4;
        *ctrl = *ctrl | 0x20;
    } else {
        ctrl = D_800481F4;
        *ctrl = *ctrl & 0xFFDF;
    }
    func_8003EAE0(saved_int);
}
