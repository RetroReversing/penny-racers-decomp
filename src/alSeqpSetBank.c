s32 alEvtqPostEvent(void *arg0, void *arg1, s32 arg2);

typedef union {
    s16 vol;
    s32 seq;
    void *bank;
    s32 pad[3];
} ALEventMsg;

typedef struct {
    u16 type;
    ALEventMsg msg;
} ALEvent;

void alSeqpSetBank(s32 arg0, s32 arg1) {
    ALEvent evt;

    evt.type = 0xE;
    evt.msg.bank = (void *)arg1;
    alEvtqPostEvent((void *)(arg0 + 0x48), &evt, 0);
}

void alSeqpSetSeq(s32 arg0, s32 arg1) {
    ALEvent evt;

    evt.type = 0xD;
    evt.msg.seq = arg1;
    alEvtqPostEvent((void *)(arg0 + 0x48), &evt, 0);
}

void alSeqpSetVol(s32 arg0, s16 arg1) {
    ALEvent evt;

    evt.type = 0xA;
    evt.msg.vol = arg1;
    alEvtqPostEvent((void *)(arg0 + 0x48), &evt, 0);
}
