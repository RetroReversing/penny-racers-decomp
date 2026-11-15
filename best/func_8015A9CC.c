f32 __sinf(f32, s32);
void func_80143D70(void);
void func_8015A960(void *, u8, u8, u8, s32, s32, s32, s32, s32, s32);
void func_801D651C(s32, s32);
s32 func_801FA38C(s32);
void func_802319E8(void);
void func_80231C5C(void);

typedef struct { u16 f0; u8 pad[98]; } Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u8 D_80046832;
extern s32 D_80046834;
extern s32 D_80168BB0;
extern s16 D_80301BE0;
extern f64 D_80183920;
extern f64 D_80183928;
extern f64 D_80183930;
extern f64 D_80183938;
extern f64 D_80183940;
extern f32 D_80183BB4;
extern f32 D_80183BB8;
extern u16 D_80183BBC;
extern u16 D_80183BBE;
extern u16 D_80183BC0;
extern u8 D_80187BE8;
extern u8 D_8018991C;
extern u8 D_8018BC34;
extern u8 D_8018D39F;
extern u8 D_8018D669;
extern u8 D_8018F5C0;
extern f32 D_8018D680[];
extern u8 D_80189928[];
extern f32 D_802210CC;
extern f32 D_802210D0;

void func_8015A9CC(s32 arg0) {
    u16 state = D_8011F32E[arg0 & 0xFFFF].f0;
    s32 i;
s32 __repair_phase_i;
    f32 f;
f32 __repair_f_1;

    switch (state) {
    case 0:
        D_80183BB8 = 10.0f;
        for (i = 0; i < 0x10; i++) {
            D_8018D680[(unsigned short)i] = (f32)((f64)i * D_80183920);
        }
        D_8018F5C0 = 0x64;
        D_8018D39F = 0x64;
        D_8018991C = 0x64;
        D_8018D669 = 0;
        D_8018BC34 = 0;
        D_80187BE8 = 0;
        D_80183BB4 = (f32)0x64;
        do { func_8015A960(D_80189928, 0, 0, 0, 0x64, 0x64, 0x64, -0x49, 0x49, 0x49); } while (0);
        D_80183BBC = 1;
        D_80183BBE = 0x384;
        D_80183BC0 = 0;
        D_80046832 = 1;
        D_8011F32E[arg0 & 0xFFFF].f0 = 0xA;
        break;
    case 1:
        D_8011F350[D_8018BC3C * 0x64] = 2;
        break;
    case 2:
        if (D_8011F350[D_8018BC3C * 0x64] == 0) {
            D_80046832 = 0;
            func_802319E8();
            func_80231C5C();
            func_80143D70();
            D_80168BB0 = 0;
            D_80301BE0 = 0;
        }
        if (D_802210D0 > 100.0f) {
            D_802210D0 -= 4.0f;
        }
        break;
    case 10:
        D_80183BC0 += 1;
        if (D_80183BBE == D_80183BC0) {
            D_8011F32E[arg0 & 0xFFFF].f0 = D_80183BBC;
        }
        if (D_80183BC0 == 1) {
            func_801D651C(7, 0x1D);
        }
        break;
    }

    __repair_phase_i = func_801FA38C(0) % 10;
    if (__repair_phase_i == 0 && D_80183BB8 > 8.0f) {
        D_80183BB8 -= 1.0f;
    }
    if (__repair_phase_i == 1 && D_80183BB8 < 12.0f) {
        D_80183BB8 += 1.0f;
    }
    for (i = 0; i < 0x10; i++) {
        f = D_8018D680[(unsigned short)i] + D_80183BB8;
        D_8018D680[(unsigned short)i] = f;
        if (f > 360.0f) {
            D_8018D680[(unsigned short)i] = f - 360.0f;
        }
    }
    if (D_80183BB4 < 255.0f) {
        __repair_f_1 = (f32)((f64)D_80183BB4 + D_80183940);
        D_80183BB4 = __repair_f_1;
        D_8018F5C0 = (u8)(s32)__repair_f_1;
        D_8018991C = D_8018F5C0;
        D_8018D39F = D_8018F5C0;
    }
    func_8015A960(D_80189928, D_8018D669, D_8018BC34, D_80187BE8, D_8018F5C0, D_8018D39F, D_8018991C, -0x49, 0x49, 0x49);
    if (state != 2) {
        if (D_802210D0 < 500.0f) {
            D_802210D0 += 1.0f;
        }
        if (D_802210CC > -280.0f) {
            D_802210CC -= 1.0f;
        }
    }
}
