/* identical to func_80279A10 (matched), with its names changed by decompdecomp */
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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8026F760(f32);
extern u8 D_212078[];
extern void *D_8007AFF8;

void func_8028132C(void) {
    u8 *__base_D_212078;
    __base_D_212078 = D_212078;
    func_8026F760(M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + __base_D_212078), f32 *, 0x10));
}
