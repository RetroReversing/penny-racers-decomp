extern f32 D_8011F2F0[];

void func_8013EB20(u16 arg0, f32 *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 *temp_v0;

    temp_v0 = (f32 *)((u8 *)D_8011F2F0 + arg0 * 0x64);
    arg1[2] = arg1[2] + arg2;
    arg1[3] = arg1[3] + arg3;
    arg1[4] = arg1[4] + arg4;
    temp_v0[6] = temp_v0[6] + arg1[2];
    temp_v0[7] = temp_v0[7] + arg1[3];
    temp_v0[8] = temp_v0[8] + arg1[4];
}
