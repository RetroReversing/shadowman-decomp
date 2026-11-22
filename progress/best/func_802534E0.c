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

M2C_UNK func_8023A0DC(f32, f32, s16 *, s32, f32, M2C_UNK *, void *); /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x28, 0x2c, 0x30, 0x40, 0x44, 0x50, 0x54, 0x60, 0x64], gap at: 0x34. */
void func_802534E0(void *arg0, void *arg1) {
    M2C_UNK sp18;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 var_fs0;
    f32 var_fs0f;
    f32 var_fs1;
    f32 var_fs1f;
    f32 var_fs2;
    f32 var_fs2f;
    s16 *var_a0;
    s32 var_a1;
    u16 temp_v1_2;
    void *temp_s0;
    void *temp_v1;
    void *var_v1;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    temp_v1 = M2C_FIELD(temp_s0, void **, 0x64);
    var_a0 = M2C_FIELD(temp_v1, s16 **, 0x18);
    var_a1 = 1;
    temp_v1_2 = M2C_FIELD(temp_v1, u16 *, 0x32);
    var_fs1 = (f32) M2C_FIELD(var_a0, s16 *, 0);
    var_fs0 = var_fs1;
    var_fs2 = (f32) M2C_FIELD(var_a0, s16 *, 2);
    var_fs0f = var_fs2;
    var_fs2f = (f32) M2C_FIELD(var_a0, s16 *, 4);
    var_fs1f = var_fs2f;
    if ((s32) temp_v1_2 > 1) {
        var_v1 = (void *) ((4) + (s32) var_a0);
        var_a0 += 3;
        do {
            temp_fv0 = (f32) *var_a0;
            var_v1 += 6;
            if (temp_fv0 < var_fs0) {
                var_fs0 = temp_fv0;
            }
            if (var_fs1 < temp_fv0) {
                var_fs1 = temp_fv0;
            }
            temp_fv0_2 = (f32) M2C_FIELD(var_v1, s16 *, -2);
            if (temp_fv0_2 < var_fs0f) {
                var_fs0f = temp_fv0_2;
            }
            if (var_fs2 < temp_fv0_2) {
                var_fs2 = temp_fv0_2;
            }
            temp_fv0_3 = (f32) M2C_FIELD(var_v1, s16 *, 0);
            if (temp_fv0_3 < var_fs1f) {
                var_fs1f = temp_fv0_3;
            }
            if (var_fs2f < temp_fv0_3) {
                var_fs2f = temp_fv0_3;
            }
            var_a1 += 1;
            var_a0 += 3;
        } while (var_a1 < (s32) temp_v1_2);
    }
    func_8023A0DC(var_fs0, var_fs0f, var_a0, var_a1, var_fs1f, &sp18, temp_s0 + 0x34);
    M2C_FIELD(arg1, f32 *, 0) = (f32) (var_fs0 + M2C_FIELD(temp_s0, f32 *, 0x58));
    M2C_FIELD(arg1, f32 *, 4) = (f32) (var_fs1 + M2C_FIELD(temp_s0, f32 *, 0x58));
    M2C_FIELD(arg1, f32 *, 8) = (f32) (var_fs0f + M2C_FIELD(temp_s0, f32 *, 0x5C));
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (var_fs2 + M2C_FIELD(temp_s0, f32 *, 0x5C));
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) (var_fs1f + M2C_FIELD(temp_s0, f32 *, 0x60));
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) (var_fs2f + M2C_FIELD(temp_s0, f32 *, 0x60));
}
