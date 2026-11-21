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

s32 func_801043F8(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_80106A34(s32, M2C_UNK);                    /* extern */
M2C_UNK func_80116790(s32, s32, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_801171A0(s32);                         /* extern */

s32 func_801069C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_s0;

    temp_s0 = func_801043F8(0x230, 3, 0);
    temp_a0 = arg1 * 8;
    if (arg3 == 0xA) {
        if (arg2 == 0x7A) {
            return func_80106A34((arg1 * 8), 3);
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        do { func_80116790(temp_s0, arg3, arg0, 0, func_801043F8((arg1 * 8), 3, 0) + (arg1 * 8), arg2); } while (0);
        func_801171A0(temp_s0);
        return temp_s0;
    }
    func_80116790(temp_s0, arg3, arg0, 0, func_801043F8((arg1 * 8), 3, 0) + (arg1 * 8), arg2);
    func_801171A0(temp_s0);
    return temp_s0;
}
