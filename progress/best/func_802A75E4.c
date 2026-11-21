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

M2C_UNK func_80235F38(s32, void **, f32, f32, f32, f32); /* extern */
M2C_UNK func_802A64B0(f32, void *, M2C_UNK);        /* extern */
extern M2C_UNK D_80036B1C;
extern M2C_UNK D_8005EA40;
extern M2C_UNK D_8005EA48;
extern s32 D_80061A10;
extern s8 D_8007BD5C;
extern void *D_8007BD70;
extern M2C_UNK D_8007DB88;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x50, 0x54, 0x58, 0x5c], gap at: 0x48. */
void func_802A75E4(void *arg0, void *arg1) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 *var_v0;
    f32 temp_a3;
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fs1;
    f32 temp_ft0;
    f32 temp_ft2;
    f32 temp_ft3;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_t0;
    f32 temp_t1;

    var_v0 = &D_8007DB88 + 4;
    if ((M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0x50) + M2C_FIELD(D_8007BD70, s32 *, 8)), u8 *, 0x33) & 2) || (M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg1, f32 *, 0xC), M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg1, f32 *, 0x10), M2C_FIELD(arg0, f32 *, 0x5C) = (f32) M2C_FIELD(arg1, f32 *, 0x14), M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(&D_80036B1C, f32 *, 0), M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(&D_80036B1C, f32 *, 4), M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(&D_80036B1C, f32 *, 8), var_v0 = &D_8007DB88 + 4, ((M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0x50) + M2C_FIELD(D_8007BD70, s32 *, 8)), u8 *, 0x33) & 2) != 0))) {
        temp_a3 = M2C_FIELD(arg0, f32 *, 0x54);
        temp_t0 = M2C_FIELD(arg0, f32 *, 0x58);
        temp_t1 = M2C_FIELD(arg0, f32 *, 0x5C);
        sp20 = temp_a3;
        sp24 = temp_t0;
        sp28 = temp_t1;
        temp_fv0 = *var_v0;
        temp_ft0 = M2C_FIELD(arg0, f32 *, 0x6C) * temp_fv0;
        temp_fv0f = M2C_FIELD(arg0, f32 *, 0x70) * temp_fv0;
        temp_fv1 = M2C_FIELD(arg0, f32 *, 0x74) * temp_fv0;
        sp20 += temp_ft0;
        sp24 += temp_fv0f;
        sp28 += temp_fv1;
        temp_fs0 = sqrtf((temp_ft0 * temp_ft0) + (temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1));
        temp_fv0f_2 = M2C_FIELD(arg0, f32 *, 0x6C) / temp_fs0;
        sp30 = temp_fv0f_2;
        sp34 = M2C_FIELD(arg0, f32 *, 0x70) / temp_fs0;
        temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0x74) / temp_fs0;
        sp38 = temp_fv0_2;
        temp_fs0f = M2C_FIELD(arg1, f32 *, 0x20) * temp_fs0;
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (M2C_FIELD(arg0, f32 *, 0x54) + (temp_fv0f_2 * temp_fs0f));
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) + (sp34 * temp_fs0f));
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (M2C_FIELD(arg0, f32 *, 0x5C) + (temp_fv0_2 * temp_fs0f));
        temp_fs1 = M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0x50) + M2C_FIELD(D_8007BD70, s32 *, 8)), f32 *, 0x28);
        D_80061A10 = M2C_FIELD(arg1, s32 *, 4);
        temp_fs0f_2 = temp_fs0 - temp_fs0f;
        func_80235F38(M2C_FIELD(arg1, s32 *, 8), &D_8007BD70, temp_a3, temp_a3, temp_t0, temp_t1);
        temp_ft3 = -M2C_FIELD(&D_8005EA48, f32 *, 4);
        temp_fv0f_3 = (temp_fv0f_2 * M2C_FIELD(&D_8005EA48, f32 *, 4)) + (temp_fv0_2 * M2C_FIELD(&D_8005EA40, f32 *, 4));
        temp_fv0_3 = -M2C_FIELD(&D_8005EA48, f32 *, 0);
        temp_ft2 = (temp_fv0f_2 * M2C_FIELD(&D_8005EA40, f32 *, 4)) + (temp_fv0_2 * temp_ft3);
        temp_fv1_2 = -((sp34 * M2C_FIELD(&D_8005EA40, f32 *, 0)) + (temp_fv0f_3 * temp_fv0_3));
        temp_fv1f = (sp34 * M2C_FIELD(&D_8005EA48, f32 *, 0)) + (temp_fv0f_3 * M2C_FIELD(&D_8005EA40, f32 *, 0));
        temp_fv0_4 = (temp_fv1_2 * temp_fv0_3) + (temp_fv1f * M2C_FIELD(&D_8005EA40, f32 *, 0));
        temp_fa0 = (temp_fv1_2 * M2C_FIELD(&D_8005EA40, f32 *, 0)) + (temp_fv1f * M2C_FIELD(&D_8005EA48, f32 *, 0));
        temp_fv0f_4 = (temp_ft2 * M2C_FIELD(&D_8005EA40, f32 *, 4)) + (temp_fv0_4 * M2C_FIELD(&D_8005EA48, f32 *, 4));
        temp_fv0_5 = (temp_ft2 * temp_ft3) + (temp_fv0_4 * M2C_FIELD(&D_8005EA40, f32 *, 4));
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) + (temp_fa0 * temp_fs0f_2 * temp_fs1));
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) (temp_fa0 * temp_fs0 * temp_fs1);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_fv0f_4 * temp_fs0 * temp_fs1);
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) (temp_fv0_5 * temp_fs0 * temp_fs1);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (M2C_FIELD(arg0, f32 *, 0x54) + (temp_fv0f_4 * temp_fs0f_2 * temp_fs1));
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (M2C_FIELD(arg0, f32 *, 0x5C) + (temp_fv0_5 * temp_fs0f_2 * temp_fs1));
        if (!(M2C_FIELD(arg0, u8 *, 0x50) & 4)) {
            func_802A64B0(temp_fa0, arg0, 3);
        }
        D_8007BD5C = 1;
    }
}
