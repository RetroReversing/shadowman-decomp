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

s32 func_80109318();
extern void *D_80072BA0;

void func_80246720(void *arg0, s32 arg1) {
    s32 (*temp_a0_2)(s32);
    s32 temp_a0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_s2;
    void *temp_a1;
    void *temp_s0;
    void *var_s1;

    var_s2 = 0;
    var_s1 = arg0;
    __repair_rows: {
        temp_v1 = M2C_FIELD(var_s1, s16 *, 0);
        if (temp_v1 != -1) {
            temp_a1 = *(s32 *)((temp_v1 * 0x38) + M2C_FIELD(arg0, s32 *, 0x30));
            if (temp_a1 != NULL) {
                temp_v1_2 = M2C_FIELD(var_s1, s16 *, 0x38);
                temp_s0 = M2C_FIELD(temp_a1, s32 *, 4) + (temp_v1_2 * 0xC);
                if ((temp_v1_2 < M2C_FIELD(temp_a1, s16 *, 0)) && (M2C_FIELD(var_s1, s16 *, 0x12) >= M2C_FIELD(temp_s0, s16 *, 0))) {
                    temp_a0 = M2C_FIELD(temp_s0, s16 *, 2);
                    D_80072BA0 = temp_s0;
                    if (temp_a0 != -1) {
                        func_80109318(temp_a0, arg1 + 0x24, 0);
                    }
                    temp_a0_2 = M2C_FIELD(temp_s0, s32 (**)(s32), 4);
                    if (temp_a0_2 != NULL) {
                        temp_a0_2(temp_a0_2);
                    }
                    M2C_FIELD(var_s1, s16 *, 0x38) = (s16) ((u16) M2C_FIELD(var_s1, s16 *, 0x38) + 1);
                }
            }
        }
        var_s2 += 1;
        var_s1 += 2;
    }
if (var_s2 < 3) goto __repair_rows;
}
