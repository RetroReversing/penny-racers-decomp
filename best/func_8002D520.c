typedef struct {
    /* 0x00 */ s16 type;
    /* 0x02 */ u8 pad02[6];
    /* 0x08 */ u8 unk8;
    /* 0x09 */ u8 unk9;
    /* 0x0A */ u8 unkA;
    /* 0x0B */ u8 unkB;
    /* 0x0C */ u8 unkC;
    /* 0x0D */ u8 unkD;
    /* 0x0E */ u8 pad0E[2];
} Arg2;

typedef struct {
    /* 0x00 */ u8 pad00[4];
    /* 0x04 */ s32 mask;
    /* 0x08 */ u8 pad08[0x10];
    /* 0x18 */ u8 *ptr[8];
    /* 0x38 */ u8 pad38[0x70];
    /* 0xA8 */ u8 state[1];
} Arg0;

u8 func_8002DA28();
s32 func_8002DAE0();

s32 func_8002D520(Arg0 *arg0, s32 arg1, Arg2 *arg2) {
    u8 a;
    u8 b;
    s32 t;
    u8 *p;
    u8 *q;
    u8 *np;

    a = func_8002DA28(arg0, arg1);
    if (a == 0xFF) {
        b = func_8002DA28(arg0, arg1);
        if (b == 0x51) {
            arg2->type = 3;
            arg2->unk8 = a;
            arg2->unk9 = b;
            arg2->unkB = func_8002DA28(arg0, arg1);
            arg2->unkC = func_8002DA28(arg0, arg1);
            arg2->unkD = func_8002DA28(arg0, arg1);
            arg0->state[arg1] = 0;
        } else if (b == 0x2F) {
            t = arg0->mask ^ (1 << arg1);
            arg0->mask = t;
            if (t != 0) {
                arg2->type = 0x12;
            } else {
                arg2->type = 4;
            }
        } else if (b == 0x2E) {
            func_8002DA28(arg0, arg1);
            func_8002DA28(arg0, arg1);
            arg0->state[arg1] = 0;
            arg2->type = 0x13;
        } else if (b == 0x2D) {
            p = arg0->ptr[arg1];
            q = p + 1;
            if (*q == 0) {
                *q = p[0];
                np = q + 5;
            } else {
                if (*q != a) {
                    *q = *q - 1;
                }
                np = (q + 5) - ((q[1] << 24) + (q[2] << 16) + (q[3] << 8) + q[4]);
            }
            arg0->ptr[arg1] = np;
            arg0->state[arg1] = 0;
            arg2->type = 0x14;
        }
    } else {
        arg2->type = 1;
        if (a & 0x80) {
            arg2->unk8 = a;
            arg2->unk9 = func_8002DA28(arg0, arg1);
            arg0->state[arg1] = a;
        } else {
            arg2->unk9 = a;
            arg2->unk8 = arg0->state[arg1];
        }
        t = arg2->unk8 & 0xF0;
        if ((t != 0xC0) & (t != 0xD0)) {
            arg2->unkA = func_8002DA28(arg0, arg1);
            if ((arg2->unk8 & 0xF0) == 0x90) {
                *(s32 *)&arg2->unkC = func_8002DAE0(arg0, arg1);
            }
        } else {
            arg2->unkA = 0;
        }
    }
    return 1;
}
