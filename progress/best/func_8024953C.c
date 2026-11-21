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

M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_80299D50(M2C_UNK, f32 *, M2C_UNK *, f32, f32, s32); /* extern */
extern f32 *D_8006A4FC;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x50, 0x54, 0x58, 0x5c], gap at: 0x44. */
void func_8024953C(void) {
    f32 **__base_D_8006A4FC;
    char sp18[0x10];
    f32 sp28[3];
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs1;
    s32 var_s1;

    func_8011BA20(sp18, 0, 0xC);
    var_s1 = 0;
    temp_fs1 = *(f32 *)0x202D58;
    temp_fs0f = *(f32 *)0x202D5C;
    temp_fs0 = func_8022EC3C(*(f32 *)0x202D54) + *(f32 *)0x202D60;
    __base_D_8006A4FC = &D_8006A4FC;
    func_80299D50(3, (*__base_D_8006A4FC), sp18, temp_fs0, func_8022EC3C(*(f32 *)0x202D64) + *(f32 *)0x202D68, 1);
    __repair_rows: {
        var_s1 += 1;
        sp28[0] = M2C_FIELD(D_8006A4FC, f32 *, 0) + func_8022EBE8((f32) M2C_FIELD(M2C_FIELD(D_8006A4FC, void **, 0x64), u16 *, 0x12));
        sp28[1] = M2C_FIELD(D_8006A4FC, f32 *, 4) + func_8022EBE8((f32) M2C_FIELD(M2C_FIELD(D_8006A4FC, void **, 0x64), u16 *, 0x12));
        sp28[2] = M2C_FIELD(D_8006A4FC, f32 *, 8) + func_8022EBE8((f32) M2C_FIELD(M2C_FIELD(D_8006A4FC, void **, 0x64), u16 *, 0x12));
        temp_fs0_2 = func_8022EC3C(*(f32 *)0x202D6C) + temp_fs1;
        func_80299D50(0xF, sp28, sp18, temp_fs0_2, func_8022EC3C(temp_fs0f) + temp_fs0f, 1);
    }
if (var_s1 < 8) goto __repair_rows;
}
