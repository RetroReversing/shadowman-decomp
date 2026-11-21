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

extern void *D_8007AFF8;

s32 func_80275468(s16 arg0) {
    s16 *temp_v0;
    char *var_v1;

    temp_v0 = M2C_FIELD(D_8007AFF8, s16 **, 0xC);
    var_v1 = temp_v0;
    if (temp_v0 != NULL) {
        for (;;) {
            var_v1 += 2;
            if (*(s16 *)var_v1 == arg0) {
                break;
            }
            if (*(s16 *)var_v1 == -1) {
                /* Duplicate return node #4. Try simplifying control flow for better match */
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
