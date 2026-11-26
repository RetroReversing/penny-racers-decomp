typedef struct { u8 jis; u8 n64; } NuFontPair;
extern NuFontPair D_80046DB0[];
void nuContPakJisToN64(u8 *jis, u8 *n64, u32 size)
{
    u32 i;
    s32 j;
    u8 code;

    for (i = 0; i < size; i++, jis++) {
        code = *jis;
        if (code == 0) break;
        if (code >= 'A' && code <= 'Z') {
            *n64 = code - 0x27;
        } else if (code >= 'a' && code <= 'z') {
            *n64 = code - 0x47;
        } else if (code >= '0' && code <= '9') {
            *n64 = code - 0x20;
        } else if (code >= 0xB1 && code <= 0xDC) {
            if (jis[1] == 0xDE) {
                if (code >= 0xCA) *n64 = code - 0x3F;
                else *n64 = code - 0x3A;
                jis++;
            } else if (jis[1] == 0xDF) {
                *n64 = code - 0x3A;
                jis++;
            } else {
                *n64 = code - 0x61;
            }
        } else {
            for (j = 0; D_80046DB0[j].n64 != 0; j++) {
                if (D_80046DB0[j].jis == code) {
                    *n64 = D_80046DB0[j].n64;
                    break;
                }
            }
            if (D_80046DB0[j].n64 == 0) *n64 = 0xF;
        }
        n64++;
    }
}
