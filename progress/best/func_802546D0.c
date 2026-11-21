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

f32 func_8023B800();
extern s32 D_80030C5C;

s32 func_802546D0(void *arg0, f32 arg1) {
    s32 var_v0;
    void *temp_a0;
    void *var_s0;

    var_s0 = *(s32 *)*(s32 *)((M2C_FIELD(arg0, s8 *, 0x71) * 4) + D_80030C5C);
    var_v0 = 0;
    if (var_s0 != NULL) {
loop_1:
        var_v0 = 0;
        if ((M2C_FIELD(var_s0, void **, 0) != NULL) && ((temp_a0 = M2C_FIELD(var_s0, void **, 8), ((M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x6C), s32 *, 0x48) & 0x40) == 0)) || (var_v0 = 1, !(func_8023B800(temp_a0 + 0x24, arg0 + 0x24) < arg1)))) {
            var_s0 = M2C_FIELD(var_s0, void **, 0);
            var_v0 = 0;
            if (var_s0 != NULL) {
                goto loop_1;
            }
        }
    }
    return var_v0;
}
