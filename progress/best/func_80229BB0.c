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

extern u8 D_8005E6C0;

s32 func_80229BB0(void *arg0) {
    s32 ret;
    s32 var_v0;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 8);
    if (temp_a1 == NULL) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 0x15) != -1) {
        ret = 0;
    } else {
        if (!(M2C_FIELD(temp_a1, u16 *, 0x1E) & 0x100) || (var_v0 = 0, (D_8005E6C0 != 0))) {
            var_v0 = 1;
        }
        ret = var_v0;
    }
    return ret;
}
