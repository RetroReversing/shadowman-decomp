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

s32 func_802D09B8(s32 *, s8, s8, s32);              /* extern */
s32 func_802D0AE8(void *, s8, s8, s32);             /* extern */
extern s32 D_8002D2B4;
extern s32 D_800458D0;
extern s32 D_800458D4;
extern s32 D_8005E9D4;
extern M2C_UNK D_80075568;
extern void *D_8007BEF0;

s32 func_802D0868(void) {
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a3;
    s32 var_a3_2;
    s8 temp_a2;
    s8 temp_v1;
    s8 var_a1;
    s8 var_a1_2;
    s8 var_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_a0_2;
    void *var_v1;

    var_a1_3 = 0;
    D_800458D4 = D_800458D0 ^ 1;
    if (D_8005E9D4 >= 0) {
        var_a0_2 = D_8007BEF0;
        var_a3_2 = 0;
loop_2:
        temp_v0 = M2C_FIELD(var_a0_2, void **, 0x20);
        if ((temp_v0 == NULL) || (M2C_FIELD(temp_v0, u8 *, 0x3E) != 1)) {
            var_a0_2 += 0x28;
            var_a1_3 += 1;
            var_a3_2 += 0x28;
            if (D_8005E9D4 < var_a1_3) {
                goto block_6;
            }
            goto loop_2;
        }
        M2C_FIELD(M2C_FIELD(var_a0_2, void **, 0x20), s32 *, 0x18) = 0;
        M2C_FIELD(M2C_FIELD(var_a0_2, void **, 0x20), s32 *, 0x14) = 0;
        M2C_FIELD(M2C_FIELD(var_a0_2, void **, 0x20), s32 *, 0x1C) = 0;
        M2C_FIELD(M2C_FIELD(var_a0_2, void **, 0x20), s32 *, 0x20) = 0;
        M2C_FIELD(M2C_FIELD(var_a0_2, void **, 0x20), s32 *, 0x24) = 0;
        M2C_FIELD(M2C_FIELD(var_a0_2, void **, 0x20), s32 *, 0x28) = 0;
        M2C_FIELD(M2C_FIELD(var_a0_2, void **, 0x24), s32 *, 0x10) = 0;
        M2C_FIELD(M2C_FIELD(var_a0_2, void **, 0x24), s16 *, 0x1C) = 0;
        D_800458D4 = (s32) M2C_FIELD(var_a0_2, s8 *, 0x1C);
        M2C_FIELD(M2C_FIELD(var_a0_2, void **, 0x20), s8 *, 0x3E) = 0;
        M2C_FIELD((var_a3_2 + D_8007BEF0), s8 *, 0x1C) = -1;
        D_800458D0 = D_800458D4;
        return D_800458D4;
    }
block_6:
    if (M2C_FIELD(&D_80075568, s8 *, 0x71) != -1) {
        var_a1_2 = 0;
        if (D_8005E9D4 >= 0) {
            var_a0 = D_8007BEF0;
            var_a2 = 0;
loop_9:
            if ((M2C_FIELD(var_a0, void **, 0x20) == NULL) || (temp_v1 = M2C_FIELD(var_a0, s8 *, 0x1C), (temp_v1 == -1)) || (M2C_FIELD(&D_80075568, s8 *, 0x71) == var_a1_2)) {
                var_a0 += 0x28;
                var_a1_2 += 1;
                var_a2 += 0x28;
                if (D_8005E9D4 < var_a1_2) {
                    return func_802D0AE8(var_a0, var_a1_2, var_a2, D_8005E9D4);
                }
                goto loop_9;
            }
            M2C_FIELD(M2C_FIELD(var_a0, void **, 0x20), s32 *, 0x18) = 0;
            M2C_FIELD(M2C_FIELD(var_a0, void **, 0x20), s32 *, 0x14) = 0;
            M2C_FIELD(M2C_FIELD(var_a0, void **, 0x20), s32 *, 0x1C) = 0;
            M2C_FIELD(M2C_FIELD(var_a0, void **, 0x20), s32 *, 0x20) = 0;
            M2C_FIELD(M2C_FIELD(var_a0, void **, 0x20), s32 *, 0x24) = 0;
            M2C_FIELD(M2C_FIELD(var_a0, void **, 0x20), s32 *, 0x28) = 0;
            M2C_FIELD(M2C_FIELD(var_a0, void **, 0x24), s32 *, 0x10) = 0;
            M2C_FIELD(M2C_FIELD(var_a0, void **, 0x24), s16 *, 0x1C) = 0;
            D_800458D4 = (s32) temp_v1;
            M2C_FIELD(M2C_FIELD(var_a0, void **, 0x20), s8 *, 0x3E) = 0;
            return func_802D09B8(&D_800458D4, var_a1_2, var_a2, D_8005E9D4);
        }
        goto block_28;
    }
    var_a1 = 0;
    if (D_8005E9D4 >= 0) {
        var_a3 = 0;
        var_v1 = D_8007BEF0;
loop_22:
        temp_v0_2 = M2C_FIELD(var_v1, void **, 0x20);
        if (temp_v0_2 != NULL) {
            temp_a2 = M2C_FIELD(var_v1, s8 *, 0x1C);
            if (temp_a2 != -1) {
                if (D_8002D2B4 != var_a1) {
                    M2C_FIELD(temp_v0_2, s32 *, 0x18) = 0;
                    M2C_FIELD(M2C_FIELD(var_v1, void **, 0x20), s32 *, 0x14) = 0;
                    M2C_FIELD(M2C_FIELD(var_v1, void **, 0x20), s32 *, 0x1C) = 0;
                    M2C_FIELD(M2C_FIELD(var_v1, void **, 0x20), s32 *, 0x20) = 0;
                    M2C_FIELD(M2C_FIELD(var_v1, void **, 0x20), s32 *, 0x24) = 0;
                    M2C_FIELD(M2C_FIELD(var_v1, void **, 0x20), s32 *, 0x28) = 0;
                    M2C_FIELD(M2C_FIELD(var_v1, void **, 0x24), s32 *, 0x10) = 0;
                    M2C_FIELD(M2C_FIELD(var_v1, void **, 0x24), s16 *, 0x1C) = 0;
                    D_800458D4 = (s32) temp_a2;
                    M2C_FIELD(M2C_FIELD(var_v1, void **, 0x20), s8 *, 0x3E) = 0;
                    return func_802D09B8(&D_800458D4, var_a1, temp_a2, var_a3);
                }
                goto block_27;
            }
        }
block_27:
        var_v1 += 0x28;
        var_a1 += 1;
        var_a3 += 0x28;
        if (D_8005E9D4 < var_a1) {
            goto block_28;
        }
        goto loop_22;
    }
block_28:
    D_800458D0 = D_800458D4;
    if (D_8005E9D4 >= 0) {
        var_a1_4 = 1;
        do {
            var_a1_4 += 1;
        } while (D_8005E9D4 >= var_a1_4);
    }
    return D_800458D4;
}
