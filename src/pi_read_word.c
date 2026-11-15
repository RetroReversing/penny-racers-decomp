typedef struct {
    u8 pad00[5];
    u8 b5;
    u8 b6;
    u8 b7;
    u8 b8;
    u8 slot;
    u8 pad0a[2];
    s32 addr;
} PiDev;

extern PiDev *D_80048150[];
extern u8 D_8004AA80;
extern u8 D_8004AA84;
void func_800346B0(void *, void *, s32);

s32 pi_read_word(PiDev *arg0, s32 arg1, s32 *arg2) {
    PiDev *old;
    s32 slot;

    if (arg2 == NULL) {
        func_800346B0(&D_8004AA80, &D_8004AA84, 0x2B);
    }
    if (*(volatile u32 *)0xA4600010 & 3) {
        do {
        } while (*(volatile u32 *)0xA4600010 & 3);
    }
    slot = arg0->slot;
    old = D_80048150[slot];
    if (old != arg0) {
        if (slot == 0) {
            if (old->b5 != arg0->b5) {
                *(volatile u32 *)0xA4600014 = arg0->b5;
            }
            if (old->b6 != arg0->b6) {
                *(volatile u32 *)0xA460001C = arg0->b6;
            }
            if (old->b7 != arg0->b7) {
                *(volatile u32 *)0xA4600020 = arg0->b7;
            }
            if (old->b8 != arg0->b8) {
                *(volatile u32 *)0xA4600018 = arg0->b8;
            }
        } else {
            if (old->b5 != arg0->b5) {
                *(volatile u32 *)0xA4600024 = arg0->b5;
            }
            if (old->b6 != arg0->b6) {
                *(volatile u32 *)0xA460002C = arg0->b6;
            }
            if (old->b7 != arg0->b7) {
                *(volatile u32 *)0xA4600030 = arg0->b7;
            }
            if (old->b8 != arg0->b8) {
                *(volatile u32 *)0xA4600028 = arg0->b8;
            }
        }
        D_80048150[slot] = arg0;
    }
    *arg2 = *(volatile s32 *)((arg0->addr | arg1) | 0xA0000000);
    return 0;
}
