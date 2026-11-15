s32 __vsPan(void *arg0, void *arg1) {
    s32 temp_v1;
    s32 var_v1;

    temp_v1 = (*(u8 *)(*(s32 *)((u8 *)arg0 + 0x20) + 0xC) - 0x40) + *(u8 *)(((*(u8 *)((u8 *)arg0 + 0x31) * 0x10) + *(s32 *)((u8 *)arg1 + 0x60)) + 7);
    var_v1 = temp_v1 & ((s32) ~temp_v1 >> 0x1F);
    if (var_v1 >= 0x80) {
        var_v1 = 0x7F;
    }
    return var_v1 & 0xFF;
}
