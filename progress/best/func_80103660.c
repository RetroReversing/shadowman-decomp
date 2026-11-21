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

s32 func_80103848();
s32 func_80103BD8();
void *func_80103E10();
s32 func_80103FA8();
s32 func_8010400C();
extern char D_8004AD78[];
extern void *D_8004AD84;
extern void *D_8004AD88;

s32 func_80103660(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a2;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_s2;
    u32 temp_s2_2;
    u32 temp_v0_2;
    void *temp_s1;
    void *var_s0;
    void *var_s0_2;

    temp_s6 = 1 << arg1;
    if (arg3 & 8) {
        var_s0 = M2C_FIELD(D_8004AD78, void **, 0);
        if (var_s0 != NULL) {
            temp_a2 = -temp_s6;
loop_3:
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0xC) & 0xFFFFFF;
            if ((temp_a0 < arg0) || (temp_v1 = M2C_FIELD(var_s0, s32 *, 8), temp_s2 = arg0 + (((temp_v1 - 1 + temp_s6) & temp_a2) - temp_v1), ((temp_a0 < temp_s2) != 0))) {
                var_s0 = M2C_FIELD(var_s0, void **, 0);
                if (var_s0 == NULL) {
                    return func_80103848(temp_a0, 0xFFFFFF, temp_a2);
                }
                goto loop_3;
            }
            M2C_FIELD(var_s0, s32 *, 8) = (s32) (temp_v1 + temp_s2);
            D_8004AD88 = NULL;
            D_8004AD84 = NULL;
            temp_v0 = M2C_FIELD(var_s0, s32 *, 0xC);
            M2C_FIELD(var_s0, s32 *, 0xC) = (s32) ((temp_v0 & 0xFF000000) | (((temp_v0 & 0xFFFFFF) - temp_s2) & 0xFFFFFF));
            func_80103BD8(temp_a0, 0xFFFFFF, temp_a2);
            return func_80103848();
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return 0;
    }
    var_s0_2 = M2C_FIELD(D_8004AD78, void **, 0);
    temp_s1 = func_80103E10();
    if (var_s0_2 != NULL) {
loop_12:
        temp_a0_2 = M2C_FIELD(var_s0_2, u32 *, 0xC) & 0xFFFFFF;
        if (temp_a0_2 >= arg0) {
            temp_v1_2 = M2C_FIELD(var_s0_2, s32 *, 8);
            temp_s3 = (temp_v1_2 - 1 + temp_s6) & -temp_s6;
            temp_s2_2 = arg0 + (temp_s3 - temp_v1_2);
            if (temp_a0_2 >= temp_s2_2) {
                if (M2C_FIELD(D_8004AD78, void **, 4) == NULL) {
                    M2C_FIELD(D_8004AD78, void **, 4) = temp_s1;
                } else {
                    func_8010400C(temp_s1, M2C_FIELD(D_8004AD78, void **, 4), D_8004AD78);
                }
                M2C_FIELD(temp_s1, s32 *, 8) = temp_s3;
                M2C_FIELD(temp_s1, s32 *, 0xC) = (s32) ((M2C_FIELD(temp_s1, s32 *, 0xC) & 0xFF000000) | (arg0 & 0xFFFFFF));
                M2C_FIELD(temp_s1, s32 *, 0xC) = (s8) ((u8) M2C_FIELD(temp_s1, s32 *, 0xC) | arg3);
                D_8004AD88 = temp_s1;
                temp_v0_2 = M2C_FIELD(var_s0_2, u32 *, 0xC);
                D_8004AD84 = var_s0_2;
                temp_a0_3 = (temp_v0_2 & 0xFF000000) | (((temp_v0_2 & 0xFFFFFF) - temp_s2_2) & 0xFFFFFF);
                M2C_FIELD(var_s0_2, s32 *, 8) += temp_s2_2;
                M2C_FIELD(var_s0_2, u32 *, 0xC) = temp_a0_3;
                func_80103BD8(temp_a0_3);
                return func_80103848();
            }
        }
        var_s0_2 = M2C_FIELD(var_s0_2, void **, 0);
        if (var_s0_2 == NULL) {
            goto block_21;
        }
        goto loop_12;
    }
block_21:
    func_80103FA8(temp_s1);
    return 0;
}
