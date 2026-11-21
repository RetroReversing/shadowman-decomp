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

extern int D_8001E438;
extern int D_8001E43C;
extern int D_8001E434;
extern int D_8001E454;
extern int D_8001E448;
extern int D_8001E458;
extern int D_8001E44C;
extern int D_8001E450;
s32 func_80104A14();
s32 func_80105074();
extern char D_8001E430[];
extern f32 D_8004ADD8;
extern s32 D_8004ADDC;
extern s32 D_8004ADE4;

s32 func_80104C50(s32 *arg0, s32 arg1) {
    D_8001E438 = func_80104A14(*arg0 + (arg1 * 0xC) + 4);
    D_8001E43C = 1;
    D_8001E434 = 0;
    D_8001E454 = -1;
    D_8001E448 = 0;
    D_8001E458 = (s32) D_8004ADE4;
    D_8001E44C = (s32) D_8004ADD8;
    D_8001E450 = (s32) D_8004ADDC;
    func_80105074(arg0, arg1, D_8001E430);
    return (s32) &D_8001E430;
}
