typedef struct F8 {
    f32 f[8];
} F8;

extern u8 D_8011F32E[];
extern f32 D_80167FB8[];
extern u8 D_80167FBC[];
extern F8 D_801C6AC8;
extern f32 D_801C6B60[];
extern s16 D_801C6B80;
extern u8 D_801C6BAC;

f32 __sinf(f32);
void func_8013AE60(s32);

void func_801C1424(s32 arg0) {
    f32 *__base_D_80167FB8;
char *__repair_addr;

    F8 sp10;
    unsigned var_s3;
    u16 temp_v1;
    f32 temp_fv0;

    sp10 = D_801C6AC8;
    if (D_801C6BAC == 0) {
        func_8013AE60(arg0 & 0xFFFF);
    }
    temp_v1 = *(u16 *)(D_8011F32E + (arg0 & 0xFFFF) * 0x64);
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            return;
        }
        for (var_s3 = 0; var_s3 < 8; var_s3++) {
            temp_fv0 = D_801C6B60[(unsigned short)var_s3];
            if (temp_fv0 < 360.0f) {
                D_801C6B60[(unsigned short)var_s3] = temp_fv0 + 4.0f;
            } else {
                D_801C6B60[(unsigned short)var_s3] = temp_fv0 - 360.0f;
            }
        }
        for (var_s3 = 0; var_s3 < 8; var_s3++) {
            s32 v = (s32)(__sinf(D_801C6B60[(unsigned short)var_s3] * 3.1415927f / 180.0f) * sp10.f[var_s3]);
__base_D_80167FB8 = D_80167FB8;
    __repair_addr = (char *)((u8 *)__base_D_80167FB8 + (var_s3 + 8) * 0x10 + 4);

            *(s16 *)(__repair_addr) = (s16)v;
            *(s16 *)(D_80167FBC + var_s3 * 0x10) = (s16)v;
        }
        return;
    }
    for (var_s3 = 0; var_s3 < 8; var_s3++) {
        D_801C6B60[(unsigned short)var_s3] = (f32)var_s3 * 45.0f;
    }
    D_801C6B80 = 0;
    *(u16 *)(D_8011F32E + (arg0 & 0xFFFF) * 0x64) = 1;
}
