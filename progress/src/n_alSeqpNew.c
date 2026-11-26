extern u8 D_80046DF4;
extern void *func_8003082C;
void *alHeapDBAlloc(s32, s32, s32, s32, s32);
void __n_initChanState(void *);
void alEvtqNew(void *, void *, s32);
void n_alSynAddSeqPlayer(void *);

typedef struct { s16 v; } Field_s16;
typedef struct { s32 v; } Field_s32;
typedef struct { u8 v; } Field_u8;
typedef struct { void * v; } Field_void;
void n_alSeqpNew(void *arg0, void *arg1_in) {
  void * arg1;

    s32 temp_s2;
    void *temp_v0;
    void *var_v1;
    s32 var_a0;
/* Inferred frame reservation; original purpose unknown. */
char __repair_stack_padding[8];

    arg1 = arg1_in;
    temp_s2 = (((Field_s32 *) ((u8 *)arg1 + 0xC))->v);
    (((Field_s16 *) ((u8 *)arg0 + 0x30))->v) = 0xFF;
    (((Field_s32 *) ((u8 *)arg0 + 0x24))->v) = 0x1E8;
    (((Field_s32 *) ((u8 *)arg0 + 0x20))->v) = 0;
    (((Field_s32 *) ((u8 *)arg0 + 0x18))->v) = 0;
    (((Field_s32 *) ((u8 *)arg0 + 0x28))->v) = 0;
    (((Field_s32 *) ((u8 *)arg0 + 0x2C))->v) = 0;
    (((Field_s16 *) ((u8 *)arg0 + 0x32))->v) = 0x7FFF;
    (((Field_s32 *) ((u8 *)arg0 + 0x14))->v) = (*(s32 *)&D_80046DF4);
    (((Field_u8 *) ((u8 *)arg0 + 0x35))->v) = (((Field_u8 *) ((u8 *)arg1 + 9))->v);
    (((Field_s32 *) ((u8 *)arg0 + 0x5C))->v) = 0x3E80;
    (((Field_s32 *) ((u8 *)arg0 + 0x1C))->v) = 0;
    (((Field_s32 *) ((u8 *)arg0 + 0x70))->v) = (((Field_s32 *) ((u8 *)arg1 + 0x10))->v);
    (((Field_s32 *) ((u8 *)arg0 + 0x74))->v) = (((Field_s32 *) ((u8 *)arg1 + 0x14))->v);
    (((Field_s32 *) ((u8 *)arg0 + 0x78))->v) = (((Field_s32 *) ((u8 *)arg1 + 0x18))->v);
    (((Field_s32 *) ((u8 *)arg0 + 0x7C))->v) = 0;
    (((Field_s32 *) ((u8 *)arg0 + 0x80))->v) = 0;
    (((Field_s32 *) ((u8 *)arg0 + 0x84))->v) = 0;
    (((Field_s16 *) ((u8 *)arg0 + 0x38))->v) = 9;
    (((Field_u8 *) ((u8 *)arg0 + 0x34))->v) = (((Field_u8 *) ((u8 *)arg1 + 8))->v);
    (((Field_void *) ((u8 *)arg0 + 0x60))->v) = alHeapDBAlloc(0, 0, temp_s2, (((Field_u8 *) ((u8 *)arg1 + 8))->v), 0x10);
    __n_initChanState(arg0);
    temp_v0 = alHeapDBAlloc(0, 0, temp_s2, *(s32 *)arg1, 0x38);
    (((Field_void *) ((u8 *)arg0 + 0x6C))->v) = NULL;
    var_a0 = 0;

    if (*(s32 *)arg1 > 0) {
        var_v1 = temp_v0;
        do {
            *(void **)var_v1 = (((Field_void *) ((u8 *)arg0 + 0x6C))->v);
            (((Field_void *) ((u8 *)arg0 + 0x6C))->v) = var_v1;
            var_a0 += 1;
            var_v1 = (u8 *)var_v1 + 0x38;
        } while (var_a0 < *(s32 *)arg1);
    }
    (((Field_s32 *) ((u8 *)arg0 + 0x64))->v) = 0;
    (((Field_s32 *) ((u8 *)arg0 + 0x68))->v) = 0;
    alEvtqNew((u8 *)arg0 + 0x48, alHeapDBAlloc(0, 0, temp_s2, (((Field_s32 *) ((u8 *)arg1 + 4))->v), 0x1C), (((Field_s32 *) ((u8 *)arg1 + 4))->v));
    *(s32 *)arg0 = 0;
    (((Field_void *) ((u8 *)arg0 + 8))->v) = &func_8003082C;
    (((Field_void *) ((u8 *)arg0 + 4))->v) = arg0;
    n_alSynAddSeqPlayer(arg0);
}

