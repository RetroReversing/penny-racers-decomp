s32 func_8014A080(u32 v, s32 n, u8 count, u8 dir)
{
    u32 top;
    u32 high;
    u32 keep;
    u32 bit;
    s32 i;
    
    n &= 31;
    top = 1 << n;
    high = -2 << n;
    keep = v & high;
    if (dir == 1) {
        
        for (i = 0; i < count; i++) {
            bit = 0;
            if (v & top) {
                bit = 1;
            }
            v = (((v << 1) | bit) & ~high) | keep;
        }
    } else {
        
        for (i = 0; i < count; i++) {
            bit = -(v & 1) & top;
            v = (((v & ~high) >> 1) | bit) | keep;
        }
    }
    return v;
}
