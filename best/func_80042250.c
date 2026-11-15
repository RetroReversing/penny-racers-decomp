s32 func_80042250(s32 a0, s32 a1, s32 a2, s32 a3) {
    if (a0 < a2) {
        return 0;
    }
    if (a0 == a2) {
        if (a1 < a3) {
            return 0;
        }
        if (a1 == a3) {
            return 1;
        }
    }
    return 2;
}
