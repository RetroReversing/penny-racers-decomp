extern short D_8006A144;
extern short D_8006A146;
extern s32 D_80092C00;
extern OSThread D_8006A148;
extern u32 D_8006C300;
extern u32 D_80071F80;
extern u32 D_80072BE0;
extern u32 D_80092BE0;
extern u8 D_800DD420[];
extern u32 D_800DE0E8;
extern void *D_8006A140;
extern u32 D_800DB158;
extern void func_800428B0(void);
extern void func_80042980(void);

void nuGfxTaskMgrInit(void) {
    u32 i;

    D_8006A144 = 8;
    D_8006A146 = 4;
    D_80092C00 = 0;
    nuGfxDisplayOff();
    osCreateThread(&D_8006A148, 5, nuGfxTaskMgr, 0, &D_8006C300, 0x3C);
    osStartThread(&D_8006A148);
    for (i = 0; i < 10; i++) {
        nuGfxTask[i].next = &nuGfxTask[i + 1];
        nuGfxTask[i].msgQ = (OSMesgQueue *)&D_800DE0E8;
        nuGfxTask[i].list.t.type = 1;
        nuGfxTask[i].list.t.flags = 0;
        nuGfxTask[i].list.t.ucode_boot = (u64 *)func_800428B0;
        nuGfxTask[i].list.t.ucode_boot_size = (u32)((u8 *)func_80042980 - (u8 *)func_800428B0);
        nuGfxTask[i].list.t.ucode_size = 0x1000;
        nuGfxTask[i].list.t.ucode_data_size = 0x800;
        nuGfxTask[i].list.t.dram_stack = (u64 *)D_800DD420;
        nuGfxTask[i].list.t.dram_stack_size = 0x400;
        nuGfxTask[i].list.t.output_buff = (u64 *)&D_80072BE0;
        nuGfxTask[i].list.t.output_buff_size = (u64 *)&D_80092BE0;
        nuGfxTask[i].list.t.yield_data_ptr = (u64 *)&D_80071F80;
        nuGfxTask[i].list.t.yield_data_size = 0xC00;
        nuGfxTask[i].msgQ = (OSMesgQueue *)&D_800DE0E8;
    }
    {
        u8 *p = (u8 *)&D_800DB158;
        u8 *t = p - 0x318;
        *(void **)p = t;
        D_8006A140 = t;
    }
}
