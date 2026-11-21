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
s32 func_8023A0DC();
s32 func_8023B714();
s32 func_8027003C();
s32 func_8027006C();
s32 func_8027206C();
extern char D_800321A8[];
extern void *D_8006A4FC;
extern void *D_8007AFF8;
extern s32 D_8007B110;

void func_8027FAD0(void) {
    s32 sp18;
    s32 sp48;
    s32 temp_a3;
    s32 temp_hi;
    s32 temp_v0;
    s32 temp_v1;

    D_8007B110 = 0x4B0;
    func_8027003C();
    M2C_FIELD(D_8007AFF8, s32 **, 0x114) = D_800321A8;
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) |= 4;
    M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    M2C_FIELD(D_8007AFF8, f32 *, 0xB4) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x28);
    M2C_FIELD(D_8007AFF8, s16 *, 0x9C) = 0x12C;
    M2C_FIELD(D_8007AFF8, f32 *, 0xB8) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    M2C_FIELD(D_8007AFF8, f32 *, 0xBC) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    M2C_FIELD(D_8007AFF8, f32 *, 0xC0) = (f32) (M2C_FIELD(D_8006A4FC, f32 *, 0x28) + *(f32 *)0x21497C);
    M2C_FIELD(D_8007AFF8, s16 *, 0x9E) = 0x320;
    M2C_FIELD(D_8007AFF8, s32 *, 0x48) &= ~0x40;
    M2C_FIELD(D_8007AFF8, f32 *, 0xC4) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    M2C_FIELD(D_8006A4FC, s32 *, 0x18) = 0;
    temp_v0 = func_80113AD0(D_8007AFF8, D_8006A4FC);
    temp_hi = MULT_HI(temp_v0, 0xB60B60B7);
    temp_a3 = temp_v0 >> 0x1F;
    M2C_FIELD(D_8006A4FC, s32 *, 0x20) = 0;
    temp_v1 = ((s32) (temp_hi + temp_v0) >> 8) - temp_a3;
    M2C_FIELD(D_8006A4FC, f32 *, 0x1C) = (f32) (temp_v0 - (temp_v1 * 0x168));
    func_8023B714(D_8006A4FC + 0x18, &sp18, D_8006A4FC + 0x24, temp_v1 * 3);
    func_8023A0DC(0, 0, (f32) (func_80113AD0() % (s16) M2C_FIELD(D_8007AFF8, s16 *, 0x9C)), &sp48, &sp18);
    M2C_FIELD(D_8007AFF8, s16 *, 0xA2) = (s16) ((func_80113AD0() & 0x3F) + 0x3F);
    M2C_FIELD(D_8006A4FC, f32 *, 0x1C) = (f32) (func_80113AD0() % 360);
    M2C_FIELD(D_8007AFF8, s16 *, 0x90) = 0;
    func_8027206C(0, 0, D_8007AFF8);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) ((M2C_FIELD(D_8007AFF8, s32 *, 0x44) & ~2) | 0x100000);
    func_8027006C(D_8007AFF8);
}
