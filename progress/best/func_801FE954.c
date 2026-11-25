s32 alSeqpStop();
s32 func_80027C90(s32, s32);
s32 func_80027D00(s32);
s32 func_80028100(s32, s32);
extern s32 D_8006FB38;
extern s8 D_801E995A;
extern s8 D_801E995B;
extern s32 D_801E9988;
extern s32 D_801E998C;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_801E999C;
extern s32 D_801E99A0;
extern s32 D_801E99A4;
extern s32 D_801E99A8;
extern s32 D_801E99AC;
extern s32 D_801E99B4;
extern s32 D_801E99C0;
extern s32 D_801E99C4;
extern f64 D_80203860;
extern f64 D_80203868;
extern s32 D_802038E0;
extern s32 D_802038E8;
extern s32 D_802038E9;
extern s32 D_802038EC;
extern s32 D_802038F0;
extern s32 D_802038F1;
extern s32 D_802038F2;
extern s32 D_802038F3;
extern s32 D_802038F4;
extern s32 D_802038F5;
extern s32 D_802038F6;
extern s32 D_802038F7;
extern s32 D_802038F8;
extern s32 D_802038FC;
extern s32 D_80203900;
extern s32 D_80203901;
extern s32 D_80203AA8;
extern u8 D_80203AAD;
extern s32 D_80203AB4;
extern s32 D_80203AC0;
extern s32 D_80203AC4;
extern s32 D_80203ACC;
void func_801FE954(void)
{
  s32 temp_a0;
  s32 temp_a0_2;
  volatile unsigned int temp_a0_3;
  s32 temp_a0_4;
  s32 temp_a0_5;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 var_a0;
  s32 var_a1;
  s32 var_a2;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v1_3;
  s32 var_v1_4;
  s32 var_v1_5;
  s8 var_v0_4;
  s8 var_v0_5;
  s8 var_v0_6;
  s8 var_v0_7;
  if (D_801E995B >= 0xB)
  {
    var_v0 = D_801E995B - 0xA;
    goto block_3;
  }
  var_a2 = D_801E995B + 0xA;
  if (D_801E995B < (-0xA))
  {
    block_3:
    var_a1 = (s32) (((f64) ((f32) var_a2)) * D_80203860);

  }
  else
  {
    var_a1 = 0;
  }
  if (D_801E995A >= 0xB)
  {
    var_v0_2 = D_801E995A - 0xA;
    goto block_8;
  }
  var_v0_2 = D_801E995A + 0xA;
  if (D_801E995A < (-0xA))
  {
    block_8:
    var_a2 = (s32) (((f64) ((f32) var_v0_2)) * D_80203868);

  }
  else
  {
    var_a2 = 0;
  }
  if (D_801E999C == 1)
  {
    D_80203AA8 ^= 1;
  }
  switch (D_80203AA8)
  {
    if (D_801E99A0 == 1)
    {
      var_v0_3 = D_80203ACC - 1;
      if (D_80203ACC == 0)
      {
        var_v0_3 = 0x19;
      }
      D_80203ACC = var_v0_3;
    }
    if (D_801E99A4 == 1)
    {
      if (D_80203ACC == 0x19)
      {
        D_80203ACC = 0;
      }
      else
      {
        D_80203ACC += 1;
      }
    }
    if (D_801E9990 == 1)
    {
      alSeqpStop(&D_8006FB38, (s8) var_a1, (s8) var_a2);
      func_80027C90(0, D_80203ACC);
      func_80027D00(0);
      *((s32 *) (((char *) (&D_802038E0)) + 0)) = 0;
      *((s32 *) (((char *) (&D_802038E0)) + (-4))) = 0;
      D_80203AC4 = D_80203ACC;
      var_a0 = 0;
      var_a1 = 0x40;
      var_v1 = 0 & 0xFFFF;
      do
      {
        temp_v0 = var_v1 * 0x1C;
        *((&D_802038E8) + temp_v0) = 0x40;
        *((&D_802038E9) + temp_v0) = 0;
        *((&D_802038EC) + temp_v0) = 0;
        *((&D_802038F0) + temp_v0) = 0;
        *((&D_802038F1) + temp_v0) = 0;
        *((&D_802038F2) + temp_v0) = 0;
        *((&D_802038F3) + temp_v0) = 0;
        *((&D_802038F4) + temp_v0) = 0;
        *((&D_802038F5) + temp_v0) = 0;
        *((&D_802038F6) + temp_v0) = 0;
        *((&D_802038F7) + temp_v0) = 0x40;
        *((&D_802038F8) + temp_v0) = 0;
        *((&D_802038FC) + temp_v0) = 0;
        *((&D_80203900) + temp_v0) = 0;
        *((&D_80203901) + temp_v0) = 0;
        var_a0 += 1;
        var_v1 = var_a0 & 0xFFFF;
      }
      while (((u32) (var_a0 & 0xFFFF)) < 0x10U);
    }
    if (D_801E9994 == 1)
    {
      alSeqpStop(&D_8006FB38, (s8) var_a1);
      D_80203AC4 = -1;
    }
    if (D_801E99C4 == 1)
    {
      func_80028100(0, 0xC8);
      D_80203AC4 = -1;
    }
    break;
    if (D_801E99A8 == 1)
    {
      D_80203AB4 += 1;
    }
    if ((D_801E99AC == 1) && (D_80203AB4 > 0))
    {
      D_80203AB4 -= 1;
    }
    if ((D_801E99A0 == 1) && (D_80203AAD != 0))
    {
      D_80203AAD -= 1;
    }
    if ((D_801E99A4 == 1) && (((u8) D_80203AAD) < 4U))
    {
      D_80203AAD += 1;
    }
    if (D_801E99B4 == 1)
    {
      temp_v1 = D_80203AB4 * 0x1C;
      if ((*((&D_802038F3) + temp_v1)) != 0)
      {
        if ((*((&D_802038F8) + temp_v1)) != 0)
        {
          *((&D_802038F8) + temp_v1) = 0;
        }
        else
        {
          *((&D_802038F8) + (D_80203AB4 * 0x1C)) = 0x7F;
        }
      }
      else
      {
        *((&D_802038F3) + (D_80203AB4 * 0x1C)) = 1;
        *((&D_802038F8) + (D_80203AB4 * 0x1C)) = 0;
      }
    }
    switch (D_80203AAD)
    {
      if (D_801E9988 == 1)
      {
        *((&D_802038F4) + (D_80203AB4 * 0x1C)) = 1;
        temp_v1_2 = D_80203AB4 * 0x1C;
        temp_a0 = *((&D_802038FC) + temp_v1_2);
        if (temp_a0 < 0xFF)
        {
          *((&D_802038FC) + temp_v1_2) = temp_a0 + 1;
        }
      }
      if (D_801E998C == 1)
      {
        *((&D_802038F4) + (D_80203AB4 * 0x1C)) = 1;
        temp_v1_3 = D_80203AB4 * 0x1C;
        temp_v0_2 = *((&D_802038FC) + temp_v1_3);
        if (temp_v0_2 > 0)
        {
          *((&D_802038FC) + temp_v1_3) = temp_v0_2 - 1;
        }
      }
      if (D_801E9994 == 1)
      {
        *((&D_802038F4) + (D_80203AB4 * 0x1C)) = 0;
      }
      break;
      if (((s8) var_a1) != 0)
      {
        *((&D_802038F3) + (D_80203AB4 * 0x1C)) = 1;
        var_v1_2 = D_80203AB4 * 0x1C;
        var_v0_4 = 0x7F;
        if (((*((&D_802038F8) + var_v1_2)) + ((s8) var_a1)) < 0x80)
        {
          temp_a0_2 = D_80203AB4 * 0x1C;
          if (((*((&D_802038F8) + temp_a0_2)) + ((s8) var_a1)) < 0)
          {
            *((&D_802038F8) + temp_a0_2) = 0;
          }
          else
          {
            var_v1_2 = D_80203AB4 * 0x1C;
            var_v0_4 = var_a1 + (*((&D_802038F8) + var_v1_2));
            goto block_62;
          }
        }
        else
        {
          block_62:
          *((&D_802038F8) + var_v1_2) = var_v0_4;

        }
      }
      if (D_801E9994 == 1)
      {
        *((&D_802038F3) + (D_80203AB4 * 0x1C)) = 0;
      }
      break;
      if (((s8) var_a2) != 0)
      {
        *((&D_802038F2) + (D_80203AB4 * 0x1C)) = 1;
        var_v1_3 = D_80203AB4 * 0x1C;
        var_v0_5 = 0x7F;
        if (((*((&D_802038F7) + var_v1_3)) + ((s8) var_a2)) < 0x80)
        {
          temp_a0_3 = D_80203AB4 * 0x1C;
          if (((*((&D_802038F7) + temp_a0_3)) + ((s8) var_a2)) < 0)
          {
            *((&D_802038F7) + temp_a0_3) = 0;
          }
          else
          {
            var_v1_3 = D_80203AB4 * 0x1C;
            var_v0_5 = var_a2 + (*((&D_802038F7) + var_v1_3));
            goto block_70;
          }
        }
        else
        {
          block_70:
          *((&D_802038F7) + var_v1_3) = var_v0_5;

        }
      }
      if (D_801E9994 == 1)
      {
        *((&D_802038F2) + (D_80203AB4 * 0x1C)) = 0;
      }
      break;
      if (((s8) var_a1) != 0)
      {
        *((&D_802038F5) + (D_80203AB4 * 0x1C)) = 1;
        var_v1_4 = D_80203AB4 * 0x1C;
        var_v0_6 = 0x7F;
        if (((*((&D_80203900) + var_v1_4)) + ((s8) var_a1)) < 0x80)
        {
          temp_a0_4 = D_80203AB4 * 0x1C;
          if (((*((&D_80203900) + temp_a0_4)) + ((s8) var_a1)) < 0)
          {
            *((&D_80203900) + temp_a0_4) = 0;
          }
          else
          {
            var_v1_4 = D_80203AB4 * 0x1C;
            var_v0_6 = var_a1 + (*((&D_80203900) + var_v1_4));
            goto block_78;
          }
        }
        else
        {
          block_78:
          *((&D_80203900) + var_v1_4) = var_v0_6;

        }
      }
      if (D_801E9994 == 1)
      {
        *((&D_802038F5) + (D_80203AB4 * 0x1C)) = 0;
      }
      break;
      if (((s8) var_a1) != 0)
      {
        *((&D_802038F6) + (D_80203AB4 * 0x1C)) = 1;
        var_v1_5 = D_80203AB4 * 0x1C;
        var_v0_7 = 0xFF;
        if (((*((&D_80203901) + var_v1_5)) + ((s8) var_a1)) < 0x100)
        {
          temp_a0_5 = D_80203AB4 * 0x1C;
          if (((*((&D_80203901) + temp_a0_5)) + ((s8) var_a1)) < 0)
          {
            *((&D_80203901) + temp_a0_5) = 0;
          }
          else
          {
            var_v1_5 = D_80203AB4 * 0x1C;
            var_v0_7 = var_a1 + (*((&D_80203901) + var_v1_5));
            goto block_86;
          }
        }
        else
        {
          block_86:
          *((&D_80203901) + var_v1_5) = var_v0_7;

        }
      }
      if (D_801E9994 == 1)
      {
        *((&D_802038F6) + (D_80203AB4 * 0x1C)) = 0;
      }
      break;
    }

    break;
  }

  if (D_801E99C0 == 1)
  {
    D_80203AC0 = D_801E99C0;
  }
}

