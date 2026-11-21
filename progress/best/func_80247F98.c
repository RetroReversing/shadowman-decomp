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

M2C_UNK func_80109318(M2C_UNK, void *, M2C_UNK);    /* extern */
s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_8025BF10(void *);                      /* extern */
M2C_UNK func_8029ACC8(M2C_UNK, s32, f32 *, f32 *, f32 *, f32 *, f32, f32); /* extern */
extern s32 D_80075510;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x88, 0x8c, 0x98, 0x9c], gap at: 0x7c. */
void func_80247F98(void *arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fv0;
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    void *temp_s3;

    temp_s3 = M2C_FIELD(arg0, void **, 8);
    temp_fs0f = (f32) M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x64), u16 *, 0x12);
    var_s2 = (s32) (temp_fs0f * *(f32 *)0x202C84);
    if (var_s2 >= 0x10) {
        var_s2 = 0xF;
    }
    if (var_s2 < 4) {
        var_s2 = 4;
    }
    func_80109318(0xDF, temp_s3 + 0x24, 0);
    var_s1 = 0;
    if (var_s2 > 0) {
        temp_fs1f = *(f32 *)0x202C88;
        temp_fs1 = *(f32 *)0x202C8C;
        do {
            sp40 = func_8022EBE8(temp_fs1f);
            temp_fs0 = func_8022EBE8(temp_fs1f);
            sp44 = temp_fs0 + func_8022EC3C(*(f32 *)0x202C90);
            sp48 = func_8022EBE8(temp_fs1f);
            temp_fv0 = func_8022EBE8(*(f32 *)0x202C94);
            sp28 = temp_fv0;
            sp24 = temp_fv0;
            sp20 = temp_fv0;
            sp30 = func_8022EBE8(temp_fs1);
            sp34 = func_8022EBE8(temp_fs1);
            sp38 = func_8022EBE8(temp_fs1);
            sp50 = M2C_FIELD(temp_s3, f32 *, 0x24);
            sp54 = M2C_FIELD(temp_s3, f32 *, 0x28);
            sp58 = M2C_FIELD(temp_s3, f32 *, 0x2C);
            sp50 += func_8022EBE8(temp_fs0f);
            sp54 += func_8022EBE8(temp_fs0f);
            sp58 += func_8022EBE8(temp_fs0f);
            temp_s0 = func_80113AD0() % 3;
            var_s1 += 1;
            temp_fs0_2 = func_8022EC3C(*(f32 *)0x202C98) + *(f32 *)0x202C9C;
            func_8029ACC8(6, temp_s0, &sp50, &sp40, &sp20, &sp30, temp_fs0_2, (f32) ((func_80113AD0() % 50) + 0x64));
        } while (var_s1 < var_s2);
    }
    if (arg0 != D_80075510) {
        func_8025BF10(arg0);
    }
}
