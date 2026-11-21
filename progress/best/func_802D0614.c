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

s32 func_80104E4C();
s32 func_80104EA4();
s32 func_802316D4();
s32 func_80232DD0();
s32 func_80232E84();
s32 func_8023301C();
s32 func_80233094();
s32 func_802330F0();
s32 func_8023317C();
s32 func_8023648C();
s32 func_802D074C();
s32 func_802D1180();
s32 func_802D175C();
extern s32 D_8005E9FC;
extern s32 D_8007BEF0;
extern char D_8007BF20[];
extern char D_8007BF30[];

void func_802D0614(s32 arg0, s8 arg1, void *arg2, void *arg3) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s6;
    s32 temp_v1;

    temp_s0 = arg0 * 0x28;
    temp_a1 = M2C_FIELD((temp_s0 + D_8007BEF0), s32 *, 0x10);
    temp_s6 = func_80104EA4(D_8005E9FC);
    if (temp_a1 != 0) {
        func_80104E4C(D_8005E9FC, temp_a1, 0);
        temp_v1 = arg1 * 4;
        func_802D1180(M2C_FIELD(arg3, s32 *, 0x10), M2C_FIELD(arg3, s16 *, 0x1C), *(temp_v1 + D_8007BF20), *(temp_v1 + D_8007BF30));
    }
    func_80104E4C(D_8005E9FC, M2C_FIELD((temp_s0 + D_8007BEF0), s32 *, 4), 0);
    func_8023648C(D_8005E9FC);
    func_8023317C(M2C_FIELD(arg2, s32 *, 0x1C), M2C_FIELD(arg2, u16 *, 0x34));
    func_80104E4C(D_8005E9FC, *(s32 *)(temp_s0 + D_8007BEF0), 0);
    if (M2C_FIELD((temp_s0 + D_8007BEF0), u8 *, 0x1D) == 1) {
        func_802D175C(M2C_FIELD(arg2, s32 *, 0x20), M2C_FIELD(arg2, u16 *, 0x36));
        func_802D074C();
        return;
    }
    func_8023301C(M2C_FIELD(arg2, s32 *, 0x20), M2C_FIELD(arg2, u16 *, 0x36));
    temp_s0_2 = arg0 * 0x28;
    func_80104E4C(D_8005E9FC, M2C_FIELD((temp_s0_2 + D_8007BEF0), s32 *, 8), 0);
    func_80232DD0(M2C_FIELD(arg2, s32 *, 0x18), M2C_FIELD(arg2, u16 *, 0x32));
    func_80104E4C(D_8005E9FC, M2C_FIELD((temp_s0_2 + D_8007BEF0), s32 *, 0xC), 0);
    func_80232E84(M2C_FIELD(arg2, s32 *, 0x14), M2C_FIELD(arg2, u16 *, 0x30));
    func_80104E4C(D_8005E9FC, M2C_FIELD((temp_s0_2 + D_8007BEF0), s32 *, 0x14), 0);
    func_80233094(M2C_FIELD(arg2, s32 *, 0x24), M2C_FIELD(arg2, u16 *, 0x38));
    func_80104E4C(D_8005E9FC, M2C_FIELD((temp_s0_2 + D_8007BEF0), s32 *, 0x18), 0);
    func_802330F0(M2C_FIELD(arg2, s32 *, 0x28), M2C_FIELD(arg2, u16 *, 0x3A));
    func_802316D4(arg2);
    M2C_FIELD((temp_s0_2 + D_8007BEF0), s8 *, 0x1C) = arg1;
    M2C_FIELD(arg2, s8 *, 0x3E) = 1;
    func_80104E4C(D_8005E9FC, temp_s6, 0);
}
