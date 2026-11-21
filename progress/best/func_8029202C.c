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

extern float D_8007558C;
extern float D_80075590;
extern float D_80075594;
s32 func_80113AD0();
s32 func_80291C08();
extern char D_8003669C[];
extern char D_80075568[];

void func_8029202C(s32 arg0, s32 arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0_2;

    sp14 = D_80075590;
    sp18 = D_80075594;
    temp_fs0 = (f32) (func_80113AD0(arg0, arg1, D_8007558C, D_80075590) % 61);
    temp_fv0_2 = sp18 + ((f32) (func_80113AD0(arg0) % 61) - (temp_fv0 = *(f32 *)0x2157D0));
    sp10 = D_8007558C;
    sp10 += temp_fs0 - temp_fv0;
    sp14 += *(f32 *)0x2157D4;
    sp18 = temp_fv0_2;
    do { func_80291C08(D_8003669C, &sp10); } while (0);
}
