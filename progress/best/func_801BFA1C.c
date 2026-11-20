static __inline__ int __repair_inline(int a, int b) { return a < b; }
extern unsigned short func_800DE41C();
extern unsigned int D_8011F2F4;
extern unsigned char D_801C5E9D;
extern signed char D_801C6BAC;
extern unsigned char D_801C7469;
extern unsigned char D_801C7AB6;
extern unsigned int D_80315A10;

void func_801BFA1C(s32 arg0, s32 arg1) {
    u16 sp48[4];
    u16 sp4E;
    int i;
    for (i = 0; __repair_inline(i, 4); i++) {
        sp48[i] = 0xFFFF;
    }
    D_801C6BAC = 1;
    (void)arg1;
}
