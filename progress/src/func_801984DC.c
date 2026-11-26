extern s8 D_801C6BB9;
extern u16 D_801C6C10[];
extern s8 D_801C7062[];
extern s8 D_801C7063;
extern s8 D_801C7068;
extern u8 D_801C7469;
extern u8 *D_801C7AB0;

s32 func_801984DC(void)
{
    u8 a1;
    s32 b;
    s32 a2;

    b = D_801C6BB9;
    a1 = 0;
    if (b < 0x17)
    {
        a2 = D_801C7068;
        if (D_801C6C10[(b * 24) + a2] == 0xFFFF)
        {
            if (D_801C7AB0[1] == 5)
            {
                if (D_801C7062[0] == a2)
                {
                    if (D_801C7062[1] == b + 1)
                    {
                        s32 a2_a1;
                        a2_a1 = D_801C7469 == 2;
                        a1 = a2_a1;
                        goto end;
                    }
                    if (D_801C7062[0] == D_801C7068 && D_801C7062[1] == D_801C6BB9 - 1)
                    {
                        if ((D_801C7469 == 1) | (D_801C7469 == 3))
                        {
                            a1 = 1;
                        }
                        goto end;
                    }
                }
                if (D_801C7062[0] == D_801C7068 + 1 || D_801C7062[0] == D_801C7068 - 1)
                {
                    if (D_801C7063 != D_801C6BB9)
                    {
                        a1 = 1;
                    }
                    else if ((D_801C7469 == 0) | (D_801C7469 == 2))
                    {
                        a1 = 1;
                    }
                }
                else
                {
                    a1 = 1;
                }
            }
            else
            {
                a1 = 1;
            }
        }
    }
end:
    return a1 & 0xFF;
}
