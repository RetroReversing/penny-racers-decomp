typedef struct {
    u8 key;
    u8 pad[99];
} SortItem;

extern SortItem D_8011F2FA[];

void func_800E0A00(s32 arg0, s32 arg1, u16 *arg2)
{
    s32 i;
    s32 j;
    u32 pivot;
    u16 tmp;

    i = arg0;
    pivot = D_8011F2FA[arg2[(arg0 + arg1) / 2]].key;
    j = arg1;
loop:
    while (D_8011F2FA[arg2[i]].key < pivot)
    {
        i++;
    }
    if (pivot < D_8011F2FA[arg2[j]].key)
    {
        do
        {
            j--;
        }
        while (pivot < D_8011F2FA[arg2[j]].key);
    }
    if (i < j)
    {
        tmp = arg2[i];
        arg2[i] = arg2[j];
        arg2[j] = tmp;
        i++;
        j--;
        goto loop;
    }
    if (arg0 < i - 1)
    {
        func_800E0A00(arg0, i - 1, arg2);
    }
    if (j + 1 < arg1)
    {
        func_800E0A00(j + 1, arg1, arg2);
    }
}
