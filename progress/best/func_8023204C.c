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
s32 func_8023215C();                                /* extern */
extern void *D_8002E0A4;
extern void *D_8005E9F0;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x40, 0x44], gap at: 0x38. */
s32 func_8023204C(f32 arg0, f32 arg1, M2C_UNK arg2) {
    s16 *var_s1;
    s16 temp_v0;
    s32 var_s2;
    void *temp_s0;
    void *var_s0;
    

    var_s1 = M2C_FIELD(D_8005E9F0, s16 **, 0xC);
    var_s2 = 0;
    if (M2C_FIELD(D_8005E9F0, s16 *, 0x22) > 0) {
        var_s0 = var_s1 + 4;
loop_2:
        temp_v0 = *var_s1;
        if (temp_v0 != 2) {
            if (temp_v0 == 6) {
                goto block_5;
            }
            goto block_8;
        }
block_5:
        if (func_80231D44(arg0, arg1, arg2, var_s0) != 0) {
            return func_8023215C();
        }
block_8:
        var_s0 += 0x1C;
        var_s2 += 1;
        var_s1 += 14;
        if (var_s2 >= M2C_FIELD(D_8005E9F0, s16 *, 0x22)) {
            goto block_9;
        }
        goto loop_2;
    }
block_9:
    var_s0 = D_8002E0A4;
    if (var_s0 != NULL) {
loop_10:
        temp_s0 = M2C_FIELD(var_s0, void **, 8);
        if ((temp_s0 != NULL) && (func_80231D44(arg0, arg1, arg2, temp_s0) != 0)) {
            return func_8023215C();
        }
        var_s0 = M2C_FIELD(var_s0, void **, 0);
        if (var_s0 == NULL) {
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_10;
    }
    return 0;
}
