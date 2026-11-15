typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Quad;

s32 alCSPGetChlProgram(s8 *arg0, s32 arg1) {
    s32 *tbl;
    s32 *p;
    s32 key[6];
    s32 i;
    s32 n;

    tbl = *(s32 **)(arg0 + 0x20);
    *(Quad *)key = *(Quad *)(((arg1 & 0xFF) << 4) + *(s8 **)(arg0 + 0x60));
    n = *(s16 *)tbl;
    i = 0;
    if (n > 0) {
        p = tbl;
        do {
            if (p[3] == key[0]) {
                return i;
            }
            i++;
            p++;
        } while (i < n);
    }
    return -1;
}
