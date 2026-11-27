s32 gfxSetup2DState();
s32 func_801CAD00();
extern u8 playerSlots[];
extern u8 D_801CF4C8[];
extern u8 D_801D4390[];
extern u8 D_801E86E4[];
extern u16 D_80046820;
extern u16 D_801E975E;
extern u16 D_801E977A;
extern u16 D_801E979E;

void func_801E2ABC(s32 arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg1 & 0xFFFF;
    if ((*(u16 *)(playerSlots + temp_a1 * 100) != 0) && (D_801E975E < 0x10)) {
        gfxSetup2DState(arg0, temp_a1);
        func_801CAD00(arg0, D_801E979E, 0x38, D_801E977A, D_801D4390, *(s32 *)(*(u8 **)(D_801E86E4 + D_80046820 * 4) + 0x50), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1C, 0xE);
    }
}
