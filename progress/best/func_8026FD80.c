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

s32 func_8026FDCC(s32);                             /* extern */
M2C_UNK func_80270090(s32);                         /* extern */
extern void *D_8007AFF8;

s32 func_8026FD80(f32 arg0, s32 arg1) {
    s32 var_a0;

    var_a0 = 4;
    if (M2C_FIELD(D_8007AFF8, s32 *, 0xC) == 0) {
        if (M2C_FIELD(D_8007AFF8, f32 *, 0x80) < (arg0 * arg0)) {
            M2C_FIELD(D_8007AFF8, s8 *, 0x54) = 0;
            var_a0 = arg1 & 0xFF;
            /* Duplicate return node #7. Try simplifying control flow for better match */
            func_80270090(var_a0);
            return 1;
        }
        return func_8026FDCC(4);
    }
    func_80270090(var_a0);
    return 1;
}
