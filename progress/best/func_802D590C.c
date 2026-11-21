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

s32 func_8011BF70();
extern s32 D_80045C80;

u32 func_802D590C(s32 arg0) {
    char *var_s1;
    u32 var_s0;
    u32 var_s2;
    u32 var_v0;

    var_s2 = -1U;
    var_s0 = 0;
    var_s1 = &D_80045C80;
    for (;;) {
        var_v0 = var_s2;
        if (var_s2 == -1U) {
            if (func_8011BF70(*(s32 *)var_s1, arg0) == 0) {
                var_s2 = var_s0;
            }
            var_s0 += 1;
            var_s1 += 8;
            if (var_s0 >= 0x4BU) {
                var_v0 = var_s2;
            } else {
                continue;
            }
        }
        break;
    }
    return var_s2;
}
