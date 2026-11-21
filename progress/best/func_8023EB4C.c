/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_8023EA30(s32, void *, s16, s32);       /* extern */

void func_8023EB4C(void *arg0, void *arg1) {
    s16 temp_a0;
    s16 temp_a2;
    s16 temp_v0_2;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s1;
    s32 var_s4;
    void *temp_fp;
    void *var_a1;
    void *var_s0;
    void *var_s2;
    void *var_s6;

    var_s6 = M2C_FIELD(arg1, void **, 0x40);
    temp_fp = M2C_FIELD(arg1, void **, 0x48);
    temp_s7 = M2C_FIELD(arg0, s32 *, 0x28);
    var_s4 = 0;
    if (M2C_FIELD(arg1, s16 *, 0x3E) > 0) {
        var_s2 = M2C_FIELD(temp_fp, s32 *, 8) + 6;
        __repair_rows: {
            temp_v0 = M2C_FIELD(var_s2, s16 *, 2) * 8;
            func_8023EA30(temp_s7 + temp_v0, var_s6, M2C_FIELD(var_s2, s16 *, -2), M2C_FIELD(arg1, s32 *, 0x4C) + temp_v0);
            var_s1 = 0;
            temp_a0 = M2C_FIELD(var_s2, s16 *, 0);
            if (temp_a0 > 0) {
                var_s0 = M2C_FIELD(temp_fp, s32 *, 0xC) + (M2C_FIELD(var_s2, u16 *, 4) * 0x3C) + 0xC;
                var_a1 = var_s0;
                do {
                    var_s1 += 1;
                    temp_a2 = M2C_FIELD(var_s0, s16 *, -6);
                    temp_v0_2 = M2C_FIELD(var_s0, s16 *, -4);
                    var_s0 += 0x3C;
                    temp_v0_3 = temp_v0_2 * 8;
                    func_8023EA30(temp_s7 + temp_v0_3, var_a1, temp_a2, M2C_FIELD(arg1, s32 *, 0x4C) + temp_v0_3);
                    var_a1 = var_s0;
                } while (var_s1 < temp_a0);
            }
            var_s4 += 1;
            var_s6 += 0x40;
            var_s2 += 0xC;
        }
if (var_s4 < M2C_FIELD(arg1, s16 *, 0x3E)) goto __repair_rows;
    }
}
