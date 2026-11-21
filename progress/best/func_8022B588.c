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

M2C_UNK func_80116D80(s32, s32 *, M2C_UNK);         /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_8002D1A8;
extern M2C_UNK D_8005901C;

s32 func_8022B588(s32 arg0) {
    s32 sp10;

    M2C_FIELD(&D_8002D1A8, s32 *, 4) = arg0;
    func_80116EB0(&D_8005901C, &D_8002D1A8, 1);
    func_80116D80(arg0, &sp10, 1);
    M2C_FIELD(&D_8002D1A8, s32 *, 4) = 0;
    return sp10 == 0;
}
