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
M2C_UNK func_80299D50(M2C_UNK, f32 *, M2C_UNK *, f32, f32, s32); /* extern */
M2C_UNK func_802A6508(void *, M2C_UNK);             /* extern */
M2C_UNK func_802A6588(void *);                      /* extern */
M2C_UNK func_802A9658();                            /* extern */
M2C_UNK func_802A9670();                            /* extern */
M2C_UNK func_802A97D4();                            /* extern */
M2C_UNK func_802BA1E4(s32, void *, void *);         /* extern */
extern M2C_UNK D_80036B1C;
extern u8 D_8007BD5C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x50, 0x54, 0x60, 0x64], gap at: 0x44. */
void func_802A95CC(void *arg0, s32 arg1, void *arg2) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fs1f;
    u32 var_s0;
    void *temp_a1;

    switch (arg1) {                                 /* irregular */
    case 2:
        func_802A6588(arg2);
        if (D_8007BD5C != 1) {
            func_802A9670();
            return;
        }
        temp_fs0f = *(f32 *)0x216418;
        temp_fs0 = func_8022EC3C(*(f32 *)0x216414) + *(f32 *)0x21641C;
        func_80299D50(0x40, arg0 + 0x54, &D_80036B1C, temp_fs0, func_8022EC3C(temp_fs0f) + temp_fs0f, 1);
        func_802A97D4();
        return;
    case 1:
        temp_a1 = M2C_FIELD(arg2, void **, 8);
        func_802BA1E4(M2C_FIELD(temp_a1, s32 *, 0x6C), temp_a1, arg0);
        func_802A9658();
        return;
    case 0:
        if (D_8007BD5C != 1) {
            M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
            M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
        default:
            var_s0 = 0;
            if (D_8007BD5C == 1) {
                /* Duplicate return node #11. Try simplifying control flow for better match */
                temp_fs0f = *(f32 *)0x216418;
                temp_fs0 = func_8022EC3C(*(f32 *)0x216414) + *(f32 *)0x21641C;
                func_80299D50(0x40, arg0 + 0x54, &D_80036B1C, temp_fs0, func_8022EC3C(temp_fs0f) + temp_fs0f, 1);
                func_802A97D4();
                return;
            }
            temp_fs0f_2 = *(f32 *)0x216420;
            temp_fs0_2 = *(f32 *)0x216424;
            temp_fs1f = *(f32 *)0x216428;
            func_80299D50(0x40, arg0 + 0x54, &D_80036B1C, 8.0f, func_8022EC3C(temp_fs0_2) + temp_fs0_2, 1);
            do {
                sp18 = M2C_FIELD(arg0, f32 *, 0x54);
                sp1C = M2C_FIELD(arg0, f32 *, 0x58);
                sp20 = M2C_FIELD(arg0, f32 *, 0x5C);
                sp18 += func_8022EBE8(temp_fs0f_2);
                sp1C += func_8022EBE8(temp_fs0f_2);
                var_s0 += 1;
                sp20 += func_8022EBE8(temp_fs0f_2);
                temp_fs0_3 = func_8022EC3C(*(f32 *)0x21642C) + temp_fs1f;
                func_80299D50(0x40, &sp18, &D_80036B1C, temp_fs0_3, func_8022EC3C(*(f32 *)0x216430) + temp_fs0_2, 1);
            } while (var_s0 < 6U);
            if (!(M2C_FIELD(arg0, u8 *, 0x50) & 4)) {
                func_802A6508(arg0, 0x32);
                M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) | 4);
            }
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        temp_fs0f = *(f32 *)0x216418;
        temp_fs0 = func_8022EC3C(*(f32 *)0x216414) + *(f32 *)0x21641C;
        func_80299D50(0x40, arg0 + 0x54, &D_80036B1C, temp_fs0, func_8022EC3C(temp_fs0f) + temp_fs0f, 1);
        func_802A97D4();
        return;
    }
}
