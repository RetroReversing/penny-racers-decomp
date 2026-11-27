extern s8 cursorY;
extern u16 D_801C6C10[];
extern s8 finishPos[];
extern s8 D_801C7063;
extern s8 cursorX;
extern u8 blockDirection;
extern u8 *trackInfo;

s32 func_801984DC(void)
{
    u8 a1;
    s32 b;
    s32 a2;

    b = cursorY;
    a1 = 0;
    if (b < 0x17)
    {
        a2 = cursorX;
        if (D_801C6C10[(b * 24) + a2] == 0xFFFF)
        {
            if (trackInfo[1] == 5)
            {
                if (finishPos[0] == a2)
                {
                    if (finishPos[1] == b + 1)
                    {
                        s32 a2_a1;
                        a2_a1 = blockDirection == 2;
                        a1 = a2_a1;
                        goto end;
                    }
                    if (finishPos[0] == cursorX && finishPos[1] == cursorY - 1)
                    {
                        if ((blockDirection == 1) | (blockDirection == 3))
                        {
                            a1 = 1;
                        }
                        goto end;
                    }
                }
                if (finishPos[0] == cursorX + 1 || finishPos[0] == cursorX - 1)
                {
                    if (D_801C7063 != cursorY)
                    {
                        a1 = 1;
                    }
                    else if ((blockDirection == 0) | (blockDirection == 2))
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
