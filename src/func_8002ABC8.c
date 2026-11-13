extern s32 *D_80046DF4;

void func_8002ABC8(s32 *arg0)
{
    s32 *temp;
    temp = D_80046DF4;
    *arg0 = temp[14];
    temp[14] = arg0;
}
