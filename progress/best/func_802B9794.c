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

M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_8023E724(void *, u32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_80299D50(M2C_UNK, M2C_UNK *, s32 *, f32, f32, s32); /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x48, 0x4c, 0x50, 0x54, 0x60, 0x64, 0x70, 0x74], gap at: 0x58. */
void func_802B9794(void *arg1) {
    char sp18[0x10];
    char sp28[0x10];
    s32 sp38[3];
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    u32 var_s0;
    void *temp_s1;

    func_8011BA20(sp28, 0, 0xC);
    temp_s1 = M2C_FIELD(arg1, void **, 0x10C);
    if (temp_s1 != NULL) {
        sp38[0] = 0;
        sp38[2] = 0;
        var_s0 = 0;
        if (M2C_FIELD(temp_s1, s16 *, 0x3E) != 0) {
            temp_fs1f = *(f32 *)0x217E84;
            temp_fs1 = *(f32 *)0x217E88;
            temp_fs0f = *(f32 *)0x217E8C;
            do {
                func_8023E724(temp_s1, var_s0, sp28, sp18);
                var_s0 += 1;
                sp38[1] = func_8022EC3C(*(f32 *)0x217E90) + temp_fs1f;
                temp_fs0 = func_8022EC3C(*(f32 *)0x217E94) + temp_fs1;
                func_80299D50(0x2B, sp18, sp38, temp_fs0, func_8022EC3C(*(f32 *)0x217E98) + temp_fs0f, 1);
            } while (var_s0 < (u32) M2C_FIELD(temp_s1, s16 *, 0x3E));
        }
    }
}
