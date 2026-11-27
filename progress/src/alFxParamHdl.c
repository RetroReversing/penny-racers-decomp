typedef struct FxParam
{
  s32 minVal;
  s32 maxVal;
  s16 weightA;
  s16 weightB;
  s16 weightC;
  s16 weightD;
  f32 gain;
  s32 unused14;
  s32 unused18;
  f32 rate;
  void *target;
  s32 unused24;
} FxParam;
typedef struct FxState
{
  u8 pad[0x20];
  FxParam *params;
} FxState;
extern u8 *D_800473B0;
extern f64 D_8004A870;
extern f64 D_8004A878;
void func_800346C0(void *);
s32 alFxParamHdl(FxState *fx, s32 paramId, s32 *valuePtr)
{
  s32 offset = paramId - 2;
  s32 field = offset % 8;
  s32 value;
  paramId = offset / 8;
  value = *valuePtr;
  switch (field)
  {
    case 0:
      fx->params[paramId].minVal = value & (~7);
      break;
    case 1:
      fx->params[paramId].maxVal = value & (~7);
      break;
    case 3:
      fx->params[paramId].weightA = value;
      break;
    case 2:
      fx->params[paramId].weightB = value;
      break;
    case 4:
      fx->params[paramId].weightC = value;
      break;
    case 5:
      fx->params[paramId].gain = (f32) ((((f64) (((f32) value) / 1000.0f)) * 2.0) / ((f64) (*((s32 *) (D_800473B0 + 0x44)))));
      break;
    case 6:
    {
      f64 norm = ((f64) ((f32) value)) / D_8004A870;
      unsigned int span = fx->params[paramId].maxVal - fx->params[paramId].minVal;
      f64 spanF = (f64) span;
      if (span < 0)
      {
        spanF += D_8004A878;
      }
      fx->params[paramId].rate = (f32) (norm * spanF);
      break;
    }
    case 7:
      if (fx->params[paramId].target != NULL)
      {
        *((s16 *) fx->params[paramId].target) = value;
        func_800346C0(fx->params[paramId].target);
      }
      break;
  }
  return 0;
}
