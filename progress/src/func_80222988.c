extern s16 slotObjIds;
extern s32 D_8022AD0C;

void func_80222988(void *arg0)
{
    s32 var_a1;
    u16 temp_v1;
    u8 temp_a1;
    char *temp_v0;
    void *var_v0;
    s32 temp_off;

    if (*((u8 *) ((char *) arg0 + 0x778)) == 0) {
        for (var_a1 = 0; var_a1 < 7; var_a1++) {
            temp_off = var_a1 * 0x8F0;
            temp_v1 = *((s16 *) ((char *) &slotObjIds + temp_off));
            if (temp_v1 != 0xFFFF) {
                if (temp_v1 != *((u16 *) ((char *) arg0 + 2))) {
                    temp_v0 = (char *) arg0 + var_a1 * 8;
                    *((f32 *) (temp_v0 + 0x5B4)) = *((f32 *) (temp_v0 + 0x5B4)) * *((f32 *) ((char *) arg0 + 0x5A4));
                }
            }
        }
        temp_a1 = *((u8 *) ((char *) arg0 + 0x5F2));
        if (*((s32 *) ((char *) arg0 + 0x59C)) > *((s32 *) ((char *) &D_8022AD0C + temp_a1 * 0x8F0))) {
            var_v0 = (char *) arg0 + temp_a1 * 8;
            (*((f32 *) ((char *) var_v0 + 0x5B8))) += (1.0f - (*((f32 *) ((char *) var_v0 + 0x5B8)))) * *((f32 *) ((char *) arg0 + 0x5A8)) * 0.5f;
        } else {
            var_v0 = (char *) arg0 + *((u8 *) ((char *) arg0 + 0x5F2)) * 8;
            (*((f32 *) ((char *) var_v0 + 0x5B8))) += (1.0f - (*((f32 *) ((char *) var_v0 + 0x5B8)))) * *((f32 *) ((char *) arg0 + 0x5A8));
        }
    }
}
