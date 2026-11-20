typedef s32 M2C_UNK;
f32 __cosf(f32);
f32 __sinf(f32);
typedef struct { u16 f0; u8 pad[98]; } Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern M2C_UNK D_8011F33C;
extern M2C_UNK D_8011F340;
extern u32 D_801E99A0;
extern u32 D_801E99A4;
extern s32 D_801E99A8;
extern s32 D_801E99AC;
extern s32 D_801E99C4;
extern f32 D_801FFD20;
extern f32 D_801FFD24;
extern f32 D_801FFD28;
extern f32 D_801FFD2C;
extern f64 D_80203440;
extern f64 D_80203448;
extern f64 D_80203450;
extern f64 D_80203458;
extern f32 D_80203890;
extern f32 D_80203894;
extern f32 D_80203898;
extern M2C_UNK D_8020389C;
extern M2C_UNK D_80221080;
extern M2C_UNK D_80221084;
extern M2C_UNK D_80221088;
extern M2C_UNK D_8022108C;
extern M2C_UNK D_80221090;
extern M2C_UNK D_80221094;
extern u16 D_80233EC0;

void func_801FB300(s32 arg0) {
    f32 temp_fs0;
    f32 temp_fs3;
    f32 temp_fv0;
    f32 temp_fv1;
    s32 temp_v0;
    s32 temp_s0;
    s32 temp_a0;
    u16 temp_v1;

    temp_v1 = D_8011F32E[arg0 & 0xFFFF].f0;
    switch (temp_v1) {
    case 0:
        return;
    case 1:
        if (D_801E99A8 != 0) {
            temp_fv0 = D_801FFD28 + 1.0f;
            D_801FFD28 = temp_fv0;
            if (temp_fv0 >= 360.0f) {
                D_801FFD28 = temp_fv0 - 360.0f;
            }
        }
        return;
    }
}
