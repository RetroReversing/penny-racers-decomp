extern u32 D_8022A720;
extern u32 D_8022E620;

void func_8022976C(s32 arg0, s32 arg1, s32 arg2) {
    u8 *ids;
    f32 *keys;
    f32 pivot;
    s32 i;
    s32 j;
    u8 tmp;
    f32 ftmp;

    keys = (f32 *)(((arg0 & 0xFFFF) * 0x18) + (u8 *)&D_8022E620);
    ids = ((arg0 & 0xFFFF) * 6) + (u8 *)&D_8022A720;
    pivot = keys[((s32)((arg1 & 0xFFFF) + (arg2 & 0xFFFF))) >> 1];
    i = arg1 & 0xFFFF;
    j = arg2 & 0xFFFF;
    do {
        while (keys[i & 0xFFFF] < pivot) {
            i++;
        }
        while (pivot < keys[j & 0xFFFF]) {
            j--;
        }
        if ((i & 0xFFFF) < (j & 0xFFFF)) {
            tmp = ids[i & 0xFFFF];
            ids[i & 0xFFFF] = ids[j & 0xFFFF];
            ids[j & 0xFFFF] = tmp;
            ftmp = keys[i & 0xFFFF];
            keys[i & 0xFFFF] = keys[j & 0xFFFF];
            keys[j & 0xFFFF] = ftmp;
            i++;
            j--;
        } else {
            break;
        }
    } while (1);
    if ((arg1 & 0xFFFF) < ((i & 0xFFFF) - 1)) {
        func_8022976C(arg0 & 0xFFFF, arg1 & 0xFFFF, (i - 1) & 0xFFFF);
    }
    if (((j & 0xFFFF) + 1) < (arg2 & 0xFFFF)) {
        func_8022976C(arg0 & 0xFFFF, (j + 1) & 0xFFFF, arg2 & 0xFFFF);
    }
}
