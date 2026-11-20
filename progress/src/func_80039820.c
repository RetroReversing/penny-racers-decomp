typedef struct RspTask {
    u32 type;
    u32 flags;
    u32 boot;
    u32 bootSize;
    u32 ucode;
    u32 ucodeSize;
    u32 data;
    u32 dataSize;
    u32 stack;
    u32 stackSize;
    u32 output;
    u32 outputSize;
    u32 input;
    u32 inputSize;
    u32 yield;
    u32 yieldSize;
} RspTask;

extern RspTask D_8006C330;

void func_8003DAA0(void *, void *, s32);
u32 osVirtualToPhysical(void *);
void func_8003EBF0(void *, s32);
void func_8003F0D0(s32);
s32 rsp_set_pc_if_halted(u32);
s32 sp_dma_start(s32, u32, void *, u32);
s32 func_8003F0A0(void);

void func_80039820(RspTask *arg0) {
    RspTask *p;

    p = &D_8006C330;
    func_8003DAA0(arg0, p, 0x40);
    if (p->ucode) {
        p->ucode = osVirtualToPhysical((void *)p->ucode);
    }
    if (p->data) {
        p->data = osVirtualToPhysical((void *)p->data);
    }
    if (p->stack) {
        p->stack = osVirtualToPhysical((void *)p->stack);
    }
    if (p->output) {
        p->output = osVirtualToPhysical((void *)p->output);
    }
    if (p->outputSize) {
        p->outputSize = osVirtualToPhysical((void *)p->outputSize);
    }
    if (p->input) {
        p->input = osVirtualToPhysical((void *)p->input);
    }
    if (p->yield) {
        p->yield = osVirtualToPhysical((void *)p->yield);
    }
    if (p->flags & 1) {
        p->data = p->yield;
        p->dataSize = p->yieldSize;
        arg0->flags &= ~1;
        if (p->flags & 4) {
            p->ucode = *(u32 *)((arg0->yield + 0xBFC) | 0xA0000000);
        }
    }
    func_8003EBF0(p, 0x40);
    func_8003F0D0(0x2B00);
    do {
    } while (rsp_set_pc_if_halted(0x04001000) == -1);
    do {
    } while (sp_dma_start(1, 0x04000FC0, p, 0x40) == -1);
    do {
    } while (func_8003F0A0() != 0);
    do {
    } while (sp_dma_start(1, 0x04001000, (void *)p->boot, p->bootSize) == -1);
}
