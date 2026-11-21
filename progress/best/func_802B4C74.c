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

s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_802A1140(f32 *, f32 *, M2C_UNK, f32, f32, s32, f32, s32, s32, s32, s32); /* extern */
M2C_UNK func_802A7CD4();                            /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x50, 0x54, 0x58, 0x5c, 0x60, 0x70, 0x74, 0x80, 0x84, 0x90, 0x94], gap at: 0x64. */
void func_802B4C74(void *arg0) {
    f32 sp30[3];
    f32 sp40[3];
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fs2;
    f32 temp_fs2f;
    u32 var_s0;

    func_802A7CD4(arg0);
    var_s0 = 0;
    temp_fs1 = *(f32 *)0x216AA0;
    temp_fs2f = *(f32 *)0x216AA4;
    temp_fs2 = *(f32 *)0x216AA8;
    temp_fs1f = *(f32 *)0x216AAC;
    do {
        sp30[0] = M2C_FIELD(arg0, f32 *, 0x54);
        sp30[1] = M2C_FIELD(arg0, f32 *, 0x58);
        sp30[2] = M2C_FIELD(arg0, f32 *, 0x5C);
        sp30[0] += func_8022EBE8(temp_fs1);
        sp30[2] += func_8022EBE8(temp_fs1);
        sp30[1] += func_8022EBE8(*(f32 *)0x216AB0);
        sp40[0] = func_8022EBE8(temp_fs2f);
        sp40[2] = func_8022EBE8(temp_fs2f);
        sp40[1] = func_8022EC3C(temp_fs2) + temp_fs2;
        temp_fs0f = func_8022EC3C(temp_fs1f) + temp_fs1f;
        var_s0 += 1;
        temp_fs0 = func_8022EBE8(temp_fs1) + *(f32 *)0x216AB4;
        func_802A1140(sp30, sp40, 0x3F7C28F6, temp_fs0f, temp_fs0, 0x1C, (f32) (func_80113AD0() % 3), 0xFF, 0xFF, 0xFF, 1);
    } while (var_s0 < 6U);
}
