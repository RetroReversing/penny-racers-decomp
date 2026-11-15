extern u32 D_8004AAB0[];
extern u8 D_8004CE10[];
void func_80033C20(void);
void osCreateThread(void *t, s32 id, void (*entry)(void *), void *arg, void *sp, s32 p);
void osStartThread(void *t);
void func_80026E64(void *arg);

void main(void) {
    s32 n = 0;
    if (0) {
        u8 buf[n];
        buf[0] = 1;
    }
    func_80033C20();
    osCreateThread(D_8004AAB0, 1, func_80026E64, 0, D_8004CE10, 0xA);
    osStartThread(D_8004AAB0);
}
