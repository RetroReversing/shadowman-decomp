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

s32 func_80113AD0(void *);                          /* extern */
M2C_UNK func_8027003C();                            /* extern */
M2C_UNK func_8027006C(s32, s32);                    /* extern */
extern void *D_8007AFF8;

void func_80290950(void) {
    s32 temp_ret;

    func_8027003C();
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x4004);
    M2C_FIELD(D_8007AFF8, s32 *, 0x48) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x48) & ~0x40);
    temp_ret = func_80113AD0(D_8007AFF8);
    M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = (f32) (temp_ret % 511);
    func_8027006C(temp_ret / 511, MULT_HI(temp_ret, 0x80402011));
}
