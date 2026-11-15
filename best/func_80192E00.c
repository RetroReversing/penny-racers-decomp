extern s32 func_8019A31C(void);
extern void func_8014B854(s32);
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern s8 D_801C6B25;
extern s8 D_801C6BB0;
extern s8 D_801C7062;
extern s8 D_801C7469;
extern void *D_801C7AB0;
void func_80192E00(s8 arg0)
{
  s8 var_v0;
  s8 *temp_a1;
  void *p;
  if (!(arg0 & 0xFF))
  {
    if (func_8019A31C() & 1)
    {
      D_801C7469 = 0;
      p = D_801C7AB0;
      if ((*(((u8 *) p) + 1)) == 5)
      {
        temp_a1 = (&D_801C6BB0) + 2;
 do { *temp_a1 = 5; *((&D_801C7062) + 0) = *(temp_a1 - 2); } while (0);
        *((&D_801C7062) + 1) = (*(temp_a1 - 1)) + 1;
        *((&D_801C7062) + 2) = 5;
        if ((*((u8 *) p)) == 4)
        {
          *temp_a1 = 0x33;
          *((&D_801C7062) + 2) = 0x33;
        }
      }
      else
      {
        *((&D_801C6BB0) + 2) = 0x2B;
        if ((*((u8 *) p)) == 4)
        {
          *((&D_801C6BB0) + 2) = 0x59;
        }
      }
      D_801C6B23 = -1;
      D_801C6B22 = 0;
      D_801C6B25 = arg0;
      func_8014B854(0x3B);
    }
  }
  else
    if ((arg0 & 0xFF) == 1)
  {
    if (func_8019A31C() & 4)
    {
      D_801C7469 = 1;
      p = D_801C7AB0;
      if ((*(((u8 *) p) + 1)) == 5)
      {
        temp_a1 = (&D_801C6BB0) + 2;
        *temp_a1 = 0;
        *((&D_801C7062) + 0) = (*(temp_a1 - 2)) + 1;
        *((&D_801C7062) + 1) = *(temp_a1 - 1);
        *((&D_801C7062) + 2) = 0;
        var_v0 = -1;
        if ((*((u8 *) p)) == 4)
        {
          *temp_a1 = 0x2E;
          *((&D_801C7062) + 2) = 0x2E;
        }
      }
      else
      {
        *((&D_801C6BB0) + 2) = 0x2D;
        var_v0 = -1;
        if ((*((u8 *) p)) == 4)
        {
          *((&D_801C6BB0) + 2) = 0x5B;
        }
      }
      D_801C6B22 = var_v0;
      D_801C6B23 = 0;
      D_801C6B25 = arg0;
      func_8014B854(0x3B);
    }
  }
  else
    if ((arg0 & 0xFF) == 2)
  {
    if (func_8019A31C() & 2)
    {
      D_801C7469 = 2;
      p = D_801C7AB0;
      if ((*(((u8 *) p) + 1)) == 5)
      {
        temp_a1 = (&D_801C6BB0) + 2;
        *temp_a1 = 5;
        *((&D_801C7062) + 0) = *(temp_a1 - 2);
        *((&D_801C7062) + 1) = (*(temp_a1 - 1)) - 1;
        *((&D_801C7062) + 2) = 5;
        if ((*((u8 *) p)) == 4)
        {
          *temp_a1 = 0x33;
          *((&D_801C7062) + 2) = 0x33;
        }
      }
      else
      {
        *((&D_801C6BB0) + 2) = 0x2A;
        if ((*((u8 *) p)) == 4)
        {
          *((&D_801C6BB0) + 2) = 0x58;
        }
      }
      D_801C6B23 = 1;
      D_801C6B22 = 0;
      D_801C6B25 = arg0;
      func_8014B854(0x3B);
    }
  }
  else
    if (((arg0 & 0xFF) == 3) && (func_8019A31C() & 8))
  {
    D_801C7469 = 3;
    p = D_801C7AB0;
    if ((*(((u8 *) p) + 1)) == 5)
    {
      temp_a1 = (&D_801C6BB0) + 2;
      *temp_a1 = 0;
      *((&D_801C7062) + 0) = (*(temp_a1 - 2)) - 1;
      *((&D_801C7062) + 1) = *(temp_a1 - 1);
      *((&D_801C7062) + 2) = 0;
      var_v0 = 1;
      if ((*((u8 *) p)) == 4)
      {
        *temp_a1 = 0x2E;
        *((&D_801C7062) + 2) = 0x2E;
      }
    }
    else
    {
      *((&D_801C6BB0) + 2) = 0x2C;
      var_v0 = 1;
      if ((*((u8 *) p)) == 4)
      {
        *((&D_801C6BB0) + 2) = 0x5A;
      }
    }
    D_801C6B22 = var_v0;
    D_801C6B23 = 0;
    D_801C6B25 = arg0;
    func_8014B854(0x3B);
  }
}
