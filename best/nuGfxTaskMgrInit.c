extern short D_8006A144;
extern short D_8006A146;
extern s32 D_80092C00;
extern OSThread D_8006A148;
extern u32 D_8006C300;
extern u32 D_80071F80;
extern u32 D_80072BE0;
extern u32 D_80092BE0;
extern u8 D_800DAE40[];
extern u8 D_800DAE98[];
extern u8 D_800DD420[];
extern u32 D_800DE0E8;
extern void *D_8006A140;
extern u32 D_800DB158;
extern void func_800428B0(void);
extern void func_80042980(void);

void nuGfxTaskMgrInit(void) {
    u8 *var_a0;
    u8 *var_a1;
    s32 var_v1;
    u32 var_a2;
    u8 *temp_v1;

    D_8006A144 = 8;
    D_8006A146 = 4;
    D_80092C00 = 0;
    nuGfxDisplayOff();
    osCreateThread(&D_8006A148, 5, nuGfxTaskMgr, 0, &D_8006C300, 0x3C);
    osStartThread(&D_8006A148);
    var_a2 = 0;
    var_a1 = (u8 *)D_800DAE98;
    var_a0 = var_a1 - 8;
    var_v1 = 0;
    do {
        *(u8 **)(D_800DAE40 + var_v1) = var_a1;
        *(u32 *)var_a0 = (u32)&D_800DE0E8;
        *(s32 *)(D_800DAE40 + var_v1 + 0x10) = 1;
        *(s32 *)(D_800DAE40 + var_v1 + 0x14) = 0;
        *(void **)(D_800DAE40 + var_v1 + 0x18) = func_800428B0;
        *(u32 *)(D_800DAE40 + var_v1 + 0x1C) = (u8 *)func_80042980 - (u8 *)func_800428B0;
        *(s32 *)(D_800DAE40 + var_v1 + 0x24) = 0x1000;
        *(s32 *)(D_800DAE40 + var_v1 + 0x2C) = 0x800;
        *(u32 *)(D_800DAE40 + var_v1 + 0x30) = (u32)D_800DD420;
        *(s32 *)(D_800DAE40 + var_v1 + 0x34) = 0x400;
        *(u32 *)(D_800DAE40 + var_v1 + 0x38) = (u32)&D_80072BE0;
        *(u32 *)(D_800DAE40 + var_v1 + 0x3C) = (u32)&D_80092BE0;
        *(u32 *)(D_800DAE40 + var_v1 + 0x48) = (u32)&D_80071F80;
        *(s32 *)(D_800DAE40 + var_v1 + 0x4C) = 0xC00;
        *(u32 *)var_a0 = (u32)&D_800DE0E8;
        var_a0 += 0x58;
        var_a1 += 0x58;
        var_a2 += 1;
        var_v1 += 0x58;
    } while (var_a2 < 0xA);
    temp_v1 = (u8 *)&D_800DB158 - 0x318;
    *(u8 **)&D_800DB158 = temp_v1;
    D_8006A140 = temp_v1;
}
