/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern int D_80036930;
extern int D_8003692C;
extern int D_80036928;
s32 func_801043F8();
extern char D_80036920[];
extern s32 D_80036934;
extern s32 D_80036940;
extern s32 D_80036948;
extern s32 D_8003694C;

s32 func_802924F8(void) {
    D_80036934 = func_801043F8(D_80036930 * (D_8003692C * 4), 2, 0);
    D_80036948 = 0;
    D_8003694C = func_801043F8(D_80036928 * 4, 2, 0);
    D_80036940 = func_801043F8(D_8003692C * 4, 2, 0);
    return 1;
}
