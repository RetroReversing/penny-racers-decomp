/* identical to func_80009C30 in Resident Evil II (local match library) (matched), with its names changed by decompdecomp */
u16 __osSumcalc(u8 *arg0, s32 arg1) {
    s32 sum = 0;
    s32 i;
    for (i = 0; i < arg1; i++) {
        sum += *arg0++;
        sum &= 0xFFFF;
    }
    return sum;
}
