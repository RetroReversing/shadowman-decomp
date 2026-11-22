/* Partial candidate from function #73014445055 in project #17; rechecked locally. */
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

s32 func_801131C0(void *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {                                 /* irregular */
    case 1:
        M2C_FIELD(arg0, s32 *, 0) = arg2;
block_5:
        return 0;
    case 6:
        M2C_FIELD(arg0, s32 *, 0x14) = arg2;
        goto block_5;
    default:
        return 0;
    }
}
