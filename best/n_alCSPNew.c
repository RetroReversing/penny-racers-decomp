s32 alEvtqNew();
s32 func_8002FF14();
s32 func_80031CA0();
s32 *func_80038340();
extern u8 D_80046DF4;
extern s32 func_8002AF40;
void n_alCSPNew(void *arg0, void *arg1)
{
  int __repair_literal;
  s32 *temp_v0;
  char *var_v1;
  s32 temp_s2;
  s32 var_a0;
  temp_s2 = *((s32 *) (((char *) arg1) + 0xC));
  *((s16 *) (((char *) arg0) + 0x30)) = 0xFF;
  *((s32 *) (((char *) arg0) + 0x24)) = 0x1E8;
 do { *((s32 *) (((char *) arg0) + 0x20)) = 0; *((s32 *) (((char *) arg0) + 0x18)) = 0; *((s32 *) (((char *) arg0) + 0x28)) = 0; *((s32 *) (((char *) arg0) + 0x2C)) = 0; *((s16 *) (((char *) arg0) + 0x32)) = 0x7FFF; *((s32 *) (((char *) arg0) + 0x14)) = (s32) D_80046DF4; *((s32 *) (((char *) arg0) + 0x5C)) = 0x3E80; *((s32 *) (((char *) arg0) + 0x1C)) = 0; *((u8 *) (((char *) arg0) + 0x35)) = (u8) (*((u8 *) (((char *) arg1) + 9))); *((s32 *) (((char *) arg0) + 0x70)) = (s32) (*((s32 *) (((char *) arg1) + 0x10))); *((s32 *) (((char *) arg0) + 0x74)) = (s32) (*((s32 *) (((char *) arg1) + 0x14))); } while (0);
  *((s16 *) (((char *) arg0) + 0x38)) = 9;
  *((s32 *) (((char *) arg0) + 0x78)) = (s32) (*((s32 *) (((char *) arg1) + 0x18)));
  *((u8 *) (((char *) arg0) + 0x34)) = (u8) (*((u8 *) (((char *) arg1) + 8)));
  *((s32 **) (((char *) arg0) + 0x60)) = func_80038340(0, 0, temp_s2, *((u8 *) (((char *) arg1) + 8)), 0x10);
  func_80031CA0(arg0);
  temp_v0 = func_80038340(0, 0, (*((s32 *) (((char *) arg1) + 0xC))), (u8) (*((s32 *) (((char *) arg1) + 0))), 0x38);
  *((s32 **) (((char *) arg0) + 0x6C)) = NULL;
  var_a0 = 0;
  __repair_literal = 0;
  if ((*((s32 *) (((char *) arg1) + 0))) > __repair_literal)
  {
    var_v1 = temp_v0;
    do
    {
      *((s32 *) var_v1) = *((s32 **) (((char *) arg0) + 0x6C));
      *((s32 **) (((char *) arg0) + 0x6C)) = var_v1;
      var_a0 += 1;
      var_v1 += 0x38;
    }
    while (var_a0 < (*((s32 *) (((char *) arg1) + 0))));
  }
  *((s32 *) (((char *) arg0) + 0x64)) = 0;
  *((s32 *) (((char *) arg0) + 0x68)) = 0;
  alEvtqNew(arg0 + 0x48, func_80038340(0, 0, temp_s2, (u8) (*((s32 *) (((char *) arg1) + 4)))), *((s32 *) (((char *) arg1) + 4)));
  *((s32 *) (((char *) arg0) + 0)) = 0;
  *((s32 **) (((char *) arg0) + 8)) = &func_8002AF40;
  *((void **) (((char *) arg0) + 4)) = arg0;
  func_8002FF14(arg0);
}
