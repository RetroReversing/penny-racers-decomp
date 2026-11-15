extern s32 D_80046DF4;
extern void *func_8003082C;
void *alHeapDBAlloc(s32, s32, s32, s32, s32);
void __n_initChanState(void *);
void alEvtqNew(void *, void *, s32);
void n_alSynAddSeqPlayer(void *);

void n_alSeqpNew(void *arg0, void *arg1) {
    s32 temp_s2;
    void *temp_v0;
    void *var_v1;
    s32 var_a0;

    temp_s2 = *(s32 *)((u8 *)arg1 + 0xC);
    *(s16 *)((u8 *)arg0 + 0x30) = 0xFF;
    *(s32 *)((u8 *)arg0 + 0x24) = 0x1E8;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s16 *)((u8 *)arg0 + 0x32) = 0x7FFF;
    *(s32 *)((u8 *)arg0 + 0x14) = D_80046DF4;
    *(s32 *)((u8 *)arg0 + 0x5C) = 0x3E80;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(u8 *)((u8 *)arg0 + 0x35) = *(u8 *)((u8 *)arg1 + 9);
    *(s32 *)((u8 *)arg0 + 0x70) = *(s32 *)((u8 *)arg1 + 0x10);
    *(s32 *)((u8 *)arg0 + 0x74) = *(s32 *)((u8 *)arg1 + 0x14);
    *(s32 *)((u8 *)arg0 + 0x7C) = 0;
    *(s32 *)((u8 *)arg0 + 0x80) = 0;
    *(s32 *)((u8 *)arg0 + 0x84) = 0;
    *(s16 *)((u8 *)arg0 + 0x38) = 9;
    *(s32 *)((u8 *)arg0 + 0x78) = *(s32 *)((u8 *)arg1 + 0x18);
    *(u8 *)((u8 *)arg0 + 0x34) = *(u8 *)((u8 *)arg1 + 8);
    *(void **)((u8 *)arg0 + 0x60) = alHeapDBAlloc(0, 0, temp_s2, *(u8 *)((u8 *)arg1 + 8), 0x10);
    __n_initChanState(arg0);
    temp_v0 = alHeapDBAlloc(0, 0, temp_s2, *(s32 *)arg1, 0x38);
    *(void **)((u8 *)arg0 + 0x6C) = NULL;
    var_a0 = 0;
    if (*(s32 *)arg1 > 0) {
        var_v1 = temp_v0;
        do {
            *(void **)var_v1 = *(void **)((u8 *)arg0 + 0x6C);
            *(void **)((u8 *)arg0 + 0x6C) = var_v1;
            var_a0 += 1;
            var_v1 = (u8 *)var_v1 + 0x38;
        } while (var_a0 < *(s32 *)arg1);
    }
    *(s32 *)((u8 *)arg0 + 0x64) = 0;
    *(s32 *)((u8 *)arg0 + 0x68) = 0;
    alEvtqNew((u8 *)arg0 + 0x48, alHeapDBAlloc(0, 0, temp_s2, *(s32 *)((u8 *)arg1 + 4), 0x1C), *(s32 *)((u8 *)arg1 + 4));
    *(s32 *)arg0 = 0;
    *(void **)((u8 *)arg0 + 8) = &func_8003082C;
    *(void **)((u8 *)arg0 + 4) = arg0;
    n_alSynAddSeqPlayer(arg0);
}
