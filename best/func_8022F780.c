extern unsigned short D_80232840[];
extern unsigned short D_8006FAF0[];
extern unsigned int D_802CBF30[];
extern unsigned char D_8021E144;
extern unsigned int D_8006FB38[];
extern void alSeqpStop(void *);
extern void func_800294A0(void);
extern void func_8003DE60(void);
extern void func_8013D1A4(int);
extern void func_800DE41C(void);

void func_8022F780(unsigned short arg0)
{
    unsigned short s2 = arg0;
    unsigned int v;
    if (!(s2 == 0 || s2 >= 0x14)) {
    } else {
        s2 = 1;
    }
    while (D_80232840[s2] == 0) {
        s2 = s2 + 1;
        if (s2 >= 0x14) s2 = 1;
    }
    D_8006FAF0[0x10] = s2;
    v = D_802CBF30[s2];
    if (D_8021E144 != 1) {
        alSeqpStop(D_8006FB38);
    }
}
