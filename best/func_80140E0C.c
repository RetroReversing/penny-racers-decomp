void func_8013AE60(s32 arg0);
void func_8013F1D4(s32 arg0, void *arg1);
void func_8013F44C(s32 arg0, void *arg1);
void func_801D7028(s32 arg0, s32 arg1);

extern u8 D_8011F2F0[];
extern u16 D_8011F32E[];
extern u16 D_8011F330[];
extern u8 D_8011F350[];

void func_80140E0C(u32 arg0) {
    u8 *base;
    u8 *obj;
    s32 i;

    base = D_8011F2F0 + ((u16)arg0) * 0x64;
    obj = *(u8 **)(D_8011F350 + ((u16)arg0) * 0x64);
    func_8013AE60((u16)arg0);
    switch (D_8011F32E[((u16)arg0) * 50]) {
    case 0:
        if (--D_8011F330[(arg0 & 0xFFFF) * 50] == 0) {
            D_8011F330[(arg0 & 0xFFFF) * 50] = 0xA;
            D_8011F32E[(arg0 & 0xFFFF) * 50] = 1;
            func_801D7028(arg0 & 0xFFFF, 0x23);
        }
        break;
    case 1:
        *(f32 *)(base + 0x1C) += 4.0f;
        if (--D_8011F330[(arg0 & 0xFFFF) * 50] == 0) {
            D_8011F330[(arg0 & 0xFFFF) * 50] = 0xA;
            D_8011F32E[(arg0 & 0xFFFF) * 50] = 2;
        }
        func_8013F1D4(arg0 & 0xFFFF, obj);
        for (i = 0; i < 7; i++) {
            obj[0x67 + i] = 0;
        }
        break;
    case 2:
        if (--D_8011F330[(arg0 & 0xFFFF) * 50] == 0) {
            D_8011F330[(arg0 & 0xFFFF) * 50] = 0xA;
            D_8011F32E[(arg0 & 0xFFFF) * 50] = 3;
            func_801D7028(arg0 & 0xFFFF, 0x23);
        } else {
            func_8013F44C(arg0 & 0xFFFF, obj);
        }
        break;
    case 3:
        *(f32 *)(base + 0x1C) -= 4.0f;
        if (--D_8011F330[(arg0 & 0xFFFF) * 50] == 0) {
            D_8011F330[(arg0 & 0xFFFF) * 50] = 0xA;
            D_8011F32E[(arg0 & 0xFFFF) * 50] = 4;
        }
        func_8013F44C(arg0 & 0xFFFF, obj);
        break;
    case 4:
        if (--D_8011F330[(arg0 & 0xFFFF) * 50] == 0) {
            D_8011F330[(arg0 & 0xFFFF) * 50] = 0xA;
            D_8011F32E[(arg0 & 0xFFFF) * 50] = 5;
            func_801D7028(arg0 & 0xFFFF, 0x23);
        }
        break;
    case 5:
        *(f32 *)(base + 0x1C) += 4.0f;
        if (--D_8011F330[(arg0 & 0xFFFF) * 50] == 0) {
            D_8011F330[(arg0 & 0xFFFF) * 50] = 0xA;
            D_8011F32E[(arg0 & 0xFFFF) * 50] = 6;
        }
        func_8013F1D4(arg0 & 0xFFFF, obj);
        for (i = 0; i < 7; i++) {
            obj[0x67 + i] = 0;
        }
        break;
    case 6:
        if (--D_8011F330[(arg0 & 0xFFFF) * 50] == 0) {
            D_8011F330[(arg0 & 0xFFFF) * 50] = 0xA;
            D_8011F32E[(arg0 & 0xFFFF) * 50] = 7;
            func_801D7028(arg0 & 0xFFFF, 0x23);
        } else {
            func_8013F44C(arg0 & 0xFFFF, obj);
        }
        break;
    case 7:
        *(f32 *)(base + 0x1C) -= 4.0f;
        if (--D_8011F330[(arg0 & 0xFFFF) * 50] == 0) {
            D_8011F330[(arg0 & 0xFFFF) * 50] = 0x64;
            D_8011F32E[(arg0 & 0xFFFF) * 50] = 0;
        }
        func_8013F44C(arg0 & 0xFFFF, obj);
        break;
    }
}
