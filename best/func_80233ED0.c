s32 func_8003DE60(s32 *, s32);
s32 func_80230EFC(void *);
extern s32 D_8006FB14;
extern s32 D_8011F32E;
extern s8 D_80167E62;
extern s32 D_8022A770;
extern s32 D_80236ED4;
extern s32 D_80236F10;
extern s32 D_80236F20;
extern s8 D_80236F50;
extern s32 D_80237058;
extern s32 D_80237600;
extern s32 D_8023760E;
extern s8 D_8023761C;
extern s32 D_80237632;
extern s32 D_80237694;
void func_80233ED0(s32 arg0)
{
  s32 *var_a0_2;
  s16 *temp_a0_2;
  s16 *temp_a0_4;
  s16 *temp_a1;
  s16 *temp_a1_2;
  s16 temp_a0;
  s16 temp_a0_3;
  s16 temp_v0;
  s16 temp_v0_5;
  s16 temp_v1_2;
  s32 temp_a0_5;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 temp_v1_11;
  s32 var_a0_3;
  s32 var_a1;
  s32 var_s1;
  s32 var_s1_2;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_5;
  u16 temp_a1_3;
  u16 temp_a1_4;
  u16 temp_v1;
  u16 var_v0_4;
  u32 var_a0;
  void *temp_s0;
  void *temp_v0_2;
  void *temp_v1_10;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  void *temp_v1_9;
  temp_v1 = *((&D_8011F32E) + ((arg0 & 0xFFFF) * 0x64));
  if (temp_v1 != 0)
  {
    var_s1 = 0;
    if (temp_v1 != 1)
    {
      return;
    }
    var_a0 = 0 & 0xFFFF;
    do
    {
      temp_s0 = (var_a0 * 0x8F0) + (&D_8022A770);
      if (((*((u16 *) (((char *) temp_s0) + 2))) != 0xFFFF) & (var_a0 < 6U))
      {
        temp_v0 = *((var_a0 * 2) + (&D_80237058));
        if (!(temp_v0 != 0))
        {
          temp_v0_5 = *((s16 *) (((char *) temp_s0) + 0x594));
          if (temp_v0_5 != 0)
          {
            var_v0_5 = (var_s1 & 0xFFFF) * 2;
            *(var_v0_5 + (&D_8023760E)) = temp_v0_5;
            goto block_15;
          }
          if ((*((u8 *) (((char *) (&D_8006FB14)) + 4))) == 1)
          {
            var_v0_5 = (var_s1 & 0xFFFF) * 2;
            *(var_v0_5 + (&D_8023760E)) = 1;
            block_15:
            *(var_v0_5 + (&D_80237058)) = 1;

          }
          goto block_46;
        }
        else
          if (temp_v0 != 1)
        {
          var_s1 += 1;
        }
        else
        {
          temp_a1 = ((var_s1 & 0xFFFF) * 2) + (&D_8023760E);
          temp_v1_2 = *((s16 *) (((char *) temp_s0) + 0x594));
          if ((*temp_a1) < temp_v1_2)
          {
            *temp_a1 = temp_v1_2;
          }
          temp_a1_2 = ((var_s1 & 0xFFFF) * 2) + (&D_8023760E);
          temp_a0 = *temp_a1_2;
          if (temp_a0 < 0xA)
          {
            temp_v1_3 = temp_s0 + (temp_a0 * 5);
            *((u8 *) (((char *) temp_v1_3) + 0x565)) = (u8) ((*((u8 *) (((char *) temp_v1_3) + 0x565))) + 1);
            temp_v1_4 = temp_s0 + ((*temp_a1_2) * 5);
            if (((u8) (*((u8 *) (((char *) temp_v1_4) + 0x565)))) >= 0x3CU)
            {
              *((u8 *) (((char *) temp_v1_4) + 0x565)) = 0U;
              { char *__repair_store_address = (char *)temp_s0; __repair_store_address += ((*temp_a1_2) * 5); *(s8 *)(__repair_store_address + 0x566) = 0; }
              temp_v1_5 = temp_s0 + ((*temp_a1_2) * 5);
              *((u8 *) (((char *) temp_v1_5) + 0x564)) = (u8) ((*((u8 *) (((char *) temp_v1_5) + 0x564))) + 1);
              temp_v1_6 = temp_s0 + ((*temp_a1_2) * 5);
              var_v0 = var_s1 & 0xFFFF;
              if (((u8) (*((u8 *) (((char *) temp_v1_6) + 0x564)))) >= 0x3CU)
              {
                *((u8 *) (((char *) temp_v1_6) + 0x564)) = 0U;
                temp_v1_7 = temp_s0 + ((*temp_a1_2) * 5);
                *((u8 *) (((char *) temp_v1_7) + 0x563)) = (u8) ((*((u8 *) (((char *) temp_v1_7) + 0x563))) + 1);
                temp_v1_8 = temp_s0 + ((*temp_a1_2) * 5);
                var_v0 = var_s1 & 0xFFFF;
                if (((u8) (*((u8 *) (((char *) temp_v1_8) + 0x563)))) >= 0x3CU)
                {
                  *((u8 *) (((char *) temp_v1_8) + 0x563)) = 0U;
                  temp_v1_9 = temp_s0 + ((*temp_a1_2) * 5);
                  *((u8 *) (((char *) temp_v1_9) + 0x562)) = (u8) ((*((u8 *) (((char *) temp_v1_9) + 0x562))) + 1);
                  goto block_24;
                }
              }
            }
            else
            {
              temp_v0_2 = temp_s0 + ((*(((var_s1 & 0xFFFF) * 2) + (&D_8023760E))) * 5);
              *((u8 *) (((char *) temp_v0_2) + 0x566)) = (u8) (*((&D_80236ED4) + (*((u8 *) (((char *) temp_v0_2) + 0x565)))));
              block_24:
              var_v0 = var_s1 & 0xFFFF;

            }
            temp_a0_2 = (var_v0 * 2) + (&D_8023760E);
            temp_v1_10 = temp_s0 + ((*temp_a0_2) * 5);
            var_v0_2 = var_s1 & 0xFFFF;
            if ((*((u8 *) (((char *) temp_v1_10) + 0x562))) != 0)
            {
              *((s8 *) (((char *) temp_v1_10) + 0x565)) = 0x3B;
              *((s8 *) (((char *) (temp_s0 + ((*temp_a0_2) * 5))) + 0x566)) = 0x63;
              *((s8 *) (((char *) (temp_s0 + ((*temp_a0_2) * 5))) + 0x563)) = 0x3B;
              *((s8 *) (((char *) (temp_s0 + ((*temp_a0_2) * 5))) + 0x564)) = 0x3B;
              *((s8 *) (((char *) (temp_s0 + ((*temp_a0_2) * 5))) + 0x562)) = 1;
              var_v0_2 = var_s1 & 0xFFFF;
            }
            temp_v0_3 = var_v0_2 * 2;
            temp_a0_3 = *(temp_v0_3 + (&D_8023760E));
            if ((*(temp_v0_3 + (&D_80237600))) != temp_a0_3)
            {
              var_v0_3 = var_s1 & 0xFFFF;
              if (temp_a0_3 < 5)
              {
                temp_a1_3 = *((u16 *) (((char *) temp_s0) + 6));
                var_v0_4 = temp_a1_3 & 0xFFF7;
                if ((!(temp_a1_3 & 8)) && ((var_v0_4 = temp_a1_3 & 0xFFF7, (temp_a0_3 < 2) == 0)))
                {
                  temp_a1_4 = temp_a1_3 | 0x40;
                  *((u16 *) (((char *) temp_s0) + 6)) = temp_a1_4;
                  var_a0_2 = &D_80236F10;
                  var_a1 = temp_a1_4 & 0x48;
                }
                else
                {
                  *((u16 *) (((char *) temp_s0) + 6)) = var_v0_4;
                  var_a0_2 = &D_80236F20;
                  var_a1 = temp_a1_3 & 0x40;
                }
                func_8003DE60(var_a0_2, var_a1);
                var_a0_3 = var_s1 & 0xFFFF;
                if ((*(((var_s1 & 0xFFFF) * 2) + (&D_8023760E))) >= 2)
                {
                  func_80230EFC(temp_s0);
                  var_a0_3 = var_s1 & 0xFFFF;
                }
                temp_a0_4 = (var_a0_3 * 2) + (&D_80237600);
                *((u8 *) (((char *) temp_s0) + 0x566)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x566))) + (*((u8 *) (((char *) (temp_s0 + ((*temp_a0_4) * 5))) + 0x566))));
                *((u8 *) (((char *) temp_s0) + 0x564)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x564))) + (*((u8 *) (((char *) (temp_s0 + ((*temp_a0_4) * 5))) + 0x564))));
                *((u8 *) (((char *) temp_s0) + 0x563)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x563))) + (*((u8 *) (((char *) (temp_s0 + ((*temp_a0_4) * 5))) + 0x563))));
                *((u8 *) (((char *) temp_s0) + 0x562)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x562))) + (*((u8 *) (((char *) (temp_s0 + ((*temp_a0_4) * 5))) + 0x562))));
                loop_37:
                if (((u8) (*((u8 *) (((char *) temp_s0) + 0x566)))) >= 0x64U)
                {
                  *((u8 *) (((char *) temp_s0) + 0x566)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x566))) - 0x64);
                  *((u8 *) (((char *) temp_s0) + 0x564)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x564))) + 1);
                  goto loop_37;
                }

                loop_40:
                if (((u8) (*((u8 *) (((char *) temp_s0) + 0x564)))) >= 0x3CU)
                {
                  *((u8 *) (((char *) temp_s0) + 0x564)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x564))) - 0x3C);
                  *((u8 *) (((char *) temp_s0) + 0x563)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x563))) + 1);
                  goto loop_40;
                }

                loop_43:
                if (((u8) (*((u8 *) (((char *) temp_s0) + 0x563)))) >= 0x3CU)
                {
                  *((u8 *) (((char *) temp_s0) + 0x563)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x563))) - 0x3C);
                  *((u8 *) (((char *) temp_s0) + 0x562)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0x562))) + 1);
                  goto loop_43;
                }

                goto block_44;
              }
            }
            else
            {
              goto block_44;
            }
          }
          else
          {
            block_44:
            var_v0_3 = var_s1 & 0xFFFF;

          }
          temp_v0_4 = var_v0_3 * 2;
          *(temp_v0_4 + (&D_80237600)) = *(temp_v0_4 + (&D_8023760E));
          goto block_46;
        }
      }
      else
      {
        block_46:
        var_s1 += 1;

      }
      var_a0 = var_s1 & 0xFFFF;
    }
    while (((u32) (var_s1 & 0xFFFF)) < 7U);
    return;
  }
  var_s1_2 = 0;
  __repair_rows:
  {
    temp_a0_5 = var_s1_2 & 0xFFFF;
    temp_v1_11 = temp_a0_5 * 2;
    *(temp_v1_11 + (&D_80237058)) = 0;
    *(temp_v1_11 + (&D_8023760E)) = 0;
    *(temp_v1_11 + (&D_80237600)) = 0;
    *((&D_80237694) + temp_a0_5) = 0;
    var_s1_2 += 1;
    *(temp_v1_11 + (&D_80237632)) = 0;
  }

  if (((u32) (var_s1_2 & 0xFFFF)) < 7U)
  {
    goto __repair_rows;
  }
  D_80236F50 = 0;
  D_8023761C = 0;
  D_80167E62 = 0;
  *((&D_8011F32E) + ((arg0 & 0xFFFF) * 0x64)) = 1;
}

