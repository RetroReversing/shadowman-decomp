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

void func_80251B7C(const void *arg0) {
    void *temp_a0;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 8);
    temp_a0 = M2C_FIELD(temp_a1, void **, 0x6C);
    if (M2C_FIELD(temp_a0, const s32 *, 0) == 2) {
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) M2C_FIELD(temp_a1, const f32 *, 0x28);
        M2C_FIELD(temp_a0, s32 *, 0) = 3;
        M2C_FIELD(temp_a0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_a0, s32 *, 8) = (s32) M2C_FIELD(temp_a1, const f32 *, 0x2C);
        M2C_FIELD(temp_a0, s32 *, 0xC) = (s32) M2C_FIELD(temp_a1, const s32 *, 0x24);
        M2C_FIELD(temp_a0, s32 *, 0x10) = (f32) M2C_FIELD(temp_a1, const f32 *, 0x28);
        M2C_FIELD(temp_a0, f32 *, 0x14) = (f32) M2C_FIELD(temp_a1, const f32 *, 0x2C);
    }
}
