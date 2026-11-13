s32 __alCSeqNextDelta(s32, s32 *);
s32 func_8002D164(void *, s16 *, s32);

void func_8002C010(void *arg0) {
    s16 sp10;
    s32 pad[3];
    s32 sp20;
    s32 temp_a0;

    if (*(s32 *)((char *)arg0 + 0x2C) == 1) {
        temp_a0 = *(s32 *)((char *)arg0 + 0x18);
        if ((temp_a0 != 0) && ((__alCSeqNextDelta(temp_a0, &sp20) << 0x18) != 0)) {
            sp10 = 0;
            func_8002D164((char *)arg0 + 0x48, &sp10, sp20 * *(s32 *)((char *)arg0 + 0x24));
        }
    }
}
