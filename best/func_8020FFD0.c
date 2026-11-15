extern u8 D_8021E22F[];
u8 func_80149F40(s32, u32, s32);
s32 func_801FD530(s32, s32);

u8 func_8020FFD0(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p;
    u8 *q;
    u8 *r;
    u32 s0;
    s32 v;
    arg0 &= 0xFF;
    p = D_8021E22F;
    q = p + arg0 * 0x110;
    s0 = arg1 & 0xFF;
    r = (u8 *)(s0 * 0x22 + (u32)q);
    v = *(s8 *)(r + (arg2 & 0xFF) + 2);
    return func_801FD530(s0, func_80149F40(0, s0, v) & 0xFF) & 0xFF;
}
