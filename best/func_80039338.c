extern void *D_800473B0;

void func_80039338(void **arg0) {
    char *p = D_800473B0;
    *arg0 = *(void **)(p + 0x2C);
    *(void ***)(p + 0x2C) = arg0;
}
