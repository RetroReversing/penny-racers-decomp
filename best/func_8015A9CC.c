typedef s32 M2C_UNK;
f32 __sinf(f32);
typedef struct { u16 f0; u8 pad[98]; } Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern u8 D_8018F5C0;
extern u8 D_8018D39F;
extern u8 D_8018991C;
extern u8 D_8018D669;
extern u8 D_8018BC34;
extern u8 D_80187BE8;
extern f32 D_80183BB8;
extern f32 D_80183BB4;
extern f64 D_80183920;
extern M2C_UNK D_8018D680;
extern u8 D_80046832;
extern u16 D_80183BBC;
extern u16 D_80183BBE;
extern u16 D_80183BC0;
extern M2C_UNK D_80189928;
void func_8015A960(M2C_UNK *, u8, u8, u8, s32, s32, s32, s32, s32, s32);

void func_8015A9CC(s32 arg0) {
    s32 i;
    u16 temp_v1 = D_8011F32E[arg0 & 0xFFFF].f0;
    if (temp_v1 == 0) {
        D_80183BB8 = 10.0f;
        for (i = 0; i < 0x10; i++) {
            *((f32 *)&D_8018D680 + i) = (f32) ((f64) i * D_80183920);
        }
        D_8018F5C0 = 0x64;
        D_8018D39F = 0x64;
        D_8018991C = 0x64;
        D_8018D669 = 0;
        D_8018BC34 = 0;
        D_80187BE8 = 0;
        D_80183BB4 = (f32) 0x64;
        do { func_8015A960(&D_80189928, 0U, 0U, 0U, 0x64, 0x64, 0x64, -0x49, 0x49, 0x49); } while (0);
        D_80183BBC = 1;
        D_80183BBE = 0x384;
        D_80183BC0 = 0;
        D_80046832 = 1;
        D_8011F32E[arg0 & 0xFFFF].f0 = 0xA;
    }
}
