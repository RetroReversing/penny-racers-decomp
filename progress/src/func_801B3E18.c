extern u8 D_8011F2F0[];
extern u8 racerTimerFlags[];

void func_801B3E18(u16 arg0)
{
    int i;
    int j;
    int k;

    i = (arg0 & 0xFFFF) * 100;
    if (D_8011F2F0[i] < 0x1E)
    {
        racerTimerFlags[i] -= 7;
    }
    else
    {
        j = (arg0 & 0xFFFF) * 100;
        if ((u8) (D_8011F2F0[j] - 0x1E) < 0x1E)
        {
            racerTimerFlags[j] += 7;
        }
    }
    k = (arg0 & 0xFFFF) * 100;
    D_8011F2F0[k] += 1;
    if (D_8011F2F0[k] == 0x3C)
    {
        D_8011F2F0[k] = 0;
    }
}
