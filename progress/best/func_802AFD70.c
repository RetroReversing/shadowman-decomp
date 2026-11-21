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

s32 func_80113AD0();                                /* extern */
M2C_UNK func_8029B14C(f32 *, f32 *, M2C_UNK, M2C_UNK, s32); /* extern */

void func_802AFD70(void *arg0, void *arg1) {
    f32 sp18[3];
    f32 sp28[3];
    f32 temp_fv1;

    sp18[0] = M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(arg1, f32 *, 0x54);
    sp18[1] = M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg1, f32 *, 0x58);
    sp18[2] = M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg1, f32 *, 0x5C);
    temp_fv1 = *(f32 *)0x216830;
    sp28[0] = (M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0xC)) * temp_fv1;
    sp28[1] = (M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg0, f32 *, 0x10)) * temp_fv1;
    sp28[2] = (M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg0, f32 *, 0x14)) * temp_fv1;
    func_8029B14C(sp18, sp28, 0x3F733333, 0x41C80000, (func_80113AD0() % 2) + 1);
}
