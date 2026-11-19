s32 alEvtqPostEvent(s32, s16 *, s32);

void func_8002C240(s32 arg0, s32 arg1, s8 arg2)
{
    struct {
        s16 type;
        s16 pad;
        s32 val;
        s8 a;
        s8 b;
        s8 c;
    } m;

    m.type = 2;
    m.a = arg1 | 0xB0;
    m.c = arg2;
    m.val = 0;
    m.b = 7;
    alEvtqPostEvent(arg0 + 0x48, &m.type, 0);
}
