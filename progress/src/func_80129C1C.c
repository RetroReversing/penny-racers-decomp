extern u8 D_8011F2F0[];
void func_80128880(void *, u8 *, f32, f32, s32, f32, f32, f32);

void func_80129C1C(void *arg0, f32 arg1, f32 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
    func_80128880(arg0, D_8011F2F0 + (*(u16 *)((u8 *)arg0 + 4) * 100), arg1, arg2, arg3, arg4, arg5, arg6);
}
