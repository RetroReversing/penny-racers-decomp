extern char D_8006C320[];
extern char D_8006C324[];
extern char contRetraceMesgQ[];
extern u8 contQueryData[];
extern u8 D_8006F9DB[];
extern s32 D_8006FEF8;
extern s32 D_80071F70;
extern char contSiMesgQ[];
extern s32 nuContMgr;
void nuSiCallBackAdd();
void nuContDataUnLock();
void nuContQueryRead();
void osCreateMesgQueue();
s32 nuContMgrInit(void)
{
  s32 var_a0;
  s32 var_a1;
  s32 var_v1;
  s32 var_a2;
  s32 *p;
  p = &D_8006FEF8;
  if ((*p) != 0)
  {
    return 0;
  }
  nuContDataUnLock();
  osCreateMesgQueue(contRetraceMesgQ, D_8006C320, 1);
  osCreateMesgQueue(contSiMesgQ, D_8006C324, 1);
  nuSiCallBackAdd(p - 1, &nuContMgr);
  nuContQueryRead();
  D_80071F70 = 0;
  var_a0 = 1;
  var_a1 = 0;
  var_a2 = 5;
  for (var_v1 = 0; var_v1 < 0x10; var_v1 += 4)
  {
    if (D_8006F9DB[var_v1] == 0)
    {
      if (((*((u16 *) (contQueryData + var_v1))) & 5) == var_a2)
      {
        var_a1 |= var_a0;
        D_80071F70 += 1;
      }
      var_a0 *= 2;
    }
  }
  return var_a1 & 0xFF;
}
