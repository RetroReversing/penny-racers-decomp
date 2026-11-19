extern s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, f32, s32, f32, f32, f32);
extern s32 func_8013E364(void);
extern s32 func_8013E640(s32, s32, void *, s32, s32, f32, s32, f32, f32, f32, s32);
extern void func_801D7028(s32, s32);
extern void guMtxXFMF(void *, f32, f32, f32, f32 *, f32 *, f32 *);
extern s32 func_8013E49C(u16 arg0);
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern u8 D_8011F318[];
extern u8 D_8011F320[];
extern u8 D_8011F324[];
extern u8 D_8011F328[];
typedef struct { u32 f0; u8 pad[120]; } Slot_8018D6C4;
extern Slot_8018D6C4 D_8018D6C4[];
extern u8 D_8018D727[];
extern f32 D_8018D730[];
extern s32 D_8023943C;
extern s32 func_801614D8;

void func_80161180(u8 *arg0)
{
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    s32 r;
    s32 idx;
    s32 n;
    s32 st;
    u16 st2;

    if (*(s32 *)(arg0 + 0x898) == 1)
    {
        st = *(u16 *)(arg0 + 0x560);
        if ((st & 8) == 0 && (st & 7) < 5 && (u32)(*(u8 *)(arg0 + 0x8A1) - 2) >= 2)
        {
            r = func_8013E364();
            idx = r & 0xFFFF;
            if (idx != 0xFFFF)
            {
                n = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, &D_8023943C, &func_801614D8, 0,
                    *(f32 *)(D_8011F308 + *(u16 *)(arg0 + 2) * 0x64), *(f32 *)(D_8011F30C + *(u16 *)(arg0 + 2) * 0x64) + 15.0f,
                    *(f32 *)(D_8011F310 + *(u16 *)(arg0 + 2) * 0x64), 0, *(f32 *)(D_8011F318 + *(u16 *)(arg0 + 2) * 0x64), 0,
                    2.0f * *(f32 *)(D_8011F320 + *(u16 *)(arg0 + 2) * 0x64), 2.0f * *(f32 *)(D_8011F324 + *(u16 *)(arg0 + 2) * 0x64),
                    2.0f * *(f32 *)(D_8011F328 + *(u16 *)(arg0 + 2) * 0x64));
                if ((u32)((n + 2) & 0xFFFF) < 2)
                {
                    func_8013E49C(idx);
                    return;
                }
                st2 = *(u16 *)(arg0 + 0x560);
                *(u16 *)(arg0 + 0x560) = (st2 & 0xF8) | ((st2 & 7) + 1);
                do { guMtxXFMF(arg0 + 0x6D4, 0, 0, *(f32 *)(arg0 + 0x774) * 0.3f + 40.0f, &sp48, &sp4C, &sp50); } while (0);
                func_8013E640(idx, n & 0xFFFF, arg0, 0x40, 0, 15.0f, 0, sp48, sp4C, sp50, 0x12C);
                D_8018D6C4[idx].f0 = (u32)arg0;
                D_8018D727[idx * 0x7C + *(u16 *)(arg0 + 4)] = 1;
                D_8018D730[idx * 0x7C / 4] = 30.0f;
                do { func_801D7028(n & 0xFFFF, 0x2D); } while (0);
                if (*(s16 *)(arg0 + 0x55E) > 0)
                {
                    *(s16 *)(arg0 + 0x55E) = *(s16 *)(arg0 + 0x55E) - 1;
                }
            }
        }
    }
}
