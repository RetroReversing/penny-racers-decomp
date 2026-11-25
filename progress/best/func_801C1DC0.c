extern short D_800DD2C0;
s16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8014B854();
u8 func_80190D40();
s32 func_8019E734();
s32 func_8019E814();
s32 func_8019F7C0();
s32 func_801A03F4();
u8 func_801A0590();
s32 func_801A5610();
s32 func_801B727C();
s32 func_801BB1F0();
s32 func_801BD7E8();
s32 func_801C1CA4();
u8 func_801C3418();
extern char D_800DB1B8[];
extern char D_8011F2F0[];
extern char D_8011F2F4[];
extern char D_8011F2FD[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F32E[];
extern char D_8011F32F[];
extern s8 D_801C5EA0;
extern s16 D_801C5EA4;
extern u16 D_801C6BB4;
extern s8 D_801C6BB9;
extern char D_801C6BE0[];
extern s8 D_801C7060;
extern u16 D_801C7066;
extern u8 D_801C7068;
extern u8 D_801C7070;
extern u16 D_801C7074;
extern u16 D_801C7078;
extern u8 D_801C707B;
extern char D_801C7080[];
extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 D_801C7468;
extern char D_801C7470[];
extern void *D_801C7AB0;
extern s8 D_801C7AB4;
extern s8 D_801C7AB5;
extern u8 D_801C7AB6;
extern u8 D_801C7AB8;
extern u8 D_801C7ABC;
extern void *D_801C7AC4;
extern char D_801C7AD8[];
extern u16 D_801C7D18;
extern char D_801C7D1A[];
extern u16 D_801C7D24;
extern char D_801C7D30[];
extern char D_801C7D31[];
extern char D_801C7D34[];
extern u8 D_801CA130;
extern s8 D_801CA138;
extern char D_801E9990[];
extern char D_801E9994[];
extern char D_8031445C[];
void func_801C1DC0(s32 arg0)
{
    u8 *__base_D_801C7470;
    s32 __index_D_801C7470;
  
  s32 __index_D_8011F2FD;
  f32 temp_fv1;
  s16 temp_v0_5;
  s32 temp_a0;
  s32 temp_a0_4;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s0_3;
  s32 temp_s0_4;
  s32 temp_v0;
  s32 temp_v0_11;
  s32 temp_v0_12;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 temp_v0_6;
  s32 temp_v0_7;
  s32 temp_v0_9;
  s32 temp_v1;
  s32 temp_v1_11;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 temp_v1_6;
  s32 temp_v1_7;
  s32 temp_v1_9;
  s32 var_a1;
  s32 var_a1_2;
  s32 var_a1_3;
  s32 var_a1_4;
  s32 var_a1_5;
  s32 var_a1_6;
  s32 var_a1_7;
  s32 var_v0;
  s32 var_v0_10;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v0_6;
  s32 var_v0_7;
  s32 var_v0_8;
  s32 var_v0_9;
  s32 var_v1;
  s32 var_v1_2;
  u16 *temp_a0_6;
  u16 *temp_a0_7;
  u16 *temp_a0_8;
  u16 *var_a0;
  u16 temp_a0_2;
  u16 temp_a0_3;
  u16 temp_a0_5;
  u16 temp_v1_10;
  u16 temp_v1_12;
  u16 temp_v1_13;
  u16 temp_v1_4;
  u16 temp_v1_5;
  u16 temp_v1_8;
  u8 temp_s1;
  u8 temp_v0_10;
  u8 temp_v0_8;
  u8 var_v0_2;
  void *temp_a1;

    __base_D_801C7470 = 0;
  __base_D_801C7470 = 0;
  if (D_801C707B == 0)
  {
    D_800DD2C0 = 1;
    *((s16 *) (((char *) (D_800DB1B8 + 0x2108)) + 0x28)) = 1;
    temp_a0 = arg0 & 0xFFFF;
    func_8019F7C0(temp_a0);
    func_8019E734(temp_a0);
    temp_v0 = D_801C7D24 * 0x64;
    *(D_8011F308 + temp_v0) = 0;
    *(D_8011F30C + temp_v0) = 10000.0f;
    *(D_8011F310 + temp_v0) = 0;
    D_801C7078 = ((s8) D_801C7068) + (D_801C6BB9 * 0x18);
    D_801CA130 = func_801C3418(D_801C6BB9);
    temp_v0_2 = D_801CA130 * 5;
    D_801C7AB8 = *(D_801C7080 + temp_v0_2);
    temp_s0_2 = func_801C1CA4(*(D_801C7084 + temp_v0_2));
    if (D_801CA130 == (*((u8 *) (((char *) D_801C7AB0) + 2))))
    {
      temp_v0_3 = D_801C7D18 * 0x64;
      *(D_8011F308 + temp_v0_3) = (((f32) ((s8) D_801C7068)) * 400.0f) * 0.5f;
      *(D_8011F30C + temp_v0_3) = 0;
      *(D_8011F310 + temp_v0_3) = (((f32) D_801C6BB9) * 400.0f) * 0.5f;
    }
    else
    {
      if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
      {
        var_v0 = (*(D_801C7084 + (D_801CA130 * 5))) - 0x16;
      }
      else
      {
        var_v0 = ((*(D_801C7084 + (D_801CA130 * 5))) - 0x2E) - 0x16;
      }
      if (((u32) (var_v0 & 0xFF)) < 0x14U)
      {
        var_v1 = D_801C7D18 * 0x64;
        *(D_8011F308 + var_v1) = (((f32) ((s8) D_801C7068)) * 400.0f) * 0.5f;
        var_v0_2 = (*(D_801C7081 + (D_801CA130 * 5))) + 0x3C;
      }
      else
      {
        var_v1 = D_801C7D18 * 0x64;
        *(D_8011F308 + var_v1) = (((f32) ((s8) D_801C7068)) * 400.0f) * 0.5f;
        var_v0_2 = *(D_801C7081 + (D_801CA130 * 5));
      }
      *(D_8011F30C + var_v1) = ((f32) var_v0_2) * 0.5f;
      *(D_8011F310 + var_v1) = (((f32) D_801C6BB9) * 400.0f) * 0.5f;
    }
    var_v1_2 = arg0 & 0xFFFF;
    if (D_801CA138 != 0)
    {
      temp_v0_4 = func_801C1CA4(D_801C7AB4);
      temp_v1 = temp_v0_4 & 0xFF;
      if (D_801CA130 == (*((u8 *) (((char *) D_801C7AB0) + 2))))
      {
        if (((D_801C7AB6 + temp_v1) + 1) < 0xC9)
        {
          *(D_801C7D30 + (D_801C7078 * 0x10)) = 0;
          *(D_801C7D31 + (D_801C7078 * 0x10)) = 1;
          temp_a0 = D_801C7078 * 0x10;
          *((s32 *) (D_801C7D34 + temp_a0)) = (D_801C7AB4 * 8) + D_8031445C;
          temp_v0_5 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, temp_a0 + D_801C7D30, 0, 0, (((f32) ((s8) D_801C7068)) * 400.0f) * 0.5f, 0, (((f32) D_801C6BB9) * 400.0f) * 0.5, 0, 0, 0, 0.5f, 0.5f, 0.5f);
          temp_s0_3 = (temp_v0_5 & 0xFFFF) * 0x64;
          *((u16 *) (D_8011F2F4 + temp_s0_3)) = (*((u16 *) (D_8011F2F4 + temp_s0_3))) | 8;
          *((u16 *) (D_801C6BE0 + (D_801C7078 * 2))) = temp_v0_5;
          *(D_801C7AD8 + D_801C7078) = *((u8 *) (((char *) D_801C7AB0) + 2));
          *(D_8011F30C + temp_s0_3) = ((f32) (func_80190D40(D_801C7AB4) & 0xFF)) * 0.5f;
          *(D_801C7080 + (D_801CA130 * 5)) = D_801C7AB8;
          temp_fv1 = *(D_8011F30C + ((*((u16 *) (D_801C6BE0 + (D_801C7078 * 2)))) * 0x64));
          temp_a1 = (D_801CA130 * 5) + D_801C7080;
          if (temp_fv1 >= 2.1474836e9f)
          {
            var_v0_3 = (((s32) (temp_fv1 - 2.1474836e9f)) | 0x80000000) & 0xFF;
          }
          else
          {
            var_v0_3 = ((s32) temp_fv1) & 0xFF;
          }
          *((s8 *) (((char *) temp_a1) + 1)) = (s8) (var_v0_3 * 2);
          *(D_801C7082 + (D_801CA130 * 5)) = D_801C7068;
          *(D_801C7083 + (D_801CA130 * 5)) = (u8) D_801C6BB9;
          *(D_801C7084 + (D_801CA130 * 5)) = (u8) D_801C7AB4;
          func_801BB1F0(D_801CA130, temp_a1);
          *((u8 *) (((char *) D_801C7AB0) + 2)) += 1;
          D_801C7AB6 += 1;
          goto block_36;
        }
        goto block_28;
      }
      if (D_801C7AB5 != 0)
      {
        func_801A5610();
        if ((D_801C7078 != D_801C6BB4) && (D_801C7078 != D_801C7066))
        {
          *((s32 *) (D_801C7D34 + (D_801C7078 * 0x10))) = (D_801C7AB4 * 8) + D_8031445C;
          var_a1 = 0;
          do
          {
            __base_D_801C7470 = D_801C7470;
            __index_D_801C7470 = D_801CA130 * 8;
            temp_a0_2 = *(((var_a1 & 0xFF) * 2) + (__base_D_801C7470 + __index_D_801C7470));
            if (temp_a0_2 != 0xFFFF)
            {
              __index_D_8011F2FD = temp_a0_2 * 0x64;
              __base_D_801C7470 = D_8011F2FD;
              *(__base_D_801C7470 + __index_D_8011F2FD) = 2;
              *(((var_a1 & 0xFF) * 2) + ((D_801CA130 * 8) + D_801C7470)) = 0xFFFF;
              D_801C7AB6 -= 1;
            }
            var_a1 += 1;
          }
          while (((u32) (var_a1 & 0xFF)) < 4U);
        }
        D_801C7AB5 = 0;
        goto block_35;
      }
      if (((D_801C7AB6 - (temp_s0_2 & 0xFF)) + (temp_v0_4 & 0xFF)) >= 0xC9)
      {
        block_28:
        func_8014B854(0x3E);

        D_801C5EA4 = 0;
        temp_v0_6 = D_801C7074 * 0x64;
        *(D_8011F2F0 + temp_v0_6) = *(D_8011F32F + temp_v0_6);
        *((s16 *) (D_8011F32E + (D_801C7074 * 0x64))) = 0xD;
      }
      else
      {
        if ((D_801C7078 != D_801C6BB4) && (D_801C7078 != D_801C7066))
        {
          *((s32 *) (D_801C7D34 + (D_801C7078 * 0x10))) = (D_801C7AB4 * 8) + D_8031445C;
          var_a1_2 = 0;
          do
          {
            temp_v1_3 = (var_a1_2 & 0xFF) * 2;
            temp_a0_3 = *(temp_v1_3 + ((D_801CA130 * 8) + D_801C7470));
            if (temp_a0_3 != 0xFFFF)
            {
              *(D_8011F2FD + (temp_a0_3 * 0x64)) = 2;
              *(temp_v1_3 + ((D_801CA130 * 8) + D_801C7470)) = 0xFFFF;
              D_801C7AB6 -= 1;
            }
            var_a1_2 += 1;
          }
          while (((u32) (var_a1_2 & 0xFF)) < 4U);
        }
        block_35:
        *(D_8011F30C + ((*((u16 *) (D_801C6BE0 + (D_801C7078 * 2)))) * 0x64)) = ((f32) D_801C7070) * 0.5f;

        *(D_801C7080 + (D_801CA130 * 5)) = D_801C7AB8;
        *(D_801C7081 + (D_801CA130 * 5)) = D_801C7070;
        *(D_801C7082 + (D_801CA130 * 5)) = D_801C7068;
        *(D_801C7083 + (D_801CA130 * 5)) = (u8) D_801C6BB9;
        *(D_801C7084 + (D_801CA130 * 5)) = (u8) D_801C7AB4;
        func_801BB1F0(D_801CA130);
        block_36:
        *((s8 *) (((char *) D_801C7AB0) + 3)) = 0;

        D_801C5EA0 = 0;
        func_8014B854(0x40);
      }
      D_801CA138 = 0;
      var_v1_2 = arg0 & 0xFFFF;
    }
    temp_a0_4 = var_v1_2 * 0x70;
    var_v0_4 = arg0 & 0xFFFF;
    if (((*((s32 *) (D_801E9990 + temp_a0_4))) == 1) && ((var_v0_4 = arg0 & 0xFFFF, (*((s32 *) (D_801E9994 + temp_a0_4))) == 0)))
    {
      if (D_801CA130 == (*((u8 *) (((char *) D_801C7AB0) + 2))))
      {
        if (((u8) D_801C7AB6) >= 0xC8U)
        {
          func_8014B854(0x3E);
          D_801C5EA4 = 0;
          temp_v0_7 = D_801C7074 * 0x64;
          *(D_8011F2F0 + temp_v0_7) = *(D_8011F32F + temp_v0_7);
          *((s16 *) (D_8011F32E + (D_801C7074 * 0x64))) = 0xD;
        }
        else
        {
          func_8014B854(0x3D);
          D_801C7ABC = 0;
          if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
          {
            D_801C7AB4 = 0;
          }
          else
          {
            D_801C7AB4 = 0x2E;
          }
          do { temp_v0_8 = func_80190D40(D_801C7AB4); } while (0);
          D_801C7070 = temp_v0_8;
          D_801C7468 = temp_v0_8;
          var_a1_3 = 0;
do
          {
            var_a0 = ((var_a1_3 & 0xFF) * 2) + D_801C7D1A;
            temp_v1_4 = *var_a0;
            if (temp_v1_4 != 0xFFFF)
            {
              *(D_8011F2FD + (temp_v1_4 * 0x64)) = 2;
              *var_a0 = 0xFFFF;
            }
            var_a1_3 += 1;
          }
          while (((u32) (var_a1_3 & 0xFF)) < 4U);
          goto block_55;
        }
      }
      else
      {
        func_8014B854(0x3D);
        D_801C7ABC = func_801A0590();
        temp_v0_9 = D_801CA130 * 5;
        D_801C7AB4 = (s8) (*(D_801C7084 + temp_v0_9));
        temp_v0_10 = *(D_801C7081 + temp_v0_9);
        D_801C7070 = temp_v0_10;
        D_801C7468 = temp_v0_10;
        var_a1_3 = 0;
        var_v0_6 = 0 & 0xFF;
        do
        {
          var_a0 = (var_v0_6 * 2) + D_801C7D1A;
          temp_v1_5 = *var_a0;
          if (temp_v1_5 != 0xFFFF)
          {
            *(D_8011F2FD + (temp_v1_5 * 0x64)) = 2;
            *var_a0 = 0xFFFF;
          }
          var_a1_3 += 1;
          var_v0_6 = var_a1_3 & 0xFF;
        }
        while (((u32) (var_a1_3 & 0xFF)) < 4U);
        block_55:
        D_801C7AC4 = (D_801C7AB4 * 8) + D_8031445C;

        func_801BD7E8();
        D_801C707B = 1;
      }
    }
    else
    {
      temp_v1_6 = var_v0_4 * 0x70;
      if (((((*((s32 *) (D_801E9990 + temp_v1_6))) == 0) && ((*((s32 *) (D_801E9994 + temp_v1_6))) == 1)) && (D_801CA130 != (*((u8 *) (((char *) D_801C7AB0) + 2))))) && (D_801C7078 != D_801C6BB4))
      {
        var_a1_4 = 0;
        if (D_801C7078 != D_801C7066)
        {
          do
          {
            temp_v1_7 = (var_a1_4 & 0xFF) * 2;
            temp_a0_5 = *(temp_v1_7 + ((D_801CA130 * 8) + D_801C7470));
            if (temp_a0_5 != 0xFFFF)
            {
              *(D_8011F2FD + (temp_a0_5 * 0x64)) = 2;
              *(temp_v1_7 + ((D_801CA130 * 8) + D_801C7470)) = 0xFFFF;
              D_801C7AB6 -= 1;
            }
            var_a1_4 += 1;
          }
          while (((u32) (var_a1_4 & 0xFF)) < 4U);
          temp_v1_8 = *((u16 *) (D_801C6BE0 + (D_801C7078 * 2)));
          if (temp_v1_8 != 0xFFFF)
          {
            *(D_8011F2FD + (temp_v1_8 * 0x64)) = 2;
          }
          *((u16 *) (D_801C6BE0 + (D_801C7078 * 2))) = 0xFFFF;
          *(D_801C7AD8 + D_801C7078) = 0xFF;
          func_801B727C(D_801CA130);
          func_8014B854(0x3F);
          *((s8 *) (((char *) D_801C7AB0) + 3)) = 0;
          D_801C5EA0 = 0;
        }
      }
    }
    D_801C7060 = 0;
    return;
  }
  temp_s1 = D_801C707B;
  if (temp_s1 == 1)
  {
    D_800DD2C0 = 2;
    *((s16 *) (((char *) (D_800DB1B8 + 0x2108)) + 0x28)) = 2;
    temp_s0_4 = arg0 & 0xFFFF;
    func_8019E814(temp_s0_4);
    func_801A03F4(temp_s0_4);
    temp_v0_11 = D_801C7D24 * 0x64;
    *(D_8011F308 + temp_v0_11) = 0;
    *(D_8011F30C + temp_v0_11) = 0;
    *(D_8011F310 + temp_v0_11) = 0;
    temp_v1_9 = temp_s0_4 * 0x70;
    var_v0_7 = arg0 & 0xFFFF;
    if (((*((s32 *) (D_801E9990 + temp_v1_9))) == temp_s1) && ((var_v0_7 = arg0 & 0xFFFF, (*((s32 *) (D_801E9994 + temp_v1_9))) == 0)))
    {
      var_a1_5 = 0;
      if (D_801CA130 == (*((u8 *) (((char *) D_801C7AB0) + 2))))
      {
        D_801CA138 = 1;
      }
      var_v0_8 = 0 & 0xFF;
      do
      {
        temp_a0_6 = (var_v0_8 * 2) + D_801C7D1A;
        temp_v1_10 = *temp_a0_6;
        if (temp_v1_10 != 0xFFFF)
        {
          *(D_8011F2FD + (temp_v1_10 * 0x64)) = 2;
          *temp_a0_6 = 0xFFFF;
        }
        var_a1_5 += 1;
        var_v0_8 = var_a1_5 & 0xFF;
      }
      while (((u32) (var_a1_5 & 0xFF)) < 4U);
      D_801C707B = 0;
    }
    else
    {
      temp_v1_11 = var_v0_7 * 0x70;
      do {
          var_a1_6 = 0;
      } while (0);
      if (((*((s32 *) (D_801E9990 + temp_v1_11))) == 0) && ((*((s32 *) (D_801E9994 + temp_v1_11))) == 1))
      {
        if (D_801CA138 != 0)
        {
          if (D_801CA130 == (*((u8 *) (((char *) D_801C7AB0) + 2))))
          {
            if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
            {
              D_801C7AB4 = 0;
            }
            else
            {
              D_801C7AB4 = 0x2E;
            }
            D_801C7070 = 0;
            var_a1_7 = 0;
          }
          else
          {
            temp_v0_12 = D_801CA130 * 5;
            D_801C7AB4 = (s8) (*(D_801C7084 + temp_v0_12));
            D_801C7070 = *(D_801C7081 + temp_v0_12);
            var_a1_7 = 0;
          }
          var_v0_9 = 0 & 0xFF;
          do
          {
            temp_a0_7 = (var_v0_9 * 2) + D_801C7D1A;
            temp_v1_12 = *temp_a0_7;
            if (temp_v1_12 != 0xFFFF)
            {
              *(D_8011F2FD + (temp_v1_12 * 0x64)) = 2;
              *temp_a0_7 = 0xFFFF;
            }
            var_a1_7 += 1;
            var_v0_9 = var_a1_7 & 0xFF;
          }
          while (((u32) (var_a1_7 & 0xFF)) < 4U);
          D_801C7AC4 = (D_801C7AB4 * 8) + D_8031445C;
          func_801BD7E8();
          D_801CA138 = 0;
          if (D_801C7AB5 != 0)
          {
            D_801C7AB5 = 0;
          }
          if (D_801C7ABC == 0)
          {
            D_801C7ABC = func_801A0590();
          }
        }
        else
        {
          var_v0_10 = 0 & 0xFF;
          do
          {
            temp_a0_8 = (var_v0_10 * 2) + D_801C7D1A;
            temp_v1_13 = *temp_a0_8;
            if (temp_v1_13 != 0xFFFF)
            {
              *(D_8011F2FD + (temp_v1_13 * 0x64)) = 2;
              *temp_a0_8 = 0xFFFF;
            }
            var_a1_6 += 1;
            var_v0_10 = var_a1_6 & 0xFF;
          }
          while (((u32) (var_a1_6 & 0xFF)) < 4U);
          D_801C707B = 0;
        }
        func_8014B854(0x3A);
      }
    }
    D_801C7060 = 1;
  }
}

