extern u8 D_801E91D4[];
extern u8 D_801E97CA[];

s32 func_801E435C(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a3;
    u16 v;

    temp_a3 = (arg0 & 0xFF) * 0x30;
    temp_a1 = arg1 & 0xFF;
    v = *(u16 *)(D_801E97CA + temp_a3) & *(u16 *)(D_801E91D4 + (temp_a1 * 2));
    return (v >> (temp_a1 * 4)) & 0xFF;
}
