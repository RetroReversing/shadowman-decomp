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

s32 func_802427E8();
s32 func_802428D8();
s32 func_8026B8B0();
s32 func_8026B930();
s32 func_8026B9F0();
s32 func_8026C95C();
extern s32 D_8005276C;
extern char D_8007DB78[];

void func_8026B858(s32 arg0) {
    s32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    void *temp_s0;

    func_802428D8();
    sp30 = 0;
    sp34 = M2C_FIELD(((arg0 * 0x10) + D_8007DB78), f32 *, 0x70);
    if (arg0 == 0) {
        func_8026B8B0();
        return;
    }
    sp38 = *(f32 *)0x20E348;
    if (arg0 == 0) {

    }
    temp_fv0 = M2C_FIELD(((arg0 * 0x10) + D_8007DB78), f32 *, 0x6C) * *(f32 *)0x20E34C;
    temp_fv0f = *(f32 *)0x20E350;
    if (temp_fv0f <= temp_fv0) {
        temp_s0 = (arg0 * 0x10) + D_8007DB78;
        func_8026C95C(9, 0, 0x13, 0, ((s32) (temp_fv0 - temp_fv0f) | 0x80000000) & 0xFF, 6, 0, 2.0f * (f32) D_8005276C, M2C_FIELD(temp_s0, f32 *, 0x78));
        sp34 = -sp34;
        temp_fv0_2 = M2C_FIELD(temp_s0, f32 *, 0x6C) * *(f32 *)0x20E354;
        temp_fv0f_2 = *(f32 *)0x20E358;
        if (temp_fv0f_2 <= temp_fv0_2) {
            func_8026C95C(9, 0, 0x13, 0, ((s32) (temp_fv0_2 - temp_fv0f_2) | 0x80000000) & 0xFF, 6, M2C_BITWISE(s64, (2.0f * (f32) D_8005276C)), M2C_FIELD(((arg0 * 0x10) + D_8007DB78), f32 *, 0x78));
            func_802427E8();
            return;
        }
        func_8026B9F0();
        return;
    }
    func_8026B930();
}
