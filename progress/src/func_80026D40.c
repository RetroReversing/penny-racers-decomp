extern char D_8004A208[],D_8004A214[],D_8004A218[],D_8004A21C[],D_8004A220[];
void debugPrintf();
typedef struct { u32 mask; u32 value; char *text; } FlagDesc;
void func_80026D40(u32 arg0, char *arg1, FlagDesc *p) {
    s32 first = 1;
    debugPrintf(D_8004A208, arg1, arg0);
    debugPrintf(D_8004A214);
    while (p->mask != 0) {
        if ((arg0 & p->mask) == p->value) {
            if (first) first = 0;
            else debugPrintf(D_8004A218);
            debugPrintf(D_8004A21C, p->text);
        }
        p++;
    }
    debugPrintf(D_8004A220);
}
