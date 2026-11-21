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

s32 func_8011BF70(s32, s32);                        /* extern */
extern M2C_UNK D_80045C80;

u32 func_802D5C90(s32 arg0, s32 arg1) {
    M2C_UNK *var_s0;
    u32 var_s1;
    u32 var_s2;

    var_s2 = 0;
    var_s1 = 0;
    var_s0 = &D_80045C80;
loop_1:
    var_s1 += 1;
    if (func_8011BF70(arg0, M2C_FIELD(var_s0, s32 *, 0)) == 0) {
        M2C_FIELD(var_s0, s32 *, 4) = arg1;
        var_s2 = 1;
    }
    var_s0 += 2;
    if ((var_s1 < 0x4BU)) {
        if ((var_s2 == 0)) {
            goto loop_1;
        }
    }
    return var_s2;
}
