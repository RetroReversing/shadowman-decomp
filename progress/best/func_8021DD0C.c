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

s32 func_8021DD48();
s32 func_80236594();
extern char D_21DCC4[];
extern char D_8004AE00[];

s32 func_8021DD0C(s32 arg0, s16 arg1) {
    if (arg1 == -1) {
        return 0;
    }
    func_80236594(D_8004AE00, arg1);
    return func_8021DD48();
}
