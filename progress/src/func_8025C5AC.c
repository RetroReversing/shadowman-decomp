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

M2C_UNK func_80236750();                            /* extern */
M2C_UNK func_80260510();                            /* extern */
M2C_UNK func_802D0850(M2C_UNK *);                   /* extern */
extern M2C_UNK D_209FA4;

void func_8025C5AC(void) {
    func_802D0850(&D_209FA4);
    func_80236750();
    func_80260510();
}
