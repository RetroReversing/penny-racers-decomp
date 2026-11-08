/* Partial candidate from function #295635 in project #76; rechecked locally. */
extern s32 D_8004DCF8[];
extern s8 D_8005C460;
extern u8 D_8005C588[];
extern u8 D_8005C688[];
extern u8 D_8005C6A8[];
void osRecvMesg(s32, s32, s32);
s32 __osContDataCrc(void *, s32, void *, void *);
void func_8003F464(void);
void func_8003F4D0(void);
void func_8003F350(s32, void *);

u32 func_8003C8E0(void *arg0) {
    s32 *a = (s32 *)arg0;
    u8 sp10[16];
    u8 *src;
    u8 *dst;
    s32 i;
    u32 ret = 5;
    u32 r;
    if (D_8004DCF8[a[2]] != 0) {
        func_8003F464();
        D_8005C460 = 3;
        func_8003F350(1, D_8005C588 + (a[2] << 6));
        osRecvMesg(a[1], 0, 1);
        func_8003F350(0, D_8005C6A8);
        osRecvMesg(a[1], 0, 1);
        src = D_8005C6A8;
        dst = sp10;
        for (i = 0; i < a[2]; i++) {
            src += 0x10;
        }
        src = D_8005C6A8 + a[2] * 0x10;
        dst = sp10;
        for (i = 0; i < 0x20; i++) {
            *dst++ = *src++;
        }
        r = (sp10[0x12] & 0xC0) >> 4;
        ret = r;
        if (r == 0) {
            if (__osContDataCrc(D_8005C688, 0, src, dst) != 0) {
                ret = 4;
            }
        }
        func_8003F4D0();
    }
    return ret;
}
