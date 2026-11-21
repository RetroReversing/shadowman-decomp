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

extern int D_8007558C;
extern int D_80075590;
extern int D_80075594;
s32 func_8023B094();
s32 func_8026FCC4();
s32 func_80270E0C();
f32 func_8027A798();
extern void *D_8006A4FC;
extern char D_80075568[];
extern void *D_8007AFF8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x50, 0x54], gap at: 0x48. */
f32 func_8027A6A0(void) {
    f32 ret;
f32 __repair_ret_1;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fv0f;

    temp_fv0f = *(f32 *)0x214478;
    temp_fs0f = M2C_FIELD(D_8007AFF8, f32 *, 0x6C);
    if (temp_fs0f == temp_fv0f) {
        temp_fs0 = M2C_FIELD(D_8006A4FC, f32 *, 0x1C);
        func_80270E0C(*(f32 *)0x21447C, D_8007AFF8);
        func_8023B094(D_8006A4FC);
        sp30 = M2C_FIELD(D_8006A4FC, f32 *, 0x24);
        sp34 = M2C_FIELD(D_8006A4FC, s32 *, 0x28);
        sp20 = D_8007558C;
        sp24 = D_80075590;
        sp28 = D_80075594;
        sp38 = M2C_FIELD(D_8006A4FC, s32 *, 0x2C);
        func_8026FCC4(sp20, sp24, sp28, sp30, sp34, sp38, *(f32 *)0x214480);
        M2C_FIELD(D_8006A4FC, f32 *, 0x1C) = temp_fs0;
        func_8023B094(D_8006A4FC);
        ret = func_8027A798();
    } else {
        M2C_FIELD(D_8007AFF8, f32 *, 0x6C) = temp_fv0f;
        M2C_FIELD(D_8007AFF8, s32 *, 0x44) &= ~0x400;
        __repair_ret_1 = temp_fs0f;
    }
    return __repair_ret_1;
}
