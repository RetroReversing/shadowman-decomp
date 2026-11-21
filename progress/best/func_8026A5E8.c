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

M2C_UNK func_8021FB8C(f32, f32, s32, s32, s32, s16, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_8026A6E8(f32, f32, s16, s16, s16, s16); /* extern */
extern M2C_UNK D_8002D200;
extern f32 D_80075AB0;

void func_8026A5E8(f32 arg0, f32 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, u8 arg6) {
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    s32 temp_ft0;
    s32 temp_ft0_2;
    s32 temp_ft0_3;
    s32 temp_ft0_4;

    temp_fv1f = (f32) arg2 * (M2C_FIELD(&D_8002D200, f32 *, 0) + D_80075AB0);
    temp_fv0f = (f32) arg3 * (M2C_FIELD(&D_8002D200, f32 *, 4) + D_80075AB0);
    temp_fv0 = *(f32 *)0x20E278;
    temp_fa0 = ((arg0 + (f32) ((s32) (arg2 << 0x10) >> 0x11)) * M2C_FIELD(&D_8002D200, f32 *, 0)) - (temp_fv1f * temp_fv0);
    temp_fa1 = ((arg1 + (f32) ((s32) (arg3 << 0x10) >> 0x11)) * M2C_FIELD(&D_8002D200, f32 *, 4)) - (temp_fv0f * temp_fv0);
    temp_ft0 = (s32) temp_fa0;
    temp_ft0_2 = (s32) temp_fa1;
    temp_ft0_3 = (s32) temp_fv1f;
    temp_ft0_4 = (s32) temp_fv0f;
    if (arg5 != 0) {
        func_8026A6E8(temp_fa0, temp_fa1, (s16) temp_ft0, (s16) temp_ft0_2, (s16) temp_ft0_3, (s16) temp_ft0_4);
        return;
    }
    func_8021FB8C(temp_fa0, temp_fa1, temp_ft0, temp_ft0_2, temp_ft0_3, (s16) temp_ft0_4, 3, 0xFF, 0xFF, 0xFF, arg6 & 0xFF);
}
