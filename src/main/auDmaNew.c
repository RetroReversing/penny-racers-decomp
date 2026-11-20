#include "common.h"

extern u8 D_8005D7A0;
extern char D_8005D7B0[];
extern char *D_8005D7A8;
extern s32 D_8005D7A4;
extern s32 D_8005D7B4;
extern char D_8005D7C0[];
extern s32 D_8005DCB0;
extern char D_8006E780[];
extern char auDmaCallBack[];
extern void alLink();
extern void *alHeapDBAlloc();

void *auDmaNew(void **arg0) {
    char *s0;
    char *s3;
    s32 s1;
    s32 s2;
    s32 size;
    u8 *flag;

    if (D_8005D7A0 == 0) {
        s1 = 0;
        size = 0x400;
        D_8005D7A8 = D_8005D7B0;
        s0 = D_8005D7A8;
        s3 = s0 + 0x14;
        s2 = 0;
        D_8005D7A4 = 0;
        D_8005D7B4 = 0;
        *(s32 *)s0 = 0;
        do {
            alLink(s3, s0);
            *(void **)(D_8005D7C0 + s2) = alHeapDBAlloc(0, 0, D_8006E780, 1, size);
            s0 += 0x14;
            s3 += 0x14;
            s2 += 0x14;
            s1 += 1;
        } while (s1 < 0x3F);
        *(void **)(D_8005D7C0 + s1 * 0x14) = alHeapDBAlloc(0, 0, D_8006E780, 1, 0x400);
        flag = &D_8005D7A0;
        *flag = *flag + 1;
    }
    D_8005DCB0 = 0;
    *arg0 = &D_8005D7A0;
    return auDmaCallBack;
}
