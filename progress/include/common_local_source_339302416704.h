typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef unsigned int u32;
typedef float f32;
typedef struct ALFilter_s {
    struct ALFilter_s *source;  
    void *handler;              
    void *setParam;             
    s16 inp;                    
    s16 outp;                   
    s32 type;                   
} ALFilter;
typedef struct {
    s16 fc;                     
    s16 fgain;                  
    union {
        s16 fccoef[16];
        long long force_aligned;
    } fcvec;                    
    void *fstate;               
    s32 first;                  
} ALLowPass;
typedef struct {
    ALFilter filter;            
    void *state;                
    f32 ratio;                  
    s32 upitch;                 
    f32 delta;                  
    s32 first;                  
    void *ctrlList;             
    void *ctrlTail;             
    s32 motion;                 
} ALResampler;
typedef struct {
    u32 input;                  
    u32 output;                 
    s16 ffcoef;                 
    s16 fbcoef;                 
    s16 gain;                   
    f32 rsinc;                  
    f32 rsval;                  
    s32 rsdelta;                
    f32 rsgain;                 
    ALLowPass *lp;              
    ALResampler *rs;            
} ALDelay;
typedef struct {
    ALFilter filter;            
    s16 *base;                  
    s16 *input;                 
    u32 length;                 
    ALDelay *delay;             
    u8 section_count;           
    void *paramHdl;             
} ALFx;
extern u32 osVirtualToPhysical(void *addr);
typedef union {
    struct {
        u32 w0;
        u32 w1;
    } words;
    long long force_structure_alignment;
} Acmd;