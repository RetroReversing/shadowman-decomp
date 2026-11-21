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

void *func_801043F8(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
f32 func_8022EBE8(f32);                             /* extern */
extern void *D_8007BB24;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x28, 0x2c], gap at: 0x1c. */
void func_8029D51C(void) {
    f32 temp_fs0;
    f32 temp_fs0f;
    s32 var_s1;
    void *temp_v0;
    void *var_s0;

    var_s1 = 0;
    temp_v0 = func_801043F8(0x3C10, 2, 0);
    var_s0 = temp_v0 + 0x2E0;
    temp_fs0f = *(f32 *)0x215CCC;
    temp_fs0 = *(f32 *)0x215CD0;
    D_8007BB24 = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    __repair_rows: {
        M2C_FIELD(var_s0, f32 *, 4) = func_8022EBE8(temp_fs0f);
        M2C_FIELD(var_s0, f32 *, 8) = func_8022EBE8(temp_fs0f);
        M2C_FIELD(var_s0, f32 *, 0xC) = func_8022EBE8(temp_fs0f);
        M2C_FIELD(var_s0, f32 *, -8) = func_8022EBE8(temp_fs0);
        M2C_FIELD(var_s0, f32 *, -4) = func_8022EBE8(temp_fs0);
        var_s1 += 1;
        M2C_FIELD(var_s0, f32 *, 0) = func_8022EBE8(temp_fs0);
        var_s0 += 0x300;
    }
if (var_s1 < 0xA) goto __repair_rows;
}
