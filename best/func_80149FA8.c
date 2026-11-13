extern u8 D_800DA26A;
extern u32 D_802030CC;

void func_80149FA8(s32 arg0) {
    s32 i;
    s32 j;
    u16 *dst;
    u16 *src;

    for (i = 0; i < 0xE; i++) {
        src = *(u16 **)((u8 *)&D_802030CC + i * 4);
        dst = (u16 *)((u8 *)&D_800DA26A + 0x64 + arg0 * 0x178 + i * 0x12);
        for (j = 0; j < 9; j++) {
            dst[j] = src[j];
        }
    }
}
