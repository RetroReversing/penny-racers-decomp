extern u8 D_80046DB0[];
extern u8 D_80046DB1[];

void nuContPakN64ToJis(u8 *arg0, u8 *arg1, u32 arg2)
{
    u8 *src = arg0;
    u8 *dst = arg1;
    u8 *dst2 = arg1;
    u32 i;
    u8 c;
    u32 off;
    u32 n;
    u8 *kp;

    for (i = 0; i < arg2; i++) {
        c = *src;
        if (c == 0) {
            *dst = c;
        } else if ((u8)(c - 0x1A) < 0x1A) {
            *dst = c + 0x27;
        } else if ((u8)(c - 0x10) < 0xA) {
            *dst = c + 0x20;
        } else if ((u8)(c - 0x50) < 0x2C) {
            *dst = c + 0x61;
        } else if ((u8)(c - 0x7C) < 0xF) {
            *dst = c + 0x3A;
            *dst2++ = 0xDE;
            dst++;
        } else if ((u8)(c + 0x75) < 5) {
            *dst = c + 0x3F;
            *dst2 = 0xDE;
        } else if ((u8)(c + 0x70) < 5) {
            *dst = c + 0x3A;
            *dst2 = 0xDF;
        } else {
            off = 0;
            n = 0;
            while (D_80046DB1[off] != 0) {
                if (D_80046DB1[off] == c)
                    break;
                off += 2;
                n++;
            }
            if (D_80046DB1[off] != 0)
                *dst = D_80046DB0[off];
            if (D_80046DB1[n * 2] != 0)
                dst2++;
            else
                *dst = 0xF;
        }
        dst2++;
        dst++;
        src++;
    }
}
