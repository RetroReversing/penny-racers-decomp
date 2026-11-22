extern u16 D_801C6BB0[];
extern s8 D_801C6BB9;
extern s8 D_801C7062[];
extern s8 D_801C7068;
extern u8 D_801C7469;
extern void *D_801C7AB0;
s32 func_80198250(void)
{
  s32 a2;
  union 
  {
    u8 *pointer;
    s32 value;
  } __repair_phase_storage;
  __repair_phase_storage.pointer = &D_801C7469;
  __repair_phase_storage.value = 0;
  if (D_801C6BB9 != 0)
  {
    a2 = D_801C7068;
    if (D_801C6BB0[(D_801C6BB9 * 24) + a2] == 0xFFFF)
    {
      if (!(((u8 *) D_801C7AB0)[1] != 5))
      {
        if ((D_801C7062[0] == D_801C7068) && (D_801C7062[1] == (D_801C6BB9 + 1)))
        {
          __repair_phase_storage.value = ((*(&D_801C7469)) == 1) | ((*(&D_801C7469)) == 3);
        }
        else
          if ((D_801C7062[0] == D_801C7068) && (D_801C7062[1] == (D_801C6BB9 - 1)))
        {
          if ((*(&D_801C7469)) == 0)
          {
            __repair_phase_storage.value = 1;
          }
        }
        else
          if ((D_801C7062[0] == (D_801C7068 + 1)) || (D_801C7062[0] == (D_801C7068 - 1)))
        {
          if (D_801C7062[1] != D_801C6BB9)
          {
            __repair_phase_storage.value = 1;
          }
          else
            if (((*(&D_801C7469)) == 0) || ((*(&D_801C7469)) == 2))
          {
            if (a2 || __repair_phase_storage.value)
            {
              __repair_phase_storage.value = 1;
            }
            else
            {
              __repair_phase_storage.value = 1;
            }
          }
        }
        else
        {
          __repair_phase_storage.value = 1;
        }
      }
      else
      {
        __repair_phase_storage.value = 1;
      }
    }
  }
  return __repair_phase_storage.value & 0xFF;
}

