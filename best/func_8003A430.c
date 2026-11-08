/* identical to osViBlack in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_8003EAC0(s32 a0);
void func_8003EAE0(s32 a0);
extern u16 *D_800A3A34;

void func_8003A430(s32 arg0) {
    s32 temp;
    u16 *p;

    temp = func_8003EAC0(arg0);
    if (arg0 & 0xFF) {
        p = D_800A3A34;
        *p = *p | 0x20;
    } else {
        p = D_800A3A34;
        *p = *p & 0xFFDF;
    }
    func_8003EAE0(temp);
}
