typedef struct {
    u16 type;
    u8 pad[2];
    union {
        s32 w[3];
        u8 b[12];
    } u;
} ALSeqEvt;

s32 alEvtqPostEvent(void *, ALSeqEvt *, s32);

void alSeqpSetSeq(s32 arg0, s32 arg1) {
    ALSeqEvt evt;

    evt.u.w[0] = arg1;
    evt.type = 0xD;
    alEvtqPostEvent((void *)(arg0 + 0x48), &evt, 0);
}
