/* Draft from identical target func_80038650, retargeted and judged independently. */
static __inline__ u8 __repair_inline(u8 a) { return a; }
/* Draft from identical target func_8002D520, retargeted and judged independently. */
u8 pennyReadSequenceByte(void *, s32);
s32 func_8002DAE0(void *, s32);

s32 func_8002D520(u8 *arg0, s32 arg1, u8 *arg2) {
    u8 b;
    u8 m;

    b = pennyReadSequenceByte(arg0, arg1);
    if (b == 0xFF) {
        m = pennyReadSequenceByte(arg0, arg1);
        if (m == 0x51) {
            *(s16 *)arg2 = 3;
            arg2[8] = b;
            arg2[9] = m;
            arg2[0xB] = pennyReadSequenceByte(arg0, arg1);
            arg2[0xC] = pennyReadSequenceByte(arg0, arg1);
            arg2[0xD] = pennyReadSequenceByte(arg0, arg1);
            (arg0 + arg1)[0xA8] = 0;
        } else if (m == 0x2F) {
            s32 w = *(s32 *)(arg0 + 4) ^ (1 << arg1);
            *(s32 *)(arg0 + 4) = w;
            if (w != 0) {
                *(s16 *)arg2 = 0x12;
            } else {
                *(s16 *)arg2 = 4;
            }
        } else if (m == 0x2E) {
            pennyReadSequenceByte(arg0, arg1);
            pennyReadSequenceByte(arg0, arg1);
            (arg0 + arg1)[0xA8] = 0;
            *(s16 *)arg2 = 0x13;
        } else if (m == 0x2D) {
            u8 *pt = (arg1 << 2) + arg0;
            u8 *p = *(u8 **)(pt + 0x18);
            u8 *np;
            u8 b0 = *p;
            u8 x0;
            u8 x1;
            u8 x2;
            u8 x3;
            p = p + 1;
            if (*p == 0) {
                np = p + 5;
                *p = b0;
            } else {
                if (*p != b) {
                    *p = *p - 1;
                }
                p = p + 1;
                x0 = *p;
                p = p + 1;
                x1 = *p;
                p = p + 1;
                x2 = *p;
                p = p + 1;
                x3 = __repair_inline(*p);
                p = p + 1;
                np = p - ((u32)x0 * 0x1000000 + (u32)x1 * 0x10000 + (u32)x2 * 0x100 + x3);
            }
            *(u8 **)(pt + 0x18) = np;
            (arg0 + arg1)[0xA8] = 0;
            *(s16 *)arg2 = 0x14;
        }
    } else {
        *(s16 *)arg2 = 1;
        if (b & 0x80) {
            arg2[8] = b;
            arg2[9] = pennyReadSequenceByte(arg0, arg1);
            (arg0 + arg1)[0xA8] = b;
        } else {
            u8 t = (arg0 + arg1)[0xA8];
            arg2[9] = b;
            arg2[8] = t;
        }
        if ((arg2[8] & 0xF0) != 0xC0 && (arg2[8] & 0xF0) != 0xD0) {
            arg2[0xA] = pennyReadSequenceByte(arg0, arg1);
            if ((arg2[8] & 0xF0) == 0x90) {
                *(s32 *)(arg2 + 0xC) = func_8002DAE0(arg0, arg1);
            }
        } else {
            arg2[0xA] = 0;
        }
    }
    return 1;
}
