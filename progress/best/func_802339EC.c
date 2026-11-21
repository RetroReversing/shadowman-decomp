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

M2C_UNK func_80233B0C(s32, void *, M2C_UNK);        /* extern */
extern M2C_UNK D_8005E9D0;
extern M2C_UNK D_8005E9E8;
extern void *D_8005E9F0;
extern M2C_UNK D_8005EA00;
extern M2C_UNK D_8005EA04;

void func_802339EC(void *arg1) {
    s32 var_s0;
    s32 var_s1;
    void *var_a1;

    var_a1 = arg1;
    var_s1 = 0;
    if (M2C_FIELD(D_8005E9F0, s16 *, 0x1E) > 0) {
        var_s0 = 0;
        do {
            M2C_FIELD(&D_8005EA04, s32 *, 0) = -1;
            M2C_FIELD(&D_8005E9D0, s32 *, 0) = 0;
            M2C_FIELD(&D_8005EA00, s32 *, 0) = 0x186A0;
            M2C_FIELD(&D_8005E9E8, s32 *, 0) = 0;
            func_80233B0C(var_s1, var_a1, -1);
            var_s1 += 1;
            var_a1 = D_8005E9F0;
            M2C_FIELD((var_s0 + M2C_FIELD(var_a1, s32 *, 4)), u16 *, 6) = (u16) M2C_FIELD(&D_8005EA04, u16 *, 2);
            M2C_FIELD((var_s0 + M2C_FIELD(var_a1, s32 *, 4)), u16 *, 8) = (u16) M2C_FIELD(&D_8005E9D0, u16 *, 2);
            M2C_FIELD((var_s0 + M2C_FIELD(var_a1, s32 *, 4)), u16 *, 0xA) = (u16) M2C_FIELD(&D_8005EA00, u16 *, 2);
            M2C_FIELD((var_s0 + M2C_FIELD(var_a1, s32 *, 4)), s16 *, 0xC) = (s16) ((M2C_FIELD(&D_8005E9E8, u16 *, 2) - M2C_FIELD(&D_8005EA00, u16 *, 2)) + 1);
            var_s0 += 0x22;
        } while (var_s1 < M2C_FIELD(var_a1, s16 *, 0x1E));
    }
}
