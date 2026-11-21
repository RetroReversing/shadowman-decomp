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

extern M2C_UNK D_80045438;
extern M2C_UNK D_8007BEA8;

void func_802BAB1C(void *arg0) {
    void *temp_v1;

    if ((u32) (M2C_FIELD(arg0, u16 *, 0x14) - 0x27) < 2U) {
        temp_v1 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(&D_8007BEA8, s32 *, 0) = (s32) M2C_FIELD(temp_v1, s32 *, 0x24);
        M2C_FIELD(&D_8007BEA8, s32 *, 4) = (s32) M2C_FIELD(temp_v1, s32 *, 0x28);
        M2C_FIELD(&D_8007BEA8, s32 *, 8) = (s32) M2C_FIELD(temp_v1, s32 *, 0x2C);
        M2C_FIELD(&D_80045438, f32 *, 4) = (f32) *(f32 *)0x217F50;
    }
}
