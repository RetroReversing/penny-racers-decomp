extern char D_801D5490[];
void func_801CA4DC(u8 *arg0, u8 *arg1, u16 arg2)
{
    s32 i;

    for (i = 0; i < arg2; i++) {
        arg1[i] = D_801D5490[arg0[i]];
    }
}

