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

void func_80250D5C(void *arg0, void *arg1) {
    s32 var_a2;
    void *temp_v0;
    void *var_a1;
    void *var_v1;

    var_a1 = arg1;
    var_a2 = 0;
    var_v1 = var_a1;
    do {
        temp_v0 = M2C_FIELD(var_v1, void **, 4);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + M2C_FIELD(var_a1, f32 *, 0x24));
            M2C_FIELD(M2C_FIELD(var_v1, void **, 4), f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + M2C_FIELD(var_a1, f32 *, 0x28));
            M2C_FIELD(M2C_FIELD(var_v1, void **, 4), f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + M2C_FIELD(var_a1, f32 *, 0x2C));
        }
        var_a1 += 0xC;
        var_a2 += 1;
        var_v1 += 4;
    } while (var_a2 < 8);
}
