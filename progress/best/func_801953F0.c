#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
extern unsigned short D_801C6BB4;
s16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8014B854();
s32 func_801948E0();
s32 func_80194B98();
s32 func_80194E60();
s32 func_80195124();
unsigned long long func_80199EAC();
s32 func_8019F7C0();
s32 func_801BFA1C();
extern char D_8011F2F0[];
extern char D_8011F2F4[];
extern char D_8011F2FA[];
extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F32E[];
extern char D_8011F32F[];
extern s16 D_801C5EA4;
extern s8 D_801C6B20;
extern u8 D_801C6B21;
extern u8 D_801C6B22;
extern s8 D_801C6B23;
extern u8 D_801C6B24;
extern u8 D_801C6B25;
extern s8 D_801C6B26;
extern u8 D_801C6B27;
extern u16 D_801C6BB6;
extern u8 D_801C6BB9;
extern char D_801C6BE0[];
extern u8 D_801C7064;
extern u16 D_801C7066;
extern u8 D_801C7068;
extern u16 D_801C7074;
extern u16 D_801C7078;
extern char D_801C7080[];
extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 D_801C7469;
extern u16 D_801C746A;
extern char D_801C7470[];
extern void *D_801C7AB0;
extern u8 D_801C7AB6;
extern u8 D_801C7AB8;
extern char D_801C7AD8[];
extern char D_801C7D30[];
extern char D_801C7D31[];
extern char D_801C7D34[];
extern char D_801E9990[];
extern char D_801E9994[];
extern char D_8031445C[];
void func_801953F0(s32 arg0)
{
    u8 *__base_D_8011F2FD;
    s32 __index_D_8011F2FD;
  u8 sp48;
  s16 temp_v0_2;
  s16 temp_v0_5;
  s32 *temp_a0_4;
  s32 temp_a0;
  s32 temp_a0_2;
  
  s32 temp_a1;
  s32 temp_s0;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 temp_v0_6;
  s32 temp_v0_7;
  s32 var_v0;
  s32 var_v0_4;
  s32 var_v1;
  s32 var_v1_2;
  u16 *temp_a1_2;
  u16 temp_v1;
  u16 temp_v1_3;
  u8 temp_a0_5;
  u8 temp_v0;
  u8 temp_v1_2;
  u8 var_v0_2;

    __base_D_8011F2FD = 0;
  temp_s0 = arg0 & 0xFFFF;
  func_8019F7C0(temp_s0);
  temp_v0 = func_80199EAC(temp_s0);
  sp48 = temp_v0;
  if (temp_v0 == 0)
  {
    func_801948E0(&sp48);
  }
  else
  {
    switch ((u32)sp48)
    {
case 0: break;

      case 1:
        func_80194B98(&sp48);
        break;

      case 2:
        func_80194E60(&sp48);
        break;

      case 3:
        func_80195124(&sp48);
        break;

    }

  }
  if (D_801C6B24 != 0)
  {
    if (sp48 != 4)
    {
      if ((D_801C7AB8 == 4) || ((var_v1 = arg0 & 0xFFFF, D_801C7AB8 != sp48)))
      {
        D_801C7AB8 = sp48;
        *(D_801C7D30 + (D_801C7078 * 0x10)) = 0;
        *(D_801C7D31 + (D_801C7078 * 0x10)) = 1;
        *((s32 *) (D_801C7D34 + (D_801C7078 * 0x10))) = (D_801C6B20 * 8) + D_8031445C;
        *(D_801C7080 + (D_801C6B27 * 5)) = D_801C7AB8;
        *(D_801C7081 + (D_801C6B27 * 5)) = 0;
        *(D_801C7082 + (D_801C6B27 * 5)) = D_801C7068;
        *(D_801C7083 + (D_801C6B27 * 5)) = D_801C6BB9;
        *(D_801C7084 + (D_801C6B27 * 5)) = (u8) D_801C6B20;
        goto block_13;
      }
    }
    else
    {
      block_13:
      var_v1 = arg0 & 0xFFFF;

    }
    temp_a0 = var_v1 * 0x70;
    var_v1_2 = arg0 & 0xFFFF;
    if ((*((s32 *) (D_801E9990 + temp_a0))) == 1)
    {
      var_v0 = var_v1_2 * 8;
      if ((*((s32 *) (D_801E9994 + temp_a0))) == 0)
      {
        D_801C7078 = (((s8) D_801C7068) + ((s8) D_801C6B22)) + ((((s8) D_801C6BB9) + D_801C6B23) * 0x18);
        if (D_801C7078 == D_801C7066)
        {
          if ((D_801C7AB6 + 1) < 0xC9)
          {
            D_801C7068 += D_801C6B22;
            D_801C6BB9 += (u8) D_801C6B23;
            if ((*((u8 *) (((s8 *) D_801C7AB0) + 1))) == 6)
            {
              switch ((u32) D_801C7AB8)
              {
                case 0:
                  D_801C6B21 = 0x2A;
                  block_26:
                break;


                case 2:
                  var_v0_2 = 0x2B;
                  goto block_26;

                case 1:
                  var_v0_2 = 0x2C;
                  goto block_26;

                default:
                  var_v0_2 = 0x2D;
                  if (D_801C7AB8 == 3)
                {
                  goto block_26;
                }
                  break;

              }

              if ((*((u8 *) (((s8 *) D_801C7AB0) + 0))) == 4)
              {
                D_801C6B21 += 0x2E;
              }
              D_801C7064 = D_801C6B21;
            }
            *(D_801C7D30 + (D_801C7078 * 0x10)) = 0;
            *(D_801C7D31 + (D_801C7078 * 0x10)) = 1;
            temp_a0_2 = D_801C7078 * 0x10;
            *((s32 *) (D_801C7D34 + temp_a0_2)) = (((s8) D_801C6B21) * 8) + D_8031445C;
            temp_v0_2 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, temp_a0_2 + D_801C7D30, 0, 0, (((f32) ((s8) D_801C7068)) * 400.0f) * 0.5f, 0, (((f32) ((s8) D_801C6BB9)) * 400.0f) * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
            temp_v0_3 = (temp_v0_2 & 0xFFFF) * 0x64;
            *((u16 *) (D_8011F2F4 + temp_v0_3)) = (*((u16 *) (D_8011F2F4 + temp_v0_3))) | 8;
            *((u16 *) (D_801C6BE0 + (D_801C7078 * 2))) = temp_v0_2;
            *(D_801C7AD8 + D_801C7078) = *((u8 *) (((s8 *) D_801C7AB0) + 2));
            *(D_801C7080 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = D_801C7AB8;
            *(D_801C7081 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = 0;
            *(D_801C7082 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = D_801C7068;
            *(D_801C7083 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = D_801C6BB9;
            *(D_801C7084 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = D_801C6B21;
            D_801C7AB6 -= 4;
            func_801BFA1C(*((u8 *) (((s8 *) D_801C7AB0) + 2)), 1);
            D_801C6B27 = *((u8 *) (((s8 *) D_801C7AB0) + 2));
            *((u8 *) (((s8 *) D_801C7AB0) + 2)) += 1;
            D_801C7AB6 += 1;
            D_801C6B25 = D_801C7AB8;
            D_801C7AB8 = 4;
            sp48 = 4;
            D_801C6B24 = 0;
            *(D_8011F2FA + (D_801C746A * 0x64)) = 0x5B;
            *(D_8011F2FC + (D_801C746A * 0x64)) = 0x64;
            *(D_8011F2FA + (D_801C6BB6 * 0x64)) = 0x5B;
            *(D_8011F2FC + (D_801C6BB6 * 0x64)) = 0x64;
            *((s16 *) (D_8011F32E + (D_801C7074 * 0x64))) = 0xE;
            goto block_34;
          }
          goto block_32;
        }
        if (D_801C7AB6 == 0xC8)
        {
          block_32:
          func_8014B854(0x3E);

          temp_v0_4 = D_801C7074 * 0x64;
          *(D_8011F2F0 + temp_v0_4) = *(D_8011F32F + temp_v0_4);
          *((s16 *) (D_8011F32E + (D_801C7074 * 0x64))) = 0xD;
          D_801C5EA4 = 0;
          var_v1_2 = arg0 & 0xFFFF;
        }
        else
        {
          D_801C7068 += D_801C6B22;
          D_801C6BB9 += (u8) D_801C6B23;
          *(D_801C7D30 + (D_801C7078 * 0x10)) = 0;
          *(D_801C7D31 + (D_801C7078 * 0x10)) = 1;
          temp_v0_4 = D_801C7078 * 0x10;
          *((s32 *) (D_801C7D34 + temp_v0_4)) = (((s8) D_801C6B21) * 8) + D_8031445C;
          temp_v0_2 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, temp_v0_4 + D_801C7D30, 0, 0, (((f32) ((s8) D_801C7068)) * 400.0f) * 0.5f, 0, (((f32) ((s8) D_801C6BB9)) * 400.0f) * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
          temp_v0_6 = (temp_v0_2 & 0xFFFF) * 0x64;
          *((u16 *) (D_8011F2F4 + temp_v0_6)) = (*((u16 *) (D_8011F2F4 + temp_v0_6))) | 8;
          *((u16 *) (D_801C6BE0 + (D_801C7078 * 2))) = temp_v0_2;
          *(D_801C7AD8 + D_801C7078) = *((u8 *) (((s8 *) D_801C7AB0) + 2));
          *(D_801C7080 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = D_801C7AB8;
          *(D_801C7081 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = 0;
          *(D_801C7082 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = D_801C7068;
          *(D_801C7083 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = D_801C6BB9;
          *(D_801C7084 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = D_801C6B21;
          D_801C6B27 = *((u8 *) (((s8 *) D_801C7AB0) + 2));
          *((u8 *) (((s8 *) D_801C7AB0) + 2)) += 1;
          D_801C7AB6 += 1;
          D_801C6B25 = D_801C7AB8;
          D_801C6B24 = 0;
          D_801C7AB8 = 4;
          sp48 = 4;
          block_34:
          func_8014B854(0x40);

          goto block_35;
        }
        goto block_36;
      }
    }
    else
    {
      goto block_36;
    }
  }
  else
  {
    block_35:
    var_v1_2 = arg0 & 0xFFFF;

    block_36:
    var_v0 = var_v1_2 * 8;

  }
  temp_a0_4 = D_801E9994 + ((var_v0 - var_v1_2) * 0x10);
  if ((((*temp_a0_4) / 20) * 0x14) == ((*temp_a0_4) - 1))
  {
    temp_v1 = *((u16 *) (D_801C6BE0 + (D_801C7078 * 2)));
    if (temp_v1 != 0xFFFF)
    {
      *(D_8011F2FD + (temp_v1 * 0x64)) = 2;
      *((D_801C7078 * 2) + D_801C6BE0) = 0xFFFF;
      *(D_801C7AD8 + D_801C7078) = 0xFF;
      *((u8 *) (((s8 *) D_801C7AB0) + 2)) -= 1;
      D_801C7AB6 -= 1;
      *(D_801C7080 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = 4;
      *(D_801C7081 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = 0;
      *(D_801C7082 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = -1;
      *(D_801C7083 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = -1;
      *(D_801C7084 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = -1;
      D_801C6B27 -= 1;
      temp_v0_7 = D_801C6B27 * 5;
      temp_v0_4 = (u8)(*(D_801C7082 + temp_v0_7));
      temp_v1_2 = *(D_801C7083 + temp_v0_7);
      D_801C6BB9 = temp_v1_2;
      D_801C7078 = ((s8) temp_v0_4) + (((s8) temp_v1_2) * 0x18);
      D_801C7068 = temp_v0_4;
      D_801C7AB8 = 4;
      sp48 = 4;
      if (D_801C6B27 == 0)
      {
        D_801C6B25 = D_801C7469;
      }
      else
      {
        D_801C6B25 = *(D_801C7080 + ((D_801C6B27 - 1) * 5));
      }
      if (((D_801C6B25 == 0) | (D_801C6B25 == 2)) != 0)
      {
        D_801C6B20 = 5;
      }
      else
        if (((D_801C6B25 == 1) | (D_801C6B25 == 3)) != 0)
      {
        D_801C6B20 = 0;
      }
      if ((*((u8 *) (((s8 *) D_801C7AB0) + 0))) == 4)
      {
        D_801C6B20 = ((u8) D_801C6B20) + 0x2E;
      }
      temp_a1 = D_801C6B27 * 5;
      temp_a0_2 = (D_801C6B20 * 8); *((s32 *) (D_801C7D34 + (((((s8) (*(D_801C7082 + temp_a1))) + ((*(D_801C7083 + temp_a1)) * 0x18)) & 0xFFFF) * 0x10))) = temp_a0_2 + D_8031445C;
      *(D_801C7084 + temp_a1) = D_801C6B20;
      D_801C6B26 = 4;
      D_801C6B24 = 0;
    }
    if (D_801C7078 == D_801C6BB4)
    {
      *(D_8011F2FD + (D_801C746A * 0x64)) = 2;
      *(D_8011F2FD + (D_801C6BB6 * 0x64)) = 2;
      *(D_8011F2FD + ((*((u16 *) (D_801C6BE0 + (D_801C6BB4 * 2)))) * 0x64)) = 2;
      if ((*((u8 *) (((s8 *) D_801C7AB0) + 1))) != 5)
      {
        {
          u8 __repair_i;
          for (__repair_i = 0; __repair_i < 4; __repair_i++)
          {
            temp_a1_2 = (__repair_i * 2) + D_801C7470;
            temp_v1_3 = *temp_a1_2;
            if (temp_v1_3 != 0xFFFF)
            {
              __index_D_8011F2FD = temp_v1_3 * 0x64;
              __base_D_8011F2FD = D_8011F2FD;
              *(__base_D_8011F2FD + __index_D_8011F2FD) = 2;
              *temp_a1_2 = 0xFFFF;
            }
          }

        }
      }
      *((u16 *) (D_801C6BE0 + (D_801C6BB4 * 2))) = 0xFFFF;
      *(D_801C7AD8 + D_801C6BB4) = 0xFF;
      D_801C7469 = 4;
      *((u8 *) (((s8 *) D_801C7AB0) + 2)) = 0U;
      D_801C7AB6 = 0;
      *(D_801C7080 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = 4;
      *(D_801C7081 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = 0;
      *(D_801C7082 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = -1;
      *(D_801C7083 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = -1;
      *(D_801C7084 + ((*((u8 *) (((s8 *) D_801C7AB0) + 2))) * 5)) = -1;
      D_801C6BB9 = *((u8 *) (((s8 *) (&D_801C6BB4)) + (-3)));
      D_801C7068 = *((u8 *) (((s8 *) (&D_801C6BB4)) + (-4)));
      D_801C7078 = D_801C6BB4;
      *((s16 *) (D_8011F32E + (D_801C7074 * 0x64))) = 1;
      D_801C6B24 = 0;
      D_801C6B26 = 4;
    }
    func_8014B854(0x3F, &D_801C6BB4);
  }
}

