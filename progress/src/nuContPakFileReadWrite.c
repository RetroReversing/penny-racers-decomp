extern int D_80046D6C;
extern char D_80092BE0[];
extern void osCreateMesgQueue(void *, void *, int);
extern int osRecvMesg(void *, int, int);
extern int osSendMesg(void *, void *, int);

struct NuMsg {
    short type;
    void *q;
    int a0;
    int a1;
    int a2;
    char c;
    int a3;
};

void nuContPakFileReadWrite(int arg0, int arg1, int arg2, int arg3, int arg4) {
    char sp10[0x18];
    struct NuMsg sp28;
    char sp48[4];

    if (D_80046D6C != 0) {
        osCreateMesgQueue(sp10, sp48, 1);
        sp28.a0 = arg0;
        sp28.type = 0x2004;
        sp28.q = sp10;
        sp28.a1 = arg1;
        sp28.a2 = arg2;
        sp28.c = (char) arg4;
        sp28.a3 = arg3;
        osSendMesg(D_80092BE0, &sp28, 1);
        osRecvMesg(sp10, 0, 1);
    }
}
