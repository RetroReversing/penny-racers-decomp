extern u8 D_8011F2F0[];
extern u8 D_8011F304[];
extern u8 D_8011F308[];
extern u8 D_8011F318[];
extern u8 sNodeTable[];
extern u8 D_80190C98[];
extern f64 D_8021DDB0;
extern f64 D_8021DDB8;
extern s8 menuInputLock;
extern s8 D_8021E231[];
extern u8 D_8021EECC[];
extern u8 D_8021F036[];
extern u8 D_8021F0A0[];
void func_8012AD20(s32 arg0, void *arg1, s32 arg2, u8 arg3);

void func_80210D88(s32 arg0)
{
    u16 idx = arg0 & 0xFFFF;
    s32 off = idx * 100;
    s32 v;
    s8 a3;
    u16 w;

    if (*(u8 *)(*(u8 **)(sNodeTable + off)) == 0) {
        *(f32 *)(D_8011F308 + off) = (f32)((f64)D_8011F2F0[off] * D_8021DDB0 + D_8021DDB8 - (f64)*(f32 *)D_8021EECC);
        v = menuInputLock;
        a3 = D_8021E231[(((v << 4) + v) << 4) + D_8011F2F0[off]];
        w = *(u16 *)(D_80190C98 + (a3 << 1));
        func_8012AD20(*(u16 *)(D_8011F304 + w * 100), D_8021F0A0 + (a3 << 5), a3 & 0xFF, D_8021F036[a3]);
        if (D_8011F2F0[off] == D_8021EECC[-0xC]) {
            f32 t;
            *(volatile f32 *)(D_8011F318 + off) = *(f32 *)(D_8011F318 + off) - 1.0f;
            t = *(volatile f32 *)(D_8011F318 + off);
            if (t < 0.0f) {
                *(f32 *)(D_8011F318 + off) = t + 360.0f;
            }
        } else {
            *(f32 *)(D_8011F318 + idx * 100) = 333.0f;
        }
    }
}
