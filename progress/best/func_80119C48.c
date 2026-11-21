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

M2C_UNK func_80118630(s32, M2C_UNK);                /* extern */
s32 *func_80119D60(s32);                            /* extern */
s32 *func_80119E2C(s32, s32 *);                     /* extern */
s32 func_8011B51C(s32, s32 *, s32);                 /* extern */
extern s32 D_800286A0;

s32 *func_80119C48(void *arg0, s16 *arg1, s32 arg2, s32 *arg4) {
    s16 var_s3;
    s32 *temp_s0;
    s32 *var_a1;
    s32 *var_s0;
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a2;
    s32 var_s2;
    s32 var_s5;
    void *temp_s4;
    void *var_a0;

    var_a0 = arg0;
    var_a2 = arg2;
    var_s1 = arg4;
    var_s5 = var_a2;
    temp_s4 = var_a0;
    var_s3 = *arg1;
    var_a1 = var_s1;
    if (*M2C_FIELD(temp_s4, s32 **, 0x28) == 0) {
        *var_a1 = (var_s3 & 0xFFFFFF) | 0x02000000;
        return func_80119E2C(0x02000000, var_a1);
    }
    var_s0 = var_s1 - 4;
    if (var_s5 != 0) {
loop_7:
        var_s2 = var_s5;
        if (M2C_FIELD(temp_s4, s32 *, 0x38) == 0) {
            temp_v0 = func_8011B51C((s32) var_a0, var_a1, var_a2);
            D_800286A0 = temp_v0;
            if (temp_v0 != 0) {
                func_80118630(temp_v0, 0x200);
                M2C_FIELD(temp_s4, s32 *, 0x38) = 0x100;
                goto block_10;
            }
            temp_a0_2 = (var_s3 & 0xFFFFFF) | 0x02000000;
            *var_s1 = temp_a0_2;
            return func_80119E2C(temp_a0_2, var_s1);
        }
block_10:
        temp_v1 = M2C_FIELD(temp_s4, s32 *, 0x38);
        if (temp_v1 < var_s5) {
            var_s2 = temp_v1;
        }
        var_a2 = D_800286A0 & 7;
        temp_a0 = (var_s2 * 2) + var_a2;
        if (var_s3 & 7) {
            return func_80119D60(temp_a0);
        }
        var_a1 = NULL;
        temp_s0 = var_s0 + 8;
        M2C_FIELD(temp_s0, s32 *, -4) = (s32) ((var_s3 & 0xFFFF) | 0x08000000);
        M2C_FIELD(var_s0, s32 *, 8) = (s32) ((temp_a0 - ((temp_a0 & 7) - 8)) & 0xFFFF);
        var_s0 = temp_s0 + 8;
        var_s1 += 0x10;
        M2C_FIELD(var_s0, s32 *, -4) = 0x04000000;
        M2C_FIELD(temp_s0, s32 *, 8) = (s32) ((D_800286A0 & 0x1FFFFFFF) - var_a2);
        if ((var_a2 != 0) || (0 != 0)) {
            var_s0 += 8;
            var_s1 += 8;
            M2C_FIELD(var_s0, s32 *, -4) = (s32) (((var_s3 + var_a2) & 0xFFFFFF) | 0x0A000000);
            M2C_FIELD(var_s0, s32 *, 0) = (var_s3 << 0x10) | ((var_s2 * 2) & 0xFFFF);
        }
        var_s5 -= var_s2;
        temp_v0_2 = var_s2 * 2;
        var_s3 += temp_v0_2;
        var_a0 = M2C_FIELD(temp_s4, s32 *, 0x38) - var_s2;
        D_800286A0 += temp_v0_2;
        M2C_FIELD(temp_s4, s32 *, 0x38) = (s32) var_a0;
        if (var_s5 == 0) {
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return var_s1;
        }
        goto loop_7;
    }
    return var_s1;
}
