extern u8 D_801E87E0;
extern u8 D_801F18E4;
extern u8 D_801F18E5;
extern u8 D_801F18E6;
extern u8 D_801F18E7;
extern u8 D_801F18E8;
extern u8 D_801F18E9;
extern u8 D_801F18EA;
extern u8 D_801F18EB;
extern u8 D_801F18EC;
extern u8 D_801F18ED;

extern u8 D_801E87E5;
extern u8 D_800DA260[];
extern u8 D_800DA26A[];
extern u8 D_801E9D80[];
extern u8 D_801E9D81[];
extern u8 D_801F18E0[];
extern u8 D_801F18E1[];
extern u8 D_801E94AC[];
extern u8 D_801E94CC[];
extern u8 D_801E94EC[];
extern u32 D_801E973C;
void debugPrintf();

u16 func_801E189C(void) {
    u16 src;
    u16 pos;
    u16 n;
    u16 q;
    u8 first;
    u8 second;
    u32 i;

    src = 0;
    D_801F18E4 = D_801E87E0;
    D_801F18E5 = ((u16 *) (D_800DA26A + 0xA3E))[0];
    D_801F18E6 = ((u16 *) (D_800DA26A + 0xA3E))[1];
    D_801F18E7 = ((u16 *) (D_800DA26A + 0xA3E))[2];
    D_801F18E8 = ((u16 *) (D_800DA26A + 0xA3E))[3];
    D_801F18E9 = ((u16 *) (D_800DA26A + 0xA3E))[4];
    D_801F18EA = ((u16 *) (D_800DA26A + 0xA3E))[5];
    D_801F18EB = ((u16 *) (D_800DA26A + 0xA3E))[6];
    D_801F18EC = ((u16 *) (D_800DA26A + 0xA3E))[7];
    D_801F18ED = D_800DA26A[0xBA8 + *(u16 *) &D_800DA260[D_801E87E5 * 0x178]];
    first = D_801E9D80[src];
    second = D_801E9D81[src];
    pos = 0xE;
    while (first != 0xFF || second != 0xFF) {
        q = src + 2;
        n = 1;
        while ((first == D_801E9D80[q]) & (second == D_801E9D81[q])) {
            q += 2;
            n++;
        }
        if (n >= 4) {
            D_801F18E0[pos] = 0xEE;
            D_801F18E1[pos] = 0xEE;
            pos += 2;
            D_801F18E0[pos] = first;
            D_801F18E1[pos] = second;
            pos += 2;
            *(u16 *) &D_801F18E0[pos] = n;
            pos += 2;
            src += n * 2;
        } else {
            for (i = 0; i < n; i++) {
                D_801F18E0[i * 2 + pos] = D_801E9D80[i * 2 + src];
                D_801F18E1[i * 2 + pos] = D_801E9D81[i * 2 + src];
            }
            pos += n * 2;
            src += n * 2;
        }
        first = D_801E9D80[src];
        second = D_801E9D81[src];
    }
    D_801F18E0[pos] = first;
    D_801F18E1[pos] = second;
    pos += 2;
    src += 2;
    i = pos;
    debugPrintf(D_801E94AC, src, i);
    for (; i < 0x3200; i++) {
        D_801F18E0[i] = 0;
    }
    D_801E973C = 0;
    for (i = 4; i < 0x3200; i++) {
        D_801E973C += D_801F18E0[i];
    }
    debugPrintf(D_801E94CC, i);
    *(u32 *) D_801F18E0 = D_801E973C;
    debugPrintf(D_801E94EC, D_801E973C);
    return pos;
}
