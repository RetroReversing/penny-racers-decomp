extern u8 D_8021E22F[];
extern s8 D_8021E230[];
void func_80149CC4(s32, s32, s32, void *);

void func_8014B410(void)
{
    u8 sp10[8];
    u8 *base;
    u8 *sp;
    s32 i, j, k, idx;

    base = D_8021E22F;
    sp = sp10;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 8; j++) {
            idx = 0x110 * i + 34 * j;
            sp[j] = base[idx + (s8)base[idx] + 2];
        }
        do { func_80149CC4(i, 1, 8, base + 0x110 * i); } while (0);
        for (j = 0; j < 8; j++) {
            idx = 0x110 * i + 34 * j;
            base[idx] = 0;
            k = 0;
            while (k < D_8021E230[idx]) {
                if ((s8)base[idx + k + 2] == sp[j]) {
                    base[idx] = k;
                    break;
                }
                k++;
            }
        }
    }
}
