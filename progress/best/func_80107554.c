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

s32 func_801073A0();
s32 func_801073F4();
s8 func_801074D8();
s32 func_801076C4();
s32 func_801076F4();
s32 func_80107758();
s32 func_801077A8();
s32 func_801079E0();
extern char D_8004B420[];

void func_80107554(s16 arg0, s32 *arg1, s32 arg2, u8 *arg3) {
    s32 *temp_s3;
    s32 *var_a1;
    s32 temp_a2_3;
    s8 temp_s2;
    u8 *var_s0;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_s0;
    void *temp_s1;

    var_a1 = arg1;
    temp_s3 = var_a1;
    var_s0 = arg3;
    if (arg0 & 1) {
        var_s0 = arg3 - 1;
    }
    if (M2C_FIELD(var_s0, u8 *, 0) != 0xFF) {
        var_a1 = D_8004B420;
        if (M2C_FIELD(((M2C_FIELD(var_s0, u8 *, 0) * 0x10) + D_8004B420), u8 *, 0x933) != 0xFF) {
            func_801076F4(0xFF, D_8004B420);
            return;
        }
    }
    if (M2C_FIELD(var_s0, u8 *, 1) != 0xFF) {
        var_a1 = D_8004B420;
        if (M2C_FIELD(((M2C_FIELD(var_s0, u8 *, 1) * 0x10) + D_8004B420), u8 *, 0x933) != 0xFF) {
            func_801076F4(0xFF, D_8004B420);
            return;
        }
    }
    temp_s2 = func_801074D8(0xFF, var_a1);
    if (arg0 & 1) {
        temp_a2 = ((s32) (temp_s2 << 0x10) >> 0xE) + D_8004B420;
        M2C_FIELD(temp_a2, u8 *, 0x1583) = (u8) M2C_FIELD(temp_s3, u8 *, 0xA);
        temp_v1 = M2C_FIELD(var_s0, u8 *, 0);
        if (temp_v1 != 0xFF) {
            func_801076C4(D_8004B420 + 0x1378, (temp_v1 * 0x10) + (D_8004B420 + 0x928), temp_a2);
            return;
        }
        goto block_16;
    }
    temp_a2_2 = ((s32) (temp_s2 << 0x10) >> 0xE) + D_8004B420;
    M2C_FIELD(temp_a2_2, u8 *, 0x1582) = (u8) M2C_FIELD(temp_s3, u8 *, 0xA);
    temp_v1_2 = M2C_FIELD(var_s0, u8 *, 1);
    temp_s1 = D_8004B420 + 0x1378;
    if (temp_v1_2 != 0xFF) {
        temp_s0 = (temp_v1_2 * 0x10) + (D_8004B420 + 0x928);
        M2C_FIELD(temp_a2_2, u8 *, 0x1583) = (u8) M2C_FIELD(temp_s0, u8 *, 0xA);
        M2C_FIELD(temp_s0, s8 *, 0xB) = temp_s2;
        func_801073A0(temp_s1, temp_s0, temp_a2_2);
        func_801073F4(temp_s1, temp_s0);
    }
block_16:
    M2C_FIELD((((s32) (temp_s2 << 0x10) >> 0xE) + D_8004B420), s16 *, 0x1580) = (s16) (arg0 & 0xFFFE);
    M2C_FIELD(temp_s3, s16 *, 8) = arg0;
    M2C_FIELD(temp_s3, s8 *, 0xB) = temp_s2;
    *arg3 = M2C_FIELD(temp_s3, u8 *, 0xA);
    temp_a1 = ((s16) temp_s2 * 4) + D_8004B420;
    temp_a2_3 = M2C_FIELD(temp_a1, u16 *, 0x1580) << 0xC;
    if (M2C_FIELD(temp_a1, u8 *, 0x1582) != 0xFF) {
        func_80107758(0x03FFFFFF, temp_a1, temp_a2_3);
        return;
    }
    temp_a0 = ((s32) (temp_s2 << 0x10) >> 0xE) + D_8004B420;
    if (M2C_FIELD(temp_a0, u8 *, 0x1583) != 0xFF) {
        func_801077A8(M2C_FIELD(temp_a0, u8 *, 0x1583) << 0xC, temp_a1, temp_a2_3, -1);
        return;
    }
    func_801079E0((s16) temp_s2, 0, temp_a2_3, -1, -1, 7);
}
