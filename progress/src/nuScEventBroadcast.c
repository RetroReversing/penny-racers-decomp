typedef struct NuScClient {
    struct NuScClient *next;
    void *msgQ;
    u16 eventMask;
} NuScClient;

extern NuScClient *D_800DDE88;
s32 osSendMesg(void *mq, void *msg, s32 flags);

void nuScEventBroadcast(u16 *arg0) {
    NuScClient *s0;

    s0 = D_800DDE88;
    if (s0 != NULL) {
        do {
            if (s0->eventMask & *arg0) {
                osSendMesg(s0->msgQ, arg0, 0);
            }
            s0 = s0->next;
        } while (s0 != NULL);
    }
}
