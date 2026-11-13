void *func_800319A0(void *arg0, s32 arg1, s32 arg2) {
    void *var_v1;

    var_v1 = *(void **)((u8 *)arg0 + 0x64);
    while (var_v1 != NULL) {
        if (*((u8 *)var_v1 + 0x32) == (arg1 & 0xFF) && *((u8 *)var_v1 + 0x31) == (arg2 & 0xFF)) {
            if ((u32)(*((u8 *)var_v1 + 0x35) - 3) >= 2U) {
                return var_v1;
            }
        }
        var_v1 = *(void **)var_v1;
    }
    return NULL;
}
