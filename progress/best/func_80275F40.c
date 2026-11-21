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

extern void **D_80030C5C;
extern s32 D_8005E9D4;

void *func_80275F40(s16 arg0) {
    s32 var_a1;
    void **var_a0;
    void *var_v1;

    var_a1 = 0;
    if (D_8005E9D4 >= 0) {
        var_a0 = D_80030C5C;
        for (;;) {
            var_v1 = *var_a0;
            if (var_v1 != NULL) {
loop_3:
                if ((M2C_FIELD(var_v1, s32 *, 0x18) != 1) || (M2C_FIELD(var_v1, s16 *, 0x14) != arg0)) {
                    var_v1 = M2C_FIELD(var_v1, void **, 0);
                    if (var_v1 == NULL) {
                        goto block_6;
                    }
                    goto loop_3;
                }
                return var_v1;
            }
block_6:
            var_a1 += 1;
            var_a0 += 1;
            if (D_8005E9D4 < var_a1) {
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return NULL;
            }
            continue;
            break;
        }
    }
    return NULL;
}
