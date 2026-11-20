extern u8 D_8021B00C;
extern u32 D_8021B128[];
typedef struct { u8 f0; u8 pad[8]; } Slot_8021E20B;
extern Slot_8021E20B D_8021E20B[];

void func_80203DA8(void) {
    s32 i;
    u32 *p;

    i = 0;
    p = D_8021B128;
    for (; i < 4; i++) {
        *(&D_8021B00C + i) = 0;
        p[i] = 0;
        D_8021E20B[i].f0 = 0;
    }
}
