s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, s32, f32, s32, s32, s32, s32, f32, f32, f32);
void func_80129918(void *, s32, f32, s32, f32, f32, f32);
void func_8013E49C(u16);
s32 func_8013F1D4(s32, void *);
void func_801D7028(s32, s32);
extern u8 D_8011F340[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];

void func_80163588(u16 arg0) {
    u8 *obj;
    u8 *ctl;
    s32 idx = arg0 * 0x64;
    s32 i;
    s16 cnt;

    if (*(u8 *)(*(u8 **)(D_8011F340 + idx)) != 0) {
        return;
    }
    ctl = D_8011F2F0 + idx;
    obj = *(u8 **)(ctl + 0x60);
    cnt = *(s16 *)(obj + 0x14);
    if (cnt > 0) {
        cnt--;
        *(s16 *)(obj + 0x14) = cnt;
        if (cnt <= 0) {
            if (*(f32 *)(obj + 0xC) != 0.0f) {
                i = 0;
            }
        }
    }
}
