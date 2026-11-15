extern s8 D_8021E22F[];
s32 func_80149F40(s32, s32, s32);
s32 func_801FD530(s32, s32);

s32 func_8020FFD0(s32 arg0, s32 arg1, s32 arg2)
{
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    temp_a0 = arg0 & 0xFF;
    temp_s0 = arg1 & 0xFF;
    temp_v1 = (temp_a0 * 0x110) + (u32)D_8021E22F + (temp_s0 * 0x22) + (arg2 & 0xFF);
    return func_801FD530(temp_s0, func_80149F40(0, temp_s0, *(s8 *)(temp_v1 + 2)) & 0xFF) & 0xFF;
}
