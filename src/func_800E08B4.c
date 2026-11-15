extern f32 D_800E1EE0[];

void func_800E08B4(s32 arg0, s32 arg1, u16 *arg2) {
    s32 i;
    s32 j;
    f32 pivot;
    u16 tmp;

    pivot = D_800E1EE0[arg2[(arg0 + arg1) / 2]];
    i = arg0;
    j = arg1;
    for (;;) {
        while (D_800E1EE0[arg2[i]] < pivot) {
            i++;
        }
        while (pivot < D_800E1EE0[arg2[j]]) {
            j--;
        }
        if (i < j) {
            tmp = arg2[i];
            arg2[i] = arg2[j];
            arg2[j] = tmp;/*__repair_loop_weight*/do {
            i++;} while (0);
            j--;
        } else {
            break;
        }
    }
    if (arg0 < i - 1) {
        func_800E08B4(arg0, i - 1, arg2);
    }
    if (j + 1 < arg1) {
        func_800E08B4(j + 1, arg1, arg2);
    }
}
