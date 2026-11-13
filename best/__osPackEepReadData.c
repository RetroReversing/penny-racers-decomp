extern u8 D_8006FF10[];
extern s32 D_8006FF4C;

typedef struct {
    u8 b[12];
} EepPack;

void __osPackEepReadData(u8 arg0) {
    EepPack buf;
    s32 i;
    s32 *w;
    u8 *p;
    u8 *base;

    base = D_8006FF10;
    w = (s32 *)(base + 0x38);
    for (i = 14; i >= 0; i--) {
        *w-- = 0xFF;
    }
    D_8006FF4C = 1;
    buf.b[0] = 2;
    buf.b[1] = 8;
    buf.b[2] = 4;
    buf.b[3] = arg0;
    for (i = 7, p = &buf.b[11]; i >= 0; i--, p--) {
        *p = 0;
    }
    for (i = 3, p = base; i >= 0; i--, p++) {
        *p = 0;
    }
    *(EepPack *)base = buf;
    base[12] = 0xFE;
}
