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

f32 func_801132A0(f32);                             /* extern */
f32 func_80113BE0(f32);                             /* extern */
extern M2C_UNK D_8002D360;

void func_802399E4(f32 arg0) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0;

    temp_fs0 = arg0 * *(f32 *)0x202494;
    temp_fs0_2 = func_80113BE0(temp_fs0);
    temp_fv0 = func_801132A0(temp_fs0);
    M2C_FIELD(&D_8002D360, f32 *, 0x10) = temp_fv0;
    M2C_FIELD(&D_8002D360, f32 *, 0x14) = (f32) -temp_fs0_2;
    M2C_FIELD(&D_8002D360, f32 *, 0x1C) = temp_fs0_2;
    M2C_FIELD(&D_8002D360, f32 *, 0x20) = temp_fv0;
}
