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

extern s32 D_8002C250;
extern s32 D_800569B8;

s32 func_8021E344(s32 arg0) {
    s32 *__base_D_800569B8;
    s32 temp_a2;
    s32 var_a1;

    temp_a2 = D_8002C250 - arg0;
    var_a1 = 0;
    if (temp_a2 >= 2) {
        __base_D_800569B8 = &D_800569B8;
        var_a1 = (*__base_D_800569B8);
        D_8002C250 = temp_a2;
        (*__base_D_800569B8) = var_a1 + (arg0 * 8);
    }
    return var_a1;
}
