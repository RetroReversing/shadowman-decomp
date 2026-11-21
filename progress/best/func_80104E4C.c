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

s32 func_80104E98();                                /* extern */
s32 func_80104E9C();                                /* extern */

s32 func_80104E4C(void *arg0, s32 arg1, s32 arg2) {
int __repair_literal;

    if (arg2 != 1) {
__repair_literal = 2;

        if (arg2 < __repair_literal) {
            if (arg2 != 0) {
                return func_80104E9C();
            }
            /* Duplicate return node #11. Try simplifying control flow for better match */
            M2C_FIELD(arg0, s32 *, 4) = arg1;
            return 0;
        }
        if (arg2 != 2) {
            return func_80104E9C();
        }
        M2C_FIELD(arg0, s32 *, 8) = arg1;
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        return 0;
    }
    return func_80104E98();
}
