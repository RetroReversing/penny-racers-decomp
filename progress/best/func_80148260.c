static __inline__ int __repair_inline(s32 a, s32 b) { return a < b; }
extern u8 D_80189B36;
extern u16 D_8018D140[];
extern u16 D_8018D26C[];
extern u8 D_8018D3A0[];

s32 func_80148260(u8 arg0, s32 arg1) {
    union { u8 * pointer; u32 value; } __repair_phase_storage;
    s32 i;
    s32 j;
    
    s32 n;
    

    for (i = 0; i < 0x96; i++) {
        D_8018D140[(arg1 & 0xFF) * 0x12C / 2 + i] = 0xFFFF;
    }
    n = 0;
    for (j = 0; j < 8; j++) {
        __repair_phase_storage.pointer = D_8018D3A0;
        __repair_phase_storage.value = *(u32 *)((u8 *)__repair_phase_storage.pointer + ((arg0 & 0xFF) << 5) + j * 4);
        for (i = 0; i < 0x20; i++) {
            if (__repair_phase_storage.value & 1) {
                D_8018D140[(arg1 & 0xFF) * 0x12C / 2 + n] = (j << 8) | i;
                n++;
            }
            __repair_phase_storage.value >>= 1;
        }
    }
    D_8018D140[(arg1 & 0xFF) * 0x12C / 2 + n] = 0x3FFF;
    n++;
    if ((arg1 & 0xFF) == 1) {
        if (D_80189B36 & 0x20) {
            D_8018D140[(arg1 & 0xFF) * 0x12C / 2 + n] = 0x4FFF;
            n++;
        }
        for (i = 0; __repair_inline(i, 8); i++) {
            D_8018D26C[n + i] = D_8018D26C[(unsigned short)i];
        }
    } else {
        D_8018D140[n] = 0x2FFF;
        n++;
        for (i = 0; i < 8; i++) {
            D_8018D140[n + i] = D_8018D140[(unsigned short)i];
        }
    }
    return n;
}
