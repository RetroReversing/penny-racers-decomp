u8 func_80038164(void *);
s32 func_800381F8(void);

typedef struct {
    s16 kind;
    s32 time;
    u8 f8;
    u8 f9;
    u8 fA;
    u8 fB;
    u8 fC;
    u8 fD;
} Ev;

typedef struct {
    u8 pad0[0xC];
    s32 clock;
    u8 pad1[0xA];
    u16 rs;
} Ctx;

#define CTX ((Ctx *)arg0)
#define EV ((Ev *)arg1)

void func_80037D48(void *arg0, void *arg1) {
    s32 delta;
    u8 b0;
    u8 b1;
    u8 t;

    delta = func_800381F8();
    CTX->clock += delta;
    b0 = func_80038164(arg0);
    if (b0 == 0xFF) {
        b1 = func_80038164(arg0);
        if (b1 == 0x51) {
            EV->kind = 3;
            EV->time = delta;
            EV->f8 = b0;
            EV->f9 = b1;
            EV->fA = func_80038164(arg0);
            EV->fB = func_80038164(arg0);
            EV->fC = func_80038164(arg0);
            EV->fD = func_80038164(arg0);
        } else if (b1 == 0x2F) {
            EV->kind = 4;
            EV->time = delta;
            EV->f8 = b0;
            EV->f9 = b1;
            EV->fA = func_80038164(arg0);
        } else {
            CTX->rs = 0;
            return;
        }
        CTX->rs = 0;
        return;
    }
    EV->kind = 1;
    EV->time = delta;
    if (b0 & 0x80) {
        EV->f8 = b0;
        EV->f9 = func_80038164(arg0);
        CTX->rs = b0 & 0xFF;
    } else {
        u16 rs_tmp = CTX->rs;
        EV->f9 = b0;
        EV->f8 = (u8)rs_tmp;
    }
    t = EV->f8 & 0xF0;
    if ((t != 0xC0) & (t != 0xD0)) {
        EV->fA = func_80038164(arg0);
    } else {
        EV->fA = 0;
    }
}
