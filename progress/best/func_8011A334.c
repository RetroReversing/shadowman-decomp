/* Partial candidate from function #85899348493 in project #20; rechecked locally. */
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

s32 func_8011A160();
extern u16 D_800BA14A;
extern u16 D_800BA14C;

s32 func_8011A334(void *arg0, s32 arg1, s16 arg2, u16 *arg3, s32 arg4) {
    s32 sp18;
    u16 *sp20;
    s32 sp24;
    void *sp28;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 var_a2;
    s16 var_s1;
    s16 var_s2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_5;
    s32 temp_v1_4;
    s32 var_a0_2;
    s32 var_s4;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    char *var_t0;
    u16 temp_s0;
    u16 temp_s0_2;
    u16 var_a0;
    u16 var_s5;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_6;
    void *var_s3;
    void *var_t2;

    var_t2 = arg0;
    var_t1 = arg1;
    var_s5 = 0;
    var_s2 = 0;
    var_t0 = arg3;
    *(u16 *)var_t0 = 0;
    var_s3 = M2C_FIELD(var_t2, void **, 0x10);
    var_s4 = M2C_FIELD(var_s3, s32 *, 0x20);
    var_s1 = 0;
    if (arg2 > 0) {
        sp18 = arg2 << 0x10;
loop_2:
        if (D_800BA14C != 0) {
            D_800BA14C -= 1;
            D_800BA14A *= 2;
            if (D_800BA14A & 0x8000) {
                var_a0 = M2C_FIELD((((s32) (var_s5 << 0x10) >> 0xE) + var_s4), u16 *, 2);
                var_v0 = var_a0 << 0x10;
            } else {
                var_a0 = *(u16 *)(((s32) (var_s5 << 0x10) >> 0xE) + var_s4);
                var_v0 = var_a0 << 0x10;
            }
            temp_a1 = (var_v0 >> 0xE) + var_s4;
            var_s5 = var_a0;
            if (M2C_FIELD(temp_a1, u16 *, 0) == 0x800) {
                temp_s0 = M2C_FIELD(temp_a1, u16 *, 2);
                temp_a0 = temp_s0 & 0xF00;
                var_s5 = 0;
                if ((temp_a0 == 0) || (temp_a0 == 0xF00)) {
                    *(u16 *)(((s32) (var_s1 << 0x10) >> 0xF) + var_t1) = temp_s0;
                    var_s1 += 1;
                    goto block_27;
                }
                if ((s16) temp_s0 == 0x900) {
                    temp_s0_2 = D_800BA14A;
                    sp20 = var_t0;
                    sp24 = var_t1;
                    sp28 = var_t2;
                    temp_a0_2 = var_s1 << 0x10;
                    if (func_8011A160(&D_800BA14A, M2C_FIELD(var_s3, u16 *, 0xE), 1, 0, arg4) & 0xFFFF) {
                        var_s1 += 1;
                        temp_v1 = temp_s0_2 | ((s32) D_800BA14A >> D_800BA14C);
                        D_800BA14A <<= 0x10 - D_800BA14C;
                        *(s16 *)((temp_a0_2 >> 0xF) + var_t1) = temp_v1;
                        goto block_27;
                    }
                    goto block_31;
                }
                if (temp_a0 == 0xA00) {
                    var_a2 = 0;
                    temp_a1_2 = ((temp_s0 & 0xFF) * 0x1B8) + M2C_FIELD(var_s3, s32 *, 0x1C);
                    if (M2C_FIELD(temp_a1_2, s32 *, 0x1A0) > 0) {
                        var_v0_2 = 0 << 0x10;
                        do {
                            temp_v1_2 = var_a2 + 1;
                            var_a2 = temp_v1_2;
                            temp_v0 = var_v0_2 >> 0x10;
                            *(s32 *)((temp_v0 * 2) + (((s32) (var_s1 << 0x10) >> 0xF) + var_t1)) = M2C_FIELD((temp_a1_2 + (temp_v0 * 4)), u16 *, 0xA2);
                            var_v0_2 = var_a2 << 0x10;
                        } while (temp_v1_2 < M2C_FIELD(temp_a1_2, s32 *, 0x1A0));
                    }
                    var_s1 += var_a2;
block_27:
                    var_a0_2 = var_s1 << 0x10;
                    goto block_28;
                }
                var_a0_2 = var_s1 << 0x10;
                if (temp_a0 == 0xB00) {
                    var_v1 = var_s2 << 0x10;
                    if (var_s1 < arg2) {
                        do {
                            temp_v0_2 = var_s1;
                            temp_v1_3 = temp_v0_2 + 1;
                            var_s1 = temp_v1_3;
                            *(s32 *)(((s32) (temp_v0_2 << 0x10) >> 0xF) + var_t1) = 0;
                        } while (temp_v1_3 < (sp18 >> 0x10));
                        var_v1 = var_s2 << 0x10;
                    }
                    temp_v0_3 = ((var_v1 >> 0x10) * 0x14) + var_t2;
                    var_v1_2 = M2C_FIELD(temp_v0_3, s32 *, 4) + M2C_FIELD(temp_v0_3, s32 *, 8);
loop_25:
                    temp_a0_3 = var_s2 + 1;
                    if (arg2 >= var_v1_2) {
                        *var_t0 += 1;
                        temp_v0_4 = (temp_a0_3 * 0x14) + var_t2;
                        temp_v1_4 = M2C_FIELD(temp_v0_4, s32 *, 4);
                        temp_v0_5 = M2C_FIELD(temp_v0_4, s32 *, 8);
                        var_s2 = temp_a0_3;
                        var_v1_2 = temp_v1_4 + temp_v0_5;
                        goto loop_25;
                    }
                    return sp18 >> 0x10;
                }
block_28:
                temp_v0_6 = (var_s2 * 0x14) + var_t2;
                var_v0_3 = var_s1 << 0x10;
                if ((var_a0_2 >> 0x10) >= (M2C_FIELD(temp_v0_6, s32 *, 4) + M2C_FIELD(temp_v0_6, s32 *, 8))) {
                    temp_a0_4 = var_s2 + 1;
                    *var_t0 += 1;
                    var_s3 = M2C_FIELD(((temp_a0_4 * 0x14) + var_t2), void **, 0x10);
                    var_s4 = M2C_FIELD(var_s3, s32 *, 0x20);
                    var_s2 = temp_a0_4;
                    goto block_33;
                }
                goto block_34;
            }
            goto block_33;
        }
        sp20 = var_t0;
        sp24 = var_t1;
        sp28 = var_t2;
        if (!(func_8011A160(&D_800BA14A, 0x10U, 1, 0, arg4) & 0xFFFF)) {
block_31:
            return -1;
        }
        D_800BA14C += 0x10;
block_33:
        var_v0_3 = var_s1 << 0x10;
block_34:
        if ((var_v0_3 >> 0x10) >= arg2) {
            goto block_35;
        }
        goto loop_2;
    }
block_35:
    return (s32) var_s1;
}
