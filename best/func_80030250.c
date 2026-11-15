void *__n_allocParam(void);
s32 func_8002E6E4(void *a0, s32 a1, void *a2);

extern void *D_80046DF4;

void func_80030250(u8 *arg0, s32 arg1) {
    u8 *p;

    if (*(u8 **)(arg0 + 8) == NULL) {
        return;
    }
    p = __n_allocParam();
    if (p != NULL) {
        *(s16 *)(p + 8) = 0x10;
        *(s32 *)(p + 0xC) = arg1 & 0xFF;
        *(s32 *)(p + 0) = 0;
        *(s32 *)(p + 4) = *(s32 *)((u8 *)D_80046DF4 + 0x28) + *(s32 *)(*(u8 **)(arg0 + 8) + 0x88);
        func_8002E6E4(*(void **)(arg0 + 8), 3, p);
    }
}
