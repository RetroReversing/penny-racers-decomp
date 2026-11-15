extern u8 D_800DE080[];
extern u8 D_8011F2F0[];
extern u8 D_80190CB2[];
extern u8 D_801D4390[];
extern u8 D_8021C840[];
extern u8 D_8021D334[];
extern u8 D_801CF4C8[];
extern u8 D_8021CA80[];
extern u8 D_8021CA81[];
extern u8 D_8021CA82[];
extern u8 D_8021C994[];
extern u8 D_80203080[];
extern u8 D_8018D140[];

void *func_801CA140(s32 a0, s32 a1, s32 a2);
void func_801CA494(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4);
void func_801CABF4(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7);

void func_8021A334(s32 arg0)
{
    u32 *dl;
    u8 *s1;
    s32 s0;
    s32 s3;
    s32 s4;
    s32 s5;
    u16 a1;
    u16 a2;

    dl = *(u32 **)(D_800DE080 + 0x64);
    *(u32 **)(D_800DE080 + 0x64) = dl + 2;
    dl[0] = 0xED000000;
    dl[1] = 0x005003C0;

    s5 = 0;
    s4 = 0xFF;
    s3 = 0;
    a1 = 0;
    s1 = (u8 *)func_801CA140(0, 0, 0);
}
