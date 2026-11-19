s32 func_800339C0(s32);
void func_800382AC(void *, void **);
void func_800382CC(void *);
void func_80038390(void *, void *, s32);

void alEvtqPostEvent(void **arg0, void *arg1, s32 arg2) {
    s32 s1;
    s32 s2;
    s32 s5;
    void *s0;
    void **a1;
    void *a2;

    s5 = func_800339C0(1);
    s1 = arg2;
    s2 = 0;
    s0 = *arg0;
    if (s0 != NULL) {
        func_800382CC(s0);
        func_80038390(arg1, (u8 *)s0 + 0xC, 0x10);
        if (s1 == 0x7FFFFFFF) {
            s2 = -1;
        }
        a1 = arg0 + 2;
        if (a1 != NULL) {
            for (;;) {
                a2 = *a1;
                if (a2 == NULL) {
                    if (s2 != 0) {
                        ((s32 *)s0)[2] = 0;
                    } else {
                        ((s32 *)s0)[2] = s1;
                    }
                    func_800382AC(s0, a1);
                    break;
                }
                if (s1 < ((s32 *)a2)[2]) {
                    ((s32 *)s0)[2] = s1;
                    ((s32 *)a2)[2] -= s1;
                    func_800382AC(s0, a1);
                    break;
                }
                s1 -= ((s32 *)a2)[2];
                a1 = a2;
            }
        }
    }
    func_800339C0(s5);
}
