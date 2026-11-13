s16 *func_80038340(s32, s32, char *, s32, s32);
void func_800294A0(s32, s16 *, s32);
void func_80035B50(s16 *, s32);
extern s16 *D_80046C34;
extern s16 *D_80046C38;
extern char D_8006E780[];
extern s32 D_8006FEE4;

void func_80027DF0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *count;
    s32 i;
    s32 pad[1];

    count = &D_8006FEE4;
    D_80046C34 = func_80038340(0, 0, D_8006E780, 1, arg1);
    func_800294A0(arg0, D_80046C34, arg1);
    func_80035B50(D_80046C34, arg2);
    D_80046C38 = func_80038340(0, 0, D_8006E780, 1, *count * 2);
    i = 0;
    while (i < *count) {
        D_80046C38[i] = -1;
        i++;
    }
}
