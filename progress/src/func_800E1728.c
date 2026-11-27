extern u16 visibleObjList[];
extern u8 D_8011F2F0[];
extern u16 objListHead;
void func_800E1510(void);
void func_800E15CC(void);
void func_800E1688(s32);

void func_800E1728(void)
{
  u16 s0;
  s32 id;
  u8 *rec;
  u16 *tab;

  if (objListHead == 0xFFFF) return;
  func_800E1510();
  s0 = 0;
  func_800E15CC();
  for (; visibleObjList[s0] != 0xFFFF; )
  {
    tab = visibleObjList;
    id = tab[s0];
    rec = D_8011F2F0 + id * 100;
    if (rec[0xD] == 0) {
      if (rec[1] == 1) func_800E1688(id);
      else if (!((*(s32 *) rec) & 0x12)) (*(void (**)(u16)) (rec + 0x54))(visibleObjList[s0]);
    }
    s0++;
  }
}
