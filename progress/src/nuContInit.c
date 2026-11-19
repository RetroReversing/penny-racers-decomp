extern s32 nuSiMgrInit(void);
extern void nuContMgrInit(void);
extern void func_80028C20(void);

s32 nuContInit(void)
{
  s32 temp_s0;

  temp_s0 = nuSiMgrInit();
  nuContMgrInit();
  func_80028C20();
  return temp_s0 & 0xFF;
}
