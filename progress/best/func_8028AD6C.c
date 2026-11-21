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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern float D_8007558C;
extern float D_80075590;
extern float D_80075594;
s32 func_80113AD0();
s32 func_80291C08();
extern char D_800355D0[];
extern char D_80035608[];
extern char D_80075568[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x20, 0x24, 0x28, 0x2c, 0x38, 0x3c, 0x40, 0x44], gap at: 0x30. */
void func_8028AD6C(s32 arg0, s32 arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fv0;
    f32 temp_fv0_2;

    sp14 = D_80075590;
    sp18 = D_80075594;
    temp_fs1 = (f32) (func_80113AD0(arg0, arg1, arg0, arg1, D_8007558C) % 61);
    temp_fs0 = *(f32 *)0x21527C;
    temp_fs0f = *(f32 *)0x215280;
    temp_fv0 = sp18 + ((f32) (func_80113AD0() % 61) - temp_fs0);
    sp14 += temp_fs0f;
    sp10 = D_8007558C;
    sp10 += temp_fs1 - temp_fs0;
    sp18 = temp_fv0;
    func_80291C08(D_800355D0, &sp10);
    sp10 = D_8007558C;
    sp14 = D_80075590;
    sp18 = D_80075594;
    temp_fs1_2 = (f32) (func_80113AD0() % 61);
    temp_fv0_2 = sp18 + ((f32) (func_80113AD0() % 61) - temp_fs0);
    sp14 += temp_fs0f;
    sp10 += temp_fs1_2 - temp_fs0;
    sp18 = temp_fv0_2;
    func_80291C08(D_80035608, &sp10);
}
