typedef struct {
    u8 pad00[5];
    u8 latency;
    u8 pulseWidth;
    u8 pageSize;
    u8 release;
    u8 domain;
    u8 pad0a[2];
    s32 addr;
} PiDev;

extern PiDev *piCurrentDevs[];
extern u8 D_8004AA80;
extern u8 D_8004AA84;
void func_800346B0(void *, void *, s32);

/* Reads one word from a cartridge device through the PI bus, reprogramming the domain timing registers first if they belong to a different device. The value is stored in *value. */
s32 osEpiRawReadWord(PiDev *dev, s32 offset, s32 *value) {
    PiDev *prevDev;
    s32 domain;

    if (value == NULL) {
        func_800346B0(&D_8004AA80, &D_8004AA84, 0x2B);
    }
    if (*(volatile u32 *)0xA4600010 & 3) {
        do {
        } while (*(volatile u32 *)0xA4600010 & 3);
    }
    domain = dev->domain;
    prevDev = piCurrentDevs[domain];
    if (prevDev != dev) {
        if (domain == 0) {
            if (prevDev->latency != dev->latency) {
                *(volatile u32 *)0xA4600014 = dev->latency;
            }
            if (prevDev->pulseWidth != dev->pulseWidth) {
                *(volatile u32 *)0xA460001C = dev->pulseWidth;
            }
            if (prevDev->pageSize != dev->pageSize) {
                *(volatile u32 *)0xA4600020 = dev->pageSize;
            }
            if (prevDev->release != dev->release) {
                *(volatile u32 *)0xA4600018 = dev->release;
            }
        } else {
            if (prevDev->latency != dev->latency) {
                *(volatile u32 *)0xA4600024 = dev->latency;
            }
            if (prevDev->pulseWidth != dev->pulseWidth) {
                *(volatile u32 *)0xA460002C = dev->pulseWidth;
            }
            if (prevDev->pageSize != dev->pageSize) {
                *(volatile u32 *)0xA4600030 = dev->pageSize;
            }
            if (prevDev->release != dev->release) {
                *(volatile u32 *)0xA4600028 = dev->release;
            }
        }
        piCurrentDevs[domain] = dev;
    }
    *value = *(volatile s32 *)((dev->addr | offset) | 0xA0000000);
    return 0;
}
