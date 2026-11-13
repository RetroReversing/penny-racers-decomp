extern u16 D_801E91D4[];
extern u8 D_801E97CA[];

s32 func_801E435C(s32 arg0, s32 arg1) {
    s32 temp_a1;
    u16 *tab;

    tab = (u16 *) (D_801E97CA + ((arg0 & 0xFF) * 0x30));
    temp_a1 = arg1 & 0xFF;
    return ((s32) (*tab & D_801E91D4[temp_a1]) >> (temp_a1 * 4)) & 0xFF;
}
