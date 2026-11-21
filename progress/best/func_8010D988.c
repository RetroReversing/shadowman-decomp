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

extern void *D_8007AFF8;

s32 func_8010D988(void *arg0) {
    s32 var_v0;
    void *temp_a1;

    temp_a1 = M2C_FIELD(D_8007AFF8, void **, 0x10C);
    if (M2C_FIELD(((M2C_FIELD(temp_a1, s16 *, 4) * 0x38) + M2C_FIELD(temp_a1, s32 *, 0x30)), s16 *, 0x2E) == 1) {
        var_v0 = 0;
        if (M2C_FIELD(arg0, s8 *, 0x64) != 0) {
            return 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 1;
    if (!(M2C_FIELD(temp_a1, u16 *, 0x1C) & 2)) {
        var_v0 = 0;
    }
    return var_v0;
}
