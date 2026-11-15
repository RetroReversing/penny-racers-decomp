extern void nuScAddClient(void *, void *, int);
extern void osCreateMesgQueue(void *, void *, int);
extern int osRecvMesg(void *, void *, int);
extern void *D_80092BE0;
extern void *D_80092BF8;

void nuSiMgrThread(void) {
    char sp10[8];
    char sp20[8];
    s32 sp40;
    void *var_s0;
    s32 (*temp_v0)(s32);

    osCreateMesgQueue(&D_80092BE0, sp20, 8);
    nuScAddClient(sp10, &D_80092BE0, 3);
    for (;;) {
        osRecvMesg(&D_80092BE0, &sp40, 1);
        var_s0 = D_80092BF8;
        while (var_s0 != NULL) {
            temp_v0 = *(s32 (**)(s32))((s8 *)var_s0 + 4);
            if (temp_v0 != NULL && temp_v0(sp40) != 0) {
                break;
            }
            var_s0 = *(void **)var_s0;
        }
    }
}
