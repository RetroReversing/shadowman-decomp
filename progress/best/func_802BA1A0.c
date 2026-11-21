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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_80036E30;

s32 func_802BA1A0(s32 arg0) {
    char *var_v1;
    s32 var_v0;

    var_v0 = -1;
    if (D_80036E30 != -1) {
        var_v1 = &D_80036E30;
        for (;;) {
            if (M2C_FIELD(var_v1, s32 *, 0) != arg0) {
                var_v1 += 0x18;
                if (*(s32 *)var_v1 == -1) {
                    return -1;
                }
                continue;
            }
            break;
        }
        var_v0 = M2C_FIELD(var_v1, s32 *, 4);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}
