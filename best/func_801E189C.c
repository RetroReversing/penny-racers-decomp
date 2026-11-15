extern u32 func_8003DE60(void *, u32, u32, s32);
extern u8 D_800DA260[];
extern u8 D_800DA26A[];
extern u8 D_801E87E0;
extern u8 D_801E87E5;
extern u8 D_801E94AC[];
extern u8 D_801E94CC[];
extern u8 D_801E94EC[];
extern u32 D_801E973C;
extern u8 D_801E9D80[];
extern u8 D_801E9D81[];
extern u8 D_801F18E0[];
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

s32 func_801E189C(void) {
    s32 i;
    s32 j;
    u8 t1;
    u8 t3;
    s32 a0;
    s32 a3;
    s32 s1;
    s32 t2;
    s32 cnt;
    s32 idx;
    s32 s0;
    s32 k;

    t2 = 0;
    D_801F18E4 = D_801E87E0;
    D_801F18E5 = D_800DA26A[0xA3F];
    D_801F18E6 = D_800DA26A[0xA3E + 3];
    D_801F18E7 = D_800DA26A[0xA3E + 5];
    D_801F18E8 = D_800DA26A[0xA3E + 7];
    D_801F18E9 = D_800DA26A[0xA3E + 9];
    D_801F18EA = D_800DA26A[0xA3E + 0xB];
    D_801F18EB = D_800DA26A[0xA3E + 0xD];
    D_801F18EC = D_800DA26A[0xA3E + 0xF];
    D_801F18ED = D_800DA26A[0xBA8 + D_800DA260[D_801E87E5 * 0x178]];
    t1 = D_801E9D80[0];
    t3 = D_801E9D81[0];
    a0 = t1;
    a3 = t3;
    s1 = 0xE;
    if ((a0 != 0xFF) || (a3 != 0xFF)) {
        i = 2;
        do {
            idx = i;
            cnt = 1;
            if ((a0 == D_801E9D80[idx]) && (a3 == D_801E9D81[idx])) {
                do {
                    i += 2;
                    cnt += 1;
                } while ((a0 == D_801E9D80[i]) && (a3 == D_801E9D81[i]));
            }
            if (cnt < 4) {
                s0 = 0;
                if (cnt != 0) {
                    for (j = 0; j < cnt; j++) {
                        D_801F18E0[s1 + j * 2] = D_801E9D80[t2 + j * 2];
                        D_801F18E0[s1 + j * 2 + 1] = D_801E9D81[t2 + j * 2];
                    }
                }
                s1 += cnt * 2;
            } else {
                D_801F18E0[s1] = 0xEE;
                D_801F18E0[s1 + 1] = 0xEE;
                D_801F18E0[s1 + 2] = t1;
                D_801F18E0[s1 + 3] = t3;
                D_801F18E0[s1 + 4] = cnt;
                s1 += 4;
            }
            t2 += cnt * 2;
            t1 = D_801E9D80[t2];
            t3 = D_801E9D81[t2];
            a0 = t1;
            a3 = t3;
            i = t2 + 2;
        } while ((a0 != 0xFF) || (a3 != 0xFF));
    }
    D_801F18E0[s1] = t1;
    D_801F18E0[s1 + 1] = t3;
    func_8003DE60(D_801E94AC, (t2 + 2) & 0xFFFF, s1 + 2, 0);
    for (k = s1 + 2; k < 0x3200; k++) {
        D_801F18E0[k] = 0;
    }
    D_801E973C = 0;
    for (k = 4; k < 0x3200; k++) {
        D_801E973C += D_801F18E0[k];
    }
    func_8003DE60(D_801E94CC, k, 0, 0);
    *(u32 *)D_801F18E0 = D_801E973C;
    func_8003DE60(D_801E94EC, D_801E973C, 0, 0);
    return (s1 + 2) & 0xFFFF;
}
