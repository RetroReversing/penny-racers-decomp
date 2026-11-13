typedef struct { s32 a; s32 b; s32 c; s32 d; } Quad;

s32 alCSPGetChlProgram(void *arg0, s32 arg1) {
    Quad key;
    s16 *tbl;
    s32 *p;
    s32 i;
    s16 count;

    tbl = *(s16 **)((s8 *)arg0 + 0x20);
    key = *(Quad *)((s8 *)arg0 + 0x60 + ((arg1 & 0xFF) * 0x10));
    count = *tbl;
    i = 0;
    if (count > 0) {
        p = (s32 *)tbl;
        do {
            if (p[3] == key.a) {
                return i;
            }
            i++;
            p++;
        } while (i < count);
    }
    return -1;
}
