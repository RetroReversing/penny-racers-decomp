extern u8 D_3EA210[];
extern u8 D_3EACF0[];
extern u8 D_8030BD90[];
void func_800294A0(s32 arg0, s32 arg1, s32 arg2);
void func_80143DCC(void);
void func_80203D58(void);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_80206848(void);
void func_80206BC0(void);
void func_80206770(void) {
    func_800294A0((s32)D_3EA210, (s32)D_8030BD90, D_3EACF0 - D_3EA210);
    func_80143DCC();
    func_80203D58();
    func_80203DF8(1, 6, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, func_80206848, func_80206BC0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
