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

M2C_UNK func_802776D8(s32, void *);                 /* extern */
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;

s32 func_80275688(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(D_8007AFF8, s32 *, 0x44) & 0x40000000) {
        if (M2C_FIELD(D_8007AFF8, s8 *, 0x4C) != 0) {
            return 0;
        }
        M2C_FIELD(D_8007AFF8, f32 *, 0x70) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x24);
        M2C_FIELD(D_8007AFF8, f32 *, 0x74) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x28);
        M2C_FIELD(D_8007AFF8, f32 *, 0x78) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x2C);
        func_802776D8(arg0 & 0xFF, D_8007AFF8);
        var_v0 = 1;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
