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

s32 *func_80103878();
s32 func_80103B98();
s32 *func_801043F8();
s32 func_80104C50();
s32 func_80104DE0();
s32 func_80104EC4();
u16 func_8023648C();
s32 func_802364D0();
s32 func_8023CABC();
s32 func_8023CB50();
extern u16 D_8002D440;

void func_8023CA64(void *arg0, s32 arg1) {
    s32 *temp_a3;
    s32 *temp_a3_2;
    s32 *temp_s3;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    char *var_s0;
    char *var_s1;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 var_a1;
    u32 var_s2;
    u32 var_s2_2;
    void *temp_a0_2;
    void *temp_v0_5;

    if (arg1 & 0xFF) {
        func_80103878(0x1C, 2, 0);
        func_8023CABC();
        return;
    }
    temp_s3 = func_801043F8(0x1C, 2, 0);
    temp_v0 = func_80104C50(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s16 *, 0x14));
    func_802364D0(temp_v0);
    M2C_FIELD(temp_s3, u16 *, 0) = func_8023648C(temp_v0);
    M2C_FIELD(temp_s3, u16 *, 2) = func_8023648C(temp_v0);
    M2C_FIELD(temp_s3, u16 *, 4) = func_8023648C(temp_v0);
    D_8002D440 = func_8023648C(temp_v0);
    temp_a0 = (M2C_FIELD(temp_s3, u16 *, 0) * 0x10) + (M2C_FIELD(temp_s3, u16 *, 2) * 0x3C);
    if (arg1 & 0xFF) {
        func_80103878(temp_a0, 2, 0);
        func_8023CB50();
        return;
    }
    temp_v0_2 = func_801043F8(temp_a0, 2, 0);
    var_s2 = 0;
    M2C_FIELD(temp_s3, s32 **, 0x18) = temp_v0_2;
    temp_a3 = temp_v0_2 + (M2C_FIELD(temp_s3, u16 *, 0) * 4);
    M2C_FIELD(temp_s3, s32 **, 8) = temp_a3;
    temp_a3_2 = temp_a3 + (M2C_FIELD(temp_s3, u16 *, 0) * 0xC);
    M2C_FIELD(temp_s3, s32 **, 0xC) = temp_a3_2;
    M2C_FIELD(temp_s3, s32 **, 0x10) = func_80103878(M2C_FIELD(temp_s3, u16 *, 4) * 2, 2, 0, temp_a3_2);
    M2C_FIELD(temp_s3, s32 **, 0x14) = func_80103878(D_8002D440 * 6, 2, 0);
    func_80104EC4(M2C_FIELD(temp_s3, s32 **, 0x18), 4, M2C_FIELD(temp_s3, u16 *, 0), temp_v0);
    func_80104EC4(M2C_FIELD(temp_s3, s32 **, 8), 0xC, M2C_FIELD(temp_s3, u16 *, 0), temp_v0);
    var_s1 = M2C_FIELD(temp_s3, s32 **, 0xC);
    var_s0 = var_s1 + 0xC;
    if (M2C_FIELD(temp_s3, u16 *, 2) != 0) {
        do {
            *(s32 *)var_s1 = func_802364D0(temp_v0);
            M2C_FIELD(var_s0, u16 *, -8) = func_8023648C(temp_v0);
            M2C_FIELD(var_s0, u16 *, -6) = func_8023648C(temp_v0);
            M2C_FIELD(var_s0, u16 *, -4) = func_8023648C(temp_v0);
            func_80104EC4(var_s0, 4, 0xCU, temp_v0);
            var_s2 += 1;
            var_s0 += 0x3C;
            var_s1 += 0x3C;
        } while (var_s2 < (u16) M2C_FIELD(temp_s3, u16 *, 2));
    }
    func_80104EC4(M2C_FIELD(temp_s3, s32 **, 0x10), 2, M2C_FIELD(temp_s3, u16 *, 4), temp_v0);
    temp_v0_3 = func_80103878(D_8002D440 * 6, 2, 0);
    func_80104EC4(temp_v0_3, 6, D_8002D440, temp_v0);
    var_s2_2 = 0;
    if (D_8002D440 != 0) {
        var_a1 = 0;
        do {
            temp_v0_4 = var_s2_2 * 2;
            var_s2_2 += 1;
            temp_a0_2 = var_a1 + M2C_FIELD(temp_s3, s32 **, 0x14);
            var_a1 += 6;
            temp_v0_5 = (*(temp_v0_4 + M2C_FIELD(temp_s3, s32 **, 0x10)) * 6) + temp_v0_3;
            M2C_FIELD(temp_a0_2, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(temp_v0_5, s32 *, 0));
            M2C_FIELD(temp_a0_2, s16 *, 4) = (s16) M2C_FIELD(temp_v0_5, s16 *, 4);
        } while (var_s2_2 < (u16) D_8002D440);
    }
    func_80103B98(temp_v0_3);
    func_80104DE0(temp_v0);
    M2C_FIELD(arg0, s32 **, 8) = temp_s3;
}
