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

extern s32 D_80059890;
extern s32 D_8005989C;

s32 func_80230C88(void) {
    s32 var_a0;
    s32 var_a1;
    char *var_v1;

    var_a0 = D_8005989C - 1;
    var_a1 = 0;
    if (var_a0 != 0) {
        var_v1 = (var_a0 * 8) + D_80059890;
        for (;;) {
            var_a0 -= 1;
            if (*(u16 *)var_v1 == 0xFFFF) {
                var_a1 += 1;
                var_v1 -= 8;
                if (var_a0 != 0) {
                    continue;
                }
            }
            break;
        }
    }
    return var_a1 << 8;
}
