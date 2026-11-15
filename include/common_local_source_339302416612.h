typedef unsigned char       u8;
typedef unsigned short      u16;
typedef unsigned long       u32;
typedef unsigned long long  u64;
typedef signed char         s8;
typedef long                s32;
typedef float   f32;
typedef double  f64;
typedef s32	OSPri;
typedef s32	OSId;
typedef union	{ struct { f32 f_odd; f32 f_even; } f; f64 d; }	__OSfp;
typedef struct {
	u64	at, v0, v1, a0, a1, a2, a3;
	u64	t0, t1, t2, t3, t4, t5, t6, t7;
	u64	s0, s1, s2, s3, s4, s5, s6, s7;
	u64	t8, t9,         gp, sp, s8, ra;
	u64	lo, hi;
	u32	sr, pc, cause, badvaddr, rcp;
	u32	fpcsr;
	__OSfp	 fp0,  fp2,  fp4,  fp6,  fp8, fp10, fp12, fp14;
	__OSfp	fp16, fp18, fp20, fp22, fp24, fp26, fp28, fp30;
} __OSThreadContext;
typedef struct {
    u32 flag;
    u32 count;
    u64 time;
} __OSThreadprofile_s;
typedef struct OSThread_s {
	struct OSThread_s	*next;		 
	OSPri			priority;	 
	struct OSThread_s	**queue;	 
	struct OSThread_s	*tlnext;	 
	u16			state;		 
	u16			flags;		 
	OSId			id;		 
	int			fp;		 
	__OSThreadprofile_s     *thprof;         
	__OSThreadContext	context;	 
} OSThread;
extern void		osCreateThread(OSThread *, OSId, void (*)(void *),
				       void *, void *, OSPri);
extern void		osStartThread(OSThread *);
typedef void *	OSMesg;
typedef struct OSMesgQueue_s {
	OSThread	*mtqueue;	 

	OSThread	*fullqueue;	 

	s32		validCount;	 
	s32		first;		 
	s32		msgCount;	 
	OSMesg		*msg;		 
} OSMesgQueue;
typedef struct {
	u32	type;
	u32	flags;

	u64	*ucode_boot;
	u32	ucode_boot_size;

	u64	*ucode;
	u32	ucode_size;

	u64	*ucode_data;
	u32	ucode_data_size;

	u64	*dram_stack;
	u32	dram_stack_size;

	u64	*output_buff;
	u64	*output_buff_size;

	u64	*data_ptr;
	u32	data_size;

	u64	*yield_data_ptr;
	u32	yield_data_size;

} OSTask_t;
typedef union {
    OSTask_t		t;
    long long int	force_structure_alignment;
} OSTask;
extern long long int	rspbootTextStart[], rspbootTextEnd[];
typedef short	NUScMsg;
typedef struct st_SCTask {		 
    struct st_SCTask	*next;
    u32		state;
    u32		flags;
    void	*framebuffer;		 
    OSTask	list;
    OSMesgQueue	*msgQ;
    OSMesg	msg;
} NUScTask;
extern u8	nuRDPOutputBuf[];
extern u8	nuDramStack[];
extern u8	nuYieldBuf[];
extern volatile u32	nuGfxTaskSpool;
extern void nuGfxDisplayOff(void);
extern NUScTask nuGfxTask[10 ];
extern NUScTask* nuGfxTask_ptr;
extern NUScMsg taskDoneMsg;
extern NUScMsg swapBufMsg;
extern OSThread GfxTaskMgrThread;
extern u64
    GfxTaskMgrStack[0x2000  / sizeof(u64)];
extern OSMesgQueue nuGfxTaskMgrMesgQ;
void nuGfxTaskMgr(void* arg) ;