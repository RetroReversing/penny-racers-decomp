extern void *D_80046D80;
extern void *D_80046D84;
extern s32 D_80092C00;
extern s32 D_80065F70[];
extern s32 D_8006FE80[];

s32 nuScAddClient(s32 *, s32 *, s32);
s32 func_80033A90(s32 *, s32 *, s32);
s32 osRecvMesg(s32 *, s16 **, s32);

void func_80029AD8(void) {
    s32 sp10[4];
    s16 *sp20;
    s32 one;
    s32 two;
    s16 temp_v0;

    one = 1;
    two = 2;
    D_80046D80 = NULL;
    D_80046D84 = NULL;
    func_80033A90(D_8006FE80, D_80065F70, 8);
    nuScAddClient(sp10, D_8006FE80, 3);
loop_1:
    osRecvMesg(D_8006FE80, &sp20, 1);
    temp_v0 = *sp20;
    if (temp_v0 == one) {
        if (D_80046D80 != NULL) {
            ((void (*)(s32))D_80046D80)(D_80092C00);
        }
        goto loop_1;
    }
    if (temp_v0 != two) {
        goto loop_1;
    }
    if (D_80046D84 == NULL) {
        goto loop_1;
    }
    ((void (*)(void))D_80046D84)();
    goto loop_1;
}
