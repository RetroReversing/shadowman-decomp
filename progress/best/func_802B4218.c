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

s32 func_80109918();
s32 func_80113AD0();
f32 func_8022EC3C();
s32 func_802A7CD4();

void func_802B4218(void *arg0) {
    f32 temp_fs0;
    f32 temp_fv0;
    s32 temp_ret;
    s32 temp_ret_2;
    s32 temp_ret_3;

    func_802A7CD4();
    M2C_FIELD(arg0, u8 *, 0x49) = 0xB4;
    M2C_FIELD(arg0, u8 *, 0x4A) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x48) = 0;
    M2C_FIELD(arg0, u8 *, 0x50) |= 1;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) *(f32 *)0x216A64;
    temp_ret = func_80113AD0();
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) (temp_ret % 360);
    temp_ret_2 = func_80113AD0((temp_ret / 360) * 3);
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) (temp_ret_2 % 360);
    temp_ret_3 = func_80113AD0((temp_ret_2 / 360) * 3);
    temp_fs0 = *(f32 *)0x216A68;
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) (temp_ret_3 % 360);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) (func_8022EC3C() + temp_fs0);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) (func_8022EC3C() + temp_fs0);
    temp_fv0 = func_8022EC3C() + temp_fs0;
    M2C_FIELD(arg0, u8 *, 0x50) |= 2;
    M2C_FIELD(arg0, s8 *, 0x51) = 0;
    M2C_FIELD(arg0, f32 *, 0x98) = temp_fv0;
    M2C_FIELD(arg0, s32 *, 0x1C) = func_80109918(arg0 + 0x54, 0x7F, *(s16 *)0x216C1C);
}
