extern s32 D_800DB1B0;
extern u8 D_800DB1B8[];
extern u8 D_80126FF6;
extern u8 D_80168166;
extern u8 D_80183BE0[];

void func_8013DD2C(void) {
    s32 i;
    s32 j;
    s32 off = D_80126FF6 * 0x28;

    for (j = 0; j < 0x20; j++) {
        for (i = 0; i < 0x20; i++) {
            s32 t5 = ((s32)(*(u16 *)(D_800DB1B8 + 0x2116 + off)) << 16) >> 21;
            s32 t4 = *(s16 *)(D_800DB1B8 + 0x2112 + off);
            s32 t1 = ((s32)(*(u16 *)(D_800DB1B8 + 0x2114 + off)) << 16) >> 21;
            s32 t0 = *(s16 *)(D_800DB1B8 + 0x2110 + off);
            *(s16 *)(D_80183BE0 + (D_80126FF6 << 12) + (D_80168166 << 11) + (((i << 5) + 0x1F - j) * 2)) =
                *(u16 *)(D_800DB1B0 + ((j * t5 + t4) * 0x280) + ((i * t1 + t0) * 2));
        }
    }
    D_80168166 ^= 1;
}
