extern u8 D_801C5EA0;

typedef struct {
    s16 cur;
    u8 pad2;
    s8 max;
    s8 min;
    u8 pad5[0x16 - 5];
    s16 timer;
} State8021E18C;
extern State8021E18C D_8021E18C;

void func_8020E650(void)
{
    if (D_8021E18C.timer < 2 && (u8) func_80148230() == 2) {
        D_8021E18C.min = 0;
        D_8021E18C.max = 8;
    } else if (D_8021E18C.timer < 2 && ((u8) func_80148230() == 1 || (u8) func_80148230() == 0)) {
        D_8021E18C.min = 0;
        D_8021E18C.max = 0x10;
        if (D_801C5EA0 == 1) {
            D_8021E18C.max = 0x11;
        }
    } else if (D_8021E18C.timer >= 2) {
        D_8021E18C.min = 9;
        D_8021E18C.max = 0x10;
        if (D_801C5EA0 == 1) {
            D_8021E18C.max = 0x11;
        }
    }
    if (D_8021E18C.cur > D_8021E18C.max) {
        D_8021E18C.cur = D_8021E18C.min;
    } else if (D_8021E18C.cur < D_8021E18C.min) {
        D_8021E18C.cur = D_8021E18C.max;
    }
}
