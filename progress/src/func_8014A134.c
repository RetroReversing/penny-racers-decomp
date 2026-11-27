extern f32 D_8011F308[];
extern f32 sPrimColorG[];
extern f32 sPrimColorB[];

void func_8014A134(u16 arg0, u16 arg1, s32 arg2) {
    s32 k = arg1 * 100;
    s32 i = arg0 * 100;
    *(f32 *)((u8 *)D_8011F308 + k) += (*(f32 *)((u8 *)D_8011F308 + i) - *(f32 *)((u8 *)D_8011F308 + k)) / (f32)arg2;
    *(f32 *)((u8 *)sPrimColorG + k) += (*(f32 *)((u8 *)sPrimColorG + i) - *(f32 *)((u8 *)sPrimColorG + k)) / (f32)arg2;
    *(f32 *)((u8 *)sPrimColorB + k) += (*(f32 *)((u8 *)sPrimColorB + i) - *(f32 *)((u8 *)sPrimColorB + k)) / (f32)arg2;
}
