#include "common.h"

typedef struct { u32 w0; u32 w1; } Awords;
typedef union { Awords words; long long int force_union_align; } Acmd;
typedef struct { u32 start; u32 end; u32 count; } ALRawLoop;
typedef struct { s32 order; s32 npredictors; s16 book[1]; } ALADPCMBook;
typedef struct { void *loop; ALADPCMBook *book; } ALADPCMWaveInfo;
typedef struct { u8 *base; s32 len; u8 type; u8 flags; union { ALADPCMWaveInfo adpcmWave; } waveInfo; } ALWaveTable;
typedef struct { void *source; void *handler; void *setParam; } ALFilter;
typedef struct { ALFilter filter; s16 *state; s16 *lstate; ALRawLoop loop; ALWaveTable *table; s32 bookSize; void *dma; void *dmaState; s32 sample; s32 lastsam; s32 first; s32 memin; } ALLoadFilter;
Acmd *func_8002F104(Acmd *ptr, ALLoadFilter *f, s32 tsam, s32 nbytes, s16 outp, s16 inp, u32 flags);
#define _decodeChunk func_8002F104

Acmd *n_alAdpcmPull(void *filter, s16 *outp, s32 outCount, Acmd *p)
{
  Acmd *ptr = p;
  s16 inp;
  s32 tsam;
  s32 nframes;
  s32 nbytes;
  s32 overFlow;
  s32 startZero;
  s32 nOver;
  s32 nSam;
  s32 op;
  s32 nLeft;
  s32 bEnd;
  s32 decoded = 0;
  s32 looped = 0;
  ALLoadFilter *f = (ALLoadFilter *) filter;
  if (outCount == 0)
  {
    return ptr;
  }
  inp = 0;
  {
    Acmd *_a = (Acmd *) (ptr++);
    _a->words.w0 = ((unsigned int) ((((unsigned int) 11) & ((0x01 << 8) - 1)) << 24)) | ((unsigned int) ((((unsigned int) f->bookSize) & ((0x01 << 24) - 1)) << 0)); _a->words.w1 = (unsigned int) (((u32) f->table->waveInfo.adpcmWave.book->book) & 0x1FFFFFFF);
  }
  ;
  looped = ((outCount + f->sample) > f->loop.end) && (f->loop.count != 0);
  if (looped)
  {
    nSam = f->loop.end - f->sample;
  }
  else
  {
    nSam = outCount;
  }
  if (f->lastsam)
  {
    nLeft = 16 - f->lastsam;
  }
  else
  {
    nLeft = 0;
  }
  tsam = nSam - nLeft;
  if (tsam < 0)
  {
    tsam = 0;
  }
  nframes = ((tsam + 16) - 1) >> 4;
  nbytes = nframes * 9;
  if (looped)
  {
    ptr = _decodeChunk(ptr, f, tsam, nbytes, *outp, inp, f->first);
    if (f->lastsam)
    {
      *outp += f->lastsam << 1;
    }
    else
    {
      *outp += 16 << 1;
    }
    f->lastsam = f->loop.start & 0xf;
    f->memin = ((s32) f->table->base) + (9 * (((s32) (f->loop.start >> 4)) + 1));
    f->sample = f->loop.start;
    bEnd = *outp;
    while (outCount > nSam)
    {
      outCount -= nSam;
      op = (bEnd + ((nframes + 1) << (4 + 1)) + 0x10) & (~0x1f);
      bEnd += nSam << 1;
      if ((f->loop.count != (-1)) && (f->loop.count != 0))
      {
        f->loop.count--;
      }
      nSam = (outCount < (f->loop.end - f->loop.start)) ? (outCount) : (f->loop.end - f->loop.start);
      tsam = (nSam - 16) + f->lastsam;
      if (tsam < 0)
      {
        tsam = 0;
      }
      nframes = ((tsam + 16) - 1) >> 4;
      nbytes = nframes * 9;
      ptr = _decodeChunk(ptr, f, tsam, nbytes, op, inp, f->first | 0x02);
      {
        Acmd *_a = (Acmd *) (ptr++);
        _a->words.w0 = ((unsigned int) ((((unsigned int) 10) & ((0x01 << 8) - 1)) << 24)) | ((unsigned int) ((((unsigned int) (op + (f->lastsam << 1))) & ((0x01 << 24) - 1)) << 0)); _a->words.w1 = ((unsigned int) ((((unsigned int) bEnd) & ((0x01 << 16) - 1)) << 16)) | ((unsigned int) ((((unsigned int) (nSam << 1)) & ((0x01 << 16) - 1)) << 0));
      }
      ;
    }

    f->lastsam = (outCount + f->lastsam) & 0xf;
    f->sample += outCount;
    f->memin += 9 * nframes;
    return ptr;
  }
  nSam = (nframes << 1) << 3;
  overFlow = (f->memin + nbytes) - (((s32) f->table->base) + f->table->len);
  if (overFlow < 0)
  {
    overFlow = 0;
  }
  nOver = (overFlow / 9) << 4;
  if (nOver > (nSam + nLeft))
  {
    nOver = nSam + nLeft;
  }
  nbytes -= overFlow;
  if ((nOver - (nOver & 0xf)) < outCount)
  {
    decoded = 1;
    ptr = _decodeChunk(ptr, f, nSam - nOver, nbytes, *outp, inp, f->first);
    if (f->lastsam)
    {
      *outp += f->lastsam << 1;
    }
    else
    {
      *outp += 16 << 1;
    }
    f->lastsam = (outCount + f->lastsam) & 0xf;
    f->sample += outCount;
    f->memin += 9 * nframes;
  }
  else
  {
    f->lastsam = 0;
    f->memin += 9 * nframes;
  }
  if (nOver)
  {
    f->lastsam = 0;
    if (decoded)
    {
      startZero = ((nLeft + nSam) - nOver) << 1;
    }
    else
    {
      startZero = 0;
    }
    {
      Acmd *_a = (Acmd *) (ptr++);
      _a->words.w0 = ((unsigned int) ((((unsigned int) 2) & ((0x01 << 8) - 1)) << 24)) | ((unsigned int) ((((unsigned int) (startZero + (*outp))) & ((0x01 << 24) - 1)) << 0)); _a->words.w1 = (unsigned int) (nOver << 1);
    }
    ;
  }
  return ptr;
}
