extern u16 D_8011F068[];
extern u8 D_8011F2F0[];
extern u16 func_800E1850;

void func_800E1510(void);
void func_800E15CC(void);
void func_800E1688(void);

void func_800E1728(void)
{
    u16 s0;
    u16 v;
    u8 *rec;
    u16 *q;

    if (func_800E1850 == 0xFFFF)
    {
        return;
    }
    func_800E1510();
    s0 = 0;
    func_800E15CC();
    if (D_8011F068[0] == 0xFFFF)
    {
        return;
    }
    q = D_8011F068;
    do
    {
        rec = D_8011F2F0 + D_8011F068[s0] * 100;
        if (rec[0xD] != 0)
        {
            s0++;
        }
        else if (rec[1] == 1)
        {
            func_800E1688();
            s0++;
        }
        else if (*(s32 *) rec & 0x12)
        {
            s0++;
        }
        else
        {
            v = q[s0];
            s0++;
            ((void (*)(u16)) (*(void **) (rec + 0x54)))(v);
        }
        v = D_8011F068[s0];
    } while (v != 0xFFFF);
}
