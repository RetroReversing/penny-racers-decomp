void func_8003191C(void *arg0, f32 arg1) {
    void *temp_v0;

    temp_v0 = *(void **)((s8 *)arg0 + 0x18);
    if (temp_v0 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x24) = (s32)(arg1 * *(f32 *)((s8 *)temp_v0 + 0x14));
    } else {
        *(s32 *)((s8 *)arg0 + 0x24) = 0x1E8;
    }
}
