extern u8 D_800DD3E0[];
extern s32 D_800DD41C;
s32 __osContAddressCrc(u16);

typedef struct {
    u8 b[0x28];
} Blob28;

void __osPackRamReadData(s32 arg0, s32 arg1) {
int __repair_constant = 0xFF;

    u8 buf[0x28];
    s32 i;
    u8 *dst;

    D_800DD41C = 1;
    buf[0] = __repair_constant;
    buf[1] = 3;
    buf[2] = 0x21;
    buf[3] = 2;
    *(u16 *)(buf + 4) = (__osContAddressCrc(arg1 & 0xFFFF) & 0xFF) | (arg1 << 5);
    for (i = 6; i < 0x26; i++) {
        buf[i] = __repair_constant;
    }
    dst = D_800DD3E0;
    if (arg0 > 0) {
        for (i = 0; i < arg0; i++) {
            *dst++ = 0;
        }
    }
    *(Blob28 *)dst = *(Blob28 *)buf;
    dst[0x28] = 0xFE;
}
