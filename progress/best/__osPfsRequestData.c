/* adapted from similar verified C in func_8009284C in V-RALLY (matched), with its names changed by decompdecomp */
/* identical to __osPfsRequestData in V-RALLY-PAL, another release of this game, fitted to this release's offsets (matched), with its names changed by decompdecomp */
typedef struct
{
      u32 ramarray[15];
      u32 pifstatus;
} OSPifRam;
typedef struct
{
      u8 dummy;
      u8 txsize;
      u8 rxsize;
      u8 cmd;
      u8 typeh;
      u8 typel;
      u8 status;
      u8 dummy1;
} __OSContRequesFormat;
extern OSPifRam D_800CC5F0;
extern u8 D_800C713C;
extern u8 D_8006FE78;

/* Fills the PIF buffer with one controller-pak request block per channel, then writes the end-of-list byte. */ void __osPfsRequestData(u8 cmd) {
    u8* cursor = (u8*)&D_800CC5F0;
    __OSContRequesFormat req;
    int i;

    D_800C713C = cmd;
    D_800CC5F0.pifstatus = 1 ;
    req.dummy = 0xff ;
    req.txsize = 1 ;
    req.rxsize = 3 ;
    req.cmd = cmd;
    req.typeh = 0xff ;
    req.typel = 0xff ;
    req.status = 0xff ;
    req.dummy1 = 0xff ;

    for (i = 0; i < D_8006FE78; i++) {
        *((__OSContRequesFormat*)cursor) = req;
        cursor += sizeof(__OSContRequesFormat);
    }

    *cursor = (short)0xfe ;
}
