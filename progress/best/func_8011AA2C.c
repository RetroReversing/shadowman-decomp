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

extern int D_800286B0;
extern int D_800286B4;
extern int D_800286BC;
f32 func_801132A0(f32);
f32 func_80113BE0(f32);

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x30, 0x34, 0x38, 0x3c], gap at: 0x28. */
s32 *func_8011AA2C(s32 arg0) {
    int *__base_D_800286B0;
    f32 temp_fs0;
    f32 temp_fs1;
    union { s32 * pointer; s32 value; } __repair_phase_storage;
    s32 *temp_v0;
    char *var_v1;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_t1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s1;
    
    s32 var_v1_2;

    temp_s2 = arg0 >> 1;
    var_s1 = 0;
    if (temp_s2 > 0) {
        temp_fs1 = *(f32 *)0x102870;
        do {
            temp_fs0 = ((f32) var_s1 * temp_fs1) / (f32) arg0;
            temp_s0 = var_s1 * 4;
            __base_D_800286B0 = &D_800286B0;
            *(s32 *)(temp_s0 + (*__base_D_800286B0)) = func_801132A0(temp_fs0);
            var_s1 += 1;
            *(s32 *)(temp_s0 + D_800286B4) = -func_80113BE0(temp_fs0);
        } while (var_s1 < temp_s2);
    }
    var_a3 = 0;
    temp_t1 = arg0 * 2;
    if (arg0 > 0) {
        var_v1 = *(s32 *)(s32 * *)((*__base_D_800286B0) + 8);
        do {
            *(s32 *)var_v1 = var_a3;
            var_a3 += 1;
            var_v1 += 4;
        } while (var_a3 < arg0);
    }
    var_a2 = 1;
    var_a3_2 = 1;
    if (temp_t1 > 0) {
        do {
            if (var_a3_2 < var_a2) {
                __repair_phase_storage.pointer = (((s32) (var_a2 - 1) / 2) * 4) + *(s32 *)(s32 * *)((*__base_D_800286B0) + 8);
                temp_v0 = (((s32) (var_a3_2 - 1) / 2) * 4) + *(s32 *)(s32 * *)((*__base_D_800286B0) + 8);
                temp_a1 = *__repair_phase_storage.pointer;
                *__repair_phase_storage.pointer = *temp_v0;
                *temp_v0 = temp_a1;
            }
            var_v1_2 = arg0;
            if (arg0 >= 2) {
                __repair_phase_storage.value = var_v1_2 < var_a2;
loop_12:
                if (__repair_phase_storage.value != 0) {
                    var_a2 -= var_v1_2;
                    var_v1_2 = var_v1_2 >> 1;
                    __repair_phase_storage.value = var_v1_2 < var_a2;
                    if (var_v1_2 >= 2) {
                        goto loop_12;
                    }
                }
            }
            var_a3_2 += 2;
            var_a2 += var_v1_2;
        } while (temp_t1 >= var_a3_2);
    }
    D_800286BC = arg0;
    return __base_D_800286B0;
}
