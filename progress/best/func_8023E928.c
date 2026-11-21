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

f32 func_801132A0(f32);
f32 func_80113BE0(f32);
s32 func_8023ECC0();
s32 func_8023F210();

void func_8023E928(f32 *arg0, void *arg1) {
    f32 sp10[4];
    f32 sp20[4];
    f32 sp30[4];
    f32 temp_fs0;

    temp_fs0 = *(f32 *)0x202634;
    sp20[0] = func_801132A0(M2C_FIELD(arg1, f32 *, 0) * temp_fs0);
    sp20[1] = func_80113BE0(M2C_FIELD(arg1, f32 *, 0) * temp_fs0);
    sp20[2] = 0;
    sp20[3] = 0;
    sp30[0] = func_801132A0(M2C_FIELD(arg1, f32 *, 4) * temp_fs0);
    sp30[1] = 0;
    sp30[2] = func_80113BE0(M2C_FIELD(arg1, f32 *, 4) * temp_fs0);
    sp30[3] = 0;
    sp10[0] = func_801132A0(M2C_FIELD(arg1, f32 *, 8) * temp_fs0);
    sp10[1] = 0;
    sp10[2] = 0;
    sp10[3] = func_80113BE0(M2C_FIELD(arg1, f32 *, 8) * temp_fs0);
    func_8023F210(sp20);
    func_8023F210(sp10);
    func_8023F210(sp30);
    func_8023ECC0(sp30, sp20, arg0);
    func_8023F210(arg0);
}
