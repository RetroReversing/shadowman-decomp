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

f32 func_80236880(f32 *, void *);                   /* extern */
f32 func_802712B0(void);                   /* extern */
extern M2C_UNK D_212078;
extern void *D_8006A4FC;
extern void *D_8007AFF8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x20, 0x24, 0x28, 0x2c, 0x38, 0x3c, 0x40, 0x44], gap at: 0x30. */
void func_8027A520(void) {
    M2C_UNK *__base_D_212078;
    f32 sp10[3];
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fv0f;
    f32 var_fs1;
    s32 temp_fv1;

    var_fs1 = *(f32 *)0x214468;
    sp10[0] = M2C_FIELD(D_8007AFF8, f32 *, 0x70);
    sp10[1] = M2C_FIELD(D_8007AFF8, f32 *, 0x74);
    sp10[2] = M2C_FIELD(D_8007AFF8, f32 *, 0x78);
    temp_fv1 = (s32) func_80236880(sp10, D_8006A4FC + 0x24);
    temp_fa1 = (f32) (temp_fv1 & 0xFFFF);
    temp_fs0 = M2C_FIELD(D_8006A4FC, f32 *, 0x1C);
    temp_fs0f = temp_fs0 - temp_fa1;
    M2C_FIELD(D_8007AFF8, s16 *, 0x2C) = (s16) temp_fv1;
    if (temp_fs0f > 0.0f) {
        var_fs1 = *(f32 *)0x21446C;
    }
    temp_fv0f = *(f32 *)0x214470;
    if ((*(f32 *)0x214470) < func_802712B0()) {
        var_fs1 = (*(f32 *)0x214470);
        if (temp_fs0f > 0.0f) {
            var_fs1 = *(f32 *)0x214474;
        }
    }
    __base_D_212078 = &D_212078;
    M2C_FIELD(D_8007AFF8, u8 *, 0x5C) = (u8) M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + __base_D_212078), u8 *, 0xD);
    if ((temp_fs0 - (f32) (temp_fv1 & 0xFFFF)) < var_fs1) {
        M2C_FIELD(D_8007AFF8, u8 *, 0x5C) = (u8) -(s32) M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + __base_D_212078), u8 *, 0xD);
    }
}
