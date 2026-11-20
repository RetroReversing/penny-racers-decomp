extern s32 D_8011F2F2;
extern s32 D_8011F340;
extern void *D_801C7AB0;
extern u16 D_80233EC0;
void func_80129FD4(void *arg0, s32 arg1, s8 arg2)
{
  s32 temp_a0;
  volatile unsigned long temp_a0_2;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 var_t1;
  s32 var_t1_2;
  s32 var_v1;
  u16 *temp_v0;
  u16 *temp_v1;
  u16 *temp_v1_6;
  u16 var_a3;
  s32 var_a3_2;
  s32 var_a3_3;
  u16 var_t0;
  u16 var_t0_2;
  u16 var_t0_3;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_7;
  void *temp_v1_8;
  arg1 &= 0xFFFF;
  var_a3 = *((u16 *) (((char *) arg0) + 4));
  var_t0 = *((u16 *) (((char *) arg0) + 6));
  var_v1 = var_a3 & 0xFFFF;
  __repair_rows:
  {
    temp_a0 = var_v1 * 0x64;
    temp_v1 = ((arg2 & 0xFF) * 2) + (temp_a0 + (&D_8011F2F2));
    *temp_v1 |= 8;
    if (var_t0 == 0)
    {
      temp_v1_2 = *((&D_8011F340) + temp_a0);
      if ((*((u16 *) (((char *) temp_v1_2) + 0xA))) != 0xFFFF)
      {
        var_a3 = *((u16 *) (((char *) temp_v1_2) + 0xA));
      }
      else
      {
        var_a3 = *((u16 *) (((char *) (*((&D_8011F340) + ((var_a3 & 0xFFFF) * 0x64)))) + 0xE));
        var_t0 = 1;
      }
    }
    else
    {
      temp_v1_3 = *((&D_8011F340) + ((var_a3 & 0xFFFF) * 0x64));
      if ((*((u16 *) (((char *) temp_v1_3) + 0xE))) != 0xFFFF)
      {
        var_a3 = *((u16 *) (((char *) temp_v1_3) + 0xE));
      }
      else
      {
        var_a3 = *((u16 *) (((char *) (*((&D_8011F340) + ((var_a3 & 0xFFFF) * 0x64)))) + 0xA));
        var_t0 = 0;
      }
    }
    var_v1 = var_a3 & 0xFFFF;
  }

  if ((*((u16 *) (((char *) arg0) + 4))) != var_a3)
  {
    goto __repair_rows;
  }
  var_a3_2 = *((u16 *) (((char *) arg0) + 4));
  var_t0_2 = *((u16 *) (((char *) arg0) + 6));
  var_t1 = 0;
  loop_19:
  temp_a0_2 = var_a3_2 & 0xFFFF;

  temp_v0 = ((arg2 & 0xFF) * 2) + ((temp_a0_2 * 0x64) + (&D_8011F2F2));
  *temp_v0 &= 0xFFF7;
  if (temp_a0_2 != ((D_80233EC0 + (*((u8 *) (((char *) D_801C7AB0) + 2)))) - 1))
  {
    temp_v0_2 = var_a3_2 & 0xFFFF;
    if (var_t0_2 == 0)
    {
      temp_v1_4 = *((&D_8011F340) + (temp_v0_2 * 0x64));
      if ((*((u16 *) (((char *) temp_v1_4) + 0xA))) != 0xFFFF)
      {
        var_a3_2 = *((u16 *) (((char *) temp_v1_4) + 0xA));
        var_t1 += 1;
      }
      else
      {
        var_a3_2 = *((u16 *) (((char *) (*((&D_8011F340) + ((var_a3_2 & 0xFFFF) * 0x64)))) + 0xE));
        var_t0_2 = 1;
        goto block_17;
      }
    }
    else
    {
      temp_v1_5 = *((&D_8011F340) + (temp_v0_2 * 0x64));
      if ((*((u16 *) (((char *) temp_v1_5) + 0xE))) != 0xFFFF)
      {
        var_a3_2 = *((u16 *) (((char *) temp_v1_5) + 0xE));
        var_t1 += 1;
      }
      else
      {
        var_a3_2 = *((u16 *) (((char *) (*((&D_8011F340) + ((var_a3_2 & 0xFFFF) * 0x64)))) + 0xA));
        var_t0_2 = 0;
        block_17:
        var_t1 += 1;

      }
    }
    if (((u32) (var_t1 & 0xFFFF)) < ((u32) arg1))
    {
      goto loop_19;
    }
  }
  var_a3_3 = *((u16 *) (((char *) arg0) + 4));
  var_t0_3 = *((u16 *) (((char *) arg0) + 6));
  var_t1_2 = 0;
  loop_30:
  temp_v0_3 = var_a3_3 & 0xFFFF;

  temp_v1_6 = ((arg2 & 0xFF) * 2) + ((temp_v0_3 * 0x64) + (&D_8011F2F2));
  *temp_v1_6 &= 0xFFF7;
  if (temp_v0_3 != D_80233EC0)
  {
    temp_v0_4 = var_a3_3 & 0xFFFF;
    if (var_t0_3 == 0)
    {
      temp_v1_7 = *((&D_8011F340) + (temp_v0_4 * 0x64));
      if ((*((u16 *) (((char *) temp_v1_7) + 8))) != 0xFFFF)
      {
        var_a3_3 = *((u16 *) (((char *) temp_v1_7) + 8));
        var_t1_2 += 1;
      }
      else
      {
        var_a3_3 = *((u16 *) (((char *) (*((&D_8011F340) + ((var_a3_3 & 0xFFFF) * 0x64)))) + 0xC));
        var_t0_3 = 1;
        goto block_28;
      }
    }
    else
    {
      temp_v1_8 = *((&D_8011F340) + (temp_v0_4 * 0x64));
      if ((*((u16 *) (((char *) temp_v1_8) + 0xC))) != 0xFFFF)
      {
        var_a3_3 = *((u16 *) (((char *) temp_v1_8) + 0xC));
        var_t1_2 += 1;
      }
      else
      {
        var_a3_3 = *((u16 *) (((char *) (*((&D_8011F340) + ((var_a3_3 & 0xFFFF) * 0x64)))) + 8));
        var_t0_3 = 0;
        block_28:
        var_t1_2 += 1;

      }
    }
    if (((u32) (var_t1_2 & 0xFFFF)) < ((u32) arg1))
    {
      goto loop_30;
    }
  }
}

