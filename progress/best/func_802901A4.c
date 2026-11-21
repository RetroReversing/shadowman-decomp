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

s32 func_80113AD0();
s32 func_8027003C();
s32 func_8027006C();
s32 func_80290320();
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_802901A4(void) {
    s32 temp_ret;
    s32 temp_ret_2;

    func_8027003C();
    M2C_FIELD(D_8007AFF8, s16 *, 0x9A) = 1;
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) |= 4;
    M2C_FIELD(D_8006A4FC, f32 *, 0x28) += *(f32 *)0x215644;
    M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    M2C_FIELD(D_8007AFF8, f32 *, 0xB4) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x28);
    M2C_FIELD(D_8007AFF8, s16 *, 0x94) = 0xC8;
    M2C_FIELD(D_8007AFF8, f32 *, 0xB8) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    M2C_FIELD(D_8007AFF8, f32 *, 0xBC) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    M2C_FIELD(D_8007AFF8, f32 *, 0xC0) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x28);
    M2C_FIELD(D_8007AFF8, s16 *, 0x9E) = 0xC8;
    M2C_FIELD(D_8007AFF8, f32 *, 0xC4) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    temp_ret = func_80113AD0(D_8007AFF8);
    M2C_FIELD(D_8006A4FC, f32 *, 0x1C) = (f32) (temp_ret % 360);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) &= ~2;
    M2C_FIELD(D_8007AFF8, s32 *, 0x48) &= ~0x40;
    M2C_FIELD(D_8007AFF8, s16 *, 0x96) = (s16) ((func_80113AD0(D_8007AFF8, MULT_HI(temp_ret, 0xB60B60B7)) & 0xFF) + 0xFF);
    M2C_FIELD(D_8007AFF8, s8 *, 0x3B) = 1;
    func_80290320();
    temp_ret_2 = func_80113AD0();
    M2C_FIELD(D_8007AFF8, f32 *, 0xD4) = (f32) ((temp_ret_2 % 511) + 0x7F);
    func_8027006C(temp_ret_2 / 511, MULT_HI(temp_ret_2, 0x80402011));
}
