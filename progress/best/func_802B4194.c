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

s32 func_802A6588();
s32 func_802B5A60();

void func_802B4194(void *arg0, s32 arg1, s32 arg2) {
    f32 __repair_fzero = 0.0f;

    if (arg1 == 2) {
        func_802A6588(arg0, arg2);
    }
    if (M2C_FIELD(arg0, s8 *, 0x51) == 0) {
        M2C_FIELD(arg0, s8 *, 0x51) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x51) + 1);
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
        M2C_FIELD(arg0, f32 *, 0x30) = __repair_fzero;
        M2C_FIELD(arg0, f32 *, 0x2C) = __repair_fzero;
        func_802B5A60();
    }
}
