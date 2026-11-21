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

f32 func_801132A0(f32);                             /* extern */
f32 func_80113BE0(f32);                             /* extern */
extern M2C_UNK D_800506D0;
extern M2C_UNK D_800508D0;
extern M2C_UNK D_80050AD0;
extern M2C_UNK D_80050CD0;
extern M2C_UNK D_80050ED0;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x30, 0x34, 0x40, 0x44], gap at: 0x28. */
void func_8011A8C4(void) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fv0;
    s16 temp_s0_2;
    u16 temp_v0;
    s16 temp_v0_2;
    s16 var_s1;
    s16 var_s1_2;
    s32 temp_s0;
    s32 temp_s0_3;

    temp_fs1f = *(f32 *)0x102860;
    temp_fs1 = *(f32 *)0x102864;
    temp_fs0f = *(f32 *)0x102868;
    var_s1 = 0;
    do {
        temp_fs0 = (((f32) var_s1 * temp_fs1f) + temp_fs1) * temp_fs0f;
        temp_s0 = var_s1 * 4;
        *(temp_s0 + &D_800506D0) = func_801132A0(temp_fs0);
        temp_v0 = var_s1 + 1;
        var_s1 = temp_v0;
        *(temp_s0 + &D_800508D0) = func_80113BE0(temp_fs0);
        *(temp_s0 + &D_80050ED0) = 0;
    } while (temp_v0 < 0x80);
    var_s1_2 = 0;
    temp_fs0f_2 = *(f32 *)0x10286C;
    do {
        temp_s0 = (s16)(var_s1_2);
        temp_fs0_2 = (f32) temp_s0 * temp_fs0f_2;
        temp_fs0_3 = func_801132A0(temp_fs0_2);
        temp_fv0 = func_80113BE0(temp_fs0_2);
        temp_v0_2 = var_s1_2 + 1;
        var_s1_2 = temp_v0_2;
        temp_s0_3 = temp_s0 * 4;
        *(temp_s0_3 + &D_80050AD0) = temp_fs0_3 + temp_fv0;
        *(temp_s0_3 + &D_80050CD0) = temp_fv0 - temp_fs0_3;
    } while (temp_v0_2 < 0x80);
}
