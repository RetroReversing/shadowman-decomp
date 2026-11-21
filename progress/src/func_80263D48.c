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

M2C_UNK func_80231198(void *, f32, void *);         /* extern */
extern f32 D_80074BC0;

void func_80263D48(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0f;
    void *temp_a0;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0xC) + (M2C_FIELD(arg0, f32 *, 0x10) * D_80074BC0);
    temp_a0 = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(arg0, f32 *, 0xC) = temp_fv0;
    temp_fv0f = (f32) (M2C_FIELD(temp_a0, u16 *, 8) - 0x14);
    if (temp_fv0f < temp_fv0) {
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_fv0 - temp_fv0f);
    }
    func_80231198(temp_a0, (f32) (s32) M2C_FIELD(arg0, f32 *, 0xC), arg0);
}
