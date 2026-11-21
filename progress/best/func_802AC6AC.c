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
void *func_8029B14C(void *, void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_802A6448(void *);                      /* extern */
M2C_UNK func_802A6508(void *, M2C_UNK);             /* extern */
M2C_UNK func_802A6808();                            /* extern */
extern M2C_UNK D_80036B1C;
extern M2C_UNK D_8007DB88;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x58, 0x5c, 0x68, 0x6c], gap at: 0x50. */
void func_802AC6AC(void *arg0) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    u32 var_s0;
    void *temp_v0;
    void *temp_v0_2;

    func_802A6808();
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(&D_8007DB88, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x30) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
    }
    temp_v0 = func_8029B14C(arg0 + 0x54, arg0 + 0x6C, 0x3F666666, 0x41700000, 2);
    if (temp_v0 != NULL) {
        temp_fv0_2 = func_8022EC3C(*(f32 *)0x216600) + *(f32 *)0x216604;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = temp_fv0_2;
        M2C_FIELD(temp_v0, f32 *, 0xC) = temp_fv0_2;
    }
    temp_v0_2 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_v0_2 != NULL) {
        var_s0 = 0;
        if (((M2C_FIELD(temp_v0_2, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0x54)) + (M2C_FIELD(temp_v0_2, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x58)) + (M2C_FIELD(temp_v0_2, f32 *, 8) * M2C_FIELD(arg0, f32 *, 0x5C)) + M2C_FIELD(arg0, f32 *, 0x84)) > 0.0f) {
            sp28 = M2C_FIELD(arg0, f32 *, 0x54);
            sp2C = M2C_FIELD(arg0, f32 *, 0x58);
            sp30 = M2C_FIELD(arg0, f32 *, 0x5C);
            sp28 -= 2.0f * M2C_FIELD(arg0, f32 *, 0x6C);
            temp_fs0f = *(f32 *)0x216608;
            sp2C -= 2.0f * M2C_FIELD(arg0, f32 *, 0x70);
            temp_fs1f = *(f32 *)0x21660C;
            temp_fv1 = *(f32 *)0x216610;
            sp30 -= 2.0f * M2C_FIELD(arg0, f32 *, 0x74);
            func_80299D50(0x29, &sp28, &D_80036B1C, 8.0f, func_8022EC3C(temp_fv1) + temp_fv1, 1);
            do {
                sp18 = sp28;
                sp1C = sp2C;
                sp20 = sp30;
                sp18 += func_8022EBE8(temp_fs0f);
                sp1C += func_8022EBE8(temp_fs0f);
                var_s0 += 1;
                sp20 += func_8022EBE8(temp_fs0f);
                temp_fs0 = func_8022EC3C(*(f32 *)0x216614) + temp_fs1f;
                func_80299D50(0x29, &sp18, &D_80036B1C, temp_fs0, func_8022EC3C(*(f32 *)0x216618) + temp_fv1, 1);
            } while (var_s0 < 3U);
            if (!(M2C_FIELD(arg0, u8 *, 0x50) & 4)) {
                func_802A6508(arg0, 0x35);
                M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) | 4);
            }
            M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
        }
    }
    if (M2C_FIELD(arg0, f32 *, 0x30) <= 0.0f) {
        func_802A6448(arg0);
    }
}
