typedef struct {
    u16 type;
    u8 pad[2];
    union {
        s16 h[6];
        s32 w[3];
        u8 b[12];
    } u;
} ALSeqEvt;

s32 alEvtqPostEvent(void *, ALSeqEvt *, s32);

void alSeqpSetVol(s32 arg0, s16 arg1) {
    ALSeqEvt evt;

    evt.u.h[0] = arg1;
    evt.type = 0xA;
    alEvtqPostEvent((void *)(arg0 + 0x48), &evt, 0);
}
