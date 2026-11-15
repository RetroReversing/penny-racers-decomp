s32 alEvtqPostEvent(s32, void *, s32);

void alSeqpStop(s32 arg0) {
    struct {
        s16 type;
        u8 pad[14];
    } ev;

    ev.type = 0x11;
    alEvtqPostEvent(arg0 + 0x48, &ev, 0);
}
