/* context.h for PENNY RACERS: shared by every function. Agents grow it with edit_context:
 * add a prototype or struct the moment you work one out, so the next function benefits. */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile s32 vs32;
typedef int s32_bool;

#define NULL ((void *)0)
#define TRUE 1
#define FALSE 0
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))

s32 func_8013E49C(u16 arg0);
s32 func_8013EDFC(s32 arg0, void *arg1);
void func_80157E30(s32 arg0);

/* Verified partial layouts used by n_alSynAddPlayer. */
typedef struct N_ALPlayerLayout { struct N_ALPlayerLayout *next; u8 pad04[12]; s32 samplesLeft; } N_ALPlayerLayout;
typedef struct { N_ALPlayerLayout *head; u8 pad04[40]; s32 samples; } N_ALSynthLayout;

/* Sound event layouts verified by Stop/SetFXMix/SetPan/SetPitch. */
typedef struct { u8 data[0x30]; } N_ALSoundStateLayout;
typedef struct { u8 pad00[0x3c]; s32 target; N_ALSoundStateLayout *states; } N_ALSoundPlayerLayout;
typedef struct { s16 type; u16 pad02; N_ALSoundStateLayout *state; union { s8 mix; f32 pitch; } value; u8 extra0c[4]; } N_ALSoundEventLayout;

/* Bank sound relocation fields verified by _bnkfPatchSound. */
typedef struct { u32 envelope; u32 keymap; u32 wavetable; u8 pad[2]; u8 flags; u8 padf; } N_ALBankSoundLayout;
f32 alCents2Ratio(s32 cents);

/* Verified waveform relocation and sequence timing layouts. */
typedef struct { u32 base; s32 len; u8 type,flags; u16 pad; u32 loop,book; } N_ALWaveTableLayout;
typedef struct { u8 pad[0x18]; s16 division; } N_ALSequenceLayout;

/* Sequence-channel layout: stride and accessed offsets verified by func_80027D00. */
typedef struct { u8 player[0x7C]; u8 seq[0xF8]; s32 data; s32 pad178; s32 flags; s32 pad180; } PennySeqState;

/* Verified by exact -O1 func_80149FA8: D_800DA26A element stride 0x178. */
typedef struct { u8 pad00[0x64]; u16 rows[14][9]; u8 tail160[0x18]; } PennyHalfwordRows;

/* Verified bitfield operation in exact -O1 func_80146970. */
typedef struct { u8 reserved_hi:3; u8 flag10:1; u8 reserved_lo:4; } PennyByteFlags10;

/* Byte color setters: clamp signed 16-bit channel values to 0..255 at offsets 0x17..0x19. */
void func_8013EA18(u8 *object, s32 red, s32 green, s32 blue);
void func_8013EA90(u8 *object, s32 redDelta, s32 greenDelta, s32 blueDelta);

/* Track point used by the edge-object layout: type is the facing direction (0..3). */
typedef struct { u8 type; u8 y; s8 x; s8 z; s8 pad; } TrackPoint;
/* Output slot: world position and facing angle in degrees. */
typedef struct { f32 x; f32 y; f32 z; f32 rot; } EdgeSlot;
/* Track layout info: b == 5 marks a looped track, count is the last point index + 1. */
typedef struct { u8 a; u8 b; u8 count; } TrackInfo;
