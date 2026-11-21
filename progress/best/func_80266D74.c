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

s32 func_80266BA4();
extern s32 D_8002D2B4;
extern s32 D_80030C58;
extern s32 D_80030C5C;

void func_80266D74(s32 arg0, s32 arg1) {
    s32 temp_s0;

    if (arg0 & 1) {
        func_80266BA4(*(s32 *)*(s32 *)((D_8002D2B4 * 4) + D_80030C5C), arg0, arg1);
    }
    temp_s0 = arg0 & ~1;
    if (temp_s0 != 0) {
        func_80266BA4(*(s32 *)*(s32 *)((D_8002D2B4 * 4) + D_80030C58), temp_s0, arg1);
    }
}
