void func_801E2E00(s32 arg0, s32 *arg1);
extern u8 D_801E9018[];
extern u8 D_801E97A0[];
extern u8 D_801E97CC[];

void func_801E2E48(s32 arg0) {
    s32 i;
    u16 idx;

    idx = arg0;
    for (i = 0; i < 0x30; i++) {
        D_801E97A0[idx * 0x30 + i] = D_801E9018[idx * 0x30 + i];
    }
    func_801E2E00(idx, (s32 *) (D_801E97CC + idx * 0x30));
}
