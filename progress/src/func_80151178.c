void liftCopyFlags(s32 arg0);
extern s32 D_8011F334;
extern s32 D_8011F338;

void func_80151178(s32 arg0)
{
    s32 temp_a1;
    s32 var;
    f32 f;
    s32 idx;

    idx = arg0 & 0xFFFF;
    liftCopyFlags(idx);
    temp_a1 = idx * 100;
    f = *(f32 *)((s8 *)&D_8011F334 + temp_a1);
    *(f32 *)((s8 *)&D_8011F334 + temp_a1) = (f32)(u16)((u32)f + 1);
    if ((u16)(u32)*(f32 *)((s8 *)&D_8011F334 + (arg0 & 0xFFFF) * 100) < 5)
    {
        return;
    }
    var = (arg0 & 0xFFFF) * 100;
    *(s32 *)((s8 *)&D_8011F334 + var) = 0;
    temp_a1 = var;
    f = *(f32 *)((s8 *)&D_8011F338 + temp_a1);
    *(f32 *)((s8 *)&D_8011F338 + temp_a1) = (f32)(u16)((u32)f + 1);
    if ((u16)(u32)*(f32 *)((s8 *)&D_8011F338 + (arg0 & 0xFFFF) * 100) >= 9)
    {
        *(s32 *)((s8 *)&D_8011F338 + (arg0 & 0xFFFF) * 100) = 0;
    }
}
