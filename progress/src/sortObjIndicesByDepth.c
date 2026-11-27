extern f32 objDepth[];

void sortObjIndicesByDepth(s32 arg0, s32 arg1, u16 *arg2) {
    s32 i;
    s32 j;
    f32 pivot;
    u16 tmp;

    pivot = objDepth[arg2[(arg0 + arg1) / 2]];
    i = arg0;
    j = arg1;
    for (;;) {
        while (objDepth[arg2[i]] < pivot) {
            i++;
        }
        while (pivot < objDepth[arg2[j]]) {
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
        sortObjIndicesByDepth(arg0, i - 1, arg2);
    }
    if (j + 1 < arg1) {
        sortObjIndicesByDepth(j + 1, arg1, arg2);
    }
}
