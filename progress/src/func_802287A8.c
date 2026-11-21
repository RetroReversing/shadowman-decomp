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

M2C_UNK func_8022953C(s32);                         /* extern */
M2C_UNK func_8022DDD0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_802DAE88();                            /* extern */
extern M2C_UNK D_2286E8;
extern M2C_UNK *D_80059668;
extern s32 D_8007DC08;

void func_802287A8(s32 arg0) {
    func_802DAE88();
    D_8007DC08 = 3;
    func_8022DDD0(4, 0x3C, 0, 0, 0);
    func_8022953C(arg0);
    D_80059668 = &D_2286E8;
}
