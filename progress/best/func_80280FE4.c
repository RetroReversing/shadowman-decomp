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
s32 func_8027206C();
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_80280FE4(void) {
    s32 temp_a0;
    s32 temp_hi;
    s32 temp_v0;

    func_8027003C();
    M2C_FIELD(D_8007AFF8, s8 *, 0x3B) = 1;
    M2C_FIELD(D_8007AFF8, s16 *, 0x90) = 0;
    M2C_FIELD(D_8007AFF8, f32 *, 0xBC) = (f32) *(f32 *)0x214AD4;
    M2C_FIELD(D_8007AFF8, s16 *, 0xA2) = 0x32;
    M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    M2C_FIELD(D_8007AFF8, f32 *, 0xB4) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x28);
    M2C_FIELD(D_8007AFF8, s16 *, 0x92) = 3;
    M2C_FIELD(D_8007AFF8, f32 *, 0xB8) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    temp_v0 = func_80113AD0(D_8007AFF8);
    temp_hi = MULT_HI(temp_v0, 0x66666667);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) |= 0x20000 | 0x20000080;
    temp_a0 = (temp_hi >> 2) - (temp_v0 >> 0x1F);
    M2C_FIELD(D_8007AFF8, s16 *, 0x9C) = (s16) (temp_v0 - (temp_a0 * 0xA));
    M2C_FIELD(D_8007AFF8, s16 *, 0xA6) = (s16) (func_80113AD0((void *) temp_a0, D_8007AFF8, 0x20000080, temp_hi) & 0x7E);
    func_8027206C(4, 0x4B);
    func_8027006C();
}
