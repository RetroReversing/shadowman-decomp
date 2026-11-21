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

s32 func_80231D44(f32, f32, s32, void *);           /* extern */
s32 func_80273580();                                /* extern */
s32 func_802D0B28(s32, s8, M2C_UNK);                /* extern */
extern s32 D_8002D2B4;
extern void *D_8005E9F0;
extern s32 D_8005EA14;

s32 func_802734B0(void *arg0) {
    void **__base_D_8005E9F0;
    s32 *__base_D_8002D2B4;
    s16 *var_s1;
    s32 var_s2;
    s8 temp_a1;
    void *var_s0;

    temp_a1 = M2C_FIELD(arg0, s8 *, 0x71);
    __base_D_8002D2B4 = &D_8002D2B4;
    if (temp_a1 == (*__base_D_8002D2B4)) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        return func_80273580();
    }
    if (func_802D0B28(D_8005EA14, temp_a1, 2) != 0) {
        __base_D_8005E9F0 = &D_8005E9F0;
        var_s1 = M2C_FIELD((*__base_D_8005E9F0), s16 **, 0xC);
        var_s2 = 0;
        if (M2C_FIELD((*__base_D_8005E9F0), s16 *, 0x22) > 0) {
            var_s0 = var_s1 + 4;
            for (;;) {
                if ((*var_s1 == 5) && (func_80231D44(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, s32 *, 8), var_s0) != 0)) {
                    if (M2C_FIELD(var_s0, s16 *, -2) != (*__base_D_8002D2B4)) {
                        goto block_11;
                    }
                    return func_80273580();
                }
block_11:
                var_s0 += 0x1C;
                var_s2 += 1;
                var_s1 += 14;
                if (var_s2 >= M2C_FIELD((*__base_D_8005E9F0), s16 *, 0x22)) {
                    /* Duplicate return node #12. Try simplifying control flow for better match */
                    return 0;
                }
                continue;
                break;
            }
        }
    }
    return 0;
}
