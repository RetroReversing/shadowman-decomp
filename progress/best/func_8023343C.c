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

s8 func_8023646C();
u16 func_8023648C();
extern s32 D_8005E9FC;

void func_8023343C(u16 *arg0, s32 arg1) {
    s16 temp_a1;
    s32 var_s5;
    char *var_s4;
    u16 temp_s0;
    u16 temp_s1;
    u16 temp_v0;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    void *var_s2;

    var_s4 = arg0;
    var_s5 = arg1;
    var_s2 = var_s4 + 0x24;
    do {
        M2C_FIELD(var_s2, s32 *, -4) = 0;
        M2C_FIELD(var_s2, u16 *, -0x22) = func_8023648C(D_8005E9FC);
        *(u16 *)var_s4 = func_8023648C(D_8005E9FC);
        M2C_FIELD(var_s2, u16 *, -0xC) = func_8023648C(D_8005E9FC);
        M2C_FIELD(var_s2, u16 *, -0xA) = func_8023648C(D_8005E9FC);
        M2C_FIELD(var_s2, u16 *, -8) = func_8023648C(D_8005E9FC);
        M2C_FIELD(var_s2, u16 *, -6) = func_8023648C(D_8005E9FC);
        temp_s0 = func_8023648C(D_8005E9FC);
        temp_s1 = func_8023648C(D_8005E9FC);
        temp_v0 = func_8023648C(D_8005E9FC);
        temp_v1 = M2C_FIELD(var_s2, u16 *, -0xC);
        M2C_FIELD(var_s2, s16 *, -0x18) = (s16) (temp_v1 - temp_s0);
        temp_v1_2 = M2C_FIELD(var_s2, u16 *, -0xA);
        M2C_FIELD(var_s2, s16 *, -0x16) = (s16) (temp_v1 + temp_s0);
        M2C_FIELD(var_s2, s16 *, -0x14) = (s16) (temp_v1_2 - temp_s1);
        temp_v1_3 = M2C_FIELD(var_s2, u16 *, -8);
        M2C_FIELD(var_s2, s16 *, -0x12) = (s16) (temp_v1_2 + temp_s1);
        temp_a1 = temp_v1_3 + temp_v0;
        M2C_FIELD(var_s2, s16 *, -0x10) = (s16) (temp_v1_3 - temp_v0);
        M2C_FIELD(var_s2, s16 *, -0xE) = temp_a1;
        M2C_FIELD(var_s2, s8 *, -0x1A) = func_8023646C(D_8005E9FC, temp_a1);
        var_s4 += 0x28;
        M2C_FIELD(var_s2, s8 *, -0x19) = func_8023646C(D_8005E9FC);
        var_s5 -= 1;
        M2C_FIELD(var_s2, s8 *, 0) = func_8023646C(D_8005E9FC);
        var_s2 += 0x28;
    } while (var_s5 != 0);
}
