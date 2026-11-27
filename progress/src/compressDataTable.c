extern u8 D_801E87E0;
extern u8 D_801F18E4;
extern u8 D_801F18E5;
extern u8 D_801F18E6;
extern u8 D_801F18E7;
extern u8 D_801F18E8;
extern u8 D_801F18E9;
extern u8 D_801F18EA;
extern u8 D_801F18EB;
extern u8 D_801F18EC;
extern u8 D_801F18ED;

extern u8 D_801E87E5;
extern u8 sCarSlots[];
extern u8 D_800DA26A[];
extern u8 D_801E9D80[];
extern u8 D_801E9D81[];
extern u8 D_801F18E0[];
extern u8 D_801F18E1[];
extern u8 D_801E94AC[];
extern u8 D_801E94CC[];
extern u8 D_801E94EC[];
extern u32 D_801E973C;
void debugPrintf();

/* Run-length packs the data table from two byte planes, zero-fills the rest of the buffer and stores a checksum header. */ u16 compressDataTable(void) {
    u16 srcPos;
    u16 dstPos;
    u16 runLen;
    u16 lookPos;
    u8 firstByte;
    u8 secondByte;
    u32 i;

    srcPos = 0;
    D_801F18E4 = D_801E87E0;
    D_801F18E5 = ((u16 *) (D_800DA26A + 0xA3E))[0];
    D_801F18E6 = ((u16 *) (D_800DA26A + 0xA3E))[1];
    D_801F18E7 = ((u16 *) (D_800DA26A + 0xA3E))[2];
    D_801F18E8 = ((u16 *) (D_800DA26A + 0xA3E))[3];
    D_801F18E9 = ((u16 *) (D_800DA26A + 0xA3E))[4];
    D_801F18EA = ((u16 *) (D_800DA26A + 0xA3E))[5];
    D_801F18EB = ((u16 *) (D_800DA26A + 0xA3E))[6];
    D_801F18EC = ((u16 *) (D_800DA26A + 0xA3E))[7];
    D_801F18ED = D_800DA26A[0xBA8 + *(u16 *) &sCarSlots[D_801E87E5 * 0x178]];
    firstByte = D_801E9D80[srcPos];
    secondByte = D_801E9D81[srcPos];
    dstPos = 0xE;
    while (firstByte != 0xFF || secondByte != 0xFF) {
        lookPos = srcPos + 2;
        runLen = 1;
        while ((firstByte == D_801E9D80[lookPos]) & (secondByte == D_801E9D81[lookPos])) {
            lookPos += 2;
            runLen++;
        }
        if (runLen >= 4) {
            D_801F18E0[dstPos] = 0xEE;
            D_801F18E1[dstPos] = 0xEE;
            dstPos += 2;
            D_801F18E0[dstPos] = firstByte;
            D_801F18E1[dstPos] = secondByte;
            dstPos += 2;
            *(u16 *) &D_801F18E0[dstPos] = runLen;
            dstPos += 2;
            srcPos += runLen * 2;
        } else {
            for (i = 0; i < runLen; i++) {
                D_801F18E0[i * 2 + dstPos] = D_801E9D80[i * 2 + srcPos];
                D_801F18E1[i * 2 + dstPos] = D_801E9D81[i * 2 + srcPos];
            }
            dstPos += runLen * 2;
            srcPos += runLen * 2;
        }
        firstByte = D_801E9D80[srcPos];
        secondByte = D_801E9D81[srcPos];
    }
    D_801F18E0[dstPos] = firstByte;
    D_801F18E1[dstPos] = secondByte;
    dstPos += 2;
    srcPos += 2;
    i = dstPos;
    debugPrintf(D_801E94AC, srcPos, i);
    for (; i < 0x3200; i++) {
        D_801F18E0[i] = 0;
    }
    D_801E973C = 0;
    for (i = 4; i < 0x3200; i++) {
        D_801E973C += D_801F18E0[i];
    }
    debugPrintf(D_801E94CC, i);
    *(u32 *) D_801F18E0 = D_801E973C;
    debugPrintf(D_801E94EC, D_801E973C);
    return dstPos;
}
