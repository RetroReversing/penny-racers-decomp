typedef struct {
    u8 d[16];
} Digits;

extern Digits D_801D596C;
void drawText();

void func_801CE6E0(u32 *arg0, u32 a1, u32 a2, u16 a3, u32 a4, u8 a5, u32 a6) {
    Digits digits;
    u8 buf[9];
    u32 val;
    s32 n;
    u32 t;
    u8 cnt;
    u32 l1;
    u32 l4;
    l4 = a4;
    t = a6;
    l1 = a1;
    cnt = a5;
    digits = D_801D596C;
    val = *arg0;
    n = 8;
    buf[8] = 0;
    do {
        n--;
        buf[n] = digits.d[t & 0xF];
        t >>= 4;
        cnt--;
    } while (cnt != 0);
    drawText(&val, (u16)l1, (u16)a2, a3, l4, &buf[n]);
    *arg0 = val;
}
