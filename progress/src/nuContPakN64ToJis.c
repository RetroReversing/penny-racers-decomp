typedef struct { u8 jis; u8 key; } N64Jis;
extern N64Jis D_80046DB0[];
void nuContPakN64ToJis(u8 *src, u8 *dst, u32 len)
{
    u32 i;
    u32 n;
    u8 c;

    for (i = 0; i < len; i++)
    {
        c = *src;
        if (c == 0) {
            *dst = c;
        } else if (c >= 0x1A && c <= 0x33) {
            *dst = c + 0x27;
        } else if (c >= 0x10 && c <= 0x19) {
            *dst = c + 0x20;
        } else if (c >= 0x50 && c <= 0x7B) {
            *dst = c + 0x61;
        } else if (c >= 0x7C && c <= 0x8A) {
            *dst = c + 0x3A;
            dst[1] = 0xDE;
            dst++;
        } else if (c >= 0x8B && c <= 0x8F) {
            *dst = c + 0x3F;
            dst[1] = 0xDE;
        } else if (c >= 0x90 && c <= 0x94) {
            *dst = c + 0x3A;
            dst[1] = 0xDF;
        } else {
            for (n = 0; D_80046DB0[n].key != 0; n++) {
                if (D_80046DB0[n].key == c) {
                    *dst = D_80046DB0[n].jis;
                    break;
                }
            }
            if (D_80046DB0[n].key == 0) {
                *dst = 0xF;
            }
        }
        dst++;
        src++;
    }
}
