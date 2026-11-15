typedef struct FlagEntry {
    u32 mask;
    u32 value;
    char *name;
} FlagEntry;

extern char D_8004A208[];
extern char D_8004A214[];
extern char D_8004A218[];
extern char D_8004A21C[];
extern char D_8004A220[];

void func_8003DE60(char *fmt, ...);

void func_80026D40(u32 flags, char *a1, FlagEntry *tbl) {
    s32 first = 1;

    func_8003DE60(D_8004A208, a1, tbl);
    func_8003DE60(D_8004A214, flags);
    while (tbl->mask != 0) {
        if ((flags & tbl->mask) == tbl->value) {
            if (!first) {
                func_8003DE60(D_8004A218);
            }
            first = 0;
            func_8003DE60(D_8004A21C, tbl->name);
        }
        tbl++;
    }
    func_8003DE60(D_8004A220);
}
