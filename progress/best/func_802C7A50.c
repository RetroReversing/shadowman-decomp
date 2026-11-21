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

extern s32 D_80030E54;
extern M2C_UNK D_80044FB8;

s32 func_802C7A50(void) {
    M2C_UNK *var_v1;
    s32 var_a0;
    void *temp_v0;

    var_a0 = 0;
    if (D_80030E54 & 1) {
        return 1;
    }
    var_v1 = &D_80044FB8;
loop_4:
    if (M2C_FIELD(var_v1, s32 *, 0x1C) != -1) {
        temp_v0 = M2C_FIELD(var_v1, void **, 0x24);
        if (temp_v0 != NULL) {
            var_a0 += 1;
            if (!(M2C_FIELD(temp_v0, u8 *, 1) & 0x20)) {
                var_v1 += 0xC;
                if (var_a0 >= 5) {
                    /* Duplicate return node #8. Try simplifying control flow for better match */
                    return 1;
                }
                goto loop_4;
            }
            return 0;
        }
    }
    return 1;
}
