extern void *D_80046DF4;
extern f64 D_8004A368;
s32 func_8002CD38(s32, f32, char, void *);
void func_8002FFD0(void *, u16 *);
void func_80030250(void *, u8);
void n_alSynFreeVoice(void *);
void n_alSynSetPan(void *, s32);
void n_alSynSetPitch(void *, f32);
void n_alSynSetVol(void *, s16, s32);
void n_alSynStartVoice(void *, s32);
void n_alSynStopVoice(void *);
void _removeEvents(s32, void *);
void alEvtqPostEvent(s32, s16 *, s32);
typedef struct 
{
  unsigned char pad_0[28];
  void *field_1C;
  unsigned short field_20;
  unsigned char pad_22[2];
  float field_24;
  int field_28;
  short field_2C;
  unsigned char field_2E;
  unsigned char field_2F;
} __repair_record_temp_s0;
inline static int inline_fn(s32 arg0, s32 arg1)
{
  return arg0 + arg1;
}

char _n_handleEvent(void *arg0)
{
  u16 sp10[2];
  volatile char sp14;
  struct 
  {
    s16 type;
    s32 pad;
    void *payload;
    s32 pad2;
  } ev;
  f32 temp_fs0;
  f32 temp_ft0;
  s32 temp_s1;
  s16 temp_s4;
  s16 temp_v1;
  s16 temp_v1_2;
  s16 temp_v1_3;
  s32 var_v1;
  s16 var_v1_2;
  s32 temp_a0_3;
  s32 temp_s2;
  s32 temp_s5;
  s32 temp_v0_2;
  u16 temp_a0_2;
  u8 temp_a0;
  u8 temp_a1;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_s0;
  void *temp_s3;
  void *temp_v1_4;
  temp_s0 = *((void **) (((s8 *) arg0) + 4));
  temp_v1 = *((s16 *) arg0);
  temp_s5 = *((s32 *) (((s8 *) D_80046DF4) + 0xC));
  temp_s3 = ((__repair_record_temp_s0 *) temp_s0)->field_1C;
  switch (temp_v1)
  {
    case 0:
      if (((((__repair_record_temp_s0 *) temp_s0)->field_28 != 0) | (temp_s3 == NULL)) == 0)
    {
      sp10[1] = 0;
      sp14 = 0;
      sp10[0] = ((__repair_record_temp_s0 *) temp_s0)->field_20;
      func_8002FFD0(temp_s0, sp10);
      __repair_phase_storage.pointer = *((void **) temp_s3);
      temp_s2 = inline_fn(((__repair_record_temp_s0 *) temp_s0)->field_2E, 0xFFC0); temp_s1 = *((u8 *) (((s8 *) temp_s3) + 0xC)); temp_v1_2 = inline_fn(temp_s1, temp_s2);
      var_v1 = temp_v1_2 & (((s32) (~temp_v1_2)) >> 0x1F);
      temp_s4 = ((*((u8 *) (((s8 *) __repair_phase_storage.pointer) + 0xC))) * ((__repair_record_temp_s0 *) temp_s0)->field_2C) / 127;
      if (var_v1 >= 0x80)
      {
        do
        {
          var_v1 = 0x7F;
        }
        while (0);
      }
      temp_fs0 = ((__repair_record_temp_s0 *) temp_s0)->field_24;
      {
        temp_s2 = func_8002CD38(*((s32 *) __repair_phase_storage.pointer), temp_fs0, 0x81020409, __repair_phase_storage.pointer);
        n_alSynStartVoice(temp_s0, *((s32 *) (((s8 *) temp_s3) + 8)));
      }
      ((__repair_record_temp_s0 *) temp_s0)->field_28 = 1;
      n_alSynSetPan(temp_s0, var_v1 & 0xFF);
      n_alSynSetVol(temp_s0, temp_s4, temp_s2);
      n_alSynSetPitch(temp_s0, temp_fs0);
      func_80030250(temp_s0, ((__repair_record_temp_s0 *) temp_s0)->field_2F);
      ev.type = 6;
      ev.payload = temp_s0;
      alEvtqPostEvent(inline_fn(*((s32 *) (((s8 *) D_80046DF4) + 0xC)), 0x14), (s16 *) (&ev), func_8002CD38(*((s32 *) (*((void **) temp_s3))), ((__repair_record_temp_s0 *) temp_s0)->field_24, 0x81020409, __repair_phase_storage.pointer));
      return;
    }

    default:
      return;

    case 1:
      if (((((__repair_record_temp_s0 *) temp_s0)->field_28 != 1) | (temp_s3 == NULL)) == 0)
    {
      __repair_phase_storage.value = func_8002CD38(*((s32 *) ((*((void **) temp_s3)) + 8)), ((__repair_record_temp_s0 *) temp_s0)->field_24, 0x81020409, temp_s3);
      n_alSynSetVol(temp_s0, 0, __repair_phase_storage.value);
      if (__repair_phase_storage.value != 0)
      {
        ev.type = 7;
        ev.payload = temp_s0;
        alEvtqPostEvent(inline_fn(temp_s5, 0x14), (s16 *) (&ev), __repair_phase_storage.value);
        ((__repair_record_temp_s0 *) temp_s0)->field_28 = 2;
        return;
      }
      case 7:
        n_alSynStopVoice(temp_s0);

      n_alSynFreeVoice(temp_s0);
      _removeEvents(inline_fn(temp_s5, 0x14), temp_s0);
      ((__repair_record_temp_s0 *) temp_s0)->field_28 = 0;
    }
      break;

    case 2:
      if (var_v1_2)
    {
      temp_a0 = *((u8 *) (((s8 *) arg0) + 8));
      ((__repair_record_temp_s0 *) temp_s0)->field_2E = temp_a0;
    }
    else
    {
      temp_a0 = *((u8 *) (((s8 *) arg0) + 8));
      ((__repair_record_temp_s0 *) temp_s0)->field_2E = temp_a0;
    }
      if ((((__repair_record_temp_s0 *) temp_s0)->field_28 == 1) & (temp_s3 != NULL))
    {
      temp_v1_3 = inline_fn(*((u8 *) (((s8 *) temp_s3) + 0xC)), temp_a0 + 0xFFC0);
      var_v1_2 = temp_v1_3 & (((s32) (~temp_v1_3)) >> 0x1F);
      if (var_v1_2 >= 0x80)
      {
        var_v1_2 = 0x7F;
      }
      n_alSynSetPan(temp_s0, var_v1_2 & 0xFF);
      return;
    }
      break;

    case 4:
      temp_ft0 = (f32) (*((u8 *) (((s8 *) arg0) + 8)));
      ((__repair_record_temp_s0 *) temp_s0)->field_24 = temp_ft0;
      if (((f64) temp_ft0) < D_8004A368)
    {
      ((__repair_record_temp_s0 *) temp_s0)->field_24 = 0.0001f;
    }
      if (((__repair_record_temp_s0 *) temp_s0)->field_28 == 1)
    {
      n_alSynSetPitch(temp_s0, ((__repair_record_temp_s0 *) temp_s0)->field_24);
      return;
    }
      break;

    case 8:
      temp_a1 = *((u8 *) (((s8 *) arg0) + 8));
      ((__repair_record_temp_s0 *) temp_s0)->field_2F = temp_a1;
      if (((__repair_record_temp_s0 *) temp_s0)->field_28 == 1)
    {
      func_80030250(temp_s0, temp_a1);
      return;
    }
      break;

    case 3:
      temp_a0_2 = (u16) (*((u8 *) (((s8 *) arg0) + 8)));
      ((__repair_record_temp_s0 *) temp_s0)->field_2C = (s16) temp_a0_2;
      if ((((__repair_record_temp_s0 *) temp_s0)->field_28 == 1) & (temp_s3 != NULL))
    {
      n_alSynSetVol(temp_s0, (s16) (((*((u8 *) (((s8 *) (*((void **) temp_s3))) + 0xD))) * ((s16) temp_a0_2)) / 127), 0x3E8);
      return;
    }
      break;

    case 6:
      temp_v1_4 = *((void **) temp_s3);
      temp_a0_3 = *((s32 *) (((s8 *) temp_v1_4) + 4));
      if (temp_a0_3 != (-1))
    {
      temp_s1 = ((*((u8 *) (((s8 *) temp_v1_4) + 0xD))) * ((__repair_record_temp_s0 *) temp_s0)->field_2C) / 127;
      __repair_phase_storage.value = func_8002CD38(temp_a0_3, ((__repair_record_temp_s0 *) temp_s0)->field_24, 0, temp_s0);
      n_alSynSetVol(temp_s0, temp_s1, __repair_phase_storage.value);
      ev.type = 1;
      ev.payload = temp_s0;
      alEvtqPostEvent(inline_fn(temp_s5, 0x14), (s16 *) (&ev), __repair_phase_storage.value);
      return;
    }
      break;

  }

}

