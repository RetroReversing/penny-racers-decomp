s32 alHeapDBAlloc(s32, s32, s32 *, s32, s32);
void alSeqFileNew(void *arg0, s32 arg1);
void func_800294A0(s32, s32, s32);
extern s32 D_8006E780;
extern s32 D_8006FF00;

void func_80027BF0(s32 arg0) {
    u8 sp27[0x20];
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;

    temp_s0 = ((((u32)&sp27) + 0xF) >> 4) * 0x10;
    func_800294A0(arg0, temp_s0, 4);
    temp_s0_2 = ((s32)(*(u16 *)(temp_s0 + 2) << 0x10) >> 0xD) + 4;
    temp_v0 = alHeapDBAlloc(0, 0, &D_8006E780, 1, temp_s0_2);
    D_8006FF00 = temp_v0;
    func_800294A0(arg0, temp_v0, temp_s0_2);
    alSeqFileNew((void *)D_8006FF00, arg0);
}
