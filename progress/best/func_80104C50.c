/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

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
extern s8 D_8004ADE4;

s32 func_80104C50(s32 *arg0, s32 arg1) {
    D_8001E438 = func_80104A14(*arg0 + (arg1 * 0xC) + 4);
    D_8001E434 = 0;
    D_8001E43C = 1;
    D_8001E454 = -1;
    D_8001E448 = 0;
    D_8001E458 = D_8004ADE4;
    D_8001E44C = (s32) (*(s32 *)&D_8004ADD8);
    D_8001E450 = D_8004ADDC;
    do { func_80105074(arg0, arg1, D_8001E430); } while (0);
    return (s32) &D_8001E430;
}
