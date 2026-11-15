extern char D_8004A208[];
extern char D_8004A214[];
extern char D_8004A218[];
extern char D_8004A21C[];
extern char D_8004A220[];
void func_8003DE60();

void func_80026D40(s32 arg0, char *arg1, s32 *arg2) {
    s32 *p;
    s32 first;

    do { func_8003DE60(D_8004A208, arg1, arg0); } while (0);
    do { func_8003DE60(D_8004A214); } while (0);
    first = 1;
    p = arg2;
    while (p[0] != 0) {
        if ((arg0 & p[0]) == p[1]) {
            if (first) {
                first = 0;
            } else {
                func_8003DE60(D_8004A218);
            }
            func_8003DE60(D_8004A21C, p[2]);
        }
        p += 3;
    }
    func_8003DE60(D_8004A220);
}
