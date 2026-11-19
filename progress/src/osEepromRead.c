extern void func_8003F464(void);
extern void func_8003F4D0(void);
extern void __osPackEepReadData(u8);
extern s32 __osEepStatus(s32, u16 *);
extern void func_8003F350(s32, void *);
extern s32 osRecvMesg(s32, void *, s32);
extern u8 D_80092C04;
extern u8 D_8006FF10[];

u32 osEepromRead(s32 arg0, u8 arg1, u8 *arg2) {
    u8 work[8];
    u8 buf[12];
    u16 st;
    u32 res;
    u8 *p;
    u8 *s;
    s32 i;
    func_8003F464();
    res = __osEepStatus(arg0, (u16 *)work);
    st = (*(u16 *)work & 0xC000) & 0xFFFF;
    s = D_8006FF10;
    if (res != 0) {
        func_8003F4D0();
        return 8;
    }
    if (st == 0x8000) {
        if (arg1 > 0x40) {
            func_8003F4D0();
            return -1;
        }
    } else if (st != 0xC000) {
        func_8003F4D0();
        return 8;
    }
    while (work[2] & 0x80) {
        __osEepStatus(arg0, (u16 *)work);
    }
    __osPackEepReadData(arg1);
    func_8003F350(1, D_8006FF10);
    osRecvMesg(arg0, 0, 1);
    func_8003F350(0, D_8006FF10);
    D_80092C04 = 4;
    osRecvMesg(arg0, 0, 1);
    for (i = 3; i >= 0; i--) s++;
    __builtin_memcpy(buf, s, 12);
    res = (buf[1] & 0xC0) >> 4;
    if (res == 0) {
        p = buf + 4;
        do { *arg2++ = *p++; } while ((s32)p < (s32)(buf + 12));
    }
    func_8003F4D0();
    return res;
}
