s32 func_8002ADD0(void *, void *);
s32 func_80038340(s32, s32, s32 *, s32, s32);
extern s32 D_8006E780;
extern s32 D_8006FB38;
extern s32 D_8006FCAC;
void func_80027AB0(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_v1;
  *((s32 **) (((char *) arg0) + 0xC)) = &D_8006E780;
  ;
  *((&D_8006FCAC) + (arg2 * 0x184)) = func_80038340(0, 0, &D_8006E780, 1, arg1);
  func_8002ADD0((arg2 * 0x184) + (&D_8006FB38), arg0);
}

