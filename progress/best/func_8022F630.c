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

s32 func_8022F7BC();
s32 func_8022F7D0();
extern void *D_80059870;

s32 func_8022F630(void *arg0) {
    void **__base_D_80059870;
    s32 temp_a1;
    s32 var_s0;
    s32 var_a3_2;
    s32 var_a3_3;
    u32 var_a1_2;
    u32 var_a1_4;
    void *temp_a0;
    void *temp_a2;
    void *var_a1;
    void *var_a1_3;
    void *var_a3;
    void *var_v1;
    void *var_v1_2;

    __base_D_80059870 = &D_80059870;
    var_a1 = (*__base_D_80059870);
    var_a3 = NULL;
loop_1:
    if (M2C_FIELD(arg0, s32 *, 0) != M2C_FIELD(var_a1, s32 *, 0)) {
        var_a3 += 1;
        goto block_12;
    }
    if (M2C_FIELD(arg0, s16 *, 4) != M2C_FIELD(var_a1, s16 *, 4)) {
        var_a3 += 1;
        goto block_12;
    }
    if (M2C_FIELD(var_a1, void **, 8) != NULL) {
        var_a3 += 1;
block_12:
        var_a1 += 0x20;
        if ((u32) var_a3 >= 0x76CU) {
            var_a3_2 = 0;
            var_s0 = 0;
loop_14:
            temp_a2 = var_s0 + (*__base_D_80059870);
            if (M2C_FIELD(arg0, s32 *, 0) != M2C_FIELD(temp_a2, s32 *, 0)) {
                var_a3_2 += 1;
                goto block_34;
            }
            if (M2C_FIELD(arg0, s16 *, 4) != M2C_FIELD(temp_a2, s16 *, 4)) {
                var_a3_2 += 1;
block_34:
                var_s0 += 0x20;
                if (var_a3_2 >= 0x76CU) {
                    var_a3_3 = 0;
                    var_a1_3 = (*__base_D_80059870);
loop_36:
                    if (M2C_FIELD(var_a1_3, s32 *, 0) != 0) {
                        var_a3_3 += 1;
                        goto block_44;
                    }
                    if (M2C_FIELD(var_a1_3, s16 *, 4) != 0) {
                        var_a3_3 += 1;
block_44:
                        var_a1_3 += 0x20;
                        if (var_a3_3 >= 0x76CU) {
                            return 0;
                        }
                        goto loop_36;
                    }
                    M2C_FIELD(var_a1_3, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
                    M2C_FIELD(var_a1_3, void **, 8) = arg0;
                    M2C_FIELD(var_a1_3, u16 *, 0x18) = var_a3_3;
                    return func_8022F7BC(var_a1_3);
                }
                goto loop_14;
            }
            var_a1_2 = 0;
            var_v1 = temp_a2;
loop_21:
            if (M2C_FIELD(var_v1, s32 *, 8) != arg0) {
                var_a1_2 += 1;
                var_v1 += 4;
                if (var_a1_2 >= 4U) {
                    var_v1_2 = var_s0 + (*__base_D_80059870);
                    var_a1_4 = 0;
                    if (M2C_FIELD(var_v1_2, s32 *, 8) != 0) {
loop_28:
                        if (var_a1_4 < 4U) {
                            var_v1_2 += 4;
                            var_a1_4 += 1;
                            if (M2C_FIELD(var_v1_2, s32 *, 8) != 0) {
                                goto loop_28;
                            }
                        }
                    }
                    temp_a0 = var_s0 + (*__base_D_80059870);
                    M2C_FIELD((temp_a0 + (var_a1_4 * 4)), void **, 8) = arg0;
                    temp_a1 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 8), s32 *, 8);
                    if (temp_a1 != 0) {
                        func_8022F7D0(temp_a0, temp_a1, temp_a2, var_a3_2);
                    }
                    return func_8022F7BC();
                }
                goto loop_21;
            }
            return func_8022F7BC((void *) var_a1_2, temp_a2, var_a3_2);
        }
        goto loop_1;
    }
    M2C_FIELD(var_a1, void **, 8) = arg0;
    return func_8022F7BC(var_a1, var_a3);
}
