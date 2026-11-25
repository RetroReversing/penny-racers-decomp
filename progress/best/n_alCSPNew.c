s32 alEvtqNew();
s32 func_8002FF14();
s32 func_80031CA0();
s32 *func_80038340();
extern u8 D_80046DF4;
extern s32 func_8002AF40;
typedef struct 
{
  s16 v;
} Field_s16;
typedef struct 
{
  s32 v;
} Field_s32;
typedef struct 
{
  u8 v;
} Field_u8;
void n_alCSPNew(void *arg0, void *arg1)
{
  int __repair_literal;
  s32 *temp_v0;
  unsigned temp_s2;
  s32 var_a0;
  char *var_v1;
  temp_s2 = ((Field_s32 *) (((char *) arg1) + 0xC))->v;
  ((Field_s16 *) (((char *) arg0) + 0x30))->v = 0xFF;
  ((Field_s32 *) (((char *) arg0) + 0x24))->v = 0x1E8;
  ((Field_s32 *) (((char *) arg0) + 0x20))->v = 0;
  ((Field_s32 *) (((char *) arg0) + 0x18))->v = 0;
  ((Field_s32 *) (((char *) arg0) + 0x28))->v = 0;
  ((Field_s32 *) (((char *) arg0) + 0x2C))->v = 0;
  ((Field_s16 *) (((char *) arg0) + 0x32))->v = 0x7FFF;
  ((Field_s32 *) (((char *) arg0) + 0x14))->v = (s32) (*((s32 *) (&D_80046DF4)));
 do { ((Field_s32 *) (((char *) arg0) + 0x5C))->v = 0x3E80; ((Field_s32 *) (((char *) arg0) + 0x1C))->v = 0; ((Field_u8 *) (((char *) arg0) + 0x35))->v = ((Field_u8 *) (((char *) arg1) + 9))->v; } while (0);
  ((Field_s32 *) (((char *) arg0) + 0x70))->v = ((Field_s32 *) (((char *) arg1) + 0x10))->v;
  ((Field_s16 *) (((char *) arg0) + 0x38))->v = 9;
  ((Field_s32 *) (((char *) arg0) + 0x74))->v = ((Field_s32 *) (((char *) arg1) + 0x14))->v;
  ((Field_s32 *) (((char *) arg0) + 0x78))->v = ((Field_s32 *) (((char *) arg1) + 0x18))->v;
  ((Field_u8 *) (((char *) arg0) + 0x34))->v = ((Field_u8 *) (((char *) arg1) + 8))->v;
  *((s32 **) (((char *) arg0) + 0x60)) = func_80038340(0, 0, temp_s2, ((Field_u8 *) (((char *) arg1) + 8))->v, 0x10);
  func_80031CA0(arg0);
  temp_v0 = func_80038340(0, 0, temp_s2, ((Field_s32 *) (((char *) arg1) + 0))->v, 0x38);
  *((s32 **) (((char *) arg0) + 0x6C)) = NULL;
  var_a0 = 0;
  __repair_literal = 0;
  if (((Field_s32 *) (((char *) arg1) + 0))->v > __repair_literal)
  {
    var_v1 = (char *) temp_v0;
    do
    {
      *((s32 **) var_v1) = *((s32 **) (((char *) arg0) + 0x6C));
      *((s32 **) (((char *) arg0) + 0x6C)) = (s32 *) var_v1;
      var_a0 += 1;
      var_v1 += 0x38;
    }
    while (var_a0 < ((Field_s32 *) (((char *) arg1) + 0))->v);
  }
  ((Field_s32 *) (((char *) arg0) + 0x64))->v = 0;
  ((Field_s32 *) (((char *) arg0) + 0x68))->v = 0;
  alEvtqNew(((char *) arg0) + 0x48, func_80038340(0, 0, temp_s2, ((Field_s32 *) (((char *) arg1) + 4))->v, 0x1c), ((Field_s32 *) (((char *) arg1) + 4))->v);
  ((Field_s32 *) (((char *) arg0) + 0))->v = 0;
  *((s32 **) (((char *) arg0) + 8)) = (s32 *) (&func_8002AF40);
  *((void **) (((char *) arg0) + 4)) = arg0;
  func_8002FF14(arg0);
}
