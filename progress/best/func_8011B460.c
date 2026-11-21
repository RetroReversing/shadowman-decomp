/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern int D_800512D8;
extern int D_800512E8;
extern int D_800512E4;
extern int D_800512DC;
u64 func_8011D5C0();
extern s16 D_80028828;
extern s16 D_8002882A;
extern s16 D_8002882C;
extern s16 D_8002882E;
extern s16 D_80028830;

u32 func_8011B460(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_a3;

    *(s32 *)(void * *)(D_800512D8 + 8) = arg0;
    *(s32 *)(void * *)(D_800512D8 + 0x14) = arg0;
    temp_a3 = M2C_FIELD(arg0, s32 *, 0);
    *(s32 *)(void * *)(D_800512D8 + 0x14) = (void *) (arg0 + 4);
    D_800512D8 = temp_a3;
    D_800512E8 = (s32) M2C_FIELD(arg0, s32 *, 4);
    *(s32 *)(void * *)(D_800512D8 + 0x14) = (void *) (arg0 + 8);
    D_800512E4 = (s32) M2C_FIELD(arg0, s32 *, 4);
    *(s32 *)(void * *)(D_800512D8 + 0x14) = (void *) (arg0 + 0xC);
    D_8002882E = 0;
    D_80028830 = 0;
    D_80028828 = 0;
    D_8002882A = 0;
    D_8002882C = 0;
    D_800512DC = (s32) M2C_FIELD(arg0, s32 *, 8);
    *arg2 = temp_a3;
    return (u32) func_8011D5C0(MULT_HI(D_800512E8, 0x0F424000), D_800512E8 * 0x0F424000, 0, arg1);
}
