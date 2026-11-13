typedef s32 M2C_UNK;

M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK);
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK osSendMesg(M2C_UNK *, s16 *, M2C_UNK);
extern s32 D_80046D74;
extern M2C_UNK D_80092BE0;

s32 func_80029890(s8 arg0, s32 arg1, s16 arg2) {
    s16 sp10;
    M2C_UNK *sp14;
    s32 sp18;
    s32 sp1C;
    s8 sp20;
    s16 sp22;
    M2C_UNK sp28;
    M2C_UNK sp40;

    if (D_80046D74 == 0) {
        return -1;
    }
    osCreateMesgQueue(&sp28, &sp40, 1);
    sp20 = arg0;
    sp10 = 0x4002;
    sp18 = arg1;
    sp22 = arg2;
    sp14 = &sp28;
    osSendMesg(&D_80092BE0, &sp10, 1);
    osRecvMesg(&sp28, 0, 1);
    return sp1C;
}
