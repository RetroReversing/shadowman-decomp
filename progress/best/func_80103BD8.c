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

s32 func_80103FA8();
s32 func_80104130();
s32 func_80104154();
extern s32 *D_8004AD78;

void func_80103BD8(void) {
    s32 *temp_a1_2;
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 *var_a1;
    s32 *var_a1_2;
    s16 temp_v0_2;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 var_a1_3;
    s16 var_s1;
    s16 var_s1_2;
    s16 var_s2;
    s32 temp_a0_2;
    s32 temp_a2_2;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0_3;
    void *temp_v0_5;

    if (D_8004AD78 != NULL) {
        var_a1 = D_8004AD78;
        do {
            temp_s0 = M2C_FIELD(var_a1, s32 **, 0);
            if (!(M2C_FIELD(var_a1, s32 *, 0xC) & 0xFFFFFF)) {
                func_80103FA8(var_a1, var_a1);
            }
            var_a1 = temp_s0;
        } while (temp_s0 != NULL);
        temp_v0 = func_80104154((s32) (func_80104130() << 0x10) >> 0xE);
        if (temp_v0 != 0) {
            var_a1_2 = D_8004AD78;
            var_s2 = 0;
            if (var_a1_2 != NULL) {
                do {
                    *(s32 *)(((s32) (var_s2 << 0x10) >> 0xE) + temp_v0) = var_a1_2;
                    var_a1_2 = *var_a1_2;
                    var_s2 += 1;
                } while (var_a1_2 != NULL);
            }
            do {
                var_a3 = 0;
                var_s1 = 0;
                if ((var_s2 - 1) > 0) {
                    var_v0 = 0 << 0x10;
                    do {
                        temp_a0 = (var_v0 >> 0xE) + temp_v0;
                        temp_a2 = M2C_FIELD(temp_a0, void **, 0);
                        temp_a1 = M2C_FIELD(temp_a0, void **, 4);
                        temp_v0_2 = var_s1 + 1;
                        if ((u32) M2C_FIELD(temp_a1, u32 *, 8) < (u32) M2C_FIELD(temp_a2, u32 *, 8)) {
                            var_a3 = 1;
                            M2C_FIELD(temp_a0, void **, 0) = temp_a1;
                            M2C_FIELD(temp_a0, void **, 4) = temp_a2;
                        }
                        var_s1 = temp_v0_2;
                        var_v0 = var_s1 << 0x10;
                    } while (temp_v0_2 < (var_s2 - 1));
                }
                temp_v1 = var_a3 & 0xFF;
            } while (temp_v1 != 0);
            var_s1_2 = 0;
            if (temp_v1 < (var_s2 - 1)) {
                var_v0_2 = 0 << 0x10;
                do {
                    temp_v0_3 = (var_v0_2 >> 0xE) + temp_v0;
                    temp_a1_2 = M2C_FIELD(temp_v0_3, s32 **, 0);
                    temp_s0_2 = M2C_FIELD(temp_v0_3, s32 **, 4);
                    temp_a0_2 = M2C_FIELD(temp_a1_2, s32 *, 0xC);
                    temp_a2_2 = temp_a0_2 & 0xFFFFFF;
                    if ((M2C_FIELD(temp_a1_2, s32 *, 8) + temp_a2_2) != M2C_FIELD(temp_s0_2, s32 *, 8)) {
                        var_s1_2 += 1;
                    } else {
                        M2C_FIELD(temp_a1_2, s32 *, 0xC) = (s32) ((temp_a0_2 & 0xFF000000) | ((temp_a2_2 + (M2C_FIELD(temp_s0_2, s32 *, 0xC) & 0xFFFFFF)) & 0xFFFFFF));
                        func_80103FA8(temp_s0_2, temp_a1_2, temp_a2_2);
                        temp_v1_2 = var_s1_2 + 1;
                        var_a1_3 = temp_v1_2;
                        temp_v0_4 = var_s2 - 1;
                        if (temp_v1_2 < temp_v0_4) {
                            do {
                                temp_v0_5 = ((s32) (var_a1_3 << 0x10) >> 0xE) + temp_v0;
                                temp_v1_3 = var_a1_3 + 1;
                                var_a1_3 = temp_v1_3;
                                M2C_FIELD(temp_v0_5, s32 *, 0) = (s32) M2C_FIELD(temp_v0_5, s32 *, 4);
                            } while (temp_v1_3 < temp_v0_4);
                        }
                        var_s1_2 = 0;
                        var_s2 -= 1;
                    }
                    var_v0_2 = var_s1_2 << 0x10;
                } while (var_s1_2 < (var_s2 - 1));
            }
        }
    }
}
