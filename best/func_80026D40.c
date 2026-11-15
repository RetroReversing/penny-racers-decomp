extern char D_8004A208[],D_8004A214[],D_8004A218[],D_8004A21C[],D_8004A220[];
void func_8003DE60();
typedef struct { u32 mask; u32 value; char *text; } FlagDesc;
void func_80026D40(u32 arg0, char *arg1, volatile FlagDesc *p) {
    s32 first = 1;
    func_8003DE60(D_8004A208, arg1, arg0);
    func_8003DE60(D_8004A214);
    while (p->mask != 0) {
        if ((arg0 & p->mask) == p->value) {
            if (first) first = 0;
            else func_8003DE60(D_8004A218);
            func_8003DE60(D_8004A21C, p->text);
        }
        p++;
    }
    func_8003DE60(D_8004A220);
}
