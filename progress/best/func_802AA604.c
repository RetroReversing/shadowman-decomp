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
f32 func_8022EBE8();
s32 func_802A7CD4();

void func_802AA604(void *arg0) {
    f32 temp_fs0;
    f32 temp_fv0;
    s32 temp_ret;
    s32 temp_ret_2;
    s32 temp_ret_3;

    func_802A7CD4();
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    M2C_FIELD(arg0, s8 *, 0x51) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) *(f32 *)0x21646C;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) *(f32 *)0x216470;
    temp_ret = func_80113AD0();
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) (temp_ret % 360);
    temp_ret_2 = func_80113AD0((temp_ret / 360) * 3, MULT_HI(temp_ret, 0xB60B60B7));
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) (temp_ret_2 % 360);
    temp_ret_3 = func_80113AD0((temp_ret_2 / 360) * 3, MULT_HI(temp_ret_2, 0xB60B60B7));
    temp_fs0 = *(f32 *)0x216474;
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) (temp_ret_3 % 360);
    M2C_FIELD(arg0, f32 *, 0x90) = func_8022EBE8(temp_fs0, (temp_ret_3 / 360) * 3, MULT_HI(temp_ret_3, 0xB60B60B7));
    M2C_FIELD(arg0, f32 *, 0x94) = func_8022EBE8(temp_fs0);
    temp_fv0 = func_8022EBE8(temp_fs0);
    M2C_FIELD(arg0, s32 *, 0x40) = 0x27;
    M2C_FIELD(arg0, f32 *, 0x98) = temp_fv0;
    M2C_FIELD(arg0, s16 *, 0x52) = 0x13;
}
