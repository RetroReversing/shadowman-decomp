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

f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_8029834C(void *, f32 *);               /* extern */
M2C_UNK func_80299D50(M2C_UNK, f32 *, M2C_UNK *, f32, f32, s32); /* extern */
extern M2C_UNK D_80036B1C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x58, 0x5c, 0x68, 0x6c], gap at: 0x50. */
void func_802B5A60(void *arg0) {
    f32 sp18[3];
    f32 sp28[3];
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    u32 var_s0;
    u32 var_s0_2;

    temp_fs0f = *(f32 *)0x216AE0;
    temp_fs1f = *(f32 *)0x216AE4;
    temp_fs1 = *(f32 *)0x216AE8;
    var_s0 = 0;
    do {
        sp28[0] = M2C_FIELD(arg0, f32 *, 0x54);
        sp28[1] = M2C_FIELD(arg0, f32 *, 0x58);
        sp28[2] = M2C_FIELD(arg0, f32 *, 0x5C);
        sp28[0] += func_8022EBE8(temp_fs0f);
        sp28[1] += func_8022EBE8(temp_fs0f);
        var_s0 += 1;
        sp28[2] += func_8022EBE8(temp_fs0f);
        temp_fs0 = func_8022EC3C(*(f32 *)0x216AEC) + temp_fs1f;/*__repair_call_balance*/if(var_s0){
        func_80299D50(0x46, sp28, &D_80036B1C, temp_fs0, func_8022EC3C(*(f32 *)0x216AF0) + temp_fs1, 1);}else{
        func_80299D50(0x46, sp28, &D_80036B1C, temp_fs0, func_8022EC3C(*(f32 *)0x216AF0) + temp_fs1, 1);}
    } while (var_s0 < 4U);
    var_s0_2 = 0;
    temp_fs0_2 = *(f32 *)0x216AF4;
    do {
        sp18[0] = func_8022EBE8(temp_fs0_2);
        sp18[1] = func_8022EBE8(temp_fs0_2);
        sp18[2] = func_8022EBE8(temp_fs0_2);
        func_8029834C(arg0 + 0x54, sp18);
        var_s0_2 += 1;
    } while (var_s0_2 < 0x20U);
}
