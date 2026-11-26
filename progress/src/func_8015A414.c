extern void func_801CA140(void);
extern void func_801CA468(void **, u8);
extern void func_801CC150(void **, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *, void *);
extern u8 D_8011F2FC[];
extern u16 D_8011F32E[];
extern s32 D_80175DD0;
extern s32 D_801760B8;
extern s32 D_801760E0;
extern s32 D_80176368;
extern s32 D_801763A0;
extern s32 D_80176628;
extern s32 D_80176660;
extern s32 D_801768E8;
extern s32 D_80176910;
extern s32 D_80176B98;
extern f32 D_80189C78;
extern u8 D_80189C7C;
extern u8 D_80189DC1;
extern u8 D_8018A148[];
extern s32 D_80220ED8;

void func_8015A414(void **arg0, u32 arg1)
{
    s32 off;
    u16 v;
    void *p;

    if (D_80189DC1 == 0) {
        return;
    }
    off = (arg1 & 0xFFFF) * 100;
    v = *(u16 *)((u8 *)D_8011F32E + off);
    if (((v != 0) & (v != 4)) && (*(u16 *)((u8 *)D_8011F32E + off) != 5)) {
        func_801CA140();
        p = *arg0;
        *arg0 = (char *)p + 8;
        *(s32 *)p = 0x06000000;
        *(s32 **)((char *)p + 4) = &D_80220ED8;
        func_801CA468(arg0, D_8011F2FC[off]);
        func_801CC150(arg0, 0x7F, (s16)(0x3F - (s32)D_80189C78), 0, 0, 0x40, 0x17, 0x40, 0x17, 0x40, 0x17, 0, 0, 0x13F, 0xEF, &D_80175DD0, &D_801760B8);
        func_801CA468(arg0, D_8018A148[0]);
        func_801CC150(arg0, 0x78, 0x5A, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_801760E0, &D_80176368);
        func_801CA468(arg0, D_8018A148[1]);
        func_801CC150(arg0, 0x78, 0x70, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_80176660, &D_801768E8);
        func_801CA468(arg0, D_8018A148[2]);
        func_801CC150(arg0, 0x78, 0x86, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_801763A0, &D_80176628);
        if (D_80189C7C == 1) {
            func_801CA468(arg0, D_8018A148[3]);
            func_801CC150(arg0, 0x78, 0x9C, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_80176910, &D_80176B98);
        }
    }
}
