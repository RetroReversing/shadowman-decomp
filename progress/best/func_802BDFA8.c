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

s32 func_80231D44(f32, f32, M2C_UNK, void *);       /* extern */
M2C_UNK func_802D0B28(s32, s16, M2C_UNK);           /* extern */
extern void *D_8005E9F0;
extern s32 D_8005EA14;
extern M2C_UNK D_80075568;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x40, 0x44], gap at: 0x38. */
void func_802BDFA8(f32 arg0, f32 arg1, M2C_UNK arg2) {
    void **__base_D_8005E9F0;
    s16 *var_s1;
    s16 temp_a1;
    s16 temp_s3;
    s32 var_s2;
    void *var_s0;
    M2C_UNK *__base_D_80075568;

    __base_D_80075568 = &D_80075568;

    __base_D_8005E9F0 = &D_8005E9F0;
    temp_s3 = M2C_FIELD((*__base_D_8005E9F0), s16 *, 0x22);
    var_s1 = M2C_FIELD((*__base_D_8005E9F0), s16 **, 0xC);
    var_s2 = 0;
    if (temp_s3 > 0) {
        var_s0 = var_s1 + 3;
        do {
            if ((*var_s1 == 0) && (func_80231D44(arg0, arg1, arg2, var_s1 + 4) != 0)) {
                temp_a1 = M2C_FIELD(var_s0, s16 *, -1);
                if (M2C_FIELD((*__base_D_8005E9F0), s32 *, 0) != temp_a1) {
                    func_802D0B28(D_8005EA14, temp_a1, 1);
                    M2C_FIELD(__base_D_80075568, u8 *, 0x71) = (u8) M2C_FIELD(var_s0, u8 *, 0);
                }
            }
            var_s0 += 0x1C;
            var_s2 += 1;
            var_s1 += 14;
        } while (var_s2 < temp_s3);
    }
}
