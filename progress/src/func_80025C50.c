extern void func_80025DAC();
extern void func_80025DBC(void *);
extern void func_800DE2E0();
extern void func_800DE38C();
extern void func_801D87FC();
extern void func_8021F5F0();
extern void func_8022132C(void *);
extern u8 D_8022A770[];
extern u8 D_800DA260[];
extern s16 D_8018A44A[];
extern s16 D_80189C94;
extern s8 D_8018A43C;
extern s8 D_8018D678;
extern s8 D_8021F028[];

void func_80025C50(void)
{
    s32 i;
    
    
    s32 off;

    func_801D87FC();
    func_80025DAC();
    func_8021F5F0();
    func_800DE38C();
    func_800DE2E0();
    for (i = 0; i < 7; i++) {
        func_8022132C(D_8022A770 + i * 2288);
    }
    for (i = 0; i < 8; i++) {
        off = i * 376;
        func_80025DBC(D_800DA260 + off);
        *(s16 *)(D_800DA260 + off) = i;
        *(s16 *)(D_800DA260 + off + 2) = i;
        *(s16 *)(D_800DA260 + off + 4) = i;
        *(s16 *)(D_800DA260 + off + 6) = i;
        *(s16 *)(D_800DA260 + off + 8) = i;
        *(s16 *)(D_800DA260 + off + 10) = i;
    }
    D_8021F028[0] = 0x15;
    D_8021F028[1] = 0x15;
    D_8021F028[2] = 0;
    for (i = 0; i < 4; i++) {
        D_8018A44A[i] = 0;
    }
    D_8018D678 = 0;
    D_8018A43C = 0;
    D_80189C94 = 0;
}
