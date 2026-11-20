u8 func_80038D64(void *, s32);
u8 func_80038E1C(void *, s32);

s32 func_80038650(u8 *arg0, s32 arg1, u8 *arg2)
{
    u8 v;
    u8 s3;
    u8 *a3;
    u32 s4;
    union { u8 * pointer; unsigned int value; } __repair_phase_storage;
    register u8 *q;
    u8 c;
    u8 n;
    u8 b0;
    register u8 b1;
    u8 b2;
    

    s3 = func_80038D64(arg0, arg1);
    s4 = (s32)s3 & 0xFF;
    if (s4 == 0xFF)
    {
        v = func_80038D64(arg0, arg1) & 0xFF;
        if (v == 0x51)
        {
            *(s16 *)arg2 = 3;
            arg2[8] = s3;
            arg2[9] = v;
            arg2[0xB] = func_80038D64(arg0, arg1);
            arg2[0xC] = func_80038D64(arg0, arg1);
            arg2[0xD] = func_80038D64(arg0, arg1);
            (arg0 + arg1)[0xA8] = 0;
        }
        else if (v == 0x2F)
        {
            *(s32 *)(arg0 + 4) = *(s32 *)(arg0 + 4) ^ (1 << arg1);
            if (*(s32 *)(arg0 + 4) != 0)
            {
                *(s16 *)arg2 = 0x12;
            }
            else
            {
                *(s16 *)arg2 = 4;
            }
        }
        else if (v == 0x2E)
        {
            func_80038D64(arg0, arg1);
            func_80038D64(arg0, arg1);
            (arg0 + arg1)[0xA8] = 0;
            *(s16 *)arg2 = 0x13;
        }
        else if (v == 0x2D)
        {
            a3 = (void *) ((arg1 * 4) + (s32) arg0);
            __repair_phase_storage.pointer = *(u8 **)(a3 + 0x18);
            c = __repair_phase_storage.pointer[0];
            q = __repair_phase_storage.pointer + 1;
            n = q[0];
            if (n == 0)
            {
                *(u8 **)(a3 + 0x18) = __repair_phase_storage.pointer + 5;
                q[0] = c;
            }
            else
            {
                if (n != s4)
                {
                    q[0] = n - 1;
                }
                q++;
                b1 = *q++;
                b0 = *q++;
                b2 = *q++;
                *(u8 **)(a3 + 0x18) = q - ((b0 << 24) + (b1 << 16) + (b2 << 8) + ((u8)__repair_phase_storage.value));
                __repair_phase_storage.value = (u8)( *q++);
            }
            (arg0 + arg1)[0xA8] = 0;
            *(s16 *)arg2 = 0x14;
        }
    }
    else
    {
        *(s16 *)arg2 = 1;
        if (s3 & 0x80)
        {
            arg2[8] = s3;
            arg2[9] = func_80038D64(arg0, (s32)arg1);
            (arg0 + arg1)[0xA8] = s3;
        }
        else
        {
            arg2[8] = (arg0 + arg1)[0xA8];
            arg2[9] = s3;
        }
        v = arg2[8] & 0xF0;
        if (v != 0xC0 && v != 0xD0)
        {
            arg2[0xA] = func_80038D64(arg0, arg1);
            if ((arg2[8] & 0xF0) == 0x90)
            {
                *(s32 *)(arg2 + 0xC) = func_80038E1C(arg0, arg1);
            }
        }
        else
        {
            arg2[0xA] = 0;
        }
    }
    return 1;
}
