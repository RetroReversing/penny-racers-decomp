typedef struct {
    u8 pad0[0xA3E];
    u16 unkA3E[8];
    u8 padA4E[0xBA8 - 0xA4E];
    u8 unkBA8[1];
} S800DA26A;
extern S800DA26A D_800DA26A;
extern u8 D_801E87E0;
extern u8 D_801E87E1;
extern s8 D_801E87E3;
extern u8 D_801E94EC[];
extern u8 D_801E9500[];
extern s32 D_801E973C;
extern u8 D_801E9D80[];
extern u8 D_801E9D81[];
extern u8 D_801F18E0[];
extern u8 D_801F18E1[];
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
extern u8 D_801F18EE;
extern u8 D_801F18EF;
void debugPrintf();

/* Unpacks the run-length coded (a, b) pair table at D_801F18E0 into a scratch buffer, expanding 0xEE 0xEE runs, then copies it back over the source table. */
void unpressPairTable(void)
{
    u16 outOff = 0;
    u16 srcOff;
    u16 runLen;
    u8 pairA;
    u8 pairB;
    u32 i;

    debugPrintf(D_801E94EC, D_801E973C);
    D_801E87E3 = 1;
    D_801E87E1 = D_801F18E4;
    D_801E87E0 = D_801F18E4;
    D_800DA26A.unkA3E[0] = D_801F18E5;
    D_800DA26A.unkA3E[1] = D_801F18E6;
    D_800DA26A.unkA3E[2] = D_801F18E7;
    D_800DA26A.unkA3E[3] = D_801F18E8;
    D_800DA26A.unkA3E[4] = D_801F18E9;
    D_800DA26A.unkA3E[5] = D_801F18EA;
    D_800DA26A.unkA3E[6] = D_801F18EB;
    D_800DA26A.unkA3E[7] = D_801F18EC;
    D_800DA26A.unkBA8[D_800DA26A.unkA3E[0]] = D_801F18ED;
    pairA = D_801F18EE;
    pairB = D_801F18EF;
    srcOff = 0xE;
    while (pairA != 0xFF || pairB != 0xFF) {
        if (pairA == 0xEE && pairB == 0xEE) {
            srcOff += 2;
            pairA = D_801F18E0[srcOff];
            pairB = D_801F18E1[srcOff];
            srcOff += 2;
            runLen = *(u16 *)&D_801F18E0[srcOff];
            for (i = 0; i < runLen; i++) {
                D_801E9D80[outOff + i * 2] = pairA;
                D_801E9D81[outOff + i * 2] = pairB;
            }
            outOff += runLen * 2;
        } else {
            D_801E9D80[outOff] = pairA;
            D_801E9D81[outOff] = pairB;
            outOff += 2;
        }
        srcOff += 2;
        pairA = D_801F18E0[srcOff];
        pairB = D_801F18E1[srcOff];
    }
    D_801E9D80[outOff] = pairA;
    D_801E9D81[outOff] = pairB;
    outOff += 2;
    srcOff += 2;
    debugPrintf(D_801E9500, srcOff, outOff);
    i = 0;
    while (1) {
        D_801F18E0[i] = D_801E9D80[i];
        D_801F18E1[i] = D_801E9D81[i];
        if (D_801E9D80[i] == 0xFF && D_801E9D81[i] == 0xFF) {
            break;
        }
        i += 2;
    }
}
