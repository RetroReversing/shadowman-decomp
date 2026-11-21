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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 **D_8005EA14;
extern char D_8005EA30[];

void *func_80233CD8(s32 arg0, s32 arg1) {
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    s32 *var_a0;
    void *temp_v1;
    s32 *__base_D_8005EA30;

    __base_D_8005EA30 = D_8005EA30;

    var_a0 = *D_8005EA14;
    if (*var_a0 != NULL) {
loop_1:
        temp_v1 = M2C_FIELD(var_a0, void **, 8);
        if (*M2C_FIELD(temp_v1, s32 **, 0x6C) == arg1) {
            __repair_store_0 = (s32) M2C_FIELD(temp_v1, s32 *, 0x24);
            __repair_store_1 = (s32) M2C_FIELD(temp_v1, s32 *, 0x28);
            __repair_store_2 = (s32) M2C_FIELD(temp_v1, s32 *, 0x2C);
            M2C_FIELD(__base_D_8005EA30, s32 *, 0) = __repair_store_0;
            M2C_FIELD(__base_D_8005EA30, s32 *, 4) = __repair_store_1;
            M2C_FIELD(__base_D_8005EA30, s32 *, 8) = __repair_store_2;
            return temp_v1;
        }
        var_a0 = M2C_FIELD(var_a0, s32 **, 0);
        if (*var_a0 == NULL) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}
