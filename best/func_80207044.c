typedef struct
{
  u16 f0;
  u8 pad[98];
} Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern u8 D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern u8 D_8021E189;
extern u8 D_8021E180[];
extern s16 D_8021E1A0[];
extern s16 D_8021E1A2;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_8021AFDC;
extern s32 D_8021B060;
extern s32 func_8014A870(s32, s32, s32);
extern void func_8014B854(s32);
extern void func_80203DF8(s32, s32, s32, s32, s32);
extern void func_800DE38C(void);
extern void func_800DE2E0(void);
extern void func_80231C5C(void);
extern void func_801CF468(s32, s32, s32, s32);

void func_80207044(s32 arg0)
{
    u16 state;
    s32 r;
    s16 mode;
    u8 *p;

    state = D_8011F32E[arg0 & 0xFFFF].f0;
    if (state == 1) goto blockA;
    if (state == 0) goto blockB;
    if (state == 3) goto blockC;
    return;

blockB:
    D_8021E189 = 0;
    if (**(u8 **)(D_8011F350 + D_8018BC3C * 100) == 0)
    {
        D_8011F32E[arg0 & 0xFFFF].f0 = 1;
    }
    return;

blockC:
    if (**(u8 **)(D_8011F350 + D_8018BC3C * 100) != 0)
    {
        return;
    }
    if (D_8021E1A2 >= 2)
    {
        *(s16 *)((u8 *)&D_8021E1A2 - 0x16) = 9;
    }
    func_800DE38C();
    func_800DE2E0();
    func_80231C5C();
    func_801CF468(D_8018BC3C, 0, 0, 0);
    D_80168BB0 = (s32)&D_8021B060;
    return;

blockA:
    p = D_8021E180;
    *p = 0;
    r = func_8014A870(0x14, 7, 0);
    if (D_801E9990 == 1)
    {
        func_8014B854(0x3D);
        *p = 1;
    }
    else if (D_801E9994 == 1)
    {
        func_8014B854(0x3A);
        D_8021E1A0[0] = D_8021E1A0[0] - 1;
    }
    else
    {
        if (r & 8)
        {
            mode = D_8021E1A0[0];
            D_8021E1A0[mode] = D_8021E1A0[mode] + 1;
        }
        else if (r & 4)
        {
            mode = D_8021E1A0[0];
            D_8021E1A0[mode] = D_8021E1A0[mode] - 1;
        }
        else
        {
            goto clamp;
        }
        mode = D_8021E1A0[0];
        if (mode == 1 && D_8021E1A0[4] == 0)
        {
            goto clamp;
        }
        if (mode == 2 && D_8021E1A0[1] >= 2)
        {
            goto clamp;
        }
        if (mode == 3 && D_8021E1A0[6] == 0)
        {
            goto clamp;
        }
        func_8014B854(0x3B);
    }

clamp:
    mode = D_8021E1A0[0];
    if (D_8021E1A0[mode + 3] < D_8021E1A0[mode])
    {
        D_8021E1A0[mode] = 0;
    }
    else if (D_8021E1A0[mode] < 0)
    {
        D_8021E1A0[mode] = D_8021E1A0[mode + 3];
    }

    if (*p == 1)
    {
        u16 *c = (u16 *)(p + 0x20);
        *c = *c + 1;
        if ((s16)*c >= 4)
        {
            *(s16 *)(p + 0x20) = 3;
            func_80203DF8(2, 6, 0, 0, 0);
            D_8021AFDC = 4;
            D_8021B060 = 0xC;
            D_8011F32E[arg0 & 0xFFFF].f0 = 3;
            return;
        }
    }
    if (D_8021E1A0[0] <= 0)
    {
        D_8021E1A0[0] = 1;
        func_80203DF8(2, 6, 0, 0, 0);
        D_8021AFDC = 4;
        D_8021B060 = 2;
        D_8011F32E[arg0 & 0xFFFF].f0 = 3;
    }
}
