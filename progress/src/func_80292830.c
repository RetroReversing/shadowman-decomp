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

extern s32 D_80036944;

s32 func_80292830(s32 arg0, s32 arg1) {
s32 __repair_operand;

    s32 var_a2;
    s32 var_a3;
    void *var_v1;

    var_a3 = 0;
    var_a2 = 0;
    __repair_operand = D_80036944;
    var_v1 = (arg0 * 0x34) + __repair_operand;
loop_1:
    if (M2C_FIELD(var_v1, s32 *, 0x24) == arg1) {
        var_a3 = 1;
    }
    var_a2 += 1;
    var_v1 += 4;
    if ((var_a2 < 4)) {
        if ((var_a3 == 0)) {
            goto loop_1;
        }
    }
    return var_a3;
}
