s32 alEvtqPostEvent(s32, void *, s32);

typedef struct {
    u16 type;
    u16 pad0;
    s32 w;
    u8 a;
    u8 b;
    u8 c;
    u8 pad1[3];
} AlEvent;

void func_8002C2E0(s32 arg0, s32 arg1, s8 arg2) {
    AlEvent ev;

    ev.type = 2;
    ev.a = arg1 | 0xB0;
    ev.c = arg2;
    ev.w = 0;
    ev.b = 0xA;
    alEvtqPostEvent(arg0 + 0x48, &ev, 0);
}
