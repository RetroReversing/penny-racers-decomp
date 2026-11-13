typedef struct {
    u8 b[12];
} PackBuf;

extern s32 D_8006FF10[];
extern s32 D_8006FF4C;

void __osPackEepWriteData(u8 arg0, u8 *arg1) {
    PackBuf buf;
    s32 i;
    s32 *p;
    u8 *dst;

    p = D_8006FF10 + 0xE;
    for (i = 0xE; i >= 0; i--) {
        *p-- = 0xFF;
    }
    D_8006FF4C = 1;
    buf.b[0] = 0xA;
    buf.b[1] = 1;
    buf.b[2] = 5;
    buf.b[3] = arg0;
    for (i = 0; i < 8; i++) {
        buf.b[4 + i] = arg1[i];
    }
    dst = (u8 *)D_8006FF10 + 4;
    for (i = 3; i >= 0; i--) {
        dst[0] = 0;
        dst++;
    }
    *(PackBuf *)dst = buf;
    dst[0xC] = 0xFE;
}
