/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

s32 func_802D2E34(s32);                             /* extern */
s32 func_802D3768();                                /* extern */
extern s32 D_218D74;

s32 func_802D3708(void) {
    s32 *var_s0;

    if (M2C_FIELD(&D_218D74, s32 *, -0x728C) != 0) {
        var_s0 = &D_218D74;
loop_2:
        var_s0 += 0xC;
        if (func_802D2E34(*var_s0) != 0) {
            return func_802D3768();
        }
        if (*var_s0 == 0) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_2;
    }
    return 0;
}
