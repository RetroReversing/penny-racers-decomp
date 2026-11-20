void *__mapVoice(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    void *temp_v1;

    temp_v1 = *(void **)(arg0 + 0x6C);
    if (temp_v1 != 0) {
        *(void **)(arg0 + 0x6C) = *(void **)temp_v1;
        *(void **)temp_v1 = 0;
        if (*(void **)(arg0 + 0x64) == 0) {
            *(void **)(arg0 + 0x64) = temp_v1;
        } else {
            **(void ***)(arg0 + 0x68) = temp_v1;
        }
        *(void **)(arg0 + 0x68) = temp_v1;
        *(s8 *)((u8 *)temp_v1 + 0x31) = arg3;
        *(s8 *)((u8 *)temp_v1 + 0x32) = arg1;
        *(s8 *)((u8 *)temp_v1 + 0x33) = arg2;
        *(void **)((u8 *)temp_v1 + 0x14) = temp_v1;
    }
    return temp_v1;
}
