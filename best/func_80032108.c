s32 func_80031FA0(void *, s16 *);

void func_80032108(void *arg0, void *arg1, u32 arg2) {
    s16 sp10;
    s32 sp14[2];
    u16 sp26;
    s32 temp_s4;
    s32 temp_s7;
    u16 var_s3;
    u32 temp_fp;
    u32 var_s2;

    if (arg2 == 0) {
        *(u16 *)((s8 *)arg1 + 0xC) = 0U;
        *(u32 *)((s8 *)arg1 + 4) = 0U;
        *(u32 *)((s8 *)arg1 + 8) = 0U;
        *(s32 *)arg1 = *(s32 *)((s8 *)arg0 + 4);
        return;
    }
    temp_s7 = *(s32 *)((s8 *)arg0 + 8);
    sp26 = *(u16 *)((s8 *)arg0 + 0x1A);
    temp_fp = *(u32 *)((s8 *)arg0 + 0xC);
    *(u16 *)((s8 *)arg0 + 0x1A) = 0U;
    *(u32 *)((s8 *)arg0 + 0xC) = 0U;
    *(s32 *)((s8 *)arg0 + 8) = *(s32 *)((s8 *)arg0 + 4);
    for (;;) {
        temp_s4 = *(s32 *)((s8 *)arg0 + 8);
        var_s3 = *(u16 *)((s8 *)arg0 + 0x1A);
        var_s2 = *(u32 *)((s8 *)arg0 + 0xC);
        func_80031FA0(arg0, &sp10);
        if (sp10 == 4) {
            var_s3 = *(u16 *)((s8 *)arg0 + 0x1A);
            var_s2 = *(u32 *)((s8 *)arg0 + 0xC);
            *(s32 *)arg1 = *(s32 *)((s8 *)arg0 + 8);
            break;
        }
        if (*(u32 *)((s8 *)arg0 + 0xC) >= arg2) {
            *(s32 *)arg1 = temp_s4;
            break;
        }
    }
    *(u16 *)((s8 *)arg1 + 0xC) = var_s3;
    *(u32 *)((s8 *)arg1 + 4) = var_s2;
    *(u32 *)((s8 *)arg1 + 8) = *(u32 *)((s8 *)arg0 + 0xC);
    *(s32 *)((s8 *)arg0 + 8) = temp_s7;
    *(u16 *)((s8 *)arg0 + 0x1A) = sp26;
    *(u32 *)((s8 *)arg0 + 0xC) = temp_fp;
}
