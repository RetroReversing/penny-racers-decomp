typedef struct SubPfs { void *unk0; s32 unk4; s32 unk8; s32 unkC; } SubPfs;
typedef struct ArgPfs { u16 unk0; u16 pad2; void *unk4; SubPfs *unk8; s32 unkC; s32 unk10; s32 unk14; s32 unk18; } ArgPfs;
s32 osMotorInit(void *, void *, s32);
s32 osPfsAllocateFile(void *, u16, s32, s32, s32, s32, void *);
s32 osPfsDeleteFile(void *, u16, s32, s32, s32);
s32 osPfsFileState(void *, s32, s32);
s32 osPfsFindFile(void *, u16, s32, s32, s32, void *);
s32 osPfsFreeBlocks(void *, void *);
s32 osPfsInitPak(void *, void *, s32);
s32 osPfsNumFiles(void *, s32, s32);
s32 osPfsReadWriteFile(void *, s32, u8, s32, s32, s32);
s32 osPfsRepairId(void *);
s32 osSendMesg(void *, s32, s32);
extern u16 D_80046D60;
extern s32 D_80046D64;
extern s32 D_800DE058;
s32 func_80028C68(ArgPfs *arg0)
{
  SubPfs *s0;
  s32 r;
  s32 r2;
  SubPfs *p;
  switch ((s16) (arg0->unk0 - 0x2001))
  {
    case 0:
      s0 = arg0->unk8;
      s0->unkC = 0;
      r = osPfsInitPak(&D_800DE058, s0->unk0, *((s32 *) (((u8 *) s0->unk0) + 8)));
      if (r == 0) {
        s0->unkC = 1;
      } else if (r == 0xA) {
        r = osMotorInit(&D_800DE058, s0->unk0, *((s32 *) (((u8 *) s0->unk0) + 8)));
        if (r == 0) {
          s0->unkC = 2;
        } else if (r == 0xB) {
          r = 0xA;
        }
      }
      s0->unk8 = r;
      break;
    case 1:
      arg0->unkC = 0;
      arg0->unk8->unk8 = osPfsFreeBlocks(arg0->unk8->unk0, &arg0->unkC);
      break;
    case 2:
      p = arg0->unk8;
      r2 = osPfsFindFile(p->unk0, D_80046D60, D_80046D64, arg0->unkC, arg0->unk10, &p->unk4);
      if ((r2 == 5) && (arg0->unk18 == 1)) {
        r2 = osPfsAllocateFile(p->unk0, D_80046D60, D_80046D64, arg0->unkC, arg0->unk10, arg0->unk14, &p->unk4);
      }
      p->unk8 = r2;
      break;
    case 3:
      s0 = arg0->unk8;
      s0->unk8 = osPfsReadWriteFile(s0->unk0, s0->unk4, *(u8 *) &arg0->unk14, arg0->unkC, arg0->unk10, arg0->unk18);
      break;
    case 4:
      s0 = arg0->unk8;
      s0->unk8 = osPfsDeleteFile(s0->unk0, D_80046D60, D_80046D64, arg0->unkC, arg0->unk10);
      break;
    case 5:
      s0 = arg0->unk8;
      s0->unk8 = osPfsFileState(s0->unk0, s0->unk4, arg0->unkC);
      break;
    case 6:
      s0 = arg0->unk8;
      s0->unk8 = osPfsNumFiles(s0->unk0, arg0->unkC, arg0->unk10);
      break;
    case 7:
      s0 = arg0->unk8;
      s0->unk8 = osPfsRepairId(s0->unk0);
      break;
    default:
      goto fail;
  }
  osSendMesg(arg0->unk4, 0, 1);
  return 1;
fail:
  return 0;
}
