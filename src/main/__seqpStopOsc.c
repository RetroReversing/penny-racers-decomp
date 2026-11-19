#include "common.h"

void alLink(void *a, void *b);
void alUnlink(void *a);

void __seqpStopOsc(u8 *arg0, u8 *arg1) {
    u8 *s0;
    u8 *s2;
    u16 s3;

    s0 = *(u8 **)(arg0 + 0x50);
    if (s0 == 0) {
        return;
    }
    do {
        s3 = *(u16 *)(s0 + 0xC);
        s2 = *(u8 **)s0;
        if (((u16)(s3 - 0x16) < 2) && (*(u8 **)(s0 + 0x10) == arg1)) {
            (*(void (**)(void *))(arg0 + 0x78))(*(void **)(s0 + 0x14));
            alUnlink(s0);
            if (s2 != 0) {
                *(s32 *)(s2 + 8) += *(s32 *)(s0 + 8);
            }
            alLink(s0, arg0 + 0x48);
            if ((s16)s3 == 0x16) {
                arg1[0x37] = arg1[0x37] & 0xFE;
            } else {
                arg1[0x37] = arg1[0x37] & 0xFD;
            }
            if (arg1[0x37] == 0) {
                return;
            }
        }
        s0 = s2;
    } while (s0 != 0);
}
