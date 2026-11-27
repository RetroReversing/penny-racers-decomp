extern u8 D_801C6AE8[];
extern u8 *trackInfo;

typedef struct {
    u8 b[0x2A];
} Blob;

u8 func_801C1CA4(s8 arg0) {
    u8 buf[0x30];

    *(Blob *)buf = *(Blob *)D_801C6AE8;
    if (*trackInfo == 3) {
        return buf[arg0];
    }
    return buf[arg0 - 0x2E];
}
