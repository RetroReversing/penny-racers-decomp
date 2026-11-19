void *alHeapDBAlloc(void *file, s32 line, void *hp, s32 num, s32 size);
void func_800346C0(void *);
extern u8 D_80046E00[];
extern u8 D_80046E68[];
extern u8 D_80046EF0[];
extern u8 D_80046F18[];
extern u8 D_80046F40[];
extern u8 D_80046F68[];
extern f64 D_8004A3C8;
extern f64 D_8004A3D0;

void n_alFxNew(void **arg0, u8 *arg1, s32 arg2)
{
    u8 *temp;
    u32 *tbl;
    u8 *v;
    u8 *e;
    u8 *q;
    
    u16 s1;
    u16 s4;
    u16 i;
    u16 a0;
    f32 x;
    f64 d;
    f64 g;
    s32 diff;
    f64 ft;

    temp = alHeapDBAlloc(0, 0, (void *)arg2, 1, 0x2C);
    *arg0 = temp;
    switch (arg1[0x1C])
    {
    case 1:
        tbl = (u32 *)D_80046E00;
        break;
    case 2:
        tbl = (u32 *)D_80046E68;
        break;
    case 3:
        tbl = (u32 *)D_80046EF0;
        break;
    case 4:
        tbl = (u32 *)D_80046F18;
        break;
    case 5:
        tbl = (u32 *)D_80046F40;
        break;
    case 6:
        tbl = *(u32 **)(arg1 + 0x20);
        break;
    default:
        tbl = (u32 *)D_80046F68;
        break;
    }
    *(u8 *)(temp + 0x24) = tbl[0];
    *(u32 *)(temp + 0x1C) = tbl[1];
    *(u8 **)(temp + 0x20) = alHeapDBAlloc(0, 0, (void *)arg2, *(u8 *)(temp + 0x24), 0x28);
    v = alHeapDBAlloc(0, 0, (void *)arg2, *(u32 *)(temp + 0x1C), 2);
    *(u8 **)(temp + 0x14) = v;
    *(u8 **)(temp + 0x18) = v;
    if (*(u32 *)(temp + 0x1C) != 0)
    {
        i = 0;
        do
        {
            ((u16 *)v)[i] = 0;
            i++;
        } while (i < *(u32 *)(temp + 0x1C));
    }
    s1 = 2;
    s4 = 0;
    if (*(u8 *)(temp + 0x24) != 0)
    {
        do
        {
            e = *(u8 **)(temp + 0x20) + s4 * 40;
            a0 = s1;
            *(u32 *)e = tbl[a0];
            *(u32 *)(e + 4) = tbl[(u16)(a0 + 1)];
            *(s16 *)(e + 0xA) = (s16)tbl[(u16)(a0 + 2)];
            *(s16 *)(e + 8) = (s16)tbl[(u16)(a0 + 3)];
            *(s16 *)(e + 0xC) = (s16)tbl[(u16)(a0 + 4)];
            s1 = (u16)(a0 + 5);
            if (tbl[s1] != 0)
            {
                x = (f32)(s32)tbl[s1] / 1000.0f;
                d = (f64)x;
                d = d + d;
                d = d / (f64)(*(s32 *)(arg1 + 0x18));
                diff = *(s32 *)(e + 4) - *(s32 *)e;
                ft = (f64)diff;
                *(f32 *)(e + 0x10) = (f32)d;
                g = (f64)(f32)(s32)tbl[(u16)(a0 + 6)] / D_8004A3C8;
                if (diff < 0)
                {
                    ft = ft + D_8004A3D0;
                }
                *(f32 *)(e + 0x14) = 1.0f;
                *(s32 *)(e + 0x18) = 0;
                *(f32 *)(e + 0x1C) = (f32)(g * ft);
                q = alHeapDBAlloc(0, 0, (void *)arg2, 1, 0x34);
                *(u8 **)(e + 0x24) = q;
                *(u8 **)(q + 0x14) = alHeapDBAlloc(0, 0, (void *)arg2, 1, 0x20);
                *(s32 *)(q + 0x20) = 0;
                *(s32 *)(q + 0x24) = 1;
                s1 = (u16)(a0 + 7);
            }
            else
            {
                *(u8 **)(e + 0x24) = 0;
                s1 = (u16)(a0 + 7);
            }
            if (tbl[s1] != 0)
            {
                q = alHeapDBAlloc(0, 0, (void *)arg2, 1, 0x30);
                *(u8 **)(e + 0x20) = q;
                *(u8 **)(q + 0x28) = alHeapDBAlloc(0, 0, (void *)arg2, 1, 8);
                *(u16 *)q = (u16)tbl[s1];
                func_800346C0(q);
                s1 = (u16)(s1 + 1);
            }
            else
            {
                *(u8 **)(e + 0x20) = 0;
                s1 = (u16)(s1 + 1);
            }
            s4++;
        } while (s4 < *(u8 *)(temp + 0x24));
    }
}
