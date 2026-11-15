typedef struct {
    u8 pad[0x64];
} Stride64;

extern f32 D_8011F308[];
extern f32 D_8011F30C[];
extern f32 D_8011F310[];
extern s32 D_8018D6C4[];
extern u8 D_8018D6D6[];
extern s32 D_801684D8;
extern s32 D_802395A8;
extern s32 D_802395DC;

s32 func_8013E364(void);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_8013E818(s32, s32, s32, f32, s32, s32, s32);
void func_8013E49C(s32, s32);
void func_8015D7F0(void);
void func_8015DC9C(void);
void func_8015DD80(void);
void func_8015E240(void);
void func_8015E404(void);
void func_8015E484(void);

void func_8015D410(s32 arg0, f32 arg1, s32 arg2, s8 arg3) {
    s32 s1;
    s32 off;
    s32 r;
    s32 idx;

    s1 = func_8013E364() & 0xFFFF;
    if (s1 == 0xFFFF) {
        return;
    }
    off = (arg0 & 0xFFFF) * 0x64;
    r = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, &D_801684D8, &func_8015D7F0, &func_8015E240,
                      *(f32 *)((u8 *)D_8011F308 + off), *(f32 *)((u8 *)D_8011F30C + off),
                      *(f32 *)((u8 *)D_8011F310 + off), 0, 0, 0, 1.0f, 1.0f, 1.0f);
    if ((u32)((r + 2) & 0xFFFF) < 2U) {
        goto fail;
    }
    idx = s1 & 0xFFFF;
    func_8013E818(idx, r & 0xFFFF, 0, arg1, 0, 0, 3);
    off = idx * 0x7C;
    *(s32 *)((u8 *)D_8018D6C4 + off) = arg2;
    *(u8 *)((u8 *)D_8018D6D6 + off) = arg3;

    s1 = func_8013E364() & 0xFFFF;
    if (s1 == 0xFFFF) {
        return;
    }
    off = (arg0 & 0xFFFF) * 0x64;
    r = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, &D_802395A8, &func_8015DC9C, &func_8015E404,
                      *(f32 *)((u8 *)D_8011F308 + off), *(f32 *)((u8 *)D_8011F30C + off),
                      *(f32 *)((u8 *)D_8011F310 + off), 0, 0, 0, 1.0f, 1.0f, 1.0f);
    if ((u32)((r + 2) & 0xFFFF) < 2U) {
        goto fail;
    }
    idx = s1 & 0xFFFF;
    func_8013E818(idx, r & 0xFFFF, 0, arg1, 0, 0, 0);
    off = idx * 0x7C;
    *(s32 *)((u8 *)D_8018D6C4 + off) = arg2;
    *(u8 *)((u8 *)D_8018D6D6 + off) = arg3;

    s1 = func_8013E364() & 0xFFFF;
    if (s1 == 0xFFFF) {
        return;
    }
    off = (arg0 & 0xFFFF) * 0x64;
    r = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, &D_802395DC, &func_8015DD80, &func_8015E484,
                      *(f32 *)((u8 *)D_8011F308 + off), *(f32 *)((u8 *)D_8011F30C + off),
                      *(f32 *)((u8 *)D_8011F310 + off), 0, 0, 0, 1.0f, 1.0f, 1.0f);
    if ((u32)((r + 2) & 0xFFFF) < 2U) {
        goto fail;
    }
    idx = s1 & 0xFFFF;
    func_8013E818(idx, r & 0xFFFF, 0, arg1, 0, 0, 0);
    off = idx * 0x7C;
    *(s32 *)((u8 *)D_8018D6C4 + off) = arg2;
    *(u8 *)((u8 *)D_8018D6D6 + off) = arg3;
    return;

fail:
    func_8013E49C(s1, r);
}
