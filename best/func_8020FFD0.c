extern s8 D_8021E22F[];
s32 func_80149F40(s32, s32, s32);
s32 func_801FD530(s32, s32);

s32 func_8020FFD0(s32 arg0, s32 arg1, s32 arg2) {
    s8 *p = D_8021E22F;
    s32 b = arg1 & 0xFF;

    p += (arg0 & 0xFF) * 0x110;
    p += b * 0x22;
    p += arg2 & 0xFF;
    return func_801FD530(b, func_80149F40(0, b, p[2]) & 0xFF) & 0xFF;
}
