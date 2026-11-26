typedef struct { u16 f0,f2,f4,f6,f8,fA,fC,fE; u8 pad[0x10]; u16 f20,f22,f24,f26; } Rec;
extern Rec D_800DD2C0[];
void func_801AEEE8(void) {
    u8 i;
    D_800DD2C0[0].f0=1;
    D_800DD2C0[0].f2=0;
    D_800DD2C0[0].f4=1;
    D_800DD2C0[0].f6=2;
    D_800DD2C0[0].fC=0xF0;
    D_800DD2C0[0].fE=0xF0;
    D_800DD2C0[0].f8=0;
    D_800DD2C0[0].fA=0;
    D_800DD2C0[0].f20=0;
    D_800DD2C0[0].f22=0;
    D_800DD2C0[0].f24=0xF0;
    D_800DD2C0[0].f26=0xF0;
    D_800DD2C0[1].f0=1;
    D_800DD2C0[1].f2=3;
    D_800DD2C0[1].f4=4;
    D_800DD2C0[1].f6=5;
    D_800DD2C0[1].fC=0x78;
    D_800DD2C0[1].fE=0x5A;
    D_800DD2C0[1].f8=0x3C;
    D_800DD2C0[1].fA=0x4B;
    D_800DD2C0[1].f20=0x3C;
    D_800DD2C0[1].f22=0x4B;
    D_800DD2C0[1].f24=0xB4;
    D_800DD2C0[1].f26=0xA5;
    for (i = 2; i < 4; i++) {
        D_800DD2C0[i].f0 = 0;
    }
}
