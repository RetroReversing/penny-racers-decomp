extern unsigned char D_8006FB18;
s32 func_8003DE60();
s32 func_80230EFC();
extern char D_8006FB14[];
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern s8 D_80167E62;
extern char D_8022A770[];
extern char D_80236ED4[];
extern char D_80236F10[];
extern char D_80236F20[];
extern s8 D_80236F50;
extern char D_80237058[];
extern char D_80237600[];
extern char D_8023760E[];
extern s8 D_8023761C;
extern char D_80237632[];
extern char D_80237694[];
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
  volatile short var_a0_3;
  s32 var_s1;
  s32 var_s1_2;
  unsigned char var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_5;
  u16 temp_a1_3;
  u16 temp_a1_4;
  u16 temp_v1;
  u16 var_v0_4;
  u32 var_a0;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_v0_2;
  void *temp_v1_10;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  void *temp_v1_9;
  do
  {
    temp_v1 = D_8011F32E[arg0 & 0xFFFF].f0;
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
        __repair_phase_storage.pointer = (var_a0 * 0x8F0) + D_8022A770;
        if (((*((u16 *) (((char *) __repair_phase_storage.pointer) + 2))) != 0xFFFF) & (var_a0 < 6U))
        {
          temp_v0 = *((var_a0 * 2) + D_80237058);
          if (!(temp_v0 != 0))
          {
            temp_v0_5 = *((s16 *) (((char *) __repair_phase_storage.pointer) + 0x594));
            if (temp_v0_5 != 0)
            {
              var_v0_5 = (var_s1 & 0xFFFF) * 2;
              *(var_v0_5 + D_8023760E) = temp_v0_5;
              goto block_15;
            }
            if (D_8006FB18 == 1)
            {
              var_v0_5 = (var_s1 & 0xFFFF) * 2;
              *(var_v0_5 + D_8023760E) = 1;
              block_15:
              *(var_v0_5 + D_80237058) = 1;

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
            temp_a1 = ((var_s1 & 0xFFFF) * 2) + D_8023760E; temp_v1_2 = *((s16 *) (((char *) __repair_phase_storage.pointer) + 0x594));
            if ((*temp_a1) < temp_v1_2)
            {
              *temp_a1 = temp_v1_2;
            }
            do
            {
              temp_a1_2 = ((var_s1 & 0xFFFF) * 2) + D_8023760E; temp_a0 = *temp_a1_2;
              if (temp_a0 < 0xA)
              {
                temp_v1_3 = __repair_phase_storage.pointer + (temp_a0 * 5);
                *((u8 *) (((char *) temp_v1_3) + 0x565)) += 1; temp_v1_4 = __repair_phase_storage.pointer + ((*temp_a1_2) * 5);
                if (((u8) (*((u8 *) (((char *) temp_v1_4) + 0x565)))) >= 0x3CU)
                {
                  *((u8 *) (((char *) temp_v1_4) + 0x565)) = 0U;
                  *((s8 *) (((char *) (__repair_phase_storage.pointer + ((*temp_a1_2) * 5))) + 0x566)) = 0; temp_v1_5 = __repair_phase_storage.pointer + ((*temp_a1_2) * 5);
                  *((u8 *) (((char *) temp_v1_5) + 0x564)) += 1; temp_v1_6 = __repair_phase_storage.pointer + ((*temp_a1_2) * 5); var_v0 = var_s1 & 0xFFFF;
                  if (((u8) (*((u8 *) (((char *) temp_v1_6) + 0x564)))) >= 0x3CU)
                  {
                    *((u8 *) (((char *) temp_v1_6) + 0x564)) = 0U; temp_v1_7 = __repair_phase_storage.pointer + ((*temp_a1_2) * 5);
                    *((u8 *) (((char *) temp_v1_7) + 0x563)) += 1; temp_v1_8 = __repair_phase_storage.pointer + ((*temp_a1_2) * 5); var_v0 = var_s1 & 0xFFFF;
                    if (((u8) (*((u8 *) (((char *) temp_v1_8) + 0x563)))) >= 0x3CU)
                    {
                      *((u8 *) (((char *) temp_v1_8) + 0x563)) = 0U; temp_v1_9 = __repair_phase_storage.pointer + ((*temp_a1_2) * 5);
                      *((u8 *) (((char *) temp_v1_9) + 0x562)) += 1; var_v0 = var_s1 & 0xFFFF;
                    }
                  }
                }
                else
                {
                  temp_v0_2 = __repair_phase_storage.pointer + ((*(((var_s1 & 0xFFFF) * 2) + D_8023760E)) * 5);
                  *((u8 *) (((char *) temp_v0_2) + 0x566)) = (u8) (*(D_80236ED4 + (*((u8 *) (((char *) temp_v0_2) + 0x565))))); var_v0 = var_s1 & 0xFFFF;
                }
                temp_a0_2 = (var_v0 * 2) + D_8023760E; temp_v1_10 = __repair_phase_storage.pointer + ((*temp_a0_2) * 5); var_v0_2 = var_s1 & 0xFFFF;
                if ((*((u8 *) (((char *) temp_v1_10) + 0x562))) != 0)
                {
                  do
                  {
                    *((s8 *) (((char *) temp_v1_10) + 0x565)) = 0x3B;
                    *((s8 *) (((char *) (__repair_phase_storage.pointer + ((*temp_a0_2) * 5))) + 0x566)) = 0x63;
                    *((s8 *) (((char *) (__repair_phase_storage.pointer + ((*temp_a0_2) * 5))) + 0x563)) = 0x3B;
                    *((s8 *) (((char *) (__repair_phase_storage.pointer + ((*temp_a0_2) * 5))) + 0x564)) = 0x3B;
                  }
                  while (0);
                  *((s8 *) (((char *) (__repair_phase_storage.pointer + ((*temp_a0_2) * 5))) + 0x562)) = 1; var_v0_2 = var_s1 & 0xFFFF;
                }
                temp_a0_3 = ((u16 *) (&D_8023760E))[var_v0_2];
                if (((u16 *) (&D_80237600))[var_v0_2] != temp_a0_3)
                {
                  var_v0_3 = var_s1 & 0xFFFF;
                  if (temp_a0_3 < 5)
                  {
                    temp_a1_3 = *((u16 *) (((char *) __repair_phase_storage.pointer) + 6)); var_v0_4 = temp_a1_3 & 0xFFF7;
                    if ((!(temp_a1_3 & 8)) && ((var_v0_4 = temp_a1_3 & 0xFFF7, 0 == (temp_a0_3 < 2))))
                    {
                      temp_a1_4 = temp_a1_3 | 0x40;
                      *((u16 *) (((char *) __repair_phase_storage.pointer) + 6)) = temp_a1_4; var_a0_2 = D_80236F10;
                      func_8003DE60(var_a0_2, temp_a1_4 & 0x48);
                    }
                    else
                    {
                      *((u16 *) (((char *) __repair_phase_storage.pointer) + 6)) = var_v0_4; var_a0_2 = D_80236F20;
                      func_8003DE60(var_a0_2, temp_a1_3 & 0x40);
                    }
                    var_a0_3 = var_s1 & 0xFFFF;
                    if ((*(((var_s1 & 0xFFFF) * 2) + D_8023760E)) >= 2)
                    {
                      func_80230EFC(__repair_phase_storage.pointer);
                      var_a0_3 = var_s1 & 0xFFFF;
                    }
                    temp_a0_4 = (var_a0_3 * 2) + D_80237600;
                    *((u8 *) (((char *) __repair_phase_storage.pointer) + 0x566)) += *((u8 *) (((char *) (__repair_phase_storage.pointer + ((*temp_a0_4) * 5))) + 0x566));
                    *((u8 *) (((char *) __repair_phase_storage.pointer) + 0x564)) += *((u8 *) (((char *) (__repair_phase_storage.pointer + ((*temp_a0_4) * 5))) + 0x564));
                    *((u8 *) (((char *) __repair_phase_storage.pointer) + 0x563)) += *((u8 *) (((char *) (__repair_phase_storage.pointer - (-((*temp_a0_4) * 5)))) + 0x563));
                    *((u8 *) (((char *) __repair_phase_storage.pointer) + 0x562)) += *((u8 *) (((char *) (__repair_phase_storage.pointer + ((*temp_a0_4) * 5))) + 0x562));
                    for (;;)
                    {
                      if (((u8) (*((u8 *) (((char *) __repair_phase_storage.pointer) + 0x566)))) < 0x64U)
                      {
                        break;
                      }
                      *((u8 *) (((char *) __repair_phase_storage.pointer) + 0x566)) -= 0x64;
                      *((u8 *) (((char *) __repair_phase_storage.pointer) + 0x564)) += 1;
                    }

                    for (;;)
                    {
                      if (((u8) (*((u8 *) (((char *) __repair_phase_storage.pointer) + 0x564)))) < 0x3CU)
                      {
                        break;
                      }
                      *((u8 *) (((char *) __repair_phase_storage.pointer) + 0x564)) -= 0x3C;
                      *((u8 *) (((char *) __repair_phase_storage.pointer) + 0x563)) += 1;
                    }

                    for (;;)
                    {
                      if (((u8) (*((u8 *) (((char *) __repair_phase_storage.pointer) + 0x563)))) < 0x3CU)
                      {
                        break;
                      }
                      *((u8 *) (((char *) __repair_phase_storage.pointer) + 0x563)) -= 0x3C;
                      *((u8 *) (((char *) __repair_phase_storage.pointer) + 0x562)) += 1;
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
              ((u16 *) (&D_80237600))[var_v0_3] = ((u16 *) (&D_8023760E))[var_v0_3];
            }
            while (0);
            goto block_46;
          }
        }
        else
        {
          block_46:
          var_s1 += 1;

        }
        var_s1_2 = var_s1 & 0xFFFF; var_a0 = var_s1_2;
      }
      while (((u32) (var_s1 & 0xFFFF)) < 7U);
      return;
    }
  }
  while (0);
  var_s1_2 = 0;
  {
    u16 __repair_i;
    for (__repair_i = 0; __repair_i < 7; __repair_i++)
    {
      {
        __repair_phase_storage.value = __repair_i;
        ((u16 *) (&D_80237058))[__repair_phase_storage.value] = 0;
        ((u16 *) (&D_8023760E))[__repair_phase_storage.value] = 0;
        ((u16 *) (&D_80237600))[__repair_phase_storage.value] = 0;
        *(D_80237694 + __repair_phase_storage.value) = 0;
        ((u16 *) (&D_80237632))[__repair_phase_storage.value] = 0;
      }
    }

  }
  D_80236F50 = 0;
  D_8023761C = 0;
  D_80167E62 = 0;
  D_8011F32E[arg0 & 0xFFFF].f0 = 1;
}

