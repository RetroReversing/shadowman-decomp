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

f32 func_80236880();
s32 func_80292588();
extern s32 D_80036944;
extern void *D_8006A4FC;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x48, 0x4c, 0x50, 0x54], gap at: 0x3c. */
s32 func_80292344(s32 arg0) {
    s32 *__base_D_80036944;
    f32 sp10[3];
    f32 temp_fs0f;
    f32 var_fs0;
    f32 var_fs1;
    s32 temp_a0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    u32 var_s1;
    void *temp_v0;
    void **__base_D_8006A4FC;

    __base_D_8006A4FC = &D_8006A4FC;

    var_s2 = arg0;
    temp_a0 = var_s2 * 0x34;
    __base_D_80036944 = &D_80036944;
    var_s0 = M2C_FIELD((temp_a0 + (*(&D_80036944))), s32 *, 0x24);
    var_fs1 = *(f32 *)0x2157E0;
    var_s1 = 0;
    if (var_s0 != -1) {
        temp_fs0f = *(f32 *)0x2157E4;
        var_v0 = 0U < 4U;
loop_2:
        if (var_v0 != 0) {
            if (*(s32 *)(temp_a0 + (*__base_D_80036944)) & (1 << var_s1)) {
                var_s1 += 1;
            } else {
                temp_v0 = (var_s0 * 0x34) + (*__base_D_80036944);
                sp10[0] = M2C_FIELD(temp_v0, f32 *, 4);
                sp10[1] = M2C_FIELD(temp_v0, f32 *, 8);
                sp10[2] = M2C_FIELD(temp_v0, f32 *, 0xC);
                var_fs0 = M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x1C) - func_80236880((*__base_D_8006A4FC) + 0x24, sp10);
                if (var_fs0 < 0.0f) {
                    var_fs0 += temp_fs0f;
                }
                if (temp_fs0f < var_fs0) {
                    var_fs0 -= temp_fs0f;
                }
                if (*(f32 *)0x2157E8 < var_fs0) {
                    var_fs0 = fabsf(var_fs0 - temp_fs0f);
                }
                var_s1 += 1;
                if ((func_80292588(var_s0) >= 2) && (var_fs0 <= var_fs1)) {
                    var_s2 = var_s0;
                    var_fs1 = fabsf(var_fs0);
                }
            }
            var_s0 = M2C_FIELD((temp_a0 + (*__base_D_80036944) + (var_s1 * 4)), s32 *, 0x24);
            var_v0 = var_s1 < 4U;
            if (var_s0 != -1) {
                goto loop_2;
            }
        }
    }
    return var_s2;
}
