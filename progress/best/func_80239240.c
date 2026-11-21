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

M2C_UNK *func_802392E0();                           /* extern */
M2C_UNK *func_80239328(M2C_UNK *);                  /* extern */
extern s32 (*D_800698B0)(M2C_UNK *, M2C_UNK *);

M2C_UNK *func_80239240(M2C_UNK *arg0) {
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s2;
    M2C_UNK *temp_s2_2;
    M2C_UNK *temp_s3;
    
    M2C_UNK *var_s0_2;
    M2C_UNK *var_s0_3;
    M2C_UNK *var_s1;
    M2C_UNK *var_s4;
    s32 temp_v0;

    temp_s1 = arg0;
    temp_s2 = temp_s1;
loop_1:
    temp_s1 = *temp_s1;
    if (temp_s1 == NULL) {
        return func_80239328(temp_s2);
    }
    temp_v0 = D_800698B0(temp_s2, temp_s1);
    if (temp_v0 != 0) {
        var_s4 = temp_s2;
        if (temp_v0 > 0) {
            var_s4 = temp_s1;
        }
        var_s0_2 = temp_s2;
        var_s1 = NULL;
        if (var_s0_2 != NULL) {
loop_9:
            temp_s2_2 = *var_s0_2;
            if (D_800698B0(var_s4, var_s0_2) >= 0) {
                *var_s0_2 = var_s1;
                var_s1 = var_s0_2;
                var_s0_2 = temp_s2_2;
                if (var_s0_2 == NULL) {
                    goto block_15;
                }
                goto loop_9;
            }
            *var_s0_2 = NULL;
            return func_802392E0(arg0);
        }
block_15:
        temp_s1 = func_80239240(var_s1);
        temp_s3 = func_80239240(NULL);
        var_s0_3 = temp_s1;
        if (*temp_s1 != NULL) {
            do {
                var_s0_3 = *var_s0_3;
            } while (*var_s0_3 != NULL);
        }
        *var_s0_3 = temp_s3;
        return temp_s1;
    }
    goto loop_1;
}
