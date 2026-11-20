s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8011F350;
extern s32 func_80163A38;

void func_80163960(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s16 temp_v1;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0x898);
    if (temp_a0 == 1) {
        temp_v1 = *(u16 *)((u8 *)arg0 + 0x560);
        if (!(temp_v1 & 8) && ((temp_v1 & 7) < 5)) {
            temp_v0 = func_800DE41C(0, 0, 3, 0, 0x20, temp_a0, 0, &func_80163A38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            if ((u32)((temp_v0 + 2) & 0xFFFF) >= 2U) {
                *(void **)(&D_8011F350 + ((temp_v0 & 0xFFFF) * 0x64)) = arg0;
            }
        }
    }
}
