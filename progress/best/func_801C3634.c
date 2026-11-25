extern signed char D_801C6BB0;
extern signed char D_801C6BB1;
extern signed char D_801C7062;
extern signed char D_801C7063;
s32 func_801C3DC8();
s32 func_801C407C();
s32 func_801C4344();
s32 func_801C45FC();
s32 func_801C48C8();
s32 func_801C4BD4();
s32 func_801C4EF4();
s32 func_801C5204();
u8 func_801C5528();
u8 func_801C5664();
extern s8 D_801C6BB9;
extern char D_801C6BE0[];
extern s8 D_801C7068;
extern char D_801C7084[];
extern u8 D_801C746C;
extern void *D_801C7AB0;
extern u8 D_801C7AB7;
extern char D_801C7AD8[];
void func_801C3634(s32 arg0, u8 *arg1, u8 *arg2)
{
  s8 sp10;
  s8 sp11;
  u8 sp12;
  s8 sp13;
  s8 sp14;
  u8 sp15;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s0_3;
  s32 temp_s0_4;
  s32 temp_s0_5;
  s32 var_a0;
  s32 var_a0_2;
  u32 var_v0;
  u8 temp_v0;
  u8 var_a1;
  u8 var_v0_2;
  u8 var_v0_3;
  temp_v0 = *((u8 *) (((char *) D_801C7AB0) + 2));
  *arg2 = temp_v0;
  *arg1 = temp_v0;
  do
  {
    sp15 = 4; sp12 = 4; sp13 = 0x18; sp10 = 0x18; sp14 = 0x18; sp11 = 0x18;
  }
  while (0);
  if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
  {
    var_a1 = *(D_801C7084 + ((arg0 & 0xFF) * 5));
    var_v0 = var_a1 & 0xFF;
  }
  else
  {
    var_a1 = (*(D_801C7084 + ((arg0 & 0xFF) * 5))) - 0x2E;
    var_v0 = var_a1 & 0xFF;
  }
  temp_s0 = arg0 & 0xFF;
  if (var_v0 < 5U)
  {
    func_801C407C(arg0 & 0xFF, &sp10, &sp11, &sp12);
    var_a0 = arg0 & 0xFF;
    goto block_31;
  }
  if (((u32) ((unsigned char) (var_a1 - 5))) < 5U)
  {
    func_801C3DC8(arg0 & 0xFF, &sp10, &sp11, &sp12);
    var_a0_2 = arg0 & 0xFF;
    goto block_26;
  }
  temp_s0_2 = arg0 & 0xFF;
  if (((u32) ((unsigned char) (var_a1 - 0xA))) < 3U)
  {
    func_801C407C(arg0 & 0xFF, &sp10, &sp11, &sp12);
    var_a0_2 = arg0 & 0xFF;
    goto block_26;
  }
  if (((u32) ((unsigned char) (var_a1 - 0xD))) < 3U)
  {
    func_801C45FC(arg0 & 0xFF, &sp10, &sp11, &sp12);
    var_a0_2 = arg0 & 0xFF;
    goto block_26;
  }
  temp_s0_3 = arg0 & 0xFF;
  if (((u32) ((unsigned char) (var_a1 - 0x10))) < 3U)
  {
    func_801C407C(temp_s0_3, &sp10, &sp11, &sp12);
    goto block_15;
  }
  if (((u32) ((unsigned char) (var_a1 - 0x13))) < 3U)
  {
    func_801C45FC(temp_s0_3, &sp10, &sp11, &sp12);
    block_15:
    func_801C3DC8(temp_s0_3, &sp13, &sp14, &sp15);

  }
  else
  {
    temp_s0_4 = arg0 & 0xFF;
    if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
    {
      func_801C4BD4(temp_s0_4, &sp10, &sp11, &sp12);
      var_a0 = temp_s0_4;
      goto block_31;
    }
    if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
    {
      func_801C407C(temp_s0_4, &sp10, &sp11, &sp12);
      func_801C5204(temp_s0_4, &sp13, &sp14, &sp15);
    }
    else
    {
      temp_s0_5 = arg0 & 0xFF;
      if (((u32) ((var_a1 - 0x20) & 0xFF)) < 5U)
      {
        func_801C48C8(temp_s0_5, &sp10, &sp11, &sp12);
        var_a0_2 = temp_s0_5;
        goto block_26;
      }
      if (((u32) ((((short) var_a1) - 0x25) & 0xFF)) < 5U)
      {
        func_801C3DC8(temp_s0_5, &sp10, &sp11, &sp12);
        func_801C4EF4(temp_s0_5, &sp13, &sp14, &sp15);
      }
      else
      {
        switch ((s8) var_a1)
        {
          case 0:
            if (1)
          {
            break;
          }

          case 42:
            var_a0_2 = arg0 & 0xFF;
            block_26:
          func_801C4344(var_a0_2, &sp13, &sp14, &sp15);

            break;

          case 43:
            func_801C3DC8(arg0 & 0xFF, &sp10, &sp11, &sp12);
            break;

          case 44:
            var_a0 = arg0 & 0xFF;
            block_31:
          func_801C45FC(var_a0, &sp13, &sp14, &sp15);

            break;

          case 45:
            func_801C407C(arg0 & 0xFF, &sp10, &sp11, &sp12);
            break;

        }

      }
    }
  }
  if ((((sp10 != 0x18) && (sp11 != 0x18)) && ((sp10 != 0x7F) || (sp11 != sp10))) && ((*((u16 *) (D_801C6BE0 + (((sp11 * 0x18) + sp10) * 2)))) != 0xFFFF))
  {
    if ((sp10 == D_801C7068) && (sp11 == D_801C6BB9))
    {
      if (sp13)
      {
        *arg1 = *(D_801C7AD8 + ((sp14 * 0x18) + sp13));
      }
      else
      {
        *arg1 = *(D_801C7AD8 + ((sp14 * 0x18) + sp13));
      }
    }
    else
      if ((sp10 == D_801C6BB0) && (sp11 == D_801C6BB1))
    {
      if ((*((u8 *) (((char *) D_801C7AB0) + 1))) == 5)
      {
        *arg1 = func_801C5528(&sp10, &sp11, sp12);
      }
      else
      {
        *arg1 = *(D_801C7AD8 + ((sp11 * 0x18) + sp10));
      }
      D_801C7AB7 = *arg1;
    }
    else
      if ((D_801C7062 == sp10) && (sp11 == D_801C7063))
    {
      if ((*((u8 *) (((char *) D_801C7AB0) + 1))) == 5)
      {
        *arg1 = func_801C5664(&sp10, &sp11, sp12);
      }
      else
      {
        *arg1 = *(D_801C7AD8 + ((sp11 * 0x18) + sp10));
      }
      D_801C746C = *arg1;
    }
    else
    {
      var_v0_2 = 0xFF;
      if (sp12 != 0xFF)
      {
        *arg1 = *(D_801C7AD8 + ((sp11 * 0x18) + sp10));
      }
      else
      {
        goto block_57;
      }
    }
  }
  else
  {
    var_v0_2 = *((u8 *) (((char *) D_801C7AB0) + 2));
    block_57:
    *arg1 = var_v0_2;

  }
  if ((((sp13 != 0x18) && (sp14 != 0x18)) && ((sp13 != 0x7F) || (sp14 != sp13))) && ((*((u16 *) (D_801C6BE0 + (((sp14 * 0x18) + sp13) * 2)))) != 0xFFFF))
  {
    if ((sp13 == D_801C7068) && (sp14 == D_801C6BB9))
    {
      *arg2 = *((u16 *) (D_801C7AD8 + ((sp11 * 0x18) + sp10)));
      return;
    }
    if ((D_801C6BB0 == sp13) && (sp14 == D_801C6BB1))
    {
      if ((*((u8 *) (((char *) D_801C7AB0) + 1))) == 5)
      {
        *arg2 = func_801C5528(&sp13, &sp14, sp15);
      }
      else
      {
        *arg2 = *(D_801C7AD8 + (((unsigned char) (sp14 * 0x18)) + sp13));
      }
      D_801C7AB7 = *arg2;
      return;
    }
    if ((D_801C7062 == sp13) && (sp14 == D_801C7063))
    {
      if ((*((u8 *) (((char *) D_801C7AB0) + 1))) == 5)
      {
        *arg2 = func_801C5664(&sp13, &sp14, sp15);
      }
      else
      {
        *arg2 = *(D_801C7AD8 + ((sp14 * 0x18) + sp13));
      }
      D_801C746C = *arg2;
      return;
    }
    var_v0_3 = 0xFF;
    if (sp15 != 0xFF)
    {
      *arg2 = *(D_801C7AD8 + ((sp14 * 0x18) + sp13));
      return;
    }
    goto block_81;
  }
  var_v0_3 = *((u8 *) (((char *) D_801C7AB0) + 2));
  block_81:
  *arg2 = var_v0_3;

}

