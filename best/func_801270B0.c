extern f32 func_80127000(void *arg0, void *arg1);

s8 func_801270B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
int *__repair_home1 = &arg1;

    f32 r;
    s8 s;

    r = func_80127000(&arg0, &arg3);
    if (0.0f < r) {
        s = 1;
    }
    if (r == 0.0f) {
        s = -1;
    }
    if (r < 0.0f) {
        s = -1;
    }
    return s;
}
