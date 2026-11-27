typedef struct PfsState { void *pfs; s32 fileNo; s32 result; s32 initStage; } PfsState;
typedef struct PfsRequest { u16 op; u16 pad2; void *replyQueue; PfsState *state; s32 param0C; s32 param10; s32 param14; s32 param18; } PfsRequest;
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
extern u16 pfsCompanyCode;
extern s32 pfsGameCode;
extern s32 contStartMesgQ;
/* Runs one controller-pak request (op 0x2001 + n) on the PfsRequest, then posts the reply queue. Returns 0 for unknown ops. */
s32 pfsHandleRequest(PfsRequest *req)
{
  PfsState *state;
  s32 ret;
  s32 fileRet;
  PfsState *fileState;
  switch ((s16) (req->op - 0x2001))
  {
    case 0:
      state = req->state;
      state->initStage = 0;
      ret = osPfsInitPak(&contStartMesgQ, state->pfs, *((s32 *) (((u8 *) state->pfs) + 8)));
      if (ret == 0) {
        state->initStage = 1;
      } else if (ret == 0xA) {
        ret = osMotorInit(&contStartMesgQ, state->pfs, *((s32 *) (((u8 *) state->pfs) + 8)));
        if (ret == 0) {
          state->initStage = 2;
        } else if (ret == 0xB) {
          ret = 0xA;
        }
      }
      state->result = ret;
      break;
    case 1:
      req->param0C = 0;
      req->state->result = osPfsFreeBlocks(req->state->pfs, &req->param0C);
      break;
    case 2:
      fileState = req->state;
      fileRet = osPfsFindFile(fileState->pfs, pfsCompanyCode, pfsGameCode, req->param0C, req->param10, &fileState->fileNo);
      if ((fileRet == 5) && (req->param18 == 1)) {
        fileRet = osPfsAllocateFile(fileState->pfs, pfsCompanyCode, pfsGameCode, req->param0C, req->param10, req->param14, &fileState->fileNo);
      }
      fileState->result = fileRet;
      break;
    case 3:
      state = req->state;
      state->result = osPfsReadWriteFile(state->pfs, state->fileNo, *(u8 *) &req->param14, req->param0C, req->param10, req->param18);
      break;
    case 4:
      state = req->state;
      state->result = osPfsDeleteFile(state->pfs, pfsCompanyCode, pfsGameCode, req->param0C, req->param10);
      break;
    case 5:
      state = req->state;
      state->result = osPfsFileState(state->pfs, state->fileNo, req->param0C);
      break;
    case 6:
      state = req->state;
      state->result = osPfsNumFiles(state->pfs, req->param0C, req->param10);
      break;
    case 7:
      state = req->state;
      state->result = osPfsRepairId(state->pfs);
      break;
    default:
      goto fail;
  }
  osSendMesg(req->replyQueue, 0, 1);
  return 1;
fail:
  return 0;
}
