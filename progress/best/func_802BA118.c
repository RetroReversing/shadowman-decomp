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

extern s8 D_80036E30[];

s32 func_802BA118(s32 arg0, u32 arg1) {
    s32 *__base_D_80036E30;
    char *var_v1;
    s32 var_a2;
    
s32 __repair_phase_var_v0;
    s32 var_v0_2;

    if (arg1 >= 4U) {
        return -1;
    }
    var_a2 = -1;
    __base_D_80036E30 = D_80036E30;
    if ((*D_80036E30) != -1) {
        var_v1 = __base_D_80036E30;
        var_a2 = 0;
        var_v0_2 = *var_v1;
loop_6:
        var_v1 += 0x18;
        if (var_v0_2 != arg0) {
            var_v0_2 = *(s32 *)var_v1;
            var_a2 += 0x18;
            if (var_v0_2 == -1) {
                return -1;
            }
            goto loop_6;
        }
        __repair_phase_var_v0 = M2C_FIELD(((arg1 * 4) + var_a2 + __base_D_80036E30), s32 *, 8);
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return __repair_phase_var_v0;
    }
    return var_a2;
}
