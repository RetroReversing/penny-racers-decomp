s32 __n_seqpReleaseVoice(void *, s32, s32);
s32 func_8002D0CC(void *, void *);
s32 alEvtqPostEvent(void *, s16 *, s32);
s32 func_8002D270(void *, s32);
s32 func_80030D4C(void *);
s32 func_80030E28(void *, void *);
s32 func_80031680(void *, void *);
s32 func_800316EC(void *, s32 *);
s32 __voiceNeedsNoteKill(void *, s32, s32);
s32 func_8003191C(void *, unsigned char);
s16 __vsVol(s32 *, void *);
s32 func_80031B94(s32 *, s32);
s32 __initFromBank(void *, s32 *);
s32 __seqpStopOsc(void *, s32 *);
s32 func_80031EC8(void *);
s32 func_800346B0(s32 *, s32 *, s32);
s32 n_alSynFreeVoice(s32 *);
s32 n_alSynSetPitch(s32 *, f32);
s32 n_alSynSetVol(s32 *, s16, s32);
s32 n_alSynStopVoice(s32 *);
s32 func_8003082C(void *arg0)
{
  s16 sp10;
  s32 *sp14;
  s32 sp18;
  u8 sp1C;
  f32 sp20;
  s32 *temp_a1;
  s32 *temp_a1_2;
  s32 *temp_s0;
  s32 *temp_s0_2;
  s32 *temp_s1;
  s32 *temp_s1_2;
  s32 *temp_s1_3;
  s32 *temp_s1_4;
  s32 *temp_s1_5;
  s32 *temp_s1_6;
  s32 *var_a0_3;
  s32 *var_s0;
  s32 *var_s1;
  s32 *var_s1_2;
  s16 temp_s0_3;
  s16 temp_s0_7;
  s16 temp_v1;
  s32 temp_s3;
  s32 temp_s0_6;
  s32 temp_s3_2;
  s32 temp_s4;
  s32 temp_s4_2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_v1;
  u8 temp_s0_4;
  void *temp_s0_5;
  void *var_a0;
  void *var_a0_2;
  do
  {
    temp_v1 = *((s16 *) (((char *) arg0) + 0x38));
    switch (temp_v1)
    {
      case 0:
        func_80030D4C(arg0);
        var_a0 = arg0 + 0x48;
        break;

      case 9:
        sp10 = 9;
        alEvtqPostEvent(arg0 + 0x48, &sp10, *((s32 *) (((char *) arg0) + 0x5C)));
        var_a0 = arg0 + 0x48;
        break;

      case 5:
        temp_s0 = *((s32 **) (((char *) arg0) + 0x3C));
        n_alSynStopVoice(temp_s0);
        n_alSynFreeVoice(temp_s0);
        temp_s1 = *((s32 **) (((char *) temp_s0) + 0x10));
        if ((*((u8 *) (((char *) temp_s1) + 0x37))) != 0)
      {
        __seqpStopOsc(arg0, temp_s1);
      }
        func_800316EC(arg0, temp_s0);
        var_a0 = arg0 + 0x48;
        break;

      case 6:
        temp_s0_2 = *((s32 **) (((char *) arg0) + 0x3C));
        temp_s1_2 = *((s32 **) (((char *) temp_s0_2) + 0x10));
        if ((*((u8 *) (((char *) temp_s1_2) + 0x34))) == 0)
      {
        *((u8 *) (((char *) temp_s1_2) + 0x34)) = 1U;
      }
        temp_s3 = *((s32 *) (((char *) arg0) + 0x40));
        *((u8 *) (((char *) temp_s1_2) + 0x30)) = (u8) (*((u8 *) (((char *) arg0) + 0x44)));
        *((s32 *) (((char *) temp_s1_2) + 0x24)) = (s32) ((*((s32 *) (((char *) arg0) + 0x1C))) + temp_s3);
        n_alSynSetVol(temp_s0_2, __vsVol(temp_s1_2, arg0), temp_s3);
        var_a0 = arg0 + 0x48;
        break;

      case 22:
        temp_s1_3 = *((s32 **) (((char *) arg0) + 0x3C));
        temp_s4 = *((s32 *) (((char *) arg0) + 0x40));
        temp_s3_2 = (*((s32 (**)(s32, f32 *)) (((char *) arg0) + 0x74)))(temp_s4, &sp20);
        if (!(sp20 >= 2.1474836e9f))
      {
        var_v1 = (s32) sp20;
      }
      else
      {
        var_v1 = ((s32) (sp20 - 2.1474836e9f)) | 0x80000000;
      }
        *((s8 *) (((char *) temp_s1_3) + 0x36)) = (s8) var_v1;
        temp_v0 = (s16) __vsVol(temp_s1_3, arg0);
        n_alSynSetVol(temp_s1_3 + 4, temp_v0, func_80031B94(temp_s1_3, *((s32 *) (((char *) arg0) + 0x1C))));
        sp10 = 0x16;
        sp14 = temp_s1_3;
        sp18 = temp_s4;
        alEvtqPostEvent(arg0 + 0x48, &sp10, temp_s3_2);
        var_a0 = arg0 + 0x48;
        break;

      case 23:
        temp_s1_4 = *((s32 **) (((char *) arg0) + 0x3C));
        temp_s4_2 = *((s32 *) (((char *) arg0) + 0x40));
        temp_s0_4 = *((u8 *) (((char *) arg0) + 0x44));
        temp_v0_2 = (*((s32 (**)(s32, f32 *)) (((char *) arg0) + 0x74)))(temp_s4_2, &sp20);
        *((f32 *) (((char *) temp_s1_4) + 0x2C)) = sp20;
        n_alSynSetPitch(temp_s1_4 + 4, ((*((f32 *) (((char *) temp_s1_4) + 0x28))) * sp20) * (*((f32 *) (((char *) ((temp_s0_4 * 0x10) + (*((s32 *) (((char *) arg0) + 0x60))))) + 0xC))));
        sp10 = 0x17;
        sp14 = temp_s1_4;
        sp18 = temp_s4_2;
        sp1C = temp_s0_4;
        alEvtqPostEvent(arg0 + 0x48, &sp10, temp_v0_2);
        var_a0 = arg0 + 0x48;
        break;

      case 2:
        func_80030E28(arg0, arg0 + 0x38);
        var_a0 = arg0 + 0x48;
        break;

      case 7:
        func_80031680(arg0, arg0 + 0x38);
        var_a0 = arg0 + 0x48;
        break;

      case 15:
        var_a0 = arg0 + 0x48;
        if ((*((s32 *) (((char *) arg0) + 0x2C))) != 1)
      {
        *((s32 *) (((char *) arg0) + 0x2C)) = 1;
        func_80031EC8(arg0);
        var_a0 = arg0 + 0x48;
      }
        break;

      case 16:
        var_a0 = arg0 + 0x48;
        if ((*((s32 *) (((char *) arg0) + 0x2C))) == 2)
      {
        temp_s1_5 = *((s32 **) (((char *) arg0) + 0x64));
        if (temp_s1_5 != NULL)
        {
          var_s0 = temp_s1_5 + 4;
          do
          {
            n_alSynStopVoice(var_s0);
            n_alSynFreeVoice(var_s0);
            if ((*((u8 *) (((char *) (*((s32 **) (((char *) arg0) + 0x64)))) + 0x37))) != 0)
            {
              __seqpStopOsc(arg0, *((s32 **) (((char *) arg0) + 0x64)));
            }
            func_800316EC(arg0, var_s0);
            temp_s1_6 = *((s32 **) (((char *) arg0) + 0x64));
            var_s0 = temp_s1_6 + 4;
          }
          while (temp_s1_6 != NULL);
        }
        *((s32 *) (((char *) arg0) + 0x1C)) = 0;
        *((s32 *) (((char *) arg0) + 0x2C)) = 0;
        default:
          block_49:
        var_a0 = arg0 + 0x48;


      }
        break;

      case 17:
        var_a0 = arg0 + 0x48;
        if ((*((s32 *) (((char *) arg0) + 0x2C))) == 1)
      {
        temp_s0_5 = arg0 + 0x48;
        func_8002D270(temp_s0_5, 0);
        func_8002D270(temp_s0_5, 2);
        var_s1 = *((s32 **) (((char *) arg0) + 0x64));
        var_a0_2 = arg0 + 0x48;
        if (var_s1 != NULL)
        {
          do
          {
            temp_s0_6 = var_s1 + 4;
            if ((__voiceNeedsNoteKill(arg0, temp_s0_6, 0xC350) << 0x18) != 0)
            {
              __n_seqpReleaseVoice(arg0, temp_s0_6, 0xC350);
            }
            var_s1 = *var_s1;
          }
          while (var_s1 != NULL);
          var_a0_2 = arg0 + 0x48;
        }
        *((s32 *) (((char *) arg0) + 0x2C)) = 2;
        sp10 = 0x10;
        alEvtqPostEvent(var_a0_2, &sp10, 0x7FFFFFFF);
        var_a0 = arg0 + 0x48;
      }
        break;

      case 10:
        var_s1_2 = *((s32 **) (((char *) arg0) + 0x64));
        *((u16 *) (((char *) arg0) + 0x32)) = (u16) (*((s32 **) (((char *) arg0) + 0x3C)));
        if (var_s1_2 != NULL)
      {
        var_a0_3 = var_s1_2;
        do
        {
          temp_s0_7 = __vsVol(var_a0_3, arg0);
          n_alSynSetVol(var_s1_2 + 4, temp_s0_7, func_80031B94(var_s1_2, *((s32 *) (((char *) arg0) + 0x1C))));
          var_s1_2 = *var_s1_2;
          var_a0_3 = var_s1_2;
        }
        while (var_s1_2 != NULL);
        var_a0 = arg0 + 0x48;
      }
      else
      {
        goto block_49;
      }
        break;

      case 11:
        *((s32 **) (((char *) arg0) + 0x7C)) = (s32 *) (*((s32 **) (((char *) arg0) + 0x3C)));
        *((s32 *) (((char *) arg0) + 0x80)) = (s32) (*((s32 *) (((char *) arg0) + 0x40)));
        *((s32 *) (((char *) arg0) + 0x84)) = (s32) (*((u8 *) (((char *) arg0) + 0x44)));
        goto block_49;

      case 12:
        *((u8 *) (((char *) ((((u8) (*((s32 **) (((char *) arg0) + 0x3C)))) * 0x10) + (*((s32 *) (((char *) arg0) + 0x60))))) + 8)) = (u8) (*((u8 *) (((char *) arg0) + 0x3D)));
        goto block_49;

      case 13:
        if ((*((s32 *) (((char *) arg0) + 0x2C))) == 1)
      {
        func_800346B0("EX", "n_seqplayer.c", 0x118);
      }
        *((s32 **) (((char *) arg0) + 0x18)) = (s32 *) (*((s32 **) (((char *) arg0) + 0x3C)));
        func_8003191C(arg0, 0x48F42400);
        temp_a1 = *((s32 **) (((char *) arg0) + 0x20));
        var_a0 = arg0 + 0x48;
        if (temp_a1 != NULL)
      {
        __initFromBank(arg0, temp_a1);
        var_a0 = arg0 + 0x48;
      }
        break;

      case 14:
        if ((*((s32 *) (((char *) arg0) + 0x2C))) != 0)
      {
        func_800346B0("EX", "n_seqplayer.c", 0x121);
      }
        temp_a1_2 = *((s32 **) (((char *) arg0) + 0x3C));
        *((s32 **) (((char *) arg0) + 0x20)) = temp_a1_2;
        __initFromBank(arg0, temp_a1_2);
        var_a0 = arg0 + 0x48;
        break;

      case 1:

      case 3:

      case 4:
        func_800346B0("EX", "n_seqplayer.c", 0x12B);
        goto block_49;

    }

    temp_v0 = func_8002D0CC(var_a0, arg0 + 0x38);
    *((s32 *) (((char *) arg0) + 0x28)) = temp_v0;
  }
  while (temp_v0 == 0);
  *((s32 *) (((char *) arg0) + 0x1C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x1C))) + temp_v0);
  return *((s32 *) (((char *) arg0) + 0x28));
}

