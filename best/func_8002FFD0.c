extern u8 *D_80046DF4;
void *__n_allocParam();
s32 _allocatePVoice();
s32 func_8002E6E4();

s32 func_8002FFD0(u8 *arg0, u8 *arg1)
{
    u8 *sp10;
    s32 temp_v0;
    u8 *temp;
    s32 t1;

    sp10 = NULL;
    *(u16 *)(arg0 + 0x16) = *(u16 *)(arg1 + 0);
    *(s32 *)(arg0 + 0xC) = 0;
    *(s16 *)(arg0 + 0x1A) = *(u8 *)(arg1 + 4);
    *(s16 *)(arg0 + 0x14) = 0;
    *(u8 **)(arg0 + 8) = NULL;
    *(u16 *)(arg0 + 0x18) = *(u16 *)(arg1 + 2);
    temp_v0 = _allocatePVoice(&sp10, *(s16 *)arg1);
    if (sp10 != NULL) {
        if (temp_v0 != 0) {
            *(s32 *)(sp10 + 0x88) = 0x200;
            *(s32 *)(*(u8 **)(sp10 + 8) + 8) = 0;
            *(u8 **)(sp10 + 8) = arg0;
            *(u8 **)(arg0 + 8) = sp10;
            temp = __n_allocParam(sp10);
            t1 = *(s32 *)(D_80046DF4 + 0x28);
            *(s16 *)(temp + 8) = 0xB;
            *(s32 *)(temp + 0xC) = 0;
            *(s32 *)(temp + 4) = t1;
            *(s32 *)(temp + 0x10) = *(s32 *)(sp10 + 0x88) - 0x40;
            func_8002E6E4(*(u8 **)(arg0 + 8), 3, temp);
            temp = __n_allocParam();
            if (temp != NULL) {
                t1 = *(s32 *)(D_80046DF4 + 0x28) + *(s32 *)(sp10 + 0x88);
                *(s16 *)(temp + 8) = 0xF;
                *(s32 *)(temp + 0) = 0;
                *(s32 *)(temp + 4) = t1;
                func_8002E6E4(*(u8 **)(arg0 + 8), 3, temp);
            }
        } else {
            *(s32 *)(sp10 + 0x88) = 0;
            *(u8 **)(sp10 + 8) = arg0;
            *(u8 **)(arg0 + 8) = sp10;
        }
    }
    return sp10 != NULL;
}
