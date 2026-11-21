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

M2C_UNK func_80116D80(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, s32 *, s32, M2C_UNK);   /* extern */
extern M2C_UNK D_8004AD90;

void func_801045E8(s32 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 sp10[2];
    s32 sp1C;
    s32 sp24;

    sp10[0] = arg0;
    sp10[1] = arg2;
    sp1C = (s32) arg1;
    sp24 = arg3;
    func_80116EB0(&D_8004AD90, sp10, arg2, 1);
    if (arg4 & 0xFF) {
        func_80116D80(arg3, 0, 1);
    }
}
