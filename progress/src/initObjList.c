extern s16 D_80126FF0;
extern s16 D_80126FF4;
extern u16 objListHead;
extern s16 D_8011F300;
extern s16 D_8011F302;
extern s16 D_8011F2F1;
extern s16 D_80126F9C;

void initObjList(void) {
    s32 var_a0;
    u32 temp_v0;

    D_80126FF0 = 0x140;
    D_80126FF4 = 0;
    objListHead = 0xFFFF;
    *(u16 *)((u8 *)&D_8011F300 + 0) = 0xFFFF;
    *(u16 *)((u8 *)&D_8011F300 + 2) = 1;
    *(u8 *)((u8 *)&D_8011F300 - 0xF) = 0;
    var_a0 = 1;
    do {
        temp_v0 = (((var_a0 * 2 + var_a0) << 3) + var_a0) * 4;
        *(u16 *)((u8 *)&D_8011F300 + temp_v0) = var_a0 - 1;
        *(u16 *)((u8 *)&D_8011F302 + temp_v0) = var_a0 + 1;
        *(u8 *)((u8 *)&D_8011F2F1 + temp_v0) = 0;
        var_a0 = var_a0 + 1;
    } while (var_a0 < 0x13F);
    *(u16 *)((u8 *)&D_80126F9C + 0) = 0x13E;
    *(u16 *)((u8 *)&D_80126F9C + 2) = 0xFFFF;
    *(u8 *)((u8 *)&D_80126F9C - 0xF) = 0;
}
