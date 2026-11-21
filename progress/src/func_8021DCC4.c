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

M2C_UNK func_80104458(M2C_UNK *, s16);              /* extern */
s32 func_8022C730(s16, M2C_UNK, s32);               /* extern */
extern M2C_UNK D_8004AE00;

void func_8021DCC4(void *arg0) {
    s16 temp_a0;

    func_80104458(&D_8004AE00, M2C_FIELD(arg0, s16 *, 0x14));
    temp_a0 = M2C_FIELD(arg0, s16 *, 0x14);
    M2C_FIELD(arg0, s32 *, 8) = func_8022C730(temp_a0, 0, temp_a0 == 0x35);
}
