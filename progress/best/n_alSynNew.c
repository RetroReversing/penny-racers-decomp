extern void *alHeapDBAlloc(s32, s32, s32 *, s32, s32);
extern void alLink(void *, void *);
extern void alN_PVoiceNew(void *, s32, s32 *);
extern s32 n_alSynAllocFX(s32, void *, s32 *);
extern s32 n_alAuxBusPull;
extern s32 n_alFxPull;
extern u8 *D_80046DF4;

void n_alSynNew(u8 *arg0) {
    s32 *heap;
    union { s32 * pointer; s32 value; } __repair_phase_storage;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 *s1;
    s32 *v1;
    
    s32 j;
s32 __repair_phase_j;
    s32 *a0;

    heap = *(s32 **)(arg0 + 0x14);
    *(s32 *)(D_80046DF4 + 0x0) = 0;
    *(s32 *)(D_80046DF4 + 0x4) = 0;
    *(s32 *)(D_80046DF4 + 0x8) = 0;
    *(s32 *)(D_80046DF4 + 0xC) = 0;
    *(s32 *)(D_80046DF4 + 0x2C) = 0;
    *(s32 *)(D_80046DF4 + 0x28) = 0;
    *(s32 *)(D_80046DF4 + 0x44) = *(s32 *)(arg0 + 4);
    *(s32 *)(D_80046DF4 + 0x50) = 0xB8;
    *(s32 *)(D_80046DF4 + 0x4C) = *(s32 *)(arg0 + 0x18);
    *(s32 *)(D_80046DF4 + 0x58) = 1;
    *(s32 *)(D_80046DF4 + 0x30) = *(s32 *)(arg0 + 0x10);
    *(s32 *)(D_80046DF4 + 0x54) = 0;
    __repair_phase_storage.pointer = alHeapDBAlloc(0, 0, heap, 1, 0x44);
    *(void **)(D_80046DF4 + 0x40) = __repair_phase_storage.pointer;
    __repair_phase_storage.pointer[5] = 0;
    __repair_phase_storage.pointer[6] = *(s32 *)(arg0 + 4);
    __repair_phase_storage.pointer = alHeapDBAlloc(0, 0, heap, *(s32 *)(arg0 + 4), 4);
    ((s32 *)*(void **)(D_80046DF4 + 0x40))[7] = (s32)__repair_phase_storage.pointer;
    temp_v0_2 = alHeapDBAlloc(0, 0, heap, 1, 0x14);
    *(s32 **)(D_80046DF4 + 0x3C) = temp_v0_2;
    if (arg0[0x1C] != 0) {
        ((s32 *)*(void **)(D_80046DF4 + 0x40))[8] = n_alSynAllocFX(0, arg0, heap);
        temp_v0_2[1] = (s32)&n_alFxPull;
    } else {
        temp_v0_2[1] = (s32)&n_alAuxBusPull;
    }
    *(s32 *)(D_80046DF4 + 0x10) = 0;
    *(s32 *)(D_80046DF4 + 0x14) = 0;
    *(s32 *)(D_80046DF4 + 0x20) = 0;
    *(s32 *)(D_80046DF4 + 0x24) = 0;
    *(s32 *)(D_80046DF4 + 0x18) = 0;
    *(s32 *)(D_80046DF4 + 0x1C) = 0;
    temp_v0_3 = alHeapDBAlloc(0, 0, heap, *(s32 *)(arg0 + 4), 0x8C);
    __repair_phase_storage.value = 0;
    if (*(s32 *)(arg0 + 4) > 0) {
        s1 = temp_v0_3;
        do {
            alLink(s1, D_80046DF4 + 0x10);
            s1[2] = 0;
            alN_PVoiceNew(s1, *(s32 *)(D_80046DF4 + 0x30), heap);
            a0 = *(s32 **)(D_80046DF4 + 0x40);
            j = a0[5];
            a0[5] = j + 1;
            ((s32 *)a0[7])[j] = s1;
            __repair_phase_storage.value += 1;
            s1 = (s32 *)((u8 *)s1 + 0x8C);
        } while (__repair_phase_storage.value < *(s32 *)(arg0 + 4));
    }
    temp_v0_4 = alHeapDBAlloc(0, 0, heap, *(s32 *)(arg0 + 8), 0x1C);
    *(s32 *)(D_80046DF4 + 0x38) = 0;
    __repair_phase_j = 0;
    if (*(s32 *)(arg0 + 8) > 0) {
        v1 = temp_v0_4;
        do {
            *v1 = *(s32 *)(D_80046DF4 + 0x38);
            *(s32 **)(D_80046DF4 + 0x38) = v1;
            __repair_phase_j += 1;
            v1 += 7;
        } while (__repair_phase_j < *(s32 *)(arg0 + 8));
    }
    *(s32 *)(D_80046DF4 + 0x34) = (s32)heap;
}
