extern u8 D_800DA26A[];
extern u8 D_801E87E0;
extern u8 D_801E87E1;
extern s8 D_801E87E3;
extern u8 D_801E94EC[];
extern u8 D_801E9500[];
extern s32 D_801E973C;
extern u8 D_801E9D80[];
extern u8 D_801E9D81[];
extern u8 D_801F18E0[];
extern u8 D_801F18E1[];
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
extern u8 D_801F18EE;
extern u8 D_801F18EF;
void func_8003DE60(void *, s32, s32);

void func_801E1C38(void) {
    s32 a1;
    u32 s0;
    u8 t1;
    u8 t0;
    u8 nt1;
    u8 nt0;
    u16 n;
    u32 i;
    u32 a0;
    u8 v1;
    s32 idx;

    s0 = 0;
    ((void (*)(void *, s32))func_8003DE60)(D_801E94EC, D_801E973C);
    D_801E87E3 = 1;
    D_801E87E1 = D_801F18E4;
    D_801E87E0 = D_801F18E4;
    *(u16 *)(D_800DA26A + 0xA3E) = D_801F18E5;
    *(s16 *)(D_800DA26A + (s32)0xA40) = D_801F18E6;
    *(s16 *)(D_800DA26A + 0xA42) = D_801F18E7;
    *(s16 *)(D_800DA26A + 0xA44) = D_801F18E8;
    *(s16 *)(D_800DA26A + 0xA46) = D_801F18E9;
    *(s16 *)(D_800DA26A + 0xA48) = D_801F18EA;
    *(s16 *)(D_800DA26A + 0xA4A) = D_801F18EB;
    *(s16 *)(D_800DA26A + 0xA4C) = D_801F18EC;
    idx = *(u16 *)(D_800DA26A + 0xA3E);
    D_800DA26A[0xBA8 + idx] = D_801F18ED;
    t1 = D_801F18EE;
    t0 = D_801F18EF;
    a1 = 0xE;
    while ((t1 != 0xFF) || (t0 != 0xFF)) {
        if (t1 == 0xEE && t0 == 0xEE) {
            idx = (u8)(D_801F18E0[(a1 + 2) & 0xFFFF]);
            nt0 = D_801F18E1[(a1 + 2) & 0xFFFF];
            a1 += 4;
            n = *(u16 *)(D_801F18E0 + (a1 & 0xFFFF));
            for (i = 0; i < n; i++) {
                D_801E9D80[(s0 & 0xFFFF) + 2 * i] = idx;
                D_801E9D81[(s0 & 0xFFFF) + 2 * i] = nt0;
            }
            s0 += n * 2;
        } else {
            D_801E9D80[s0 & 0xFFFF] = t1;
            D_801E9D81[s0 & 0xFFFF] = t0;
            s0 += 2;
        }
        a1 += 2;
        t1 = D_801F18E0[a1 & 0xFFFF];
        t0 = D_801F18E1[a1 & 0xFFFF];
    }
    D_801E9D80[s0 & 0xFFFF] = t1;
    D_801E9D81[s0 & (short)0xFFFF] = t0;
    s0 += 2;
    func_8003DE60(D_801E9500, (a1 + 2) & 0xFFFF, s0 & 0xFFFF);
    a0 = 0;
loop:
    D_801F18E0[a0] = D_801E9D80[a0];
    D_801F18E1[a0] = D_801E9D81[a0];
    v1 = D_801E9D80[a0];
    if (v1 != 0xFF) {
        a0 += 2;
        goto loop;
    }
    if (D_801E9D81[a0] != v1) {
        a0 += 2;
        goto loop;
    }
    a0 += 2;
}
