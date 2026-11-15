s32 alEvtqPostEvent(s32, void *, s32);

typedef struct {
    s16 type;
    u8 pad[2];
    s8 a;
    s8 b;
} Ev;

void func_8002C330(s32 arg0, s8 arg1, s8 arg2) {
    Ev ev;
/* Inferred frame reservation; original purpose unknown. */
char __repair_stack_padding[8];

    ev.type = 0xC;
    ev.a = arg1;
    ev.b = arg2;
    alEvtqPostEvent(arg0 + 0x48, &ev, 0);
}
