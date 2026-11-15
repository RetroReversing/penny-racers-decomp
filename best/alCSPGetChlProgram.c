typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Quad;

s32 alCSPGetChlProgram(s8 *arg0, s32 arg1) {
    s32 *tbl;
    s32 *p;
    Quad key;
    s32 i;
    s32 n;

    tbl = *(s32 **)(arg0 + 0x20);
    key = *(Quad *)(((arg1 & 0xFF) << 4) + *(s8 **)(arg0 + 0x60));
    n = *(s16 *)tbl;
    for (i = 0; i < n; i++) {
        p = tbl + i;
        if (p[3] == key.a) {
            return i;
        }
    }
    return -1;
}
