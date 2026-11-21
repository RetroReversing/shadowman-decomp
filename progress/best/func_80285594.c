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
s32 func_8023204C();
s32 func_8027003C();
s32 func_8027006C();
s32 func_8027206C();
extern f32 D_8005E9E0;
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_80285594(void) {
    s32 temp_hi;
    s32 temp_ret;
    s32 temp_v0;

    func_8027003C();
    M2C_FIELD(D_8007AFF8, s8 *, 0x3B) = 2;
    M2C_FIELD(D_8007AFF8, s16 *, 0x90) = 0;
    M2C_FIELD(D_8007AFF8, f32 *, 0xC0) = (f32) *(f32 *)0x214E8C;
    M2C_FIELD(D_8007AFF8, f32 *, 0xBC) = (f32) *(f32 *)0x214E90;
    func_8023204C(M2C_FIELD(D_8006A4FC, f32 *, 0x24), M2C_FIELD(D_8006A4FC, f32 *, 0x28), D_8007AFF8, M2C_FIELD(D_8006A4FC, s32 *, 0x2C));
    M2C_FIELD(D_8007AFF8, f32 *, 0xB4) = (f32) (D_8005E9E0 - *(f32 *)0x214E94);
    M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) |= 0x20000;
    M2C_FIELD(D_8007AFF8, s32 *, 0xB8) = (s32) M2C_FIELD(D_8006A4FC, s32 *, 0x2C);
    temp_ret = func_80113AD0(0x20000, D_8006A4FC);
    M2C_FIELD(D_8007AFF8, s16 *, 0xAA) = (s16) ((temp_ret % 100) + 0x64);
    temp_v0 = func_80113AD0(temp_ret / 100);
    temp_hi = MULT_HI(temp_v0, 0x66666667);
    M2C_FIELD(D_8007AFF8, s16 *, 0xAA) = 0x64;
    M2C_FIELD(D_8007AFF8, s16 *, 0x9C) = (s16) (temp_v0 - (((temp_hi >> 2) - (temp_v0 >> 0x1F)) * 0xA));
    func_8027206C(6, 0, D_8007AFF8, temp_hi);
    func_8027006C();
}
