/* adapted from similar verified C in func_8002C370 in PENNY RACERS (matched), with its names changed by decompdecomp */
s32 func_8002D164(s32, s16 *, s32);

typedef struct {
    s16 a;
    s32 b;
    u8 c;
    u8 d;
    u8 e;
} Blk;

void func_8002C2E0(s32 arg0, s32 arg1, s8 arg2) {
    Blk blk;

    blk.a = 2;
    blk.b = 0;
    blk.c = arg1 | 0xC0;
    blk.d = arg2;
    blk.e = 0;
    func_8002D164(arg0 + 0x48, (s16 *)&blk, 0);
}
