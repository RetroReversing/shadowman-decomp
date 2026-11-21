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

extern f32 D_8005E6E8;
extern s32 D_8005E9F4;
extern M2C_UNK D_80073348;

void func_802534B0(void) {
    if (M2C_FIELD(&D_80073348, s32 *, 4) == 1) {
        D_8005E9F4 = M2C_FIELD(&D_80073348, s32 *, 4);
        D_8005E6E8 = M2C_FIELD(&D_80073348, f32 *, 0);
    }
}
