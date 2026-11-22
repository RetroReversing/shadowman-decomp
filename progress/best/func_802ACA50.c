/* adapted from similar verified C in func_802B3330 in Shadowman (matched), with its names changed by decompdecomp */
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

s32 func_802A6508();
s32 func_802A6588();
s32 func_802A6588();
extern u8 D_8007BD5C;

void func_802ACA50(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 2) {
        func_802A6588(arg0, arg2);
    }
    func_802A6588(arg0);
    if (D_8007BD5C == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x50) & 4)) {
        func_802A6508(arg0, 0x2A);
        M2C_FIELD(arg0, u8 *, 0x50) |= 4;
    }
}
