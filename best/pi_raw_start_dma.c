s32 osVirtualToPhysical(s32 arg0);
extern s32 D_80000308;
extern s32 D_A4600000;

s32 pi_raw_start_dma(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    volatile s32 *reg;

    if (*(volatile s32 *)0xA4600010 & 3) {
        do {
        } while (*(volatile s32 *)0xA4600010 & 3);
    }
    D_A4600000 = osVirtualToPhysical(arg2);
    reg = (volatile s32 *)0xA4600004;
    *reg = (D_80000308 | arg1) & 0x1FFFFFFF;
    switch (arg0) {
    case 0:
        *(volatile s32 *)0xA460000C = arg3 - 1;
        return 0;
    case 1:
        *(volatile s32 *)0xA4600008 = arg3 - 1;
        return 0;
    default:
        return -1;
    }
}
