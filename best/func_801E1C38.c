extern u8 D_801E87E0;
extern u8 D_801E87E1;
extern s8 D_801E87E3;
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
extern u8 D_800DA26A[];
extern s32 D_801E973C;
extern u8 D_801E94EC[];
extern u8 D_801E9500[];
extern u8 D_801E9D80[];
extern u8 D_801E9D81[];
extern u8 D_801F18E0[];
extern u8 D_801F18E1[];
void func_8003DE60(void *, s32, s32);

void func_801E1C38(void)
{
    s32 s0 = 0;
    s32 a1;
    u8 t0;
    u8 t1;
    u16 n;

    do { func_8003DE60(D_801E94EC, D_801E973C, 0); } while (0);
    D_801E87E3 = 1;
    D_801E87E1 = D_801F18E4;
    D_801E87E0 = D_801F18E4;
    *(u16 *)(D_800DA26A + 0xA3E) = D_801F18E5;
    *(u16 *)(D_800DA26A + 0xA40) = D_801F18E6;
    *(u16 *)(D_800DA26A + 0xA42) = D_801F18E7;
    *(u16 *)(D_800DA26A + 0xA44) = D_801F18E8;
    *(u16 *)(D_800DA26A + 0xA46) = D_801F18E9;
    *(u16 *)(D_800DA26A + 0xA48) = D_801F18EA;
    *(u16 *)(D_800DA26A + 0xA4A) = D_801F18EB;
    *(u16 *)(D_800DA26A + 0xA4C) = D_801F18EC;
    D_800DA26A[0xBA8 + *(u16 *)(D_800DA26A + 0xA3E)] = D_801F18ED;
    t1 = D_801F18EE;
    t0 = D_801F18EF;
    a1 = 0xE;
    while (!(t1 == 0xFF && t0 == 0xFF)) {
        if (t1 == 0xEE && t0 == 0xEE) {
            a1 += 2;
            n = *(u16 *)(D_801F18E0 + (u16)a1);
            if (n != 0) {
                s32 k;
                for (k = 0; k < n; k++) {
                    D_801E9D80[(u16)s0 + k * 2] = t1;
                    D_801E9D81[(u16)s0 + k * 2] = t0;
                }
            }
            s0 += n * 2;
        } else {
            D_801E9D80[(u16)s0] = t1;
            D_801E9D81[(u16)s0] = t0;
            s0 += 2;
        }
        a1 += 2;
        t1 = D_801F18E0[(u16)a1];
        t0 = D_801F18E1[(u16)a1];
    }
    func_8003DE60(D_801E9500, a1 + 2, s0 + 2);
}
