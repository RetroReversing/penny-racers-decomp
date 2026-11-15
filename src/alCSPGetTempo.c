s32 alCSPGetTempo(void *arg0) {
    void *temp_v0;

    temp_v0 = *(void **)((u8 *)arg0 + 0x18);
    if (temp_v0 == NULL) {
        return 0;
    }
    return (s32) ((f32) *(s32 *)((u8 *)arg0 + 0x24) / *(f32 *)((u8 *)temp_v0 + 8));
}
